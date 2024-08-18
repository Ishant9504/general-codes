import numpy as np
import matplotlib.pyplot as plt

t = np.linspace(0, 2*np.pi, 1000)
x = 16 * np.sin(t)**3
y = 13 * np.cos(t) - 5 * np.cos(2*t) - 2 * np.cos(3*t) - np.cos(4*t)

plt.figure(figsize=(6, 6))
plt.fill(x, y, 'pink')
plt.axis('equal')
plt.axis('off')


text1="For"
text2="*My*"
text3="Dumbo <3"

text2_colour="grey"

plt.text(0, 3, text1, fontsize=20, ha='center', va='center', color='red',weight='bold')
plt.text(0, 0, text2, fontsize=20, ha='center', va='center', color=text2_colour,weight='bold')
plt.text(0,-3, text3, fontsize=20, ha='center', va='center', color='red',weight='bold')

plt.show()

