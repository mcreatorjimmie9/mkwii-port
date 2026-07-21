#pragma once
#include <rk_types.h>
#include "EGG/math.h"

namespace Platform {

class Graphics {
public:
    static bool initialize();  // Called after Window::create
    static void shutdown();
    static void setViewport(u16 x, u16 y, u16 w, u16 h);
    static void clearScreen(f32 r, f32 g, f32 b, f32 a);
    static void beginFrame();
    static void endFrame();

    /// Set up a perspective camera and compute the view-projection matrix.
    /// Stores the result internally for retrieval via getViewProjMatrix().
    /// No-op when HAS_OPENGL is not defined.
    static void setupCamera(f32 eyeX, f32 eyeY, f32 eyeZ,
                             f32 targetX, f32 targetY, f32 targetZ,
                             f32 fovDeg, f32 aspect, f32 nearZ, f32 farZ);

    /// Get the current view-projection matrix (identity if no camera set).
    static const EGG::Matrix44f& getViewProjMatrix();

    /// Draw a single particle as a camera-facing billboard quad.
    /// Used by EffectDirector for particle rendering.
    /// No-op when HAS_OPENGL is not defined.
    static void drawParticle(f32 x, f32 y, f32 z, f32 size,
                              f32 r, f32 g, f32 b, f32 a);

private:
    Graphics() = delete;
    ~Graphics() = delete;
};

} // namespace Platform