import csv
from collections import defaultdict
import pandas as pd
import re

# File paths
input_file = r"C:\DSA\Data Science\data.csv\data.csv"
output_file = r"C:\DSA\Data Science\data.csv\output_passwords_file1.xlsx"

# Function to remove illegal characters
def clean_password(password):
    # Remove any characters that are not printable ASCII characters
    return ''.join(c for c in password if c.isprintable() and ord(c) < 127)

# Initialize data structure to store passwords by strength
passwords_by_strength = defaultdict(list)

# Read the input CSV file with specified encoding
with open(input_file, mode='r', newline='', encoding='utf-8') as infile:
    reader = csv.DictReader(infile)
    for row in reader:
        try:
            password = clean_password(row['password'])
            strength = int(row['strength'])
            if strength in [0, 1, 2]:  # Ensure the strength is valid
                passwords_by_strength[strength].append(password)
        except ValueError:
            print(f"Skipping row with invalid strength value: {row}")
        except KeyError:
            print(f"Skipping row with missing required fields: {row}")

# Prepare the output data
output_data = []
for strength in [0, 1, 2]:
    if strength in passwords_by_strength:
        output_data.extend([(password, strength) for password in passwords_by_strength[strength][:4000]])

# Create a DataFrame
df = pd.DataFrame(output_data, columns=['password', 'strength'])

# Write to the Excel file
df.to_excel(output_file, index=False)

print(f"Filtered passwords have been written to {output_file}")
