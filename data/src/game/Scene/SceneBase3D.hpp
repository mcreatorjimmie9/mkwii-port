#pragma once
// SceneBase3D.hpp — Base class for 3D Game Scenes
// Address range: 0x80620000 - 0x8062559C (Gap 1 — 3D scene base)
//
// SceneBase3D extends SceneBase with 3D-specific functionality:
//   - SceneGraph management (7-pass or 4-pass rendering pipeline)
//   - Camera system integration (NijiCamera, multi-viewport)
//   - Viewport setup for split-screen
//   - 3D rendering context (GX projection/modelview matrices)
//   - Fog, lighting, and post-processing configuration
//
// The 3D scene base is used by RaceScene and any other scene that
// renders 3D geometry (courses, karts, objects). It wraps the EGG
// SceneGraph system and provides a simplified interface for subclasses.
//
// Key addresses:
//   0x80620000 — SceneBase3D::SceneBase3D (ctor)
//   0x80620100 — SceneBase3D::~SceneBase3D (dtor)
//   0x80620200 — SceneBase3D::init
//   0x80620300 — SceneBase3D::calc
//   0x80620500 — SceneBase3D::draw
//   0x80620700 — SceneBase3D::load
//   0x80620800 — SceneBase3D::unload
//   0x80620900 — SceneBase3D::reset
//   0x80620A00 — SceneBase3D::setupSceneGraph
//   0x80620B00 — SceneBase3D::getSceneGraph
//   0x80620C00 — SceneBase3D::setupViewport
//   0x80620D00 — SceneBase3D::setupCamera
//   0x80620E00 — SceneBase3D::getCamera
//   0x80620F00 — SceneBase3D::setFogParams
//   0x80621000 — SceneBase3D::enableFog
//   0x80621100 — SceneBase3D::disableFog
//   0x80621200 — SceneBase3D::setProjection
//   0x80621300 — SceneBase3D::getProjection
//   0x80621400 — SceneBase3D::setClearColor
//   0x80621500 — SceneBase3D::setAmbientColor
//   0x80621600 — SceneBase3D::setPlayerCount
//   0x80621700 — SceneBase3D::getPlayerCount
//   0x80621800 — SceneBase3D::isSceneGraphReady
//   0x80621900 — SceneBase3D::preDraw
//   0x80621A00 — SceneBase3D::postDraw
//   0x80621B00 — SceneBase3D::updateSceneGraph
//   0x80621C00 — SceneBase3D::configureRenderPasses

#include "SceneBase.hpp"
#include <EGG/math.h>

namespace Scene {

class SceneCamera;

// Forward declaration: EGG::SceneGraph::SceneGraph is a class (not namespace).
// Referenced opaquely via void* in this header.

// =============================================================================
// FogParams — 3D fog configuration
// =============================================================================
struct FogParams {
    f32 startZ;          // Distance at which fog begins
    f32 endZ;            // Distance at which fog is fully opaque
    f32 nearZ;           // Near plane for fog calculation
    f32 farZ;            // Far plane for fog calculation
    u8  colorR;          // Fog color R
    u8  colorG;          // Fog color G
    u8  colorB;          // Fog color B
    u8  colorA;          // Fog color A
    u32 type;            // Fog type (0=linear, 1=exp, 2=exp2)

    FogParams()
        : startZ(300.0f)
        , endZ(5000.0f)
        , nearZ(10.0f)
        , farZ(10000.0f)
        , colorR(0)
        , colorG(0)
        , colorB(0)
        , colorA(255)
        , type(0) {}
};

// =============================================================================
// ClearColor — Background clear color for the 3D viewport
// =============================================================================
struct ClearColor {
    u8 r, g, b, a;

    ClearColor() : r(0), g(0), b(0), a(255) {}
    ClearColor(u8 _r, u8 _g, u8 _b, u8 _a = 255) : r(_r), g(_g), b(_b), a(_a) {}
};

// =============================================================================
// ProjectionParams — Camera projection configuration
// =============================================================================
struct ProjectionParams {
    f32 fov;             // Field of view in degrees
    f32 nearPlane;       // Near clipping plane
    f32 farPlane;        // Far clipping plane
    f32 aspectRatio;     // Width / Height
    bool perspective;    // true = perspective, false = orthographic

    ProjectionParams()
        : fov(60.0f)
        , nearPlane(10.0f)
        , farPlane(20000.0f)
        , aspectRatio(16.0f / 9.0f)
        , perspective(true) {}
};

// =============================================================================
// SceneGraphConfig — Configuration for the rendering pipeline
// =============================================================================
struct SceneGraphConfig {
    u32 passCount;           // Number of render passes (4 or 7)
    u32 viewportCount;       // Number of viewports (1-4 for split-screen)
    bool enableCulling;      // Enable frustum culling
    bool enableFog;          // Enable fog rendering
    bool enablePostProcess;  // Enable post-processing pass
    bool enableShadows;      // Enable shadow pass

