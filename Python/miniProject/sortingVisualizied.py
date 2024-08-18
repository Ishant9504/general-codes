import matplotlib.pyplot as plt
import numpy as np
import pygame
import tkinter as tk
from tkinter import ttk

# Initialize pygame for sound
pygame.mixer.init()
windchime_sound = pygame.mixer.Sound("windchime.wav")

# Initialize variables
amount = 50
lst = np.random.randint(0, 1000, amount)
x = np.arange(amount)

# Initialize the plot
plt.ion()  # Turn on interactive mode
fig, ax = plt.subplots()

# Plot the initial state of the list
bars = ax.bar(x, lst, color='blue')  # Set the initial color of the bars to blue

n = len(lst)

def play_sound():
    """Play the windchime sound."""
    windchime_sound.play()

def update_bars():
    play_sound()
    """Update the bars during sorting."""
    global i, j

    if i < n:
        if j < n - i - 1:
            # Reset the color of all bars to blue
            for bar in bars:
                bar.set_color('blue')

            # Set the colors of the bars being compared to red
            bars[j].set_color('red')
            bars[j + 1].set_color('red')

            # Swap elements if out of order
            if lst[j] > lst[j + 1]:
                # Play sound only during the swap
                

                lst[j], lst[j + 1] = lst[j + 1], lst[j]
                # Update the heights of the bars
                for bar, height in zip(bars, lst):
                    bar.set_height(height)

                # Keep the color of the moved bar as green
                bars[j + 1].set_color('green')

            j += 1
            root.after(1, update_bars)  # Adjust pause duration for better visualization
        else:
            # After the inner loop, ensure the last sorted bar is green
            bars[n - i - 1].set_color('green')
            j = 0
            i += 1
            root.after(1, update_bars)

    else:
        plt.pause(1)  # Pause to view the final sorted list
        plt.ioff()  # Turn off interactive mode
        plt.show()

# Initialize tkinter
root = tk.Tk()
root.title("Sorting Visualization with Sound")

# Start the sorting and visualization
i, j = 0, 0
update_bars()

# Run the tkinter main loop
root.mainloop()
