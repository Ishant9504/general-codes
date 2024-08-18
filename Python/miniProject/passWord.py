import pandas as pd
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.ensemble import RandomForestClassifier
from sklearn.model_selection import train_test_split
import getpass
import matplotlib.pyplot as plt

# Load data from Excel
data = pd.read_excel(r"C:\Users\Ishan\Desktop\pwds1.xlsx")

# Drop rows with NaN values
data = data.dropna()

# Map numerical strength values to categorical labels
data['strength'] = data['strength'].map({0: "Weak", 1: "Medium", 2: "Strong"})

# Ensure 'password' column is in string format
data['password'] = data['password'].astype(str)

# Define tokenizer function (if necessary, adjust as per your data structure)
def word(password):
    return password.split()  # Assuming passwords are space-separated strings

# Define features (x) and target variable (y)
x = data['password']
y = data["strength"]

# Initialize TfidfVectorizer
tfidf = TfidfVectorizer(tokenizer=word)

# Transform passwords into TF-IDF features
x = tfidf.fit_transform(x)

# Split data into training and testing sets
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.2)

# Check shapes of training data
print(f"x_train shape: {x_train.shape}, y_train shape: {y_train.shape}")

# Initialize RandomForestClassifier
model = RandomForestClassifier()

# Train the model
model.fit(x_train, y_train)

# Evaluate the model
accuracy = model.score(x_test, y_test)
print(f"Accuracy: {accuracy}")

# Prompt user for password input
user = getpass.getpass("Enter Password: ")

# Transform user input using the same tfidf vectorizer
datau = tfidf.transform([user]).toarray()

# Predict password strength
output = model.predict(datau)
print(f"Predicted Password Strength: {output[0]}")
strength_counts = data['strength'].value_counts()
plt.figure(figsize=(8, 6))
plt.pie(strength_counts, labels=strength_counts.index, autopct='%1.1f%%', startangle=140)
plt.title('Password Strength Distribution')
plt.axis('equal')  # Equal aspect ratio ensures that pie is drawn as a circle.
plt.show()
