import pygame
pygame.init()

screen = pygame.display.set_mode((600,600))
pygame.display.set_caption("Q3 Flood Fill")
WHITE = (255,255,255)
BLACK = (0,0,0)
GREEN = (0,255,0)

def flood_fill(x, y, old_color, new_color):
    stack = [(x,y)]
    while stack:
        px, py = stack.pop()
        if screen.get_at((px,py)) == old_color:
            screen.set_at((px,py), new_color)
            stack.extend([(px+1,py),(px-1,py),(px,py+1),(px,py-1)])

screen.fill(WHITE)
pygame.draw.rect(screen, BLACK, (200,200,200,200), 2)
flood_fill(250,250, WHITE, GREEN)

running = True
while running:
    for e in pygame.event.get():
        if e.type == pygame.QUIT:
            running = False
    pygame.display.flip()

pygame.quit()