    SceneGraphConfig()
        : passCount(7)
        , viewportCount(1)
        , enableCulling(true)
        , enableFog(true)
        , enablePostProcess(true)
        , enableShadows(false) {}
};

// =============================================================================
// SceneBase3D — Base class for all 3D game scenes
//
// Wraps the EGG SceneGraph system and provides:
//   - Scene graph creation and configuration
//   - Camera and viewport management
//   - 3D rendering parameters (fog, projection, clear color)
//   - Pre/post draw hooks for subclasses
//
// RaceScene and other 3D scenes inherit from this.
// =============================================================================
class SceneBase3D : public SceneBase {
public:
    SceneBase3D();
    virtual ~SceneBase3D();

    // --- SceneBase interface ---

    /// Initialize the 3D scene (set up scene graph, cameras).
    /// @addr 0x80620200
    virtual void init() override;

    /// Per-frame update. Updates scene graph, cameras, 3D systems.
    /// @addr 0x80620300
    virtual void calc() override;

    /// Render the 3D scene (scene graph draw + overlays).
    /// @addr 0x80620500
    virtual void draw() override;

    // --- Lifecycle overrides ---

    /// Load 3D scene resources (models, textures, course data).
    /// @addr 0x80620700
    virtual void load() override;

    /// Unload 3D scene resources.
    /// @addr 0x80620800
    virtual void unload() override;

    /// Reset to initial state.
    /// @addr 0x80620900
    virtual void reset() override;

    // --- Scene graph ---

    /// Set up the EGG SceneGraph for rendering.
    /// @addr 0x80620A00
    void setupSceneGraph(const SceneGraphConfig& config);

    /// Get the scene graph (for direct manipulation by subclasses).
    /// @addr 0x80620B00
    void* getSceneGraph() const;

    /// Check if the scene graph is ready for rendering.
    /// @addr 0x80621800
    bool isSceneGraphReady() const { return m_sceneGraphReady; }

    /// Configure render passes.
    /// @addr 0x80621C00
    void configureRenderPasses(u32 passMask);

    /// Full 3D scene initialization (graph, camera, defaults)
    void initScene();

    /// Load course 3D model and collision data
    void loadCourse(const char* coursePath);

    /// Unload course resources
    void unloadCourse();

    /// Perform 3D draw for all viewports
    void draw3D();

    /// Update camera with explicit dt
    void updateCamera(f32 dt);

    /// Configure GX lighting
    void setupLighting();

    /// Configure GX fog from stored params
    void setupFog();

    // --- Viewport ---

    /// Set up viewports for the given player count (split-screen).
    /// @addr 0x80620C00
    void setupViewport(u8 playerCount);

    // --- Camera ---

    /// Set up the 3D camera.
    /// @addr 0x80620D00
    void setupCamera(f32 fov, f32 nearPlane, f32 farPlane);

    /// Get the scene camera.
    /// @addr 0x80620E00
    SceneCamera* getCamera() const { return m_camera; }

    // --- Fog ---

    /// Set fog parameters.
    /// @addr 0x80620F00
    void setFogParams(const FogParams& params);

    /// Enable fog rendering.
    /// @addr 0x80621000
    void enableFog();

    /// Disable fog rendering.
    /// @addr 0x80621100
    void disableFog();

    /// Get current fog parameters.
    const FogParams& getFogParams() const { return m_fogParams; }

    /// Check if fog is enabled.
    bool isFogEnabled() const { return m_fogEnabled; }

    // --- Projection ---

    /// Set the camera projection parameters.
    /// @addr 0x80621200
    void setProjection(const ProjectionParams& params);

    /// Get current projection parameters.
    /// @addr 0x80621300
    const ProjectionParams& getProjection() const { return m_projParams; }

    // --- Colors ---

    /// Set the viewport clear color.
    /// @addr 0x80621400
    void setClearColor(const ClearColor& color);

    /// Set the ambient light color.
    /// @addr 0x80621500
    void setAmbientColor(const ClearColor& color);

    /// Get the clear color.
    const ClearColor& getClearColor() const { return m_clearColor; }

    // --- Player management ---

    /// Set the number of players (affects viewport layout).
    /// @addr 0x80621600
    void setPlayerCount(u8 count);

    /// Get the number of players.
    /// @addr 0x80621700
    u8 getPlayerCount() const { return m_playerCount; }

protected:
    // --- Subclass hooks ---

    /// Called before 3D rendering (set up matrices, bind resources).
    /// @addr 0x80621900
    virtual void preDraw();

    /// Called after 3D rendering (restore state, draw 2D overlays).
    /// @addr 0x80621A00
    virtual void postDraw();

    /// Update the scene graph (called from calc).
    /// @addr 0x80621B00
    virtual void updateSceneGraph();

    /// Called after scene graph is set up.
    virtual void onSceneGraphReady() {}

    // --- Members ---

    SceneCamera*      m_camera;           // 3D camera controller
    void*             m_sceneGraph;       // Opaque scene graph pointer
    SceneGraphConfig  m_sgConfig;         // Scene graph configuration
    bool              m_sceneGraphReady;  // Whether scene graph is initialized

    FogParams         m_fogParams;        // Fog configuration
    bool              m_fogEnabled;       // Fog enable state

    ProjectionParams  m_projParams;       // Camera projection
    ClearColor        m_clearColor;       // Background clear color
    ClearColor        m_ambientColor;     // Ambient light color

    u8                m_playerCount;      // Number of players (1-4)
    u8                m_viewportCount;    // Active viewport count
    u32               m_renderPassMask;   // Which render passes are active
};

} // namespace Scene