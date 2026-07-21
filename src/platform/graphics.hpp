#pragma once
#include <rk_types.h>

namespace Platform {

class Graphics {
public:
    static bool initialize();  // Called after Window::create
    static void shutdown();
    static void setViewport(u16 x, u16 y, u16 w, u16 h);
    static void clearScreen(f32 r, f32 g, f32 b, f32 a);
    static void beginFrame();
    static void endFrame();

private:
    Graphics() = delete;
    ~Graphics() = delete;
};

} // namespace Platform