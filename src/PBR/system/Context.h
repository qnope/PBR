#pragma once

#include "not_copyable.h"

namespace pbr {
struct Context : not_copyable {
  Context();
  ~Context();
};
} // namespace pbr
