import pygame

pygame.init()
screen = pygame.display.set_mode((500, 500))
pygame.display.set_caption("Basic Shapes")

# Colors
WHITE = (255, 255, 255)
RED = (255, 0, 0)
GREEN = (0, 255, 0)
BLUE = (0, 0, 255)

running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    screen.fill(WHITE)

    # Draw shapes
    pygame.draw.line(screen, RED, (50, 50), (450, 50), 2)
    pygame.draw.rect(screen, GREEN, (50, 100, 200, 100), 2)
    pygame.draw.circle(screen, BLUE, (400, 150), 50, 2)
    pygame.draw.polygon(screen, RED, [(150, 300), (250, 300), (200, 400)], 2)

    pygame.display.flip()

pygame.quit()
