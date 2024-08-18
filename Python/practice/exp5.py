import numpy as np
import matplotlib.pyplot as plt
from scipy import signal

# First-order system parameters
tau1 = 1
K1 = 2

# Create first-order transfer function
sys1 = signal.TransferFunction([K1], [tau1, 1])

# Generate first-order input signals
t1 = np.linspace(0, 10, 1000)
step_input1 = np.ones_like(t1)
square_input1 = signal.square(2 * np.pi * 0.5 * t1)  # 0.5 Hz square wave

# Simulate first-order system response
t1, step_response1, _ = signal.lsim(sys1, step_input1, t1)
t1, square_response1, _ = signal.lsim(sys1, square_input1, t1)

# Second-order system parameters
tau2 = 1
zeta2 = 0.5
K2 = 2

# Create second-order transfer function
sys2 = signal.TransferFunction([K2], [tau2**2, 2*zeta2*tau2, 1])

# Generate second-order input signals
t2 = np.linspace(0, 20, 1000)
step_input2 = np.ones_like(t2)
square_input2 = signal.square(2 * np.pi * 0.2 * t2)  # 0.2 Hz square wave

# Simulate second-order system response
t2, step_response2, _ = signal.lsim(sys2, step_input2, t2)
t2, square_response2, _ = signal.lsim(sys2, square_input2, t2)

# Plotting
plt.figure(figsize=(12, 8))

# First-order system plots
plt.subplot(2, 2, 1)
plt.plot(t1, step_response1, 'b', linewidth=2)
plt.xlabel('Time')
plt.ylabel('Output')
plt.title('Step Response of First-Order System')
plt.grid(True)

plt.subplot(2, 2, 2)
plt.plot(t1, square_response1, 'r', linewidth=2)
plt.xlabel('Time')
plt.ylabel('Output')
plt.title('Square Wave Response of First-Order System')
plt.grid(True)

# Second-order system plots
plt.subplot(2, 2, 3)
plt.plot(t2, step_response2, 'g', linewidth=2)
plt.xlabel('Time')
plt.ylabel('Output')
plt.title('Step Response of Second-Order System')
plt.grid(True)

plt.subplot(2, 2, 4)
plt.plot(t2, square_response2, 'm', linewidth=2)
plt.xlabel('Time')
plt.ylabel('Output')
plt.title('Square Wave Response of Second-Order System')
plt.grid(True)

plt.tight_layout()
plt.show()
