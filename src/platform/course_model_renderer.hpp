#pragma once
// =============================================================================
// course_model_renderer.hpp — OpenGL Course Model Renderer
// =============================================================================
//
// Phase 36: Renders BMD/BRRES course models using OpenGL 3.3 Core.
//
// Uploads parsed BmdModel vertex data to VBOs/VAOs and renders draw calls
// using the existing GX renderer's shader pipeline. Supports:
//   - Indexed and non-indexed rendering
//   - Per-material draw calls (matching the original MDL0 SHP1 packets)
//   - Normal-based lighting (via a simple diffuse shader)
//   - Texture mapping from decoded BRRES TEX0 data
//
// Usage:
//   CourseModelRenderer renderer;
//   renderer.init();
//   renderer.uploadModel(bmdModel);
//   renderer.render(viewProjMatrix);
//   renderer.shutdown();
// =============================================================================

#include "../rk_types.h"
#include "../loaders/bmd_loader.hpp"
#include "gl3_core.h"

#include <vector>
#include <cstdio>

namespace Render {

class CourseModelRenderer {
public:
    CourseModelRenderer();
    ~CourseModelRenderer();

    /// Initialize GL resources (VAOs, VBOs, default shader).
    /// Must be called after GL context is created.
    bool init();

    /// Shutdown and release all GL resources.
    void shutdown();

    /// Upload a parsed BMD model to GPU buffers.
    /// Can be called multiple times for different models.
    /// Returns the model index for later reference.
    u32 uploadModel(const Loaders::BmdModel& model);

    /// Render all uploaded models.
    /// @param viewProjMatrix  4x4 view-projection matrix (column-major).
    void render(const f32 viewProjMatrix[4][4]);

    /// Render a specific model by index.
    void renderModel(u32 modelIdx, const f32 viewProjMatrix[4][4]);

    /// Check if the renderer has any models to draw.
    bool hasModels() const { return !m_modelRenderData.empty(); }

    /// Get the total number of uploaded models.
    u32 getModelCount() const { return static_cast<u32>(m_modelRenderData.size()); }

    /// Clear all uploaded models and textures.
    void clear();

private:
    // GL shader locations
    struct ShaderLocs {
        u32 program;
        s32 mvpLoc;
        s32 posLoc;
        s32 nrmLoc;
        s32 clrLoc;
        s32 texLoc;
        s32 texSampleLoc;
        s32 useTexLoc;
    };

    // Per-model GPU data
    struct ModelRenderData {
        u32 vao;           // Vertex array object
        u32 vbo;           // Vertex buffer object
        u32 ibo;           // Index buffer object
        u32 indexCount;    // Total indices
        u32 vertexCount;   // Total vertices (for non-indexed draw)
        std::string name;  // Model name
        bool hasIndices;   // Whether to use indexed drawing
    };

    // Compile the course model shader
    bool compileShader();

    // Current shader
    ShaderLocs m_shader;

    // All uploaded models
    std::vector<ModelRenderData> m_modelRenderData;

    // Default VAO for when no model is loaded
    bool m_initialized;
};

} // namespace Render
