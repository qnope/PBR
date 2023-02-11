#pragma once

namespace pbr {
struct not_copyable {
  constexpr not_copyable() = default;
  not_copyable(const not_copyable &) = delete;
  not_copyable &operator=(const not_copyable &) = delete;
};
} // namespace pbr
