import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression

time_studied=np.array([12, 43, 45, 54, 57, 35, 87, 34, 78, 92]).reshape(-1,1)
scores= np.array([15, 34, 36, 45, 50, 38, 92, 37, 85, 90]).reshape(-1,1)

model=LinearRegression()
model.fit(time_studied,scores)

plt.scatter(time_studied,scores)
plt.plot(np.linspace(0,100,100).reshape(-1, 1),model.predict(np.linspace(0,100,100).reshape(-1,1)))
plt.ylim(0,100)
plt.xlim(0,100)
plt.grid(True)
print(model.predict(np.array([100]).reshape(-1,1)))
plt.show()
