#include "graphics.h"
#include <SDL2/SDL.h>

int GRAPHICS_init(Graphics *graphics) {
	if (!graphics->windowTitle)
		graphics->windowTitle = "Game";
	if (!graphics->width)
		graphics->width = 640;
	if (!graphics->height)
		graphics->height = 480;

	graphics->window = SDL_CreateWindow(
			graphics->windowTitle, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
			graphics->width, graphics->height, SDL_WINDOW_SHOWN);

	if (graphics->window == NULL) {
		SDL_Log("Unable to create window: %s", SDL_GetError());
		return 1;
	}

	return 0;
}

void GRAPHICS_free(Graphics *graphics) { SDL_DestroyWindow(graphics->window); }
