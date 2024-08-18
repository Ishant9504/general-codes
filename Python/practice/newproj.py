import pandas as pd
import numpy as np
import seaborn as sns
import matplotlib.pyplot as plt
9
data=pd.read_csv(r"C:\DSA\Data Science\covid19_italy_region.csv")
print(data.head())
print(data.columns)
sns.pairplot(data)
plt.show()