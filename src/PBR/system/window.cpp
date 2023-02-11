#include "window.h"

namespace pbr {

static SDL_Window *createWindow(const WindowBuilder &builder) {
  return SDL_CreateWindow(builder.title.data(), builder.x, builder.y,
                          builder.width, builder.height, SDL_WINDOW_VULKAN);
}

Window::Window(const WindowBuilder &windowBuilder)
    : m_window{createWindow(windowBuilder), SDL_DestroyWindow} {}

WindowBuilder WindowBuilder::centered() const noexcept {
  WindowBuilder builder = *this;
  builder.x = builder.y = SDL_WINDOWPOS_CENTERED;
  return builder;
}

WindowBuilder WindowBuilder::withTitle(std::string_view title) const noexcept {
  WindowBuilder builder = *this;
  builder.title = title;
  return builder;
}

Window WindowBuilder::build() const noexcept { return Window{*this}; }

} // namespace pbr
