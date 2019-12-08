#include "graphics.h"
#include <SDL2/SDL.h>

int GRAPHICS_init(Graphics *graphics) {
  graphics->window =
      SDL_CreateWindow("SDL Game Engine", 50, 50, 640, 480, SDL_WINDOW_SHOWN);

  if (graphics->window == NULL) {
    SDL_Log("Unable to create window: %s", SDL_GetError());
    return 1;
  }

  return 0;
}

void GRAPHICS_free(Graphics *graphics) {
	SDL_DestroyWindow(graphics->window);
}
