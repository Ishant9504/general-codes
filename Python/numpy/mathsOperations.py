#WAP to implement mathematical operation in python using the numpy arrays
import numpy as np
import matplotlib.pyplot as plt

# x=np.arange(1,11)
# y=np.arange(10,110,10)

z=np.arange(0,2*np.pi,0.01)
w=np.sin(np.sin(z))
print(w)

plt.figure(figsize=(6,6))
plt.plot(z,w,'r--')
plt.title("Sin Curve")
plt.show()

# x=(np.arange(0,100)).reshape(10,10)
# y=(np.arange(99,-1,-1)).reshape(10,10)
# print(x)
# print(y)
# y=np.add(x,y)
# print(y.max())
# print(y.min())
# print(y.sum())

# print(np.sum(y,axis=1))
# print(np.pi)
# print(np.sin(np.pi/6))
