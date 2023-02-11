#pragma once

#include <SDL.h>

namespace pbr {

class Window {
  using WindowPtr = std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)>;
  friend struct WindowBuilder;

private:
  Window(const WindowBuilder &windowBuilder);

private:
  WindowPtr m_window;
};

struct WindowBuilder {
  int width;
  int height;
  std::string_view title = "PBR Renderer";
  int x;
  int y;

  WindowBuilder centered() const noexcept;
  WindowBuilder withTitle(std::string_view title) const noexcept;
  Window build() const noexcept;
};
} // namespace pbr
