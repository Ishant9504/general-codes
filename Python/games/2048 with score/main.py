import pygame 
import random
import math

# Initializing pygame
pygame.init()

# Setting max fps
FPS = 60

# Screen parameters
WIDTH, HEIGHT = 800, 800
ROWS, COLS = 4, 4

# Rectangle dimensions
RECT_HEIGHT = HEIGHT // ROWS
RECT_WIDTH = WIDTH // COLS

# Colors and styles
OUTLINE_COLOR = (187, 173, 160)
OUTLINE_THICKNESS = 10
BACKGROUND_COLOR = (205, 192, 180)
FONT_COLOR = (119, 110, 101)
SCORE_COLOR = (255, 255, 255)

# Font settings
FONT = pygame.font.SysFont("comicsans", 60, bold=True)
SCORE_FONT = pygame.font.SysFont("comicsans", 40)
MOVE_VEL = 20

# Create the game window
WINDOW = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("2048")

class Tiles:
    # Colors for different tile values
    COLORS = [
        (237, 229, 218),
        (238, 225, 201),
        (243, 178, 122),
        (246, 150, 101),
        (247, 124, 95),
        (247, 95, 59),
        (237, 208, 115),
        (237, 204, 99),
        (236, 202, 80)
    ]

    def __init__(self, value, row, col):
        self.value = value
        self.row = row
        self.col = col
        self.x = col * RECT_WIDTH
        self.y = row * RECT_HEIGHT

    def get_color(self):
        # Get color based on tile value
        color_index = int(math.log2(self.value)) - 1
        color = self.COLORS[color_index]
        return color

    def draw(self, window):
        # Draw the tile on the window
        color = self.get_color()
        pygame.draw.rect(window, color, (self.x, self.y, RECT_WIDTH, RECT_HEIGHT))
        
        # Draw the tile's value
        text = FONT.render(str(self.value), 1, FONT_COLOR)
        window.blit(text, 
                    (
                        self.x + (RECT_WIDTH / 2 - text.get_width() / 2),
                        self.y + (RECT_HEIGHT / 2 - text.get_height() / 2),
                    ))

    def set_pos(self, ceil = False):
        if ceil:
            self.row = math.ceil(self.y / RECT_HEIGHT)
            self.col = math.ceil(self.x / RECT_WIDTH)
        else:
            self.row = math.floor(self.y / RECT_HEIGHT)
            self.col = math.floor(self.x / RECT_WIDTH)

    def move(self, delta):
        self.x += delta[0]
        self.y += delta[1]

def draw_grid(window):
    # Draw the grid lines
    for row in range(1, ROWS):
        y = row * RECT_HEIGHT
        pygame.draw.line(window, OUTLINE_COLOR, (0, y), (WIDTH, y), OUTLINE_THICKNESS)
    
    for col in range(1, COLS):
        x = col * RECT_WIDTH
        pygame.draw.line(window, OUTLINE_COLOR, (x, 0), (x, HEIGHT), OUTLINE_THICKNESS)

    pygame.draw.rect(window, OUTLINE_COLOR, (0, 0, WIDTH, HEIGHT), OUTLINE_THICKNESS)

def draw(window, tiles, score):
    # Fill the background
    window.fill(BACKGROUND_COLOR)

    # Draw each tile
    for tile in tiles.values():
        tile.draw(window)

    # Draw the grid on top
    draw_grid(window)

    # Draw the score
    score_text = SCORE_FONT.render(f"Score: {score}", 1, SCORE_COLOR)
    window.blit(score_text, (10, 10))

    # Update the display
    pygame.display.update()

def get_random_pos(tiles):
    # Get a random empty position on the grid
    row = None
    col = None
    while True:
        row = random.randrange(0, ROWS)
        col = random.randrange(0, COLS)

        if f"{row}{col}" not in tiles:
            break
    return row, col

def generate_tiles():
    # Generate the initial tiles
    tiles = {}
    for _ in range(2):
        row, col = get_random_pos(tiles)
        tiles[f"{row}{col}"] = Tiles(2, row, col)
        print(row, col)
    return tiles 

