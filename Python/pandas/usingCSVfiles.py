import pandas as pd
import numpy as np
df=pd.read_csv(r'C:\Users\Ishan\Desktop\coding\codes\Python\pandas\business-price-indexes-september-2023-quarter-csv.csv')

print(df.shape)
print(df.size)
print(df.head(2))
print(df.tail(2))
print(df.describe())
print(df.info())
print(df.isnull().sum().sum())