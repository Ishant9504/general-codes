import numpy as np
import matplotlib.pyplot as plt

x=np.arange(-6.28,6.28,0.00001)
y1=np.sin(x)
y2=np.cos(x)


plt.figure(1)
plt.plot(x,y1)
plt.figure(2)
plt.plot(x,y2)
plt.show()