from flask import Flask, request, render_template
import pandas as pd
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.ensemble import RandomForestClassifier
from sklearn.model_selection import train_test_split
import getpass
import math

app = Flask(__name__)

# Load data from Excel
data = pd.read_excel(r"C:\DSA\Data Science\data.csv\output_passwords_file.xlsx")

# Drop rows with NaN values
data = data.dropna()

# Map numerical strength values to categorical labels
data['strength'] = data['strength'].map({0: "Weak", 1: "Medium", 2: "Strong"})

# Ensure 'password' column is in string format
data['password'] = data['password'].astype(str)

# Define features (x) and target variable (y)
x = data['password']
y = data["strength"]

# Initialize character-level TfidfVectorizer
tfidf = TfidfVectorizer(analyzer='char', ngram_range=(1, 3))

# Transform passwords into TF-IDF features
x = tfidf.fit_transform(x)

# Split data into training and testing sets with random_state=8
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.2, stratify=y, random_state=8)

# Initialize RandomForestClassifier with default parameters
model = RandomForestClassifier()

# Train the model
model.fit(x_train, y_train)

# Function to estimate time to crack password using brute force
def time_to_crack(password):
    # Assumptions for estimation
    characters = 62  # 26 lowercase + 26 uppercase + 10 digits
    min_password_length = 6  # Minimum password length assumed
    seconds_per_guess = 0.1  # Assumed time in seconds per guess

    password_length = len(password)
    combinations = characters ** password_length
    seconds = combinations * seconds_per_guess

    # Convert seconds to more readable format
    if seconds < 60:
        time_estimate = f"{seconds:.2f} seconds"
    elif seconds < 3600:
        time_estimate = f"{seconds / 60:.2f} minutes"
    elif seconds < 86400:
        time_estimate = f"{seconds / 3600:.2f} hours"
    else:
        time_estimate = f"{seconds / 86400:.2f} days"

    return time_estimate

# Home route
@app.route('/')
def home():
    return render_template('index.html')

# Prediction route
@app.route('/predict', methods=['POST'])
def predict():
    if request.method == 'POST':
        password = request.form['password']
        datau = tfidf.transform([password]).toarray()
        output = model.predict(datau)
        crack_time = time_to_crack(password)
        return render_template('result.html', password=password, strength=output[0], crack_time=crack_time)

if __name__ == '__main__':
    app.run(debug=True)
