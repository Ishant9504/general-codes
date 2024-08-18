import numpy as np
import matplotlib.pyplot as plt
from matplotlib import style

x = np.arange(0,30,.157)
y = np.sin(x)
plt.grid(True)
plt.title("Sine Plot")
plt.suptitle("I am bigger")
plt.ylabel("Weight of students")
plt.xlabel("Number of students")
plt.plot(x,y)
plt.show()