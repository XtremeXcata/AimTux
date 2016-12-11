#pragma once

#include "interfaces.h"

#include "ImGUI/imgui.h"
#include "ImGUI/imgui_impl_sdl.h"

typedef void (*SDL_GL_SwapWindow_t) (SDL_Window*);
typedef void (*SDL_PollEvent_t) (SDL_Event*);

namespace SDL2
{
	void SwapWindow(SDL_Window*);
	void UnhookWindow();
	void PollEvent(SDL_Event*);
	void UnhookPollEvent();
}