def move_tiles(window, tiles, clock, direction, score):
    updated = True
    blocks = set()

    if direction == "left":
        sort_func = lambda x: x.col
        reverse= False
        delta = (-MOVE_VEL, 0)
        boundary_check = lambda tile: tile.col == 0
        get_next_tile = lambda tile: tiles.get(f"{tile.row}{tile.col - 1}")
        merge_check = lambda tile, next_tile: tile.x > next_tile.x + MOVE_VEL
        move_check = (
            lambda tile,next_tile: tile.x > next_tile.x + RECT_WIDTH + MOVE_VEL
        )
        ceil = True

    elif direction == "right":
        sort_func = lambda x: x.col
        reverse= True
        delta = (MOVE_VEL, 0)
        boundary_check = lambda tile: tile.col == COLS - 1
        get_next_tile = lambda tile: tiles.get(f"{tile.row}{tile.col + 1}")
        merge_check = lambda tile, next_tile: tile.x < next_tile.x - MOVE_VEL
        move_check = (
            lambda tile,next_tile: tile.x + RECT_WIDTH + MOVE_VEL < next_tile.x
        )
        ceil = False

    elif direction == "up":
        sort_func = lambda x: x.row
        reverse = False
        delta = (0, -MOVE_VEL)
        boundary_check = lambda tile: tile.row == 0
        get_next_tile = lambda tile: tiles.get(f"{tile.row - 1}{tile.col}")
        merge_check = lambda tile, next_tile: tile.y > next_tile.y + MOVE_VEL
        move_check = (
            lambda tile,next_tile: tile.y > next_tile.y + RECT_HEIGHT + MOVE_VEL
        )
        ceil = True

    elif direction == "down":
        sort_func = lambda x: x.row
        reverse= True
        delta = (0, MOVE_VEL)
        boundary_check = lambda tile: tile.row == ROWS - 1
        get_next_tile = lambda tile: tiles.get(f"{tile.row + 1}{tile.col}")
        merge_check = lambda tile, next_tile: tile.y < next_tile.y - MOVE_VEL
        move_check = (
            lambda tile,next_tile: tile.y + RECT_HEIGHT + MOVE_VEL < next_tile.y
        )
        ceil = False

    while updated:
        clock.tick(FPS)
        updated = False
        sorted_tiles = sorted(tiles.values(), key=sort_func, reverse=reverse)

        for i, tile in enumerate(sorted_tiles):
            if boundary_check(tile):
                continue

            next_tile = get_next_tile(tile)
            if not next_tile:
                tile.move(delta)
            
            elif tile.value == next_tile.value and tile not in blocks and next_tile not in blocks:
                if merge_check(tile, next_tile):
                    tile.move(delta)
                else:
                    next_tile.value *= 2
                    score += next_tile.value
                    sorted_tiles.pop(i)
                    blocks.add(next_tile)

            elif move_check(tile, next_tile):
                tile.move(delta)
            else:
                continue
            
            tile.set_pos(ceil)
            updated = True

        update_tiles(window, tiles, sorted_tiles, score)

    return end_move(tiles, score)

def end_move(tiles, score):
    if len(tiles) == 16:
        return "Lost", score
    
    row, col = get_random_pos(tiles)
    tiles[f"{row}{col}"] = Tiles(random.choice([2, 4]), row, col)
    return "continue", score

def update_tiles(window, tiles, sorted_tiles, score):
    tiles.clear()
    for tile in sorted_tiles:
        tiles[f"{tile.row}{tile.col}"] = tile

    draw(window, tiles, score)


def retry_screen(window, score):
    # Define new font sizes for the retry screen
    GAME_OVER_FONT = pygame.font.SysFont("comicsans", 100, bold=True)
    SCORE_FONT = pygame.font.SysFont("comicsans", 50, bold=True)
    INSTRUCTION_FONT = pygame.font.SysFont("comicsans", 50, bold=True)

    # Fill the background
    window.fill(BACKGROUND_COLOR)
    
    # Display the game over message
    game_over_color = (255, 0, 0)  # Bright Red for Game Over text
    retry_text = GAME_OVER_FONT.render("Game Over!", 1, game_over_color)
    score_text = SCORE_FONT.render(f"Final Score: {score}", 1, FONT_COLOR)
    retry_instruction = INSTRUCTION_FONT.render("Press R to Retry", 1, FONT_COLOR)
    
    # Position the text in the middle of the screen
    window.blit(retry_text, (WIDTH / 2 - retry_text.get_width() / 2, HEIGHT / 2 - retry_text.get_height() / 2 - 80))
    window.blit(score_text, (WIDTH / 2 - score_text.get_width() / 2, HEIGHT / 2 - score_text.get_height() / 2))
    window.blit(retry_instruction, (WIDTH / 2 - retry_instruction.get_width() / 2, HEIGHT / 2 - retry_instruction.get_height() / 2 + 80))
    
    # Update the display
    pygame.display.update()



def main(window):
    clock = pygame.time.Clock()
    run = True

    # Generate the initial tiles
    tiles = generate_tiles()
    score = 0

    while run:
        clock.tick(FPS)

        # Handle events
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                run = False
                break

            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_LEFT:
                    status, score = move_tiles(window, tiles, clock, "left", score)
                if event.key == pygame.K_RIGHT:
                    status, score = move_tiles(window, tiles, clock, "right", score)
                if event.key == pygame.K_UP:
                    status, score = move_tiles(window, tiles, clock, "up", score)
                if event.key == pygame.K_DOWN:
                    status, score = move_tiles(window, tiles, clock, "down", score)
                
                if status == "Lost":
                    retry_screen(window, score)
                    while True:
                        for event in pygame.event.get():
                            if event.type == pygame.QUIT:
                                pygame.quit()
                                return
                            if event.type == pygame.KEYDOWN and event.key == pygame.K_r:
                                tiles = generate_tiles()
                                score = 0
                                status = "continue"
                                break
                        if status == "continue":
                            break

        # Draw everything
        draw(window, tiles, score)
    
    pygame.quit()

if __name__ == "__main__":
    main(WINDOW)
