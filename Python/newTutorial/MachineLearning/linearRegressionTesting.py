import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split

time_studied=np.array([12, 43, 45, 54, 57, 35, 87, 34, 78, 92]).reshape(-1,1)
scores= np.array([15, 34, 36, 45, 50, 38, 92, 37, 85, 90]).reshape(-1,1)

time_train,time_test,score_train,score_test=train_test_split(time_studied,scores,test_size=0.4)

model=LinearRegression()
model.fit(time_train,score_train)

plt.plot(np.linspace(0,70,100).reshape(-1,1),model.predict(np.linspace(0,70,100).reshape(-1,1)),'r--')
plt.scatter(time_train,score_train)
print(abs(model.score(time_test,score_test)))
plt.show()