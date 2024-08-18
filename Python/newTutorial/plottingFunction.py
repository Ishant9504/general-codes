import numpy as np
import matplotlib.pyplot as plt

x=np.linspace(-100,100,201)
print(x)
y=0.5*x**2+2*x
plt.plot(x,y,'g^')
plt.show()
