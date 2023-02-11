#include <PBR/system/Context.h>
#include <PBR/system/Window.h>

int main(int ac, char *av[]) {
  pbr::Context context;

  auto window = pbr::WindowBuilder{.width = 800, .height = 600}
                    .withTitle("Vulkan")
                    .centered()
                    .build();

  return 0;
}
