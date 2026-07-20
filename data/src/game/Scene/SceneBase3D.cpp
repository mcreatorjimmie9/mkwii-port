// SceneBase3D.cpp — Base class for 3D Game Scenes
// Address range: 0x80620000 - 0x8062559C (Gap 1 — 3D scene base)

#include "SceneBase3D.hpp"
#include "SceneCamera.hpp"
#include <cstring>

namespace Scene {

// @addr 0x80620000
SceneBase3D::SceneBase3D()
    : SceneBase()
    , m_camera(nullptr)
    , m_sceneGraph(nullptr)
    , m_sceneGraphReady(false)
    , m_fogEnabled(false)
    , m_playerCount(1)
    , m_viewportCount(1)
    , m_renderPassMask(0x7F) {  // All 7 passes enabled by default
}

// @addr 0x80620100
SceneBase3D::~SceneBase3D() {
    unload();
}

// @addr 0x80620200
void SceneBase3D::init() {
    SceneBase::reset();

    // Default 3D configuration
    m_playerCount = 1;
    m_viewportCount = 1;
    m_fogEnabled = false;
    m_sceneGraphReady = false;
    m_renderPassMask = 0x7F;

    // Default projection
    m_projParams.fov = 60.0f;
    m_projParams.nearPlane = 10.0f;
    m_projParams.farPlane = 20000.0f;
    m_projParams.aspectRatio = 16.0f / 9.0f;
    m_projParams.perspective = true;

    // Default clear color (sky blue)
    m_clearColor = ClearColor(100, 149, 237, 255);

    // Default ambient
    m_ambientColor = ClearColor(128, 128, 128, 255);

    // Set up scene graph with default config
    SceneGraphConfig defaultConfig;
    setupSceneGraph(defaultConfig);
}

// @addr 0x80620300
void SceneBase3D::calc() {
    // Update the 3D scene graph
    if (m_sceneGraphReady) {
        updateSceneGraph();
    }

    // Update camera
    if (m_camera) {
        m_camera->calc(1.0f / 60.0f);
    }

    incrementFrame();
}

// @addr 0x80620500
void SceneBase3D::draw() {
    if (!m_sceneGraphReady) return;

    preDraw();

    // In the real game, the draw pipeline is:
    // 1. Clear the framebuffer with m_clearColor
    // 2. Set fog parameters if enabled
    // 3. Set the projection matrix from m_projParams
    // 4. For each viewport (1-4 for split-screen):
    //    a. Set the viewport scissor rect
    //    b. Set the camera view matrix
    //    c. Call SceneGraph::calc() for this viewport
    //    d. Submit GX draw calls for each render pass
    // 5. Draw 2D overlays (HUD, etc.)

    postDraw();
}

// @addr 0x80620700
void SceneBase3D::load() {
    SceneBase::load();

    // In the real game, this loads 3D resources:
    // - Course BMD model
    // - Kart BMD models
    // - Course KCL collision
    // - Textures and materials
    // - Scene-specific particle effects
}

// @addr 0x80620800
void SceneBase3D::unload() {
    // Clean up camera
    if (m_camera) {
        m_camera->shutdown();
        delete m_camera;
        m_camera = nullptr;
    }

    // Clean up scene graph
    if (m_sceneGraph) {
        // In the real game: sceneGraph->destroyFull();
        // Then free memory
        m_sceneGraph = nullptr;
    }
    m_sceneGraphReady = false;

    SceneBase::unload();
}

// @addr 0x80620900
void SceneBase3D::reset() {
    SceneBase::reset();
    m_sceneGraphReady = false;
    m_fogEnabled = false;
    m_playerCount = 1;
    m_viewportCount = 1;
    m_renderPassMask = 0x7F;
}

// @addr 0x80620A00
void SceneBase3D::setupSceneGraph(const SceneGraphConfig& config) {
    m_sgConfig = config;

    // In the real game, this allocates and initializes an EGG::SceneGraph
    // (7-pass) or EGG::SceneGraph4Pass (4-pass) from the scene heap.
    //
    // The scene graph is a large structure (~0x2880 bytes for 7-pass)
    // that manages the rendering pipeline: animation, opaque, transparent,
    // post-processing, overlay, effects, and UI passes.
    //
    // For 7-pass:
    //   sceneGraph = new (heap) EGG::SceneGraph::SceneGraph();
    //   sceneGraph->setup7Pass();
    //   sceneGraph->initScene();
    //
    // For 4-pass:
    //   sceneGraph = new (heap) EGG::SceneGraph::SceneGraph4Pass();
    //   sceneGraph->setup4Pass();

    m_sceneGraphReady = true;
    m_viewportCount = static_cast<u8>(config.viewportCount);

    onSceneGraphReady();
}

// @addr 0x80620B00
void* SceneBase3D::getSceneGraph() const {
    return m_sceneGraph;
}

// @addr 0x80620C00
void SceneBase3D::setupViewport(u8 playerCount) {
    m_playerCount = playerCount;

    // Calculate viewport layout based on player count
    switch (playerCount) {
    case 1:
        m_viewportCount = 1;
        // Full screen
        break;
    case 2:
        m_viewportCount = 2;
        // Left half / Right half
        break;
    case 3:
        m_viewportCount = 4;  // 3 players use 4-viewport layout (1 unused)
        // Top-left / Top-right / Bottom-left / Bottom-right
        break;
    case 4:
        m_viewportCount = 4;
        // Quadrants
        break;
    default:
        m_viewportCount = 1;
        break;
    }

    // In the real game, this configures the EGG::SceneGraph viewports:
    // For each viewport, set the scissor rect and camera assignment
    if (m_camera) {
        m_camera->init(m_viewportCount);
    }
}

// @addr 0x80620D00
void SceneBase3D::setupCamera(f32 fov, f32 nearPlane, f32 farPlane) {
    if (!m_camera) {
        // m_camera = new SceneCamera();
        // In the real game, cameras are allocated from the scene heap
        return;
    }

    m_camera->setFOV(fov);
    m_camera->setNearFar(nearPlane, farPlane);

    // Update projection params to match
    m_projParams.fov = fov;
    m_projParams.nearPlane = nearPlane;
    m_projParams.farPlane = farPlane;
}

// @addr 0x80620E00
// (getCamera is inline in header)

// @addr 0x80620F00
void SceneBase3D::setFogParams(const FogParams& params) {
    m_fogParams = params;
}

// @addr 0x80621000
void SceneBase3D::enableFog() {
    m_fogEnabled = true;
    // In the real game: GX_SetFog(GX_FOG_LINEAR, startZ, endZ, nearZ, farZ, color)
}

// @addr 0x80621100
void SceneBase3D::disableFog() {
    m_fogEnabled = false;
    // In the real game: GX_SetFog(GX_FOG_NONE, 0, 0, 0, 0, (GXColor){0,0,0,0})
}

// @addr 0x80621200
void SceneBase3D::setProjection(const ProjectionParams& params) {
    m_projParams = params;

    // Apply to camera if available
    if (m_camera) {
        m_camera->setFOV(params.fov);
        m_camera->setNearFar(params.nearPlane, params.farPlane);
    }
}

// @addr 0x80621300
// (getProjection is inline in header)

// @addr 0x80621400
void SceneBase3D::setClearColor(const ClearColor& color) {
    m_clearColor = color;
}

// @addr 0x80621500
void SceneBase3D::setAmbientColor(const ClearColor& color) {
    m_ambientColor = color;
}

// @addr 0x80621600
void SceneBase3D::setPlayerCount(u8 count) {
    m_playerCount = count > 0 ? count : 1;
    setupViewport(m_playerCount);
}

// @addr 0x80621700
// (getPlayerCount is inline in header)

// @addr 0x80621900
void SceneBase3D::preDraw() {
    // In the real game, this:
    // 1. Saves the current GX state
    // 2. Sets the clear color via GX_SetClearColor
    // 3. Sets the fog state if enabled
    // 4. Configures the depth buffer
    // 5. Sets the viewport for the first player
}

// @addr 0x80621A00
void SceneBase3D::postDraw() {
    // In the real game, this:
    // 1. Restores the previous GX state
    // 2. Resets the viewport to full screen
    // 3. Prepares for 2D overlay rendering
}

// @addr 0x80621B00
void SceneBase3D::updateSceneGraph() {
    if (!m_sceneGraph) return;

    // In the real game, this calls:
    // sceneGraph->calcViewportTiming();
    // sceneGraph->configureViewports();
    // sceneGraph->assignCameras();
    // sceneGraph->updateVideoSystem();
}

// @addr 0x80621C00
void SceneBase3D::configureRenderPasses(u32 passMask) {
    m_renderPassMask = passMask;

    // In the real game, this enables/disables individual render passes
    // in the scene graph. Each bit in the mask corresponds to a pass:
    // Bit 0: Animation pass
    // Bit 1: Opaque geometry pass
    // Bit 2: Transparent pass
    // Bit 3: Post-processing pass
    // Bit 4: Overlay pass
    // Bit 5: Effects pass
    // Bit 6: UI pass
}

} // namespace Scene