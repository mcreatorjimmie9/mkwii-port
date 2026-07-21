#pragma once
#include <rk_types.h>

namespace Platform {

class Window {
public:
    static bool create(u16 width, u16 height, const char* title);
    static void destroy();
    static void swapBuffers();
    static void pollEvents();
    static bool isOpen();
    static u16 getWidth();
    static u16 getHeight();
    static void* getNativeHandle(); // SDL_Window* as void*

    static Window* spInstance;

private:
    Window();
    ~Window();

    bool m_isOpen;
    u16 m_width;
    u16 m_height;
    void* m_nativeHandle; // SDL_Window* as void*
    void* m_glContext;    // SDL_GLContext as void*
};

} // namespace Platform