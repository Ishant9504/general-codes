import pygame
import random

pygame.init()

# Set up the display
screen_width, screen_height = 300, 300
screen = pygame.display.set_mode((screen_width, screen_height))
pygame.display.set_caption("Ball Physics")

# Colors
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)

# Ball properties
ball_radius = 5
ball_x = 0
ball_y = 0
ball_speed_x = random.uniform(-15, 15)  # Random horizontal speed
ball_speed_y = random.uniform(-15, 15)  # Random vertical speed
gravity = 0.25  # Gravity value
restitution = 0.8  # Coefficient of restitution (bounciness)

# Walls
wall_top = 0
wall_bottom = screen_height
wall_left = 0
wall_right = screen_width

# Clock for controlling FPS
clock = pygame.time.Clock()
FPS = 90  # Frames per second

# Function to generate a random color
def generate_random_color():
    return (random.randint(0, 255), random.randint(0, 255), random.randint(0, 255))

# Track bounces and new balls created
bounces = 0
max_bounces = 2  # Bounces before new ball
new_ball_countdown = 2  # Create a new ball every 2 bounces
max_new_balls = 100  # Maximum new balls to create
new_balls = []  # List to store new balls

# Main game loop
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    # Apply gravity to the vertical speed for the original ball
    ball_speed_y += gravity

    # Apply gravity and handle collisions for new balls
    for new_ball in new_balls:
        new_ball[3] += gravity  # Apply gravity to the vertical speed

        new_ball[0] += new_ball[2]  # Update x position
        new_ball[1] += new_ball[3]  # Update y position

        # Check for collision with walls for new balls
        if new_ball[1] + ball_radius > wall_bottom:  # Collision with bottom wall
            new_ball[1] = wall_bottom - ball_radius
            new_ball[3] = -new_ball[3] * restitution  # Reverse and reduce vertical speed
            new_ball[2] *= restitution  # Reduce horizontal speed

        if new_ball[1] - ball_radius < wall_top:  # Collision with top wall
            new_ball[1] = wall_top + ball_radius
            new_ball[3] = -new_ball[3] * restitution  # Reverse and reduce vertical speed
            new_ball[2] *= restitution  # Reduce horizontal speed

        if new_ball[0] + ball_radius > wall_right:  # Collision with right wall
            new_ball[0] = wall_right - ball_radius
            new_ball[2] = -new_ball[2] * restitution  # Reverse and reduce horizontal speed
            new_ball[3] *= restitution  # Reduce vertical speed

        if new_ball[0] - ball_radius < wall_left:  # Collision with left wall
            new_ball[0] = wall_left + ball_radius
            new_ball[2] = -new_ball[2] * restitution  # Reverse and reduce horizontal speed
            new_ball[3] *= restitution  # Reduce vertical speed

    # Update original ball position and check for collisions
    ball_x += ball_speed_x
    ball_y += ball_speed_y

    # Check for collision with walls for the original ball
    if ball_y + ball_radius > wall_bottom:  # Collision with bottom wall
        ball_y = wall_bottom - ball_radius
        ball_speed_y = -ball_speed_y * restitution  # Reverse and reduce vertical speed
        ball_speed_x *= restitution  # Reduce horizontal speed
        bounces += 1

    if ball_y - ball_radius < wall_top:  # Collision with top wall
        ball_y = wall_top + ball_radius
        ball_speed_y = -ball_speed_y * restitution  # Reverse and reduce vertical speed
        ball_speed_x *= restitution  # Reduce horizontal speed
        bounces += 1

    if ball_x + ball_radius > wall_right:  # Collision with right wall
        ball_x = wall_right - ball_radius
        ball_speed_x = -ball_speed_x * restitution  # Reverse and reduce horizontal speed
        ball_speed_y *= restitution  # Reduce vertical speed
        bounces += 1

    if ball_x - ball_radius < wall_left:  # Collision with left wall
        ball_x = wall_left + ball_radius
        ball_speed_x = -ball_speed_x * restitution  # Reverse and reduce horizontal speed
        ball_speed_y *= restitution  # Reduce vertical speed
        bounces += 1

    # Fill screen with white
    screen.fill(BLACK)

    # Draw the original ball
    pygame.draw.circle(screen, (255, 0, 0), (int(ball_x), int(ball_y)), ball_radius)

    # Update and draw new balls
    for new_ball in new_balls:
        # Draw the new ball with its assigned color
        pygame.draw.circle(screen, new_ball[5], (int(new_ball[0]), int(new_ball[1])), ball_radius)

    # Check if it's time to create a new ball
    if bounces >= max_bounces and new_ball_countdown == 0 and len(new_balls) < max_new_balls:
        new_ball_speed_x = random.uniform(-15, 15)
        new_ball_speed_y = random.uniform(-15, 15)
        new_balls.append([
            0,0,
            new_ball_speed_x,
            new_ball_speed_y,
            [],
            generate_random_color()  # Assign a random color to the new ball
        ])
        bounces = 0
        new_ball_countdown = 2  # Reset the countdown
    elif new_ball_countdown > 0:
        new_ball_countdown -= 1  # Decrement the countdown if it's not time yet

    pygame.display.update()

    # Limit frame rate
    clock.tick(FPS)

pygame.quit()
