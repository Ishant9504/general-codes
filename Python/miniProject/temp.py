import pandas as pd
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.ensemble import RandomForestClassifier
from sklearn.model_selection import train_test_split

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

# Evaluate the model
accuracy = model.score(x_test, y_test)
print(f"Accuracy with random_state=8: {accuracy}")

# Prompt user for password input
import getpass
user = getpass.getpass("Enter Password: ")

# Transform user input using the same tfidf vectorizer
datau = tfidf.transform([user]).toarray()

# Predict password strength
output = model.predict(datau)
print(f"Predicted Password Strength: {output[0]}")
