import numpy as np
import matplotlib.pyplot as plt

x=np.arange(-101,101,0.157)
y1=np.sin(x)
y2=x**2+2*x
y3=np.cos(x)
y4=np.tan(x)


#sublot(row,column,no for the plot)
ax1=plt.subplot(221)
ax2=plt.subplot(222)
ax3=plt.subplot(223)
ax4=plt.subplot(224)


ax1.plot(x,y1)
ax2.plot(x,y2)
ax3.plot(x,y3,'r')
ax4.plot(x,y4,'b')

#Improves the layout of the markings in the graph
plt.tight_layout()
plt.show()