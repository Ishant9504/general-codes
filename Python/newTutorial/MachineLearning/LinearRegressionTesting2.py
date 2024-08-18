import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split
import pandas as pd

file=pd.read_csv(r"C:\Users\Ishan\Desktop\coding\codes\Python\newTutorial\MachineLearning\bottle.csv")
x=file["T_degC"]
y=file["Salnty"]
plt.scatter(x,y)
plt.show()