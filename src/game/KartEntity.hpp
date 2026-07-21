#pragma once
// =============================================================================
// KartEntity.hpp -- Minimal kart entity for M4 (Place Kart on Track)
// MAESTRO Phase 7, Milestone M4
// =============================================================================
//
// Represents a single kart on the race track. Stores position, rotation, and
// scale, and provides a computed 4x4 model matrix for rendering.
//
// The entity can be initialized from a KMP start position (Loaders::KmpEntry::
// StartPosition) and rendered as a colored axis-aligned box via OpenGL 3.3
// core profile when HAS_OPENGL is defined.
//
// Dependencies: rk_types.h, EGG/math.h
// Optional:     platform/gl3_core.h (only when HAS_OPENGL is defined)
// =============================================================================

#include "rk_types.h"
#include "EGG/math.h"  // EGG::Vector3f, EGG::Matrix44f, EGG::DegToRad, EGG::PI
#include "loaders/kmp_loader.hpp"  // Loaders::KmpEntry::StartPosition (lightweight, only rk_types.h + stdlib)

// =============================================================================
// KartEntity -- A single kart's transform and renderable representation
// =============================================================================
class KartEntity {
public:
    // -- Construction / Destruction ------------------------------------------

    /// Default constructor. Entity starts inactive with zeroed GL handles.
    KartEntity();

    /// Destructor. Cleans up OpenGL resources if the entity is active.
    ~KartEntity();

    // Non-copyable (owns GL resources)
    KartEntity(const KartEntity&) = delete;
    KartEntity& operator=(const KartEntity&) = delete;

    // -- Initialization -----------------------------------------------------

    /// Initialize this entity from a KMP start-position entry.
    /// Copies position, rotation, and player index, then recomputes the
    /// model matrix and marks the entity as active.
    void initFromKMP(const Loaders::KmpEntry::StartPosition& sp);

    // -- Matrix ---------------------------------------------------------------

    /// Recompute the 4x4 model matrix from the current position, rotation
    /// (Euler degrees: x=pitch, y=yaw, z=roll), and scale.
    /// Rotation order: Yaw(Y) * Pitch(X) * Roll(Z)  (YXZ intrinsic Euler).
    /// Translation is stored in column 3 (OpenGL column-major convention).
    void computeModelMatrix();

    /// Read-only access to the cached model matrix.
    const EGG::Matrix44f& getModelMatrix() const { return m_modelMatrix; }

    /// Read-only access to the world position.
    const EGG::Vector3f& getPosition() const { return m_position; }

    // -- OpenGL rendering (guarded by HAS_OPENGL) ----------------------------

    /// Create GL resources: compile shaders, generate VAO/VBO/EBO, upload
    /// cube geometry.  Returns false immediately if HAS_OPENGL is not defined.
    /// Must be called once before render().
    bool initGL();

    /// Draw the kart cube using the provided view-projection matrix.
    /// Computes MVP = viewProj * modelMatrix, binds shader, and issues
    /// a glDrawElements call (36 indices, 12 triangles).
    /// No-op when HAS_OPENGL is not defined.
    void render(const EGG::Matrix44f& viewProj) const;

    /// Release all OpenGL resources (VAO, VBO, EBO, shader program).
    /// Safe to call multiple times; no-op when HAS_OPENGL is not defined.
    void cleanupGL();

    // -- Accessors -----------------------------------------------------------

    bool isActive() const { return m_isActive; }
    u32  getPlayerIndex() const { return m_playerIndex; }

private:
    // -- Transform state -----------------------------------------------------
    EGG::Vector3f m_position;      ///< World position (x, y, z)
    EGG::Vector3f m_rotationDeg;   ///< Euler angles in degrees (x=pitch, y=yaw, z=roll)
    EGG::Vector3f m_scale;         ///< Scale factors (default 1,1,1)
    EGG::Matrix44f m_modelMatrix;  ///< Cached model matrix (column-major m[col][row])

    // -- Entity metadata -----------------------------------------------------
    u32  m_playerIndex;  ///< Player slot (0-11)
    bool m_isActive;     ///< True once initFromKMP has been called

    // -- OpenGL handles (0 when no GL or not yet initialized) -----------------
    u32 m_vao;            ///< Vertex Array Object
    u32 m_vbo;            ///< Vertex Buffer Object
    u32 m_ebo;            ///< Element Buffer Object (index buffer)
    u32 m_shaderProgram;  ///< Linked shader program
    s32 m_mvpLoc;         ///< Uniform location for "u_mvp" mat4
};