#include "Context.h"
#include <SDL.h>

namespace pbr {

Context::Context() {
  if (SDL_Init(SDL_INIT_VIDEO)) {
    throw std::runtime_error("Unable to load SDL");
  }
}

Context::~Context() { SDL_Quit(); }

} // namespace pbr
