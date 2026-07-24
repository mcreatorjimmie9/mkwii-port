// =============================================================================
// course_model_renderer.cpp — OpenGL Course Model Renderer Implementation
// =============================================================================
//
// Phase 36: Renders BMD/BRRES course models using OpenGL 3.3 Core.
//
// Uses a vertex format of: position(3f) + normal(3f) + color(4u8) + texcoord(2f)
// = 32 bytes per vertex. This matches the BmdVertex struct layout.
//
// The shader supports diffuse lighting + vertex color + optional texture.
// This is sufficient to render MKWii course geometry with correct shading.
// =============================================================================

#include "platform/course_model_renderer.hpp"

using namespace GL3;

namespace Render {

// =============================================================================
// Vertex format: pos(3f) + nrm(3f) + color(4u8) + tex(2f) = 32 bytes
// =============================================================================
static constexpr u32 VERTEX_STRIDE = sizeof(float) * 3 + sizeof(float) * 3 +
                                     sizeof(u8) * 4 + sizeof(float) * 2;  // 32

// Vertex shader for course model rendering
static const char* COURSE_VERT_SRC =
    "#version 330 core\n"
    "layout(location=0) in vec3 aPos;\n"
    "layout(location=1) in vec3 aNormal;\n"
    "layout(location=2) in vec4 aColor;\n"
    "layout(location=3) in vec2 aTexCoord;\n"
    "\n"
    "uniform mat4 u_mvp;\n"
    "\n"
    "out vec3 v_normal;\n"
    "out vec4 v_color;\n"
    "out vec2 v_texCoord;\n"
    "\n"
    "void main() {\n"
    "    gl_Position = u_mvp * vec4(aPos, 1.0);\n"
    "    v_normal = aNormal;\n"
    "    v_color = aColor;\n"
    "    v_texCoord = aTexCoord;\n"
    "}\n";

// Fragment shader — diffuse lighting + vertex color + texture
static const char* COURSE_FRAG_SRC =
    "#version 330 core\n"
    "\n"
    "in vec3 v_normal;\n"
    "in vec4 v_color;\n"
    "in vec2 v_texCoord;\n"
    "\n"
    "uniform sampler2D u_texture;\n"
    "uniform int u_useTexture;\n"
    "\n"
    "out vec4 fragColor;\n"
    "\n"
    "void main() {\n"
    "    // Simple directional light from above-right (matching MKWii default)\n"
    "    vec3 lightDir = normalize(vec3(0.3, 0.8, 0.5));\n"
    "    vec3 normal = normalize(v_normal);\n"
    "    float diffuse = max(dot(normal, lightDir), 0.0);\n"
    "    float ambient = 0.35;\n"
    "    float lighting = ambient + (1.0 - ambient) * diffuse;\n"
    "\n"
    "    vec4 baseColor = v_color;\n"
    "    if (u_useTexture != 0) {\n"
    "        vec4 texColor = texture(u_texture, v_texCoord);\n"
    "        baseColor = texColor * v_color;\n"
    "    }\n"
    "\n"
    "    // MKWii standard TEV: result = vertexColor * lighting\n"
    "    fragColor = vec4(baseColor.rgb * lighting, baseColor.a);\n"
    "}\n";

// =============================================================================
// Construction / Destruction
// =============================================================================

CourseModelRenderer::CourseModelRenderer()
    : m_initialized(false)
{
    memset(&m_shader, 0, sizeof(m_shader));
}

CourseModelRenderer::~CourseModelRenderer() {
    shutdown();
}

// =============================================================================
// GL shader compilation helpers
// =============================================================================

static u32 compileShaderObj(u32 type, const char* src) {
    u32 shader = gl.glCreateShader(type);
    if (!shader) return 0;
    gl.glShaderSource(shader, 1, &src, nullptr);
    gl.glCompileShader(shader);
    s32 ok = 0;
    gl.glGetShaderiv(shader, GL_COMPILE_STATUS, &ok);
    if (!ok) {
        char log[512];
        gl.glGetShaderInfoLog(shader, sizeof(log), nullptr, log);
        printf("[CourseModel] Shader compile error: %s\n", log);
        gl.glDeleteShader(shader);
        return 0;
    }
    return shader;
}

static u32 linkProgram(u32 vert, u32 frag) {
    u32 program = gl.glCreateProgram();
    if (!program) return 0;
    gl.glAttachShader(program, vert);
    gl.glAttachShader(program, frag);
    gl.glLinkProgram(program);
    s32 ok = 0;
    gl.glGetProgramiv(program, GL_LINK_STATUS, &ok);
    if (!ok) {
        char log[512];
        gl.glGetProgramInfoLog(program, sizeof(log), nullptr, log);
        printf("[CourseModel] Program link error: %s\n", log);
        gl.glDeleteProgram(program);
        return 0;
    }
    return program;
}

bool CourseModelRenderer::compileShader() {
    u32 vert = compileShaderObj(GL_VERTEX_SHADER, COURSE_VERT_SRC);
    if (!vert) return false;

    u32 frag = compileShaderObj(GL_FRAGMENT_SHADER, COURSE_FRAG_SRC);
    if (!frag) {
        gl.glDeleteShader(vert);
        return false;
    }

    u32 program = linkProgram(vert, frag);
    gl.glDeleteShader(vert);
    gl.glDeleteShader(frag);
    if (!program) return false;

    m_shader.program = program;
    m_shader.mvpLoc = gl.glGetUniformLocation(program, "u_mvp");
    m_shader.texSampleLoc = gl.glGetUniformLocation(program, "u_texture");
    m_shader.useTexLoc = gl.glGetUniformLocation(program, "u_useTexture");

    printf("[CourseModel] Shader compiled successfully (program=%u)\n", program);
    return true;
}

// =============================================================================
// Init / Shutdown
// =============================================================================

bool CourseModelRenderer::init() {
    if (m_initialized) return true;

    if (!compileShader()) {
        printf("[CourseModel] Failed to compile course model shader\n");
        return false;
    }

    m_initialized = true;
    printf("[CourseModel] Renderer initialized\n");
    return true;
}

void CourseModelRenderer::shutdown() {
    if (!m_initialized) return;

    // Delete all model GPU resources
    for (auto& model : m_modelRenderData) {
        if (model.vao) gl.glDeleteVertexArrays(1, &model.vao);
        if (model.vbo) gl.glDeleteBuffers(1, &model.vbo);
        if (model.ibo) gl.glDeleteBuffers(1, &model.ibo);
    }
    m_modelRenderData.clear();

    // Delete shader
    if (m_shader.program) {
        gl.glDeleteProgram(m_shader.program);
        memset(&m_shader, 0, sizeof(m_shader));
    }

    m_initialized = false;
}

void CourseModelRenderer::clear() {
    for (auto& model : m_modelRenderData) {
        if (model.vao) gl.glDeleteVertexArrays(1, &model.vao);
        if (model.vbo) gl.glDeleteBuffers(1, &model.vbo);
        if (model.ibo) gl.glDeleteBuffers(1, &model.ibo);
    }
    m_modelRenderData.clear();
}

// =============================================================================
// Upload Model to GPU
// =============================================================================

u32 CourseModelRenderer::uploadModel(const Loaders::BmdModel& model) {
    if (!m_initialized || model.vertices.empty()) {
        printf("[CourseModel] Cannot upload model: %s\n",
               model.vertices.empty() ? "no vertices" : "not initialized");
        return 0;
    }

    ModelRenderData rd;
    rd.name = model.name;
    rd.vertexCount = static_cast<u32>(model.vertices.size());
    rd.vao = 0;
    rd.vbo = 0;
    rd.ibo = 0;
    rd.indexCount = 0;
    rd.hasIndices = false;

    // Build interleaved vertex buffer: pos(3f) + nrm(3f) + color(4u8) + tex(2f)
    // Total: 32 bytes per vertex
    std::vector<u8> vertexBuffer;
    vertexBuffer.reserve(model.vertices.size() * VERTEX_STRIDE);

    for (const auto& vtx : model.vertices) {
        // Position (3 floats, 12 bytes)
        const u8* posPtr = reinterpret_cast<const u8*>(vtx.pos);
        vertexBuffer.insert(vertexBuffer.end(), posPtr, posPtr + 12);

        // Normal (3 floats, 12 bytes)
        const u8* nrmPtr = reinterpret_cast<const u8*>(vtx.nrm);
        vertexBuffer.insert(vertexBuffer.end(), nrmPtr, nrmPtr + 12);

        // Color (4 bytes, RGBA)
        vertexBuffer.push_back(vtx.color[0]);
        vertexBuffer.push_back(vtx.color[1]);
        vertexBuffer.push_back(vtx.color[2]);
        vertexBuffer.push_back(vtx.color[3]);

        // TexCoord (2 floats, 8 bytes)
        const u8* texPtr = reinterpret_cast<const u8*>(vtx.tex);
        vertexBuffer.insert(vertexBuffer.end(), texPtr, texPtr + 8);
    }

    // Build index buffer from all draw calls
    std::vector<u16> indexBuffer;
    u32 totalIndices = 0;
    for (const auto& dc : model.drawCalls) {
        totalIndices += static_cast<u32>(dc.indices.size());
    }
    indexBuffer.reserve(totalIndices);

    for (const auto& dc : model.drawCalls) {
        for (u16 idx : dc.indices) {
            indexBuffer.push_back(idx);
        }
    }

    rd.indexCount = static_cast<u32>(indexBuffer.size());
    rd.hasIndices = !indexBuffer.empty();

    // Create VAO
    gl.glGenVertexArrays(1, &rd.vao);
    gl.glBindVertexArray(rd.vao);

    // Create and fill VBO
    gl.glGenBuffers(1, &rd.vbo);
    gl.glBindBuffer(GL_ARRAY_BUFFER, rd.vbo);
    gl.glBufferData(GL_ARRAY_BUFFER,
                    static_cast<GLsizeiptr>(vertexBuffer.size()),
                    vertexBuffer.data(), GL_STATIC_DRAW);

    // Set up vertex attributes (matching shader layout locations)
    // Location 0: position (3 floats)
    gl.glEnableVertexAttribArray(0);
    gl.glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE,
                             VERTEX_STRIDE,
                             reinterpret_cast<const void*>(0));

    // Location 1: normal (3 floats, offset 12)
    gl.glEnableVertexAttribArray(1);
    gl.glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE,
                             VERTEX_STRIDE,
                             reinterpret_cast<const void*>(12));

    // Location 2: color (4 unsigned bytes, offset 24)
    gl.glEnableVertexAttribArray(2);
    gl.glVertexAttribPointer(2, 4, GL_UNSIGNED_BYTE, GL_TRUE,
                             VERTEX_STRIDE,
                             reinterpret_cast<const void*>(24));

    // Location 3: texcoord (2 floats, offset 28)
    gl.glEnableVertexAttribArray(3);
    gl.glVertexAttribPointer(3, 2, GL_FLOAT, GL_FALSE,
                             VERTEX_STRIDE,
                             reinterpret_cast<const void*>(28));

    // Create and fill IBO (if we have indices)
    if (rd.hasIndices) {
        gl.glGenBuffers(1, &rd.ibo);
        gl.glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, rd.ibo);
        gl.glBufferData(GL_ELEMENT_ARRAY_BUFFER,
                        static_cast<GLsizeiptr>(indexBuffer.size() * sizeof(u16)),
                        indexBuffer.data(), GL_STATIC_DRAW);
    }

    // Unbind
    gl.glBindVertexArray(0);
    gl.glBindBuffer(GL_ARRAY_BUFFER, 0);
    gl.glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

    u32 modelIdx = static_cast<u32>(m_modelRenderData.size());
    m_modelRenderData.push_back(rd);

    printf("[CourseModel] Uploaded model '%s': %u vertices, %u indices (%.1f KB VBO)\n",
           model.name.c_str(), rd.vertexCount, rd.indexCount,
           static_cast<f32>(vertexBuffer.size()) / 1024.0f);

    return modelIdx;
}

// =============================================================================
// Rendering
// =============================================================================

void CourseModelRenderer::render(const f32 viewProjMatrix[4][4]) {
    if (!m_initialized || m_modelRenderData.empty()) return;

    gl.glUseProgram(m_shader.program);
    gl.glUniformMatrix4fv(m_shader.mvpLoc, 1, GL_FALSE,
                          reinterpret_cast<const f32*>(viewProjMatrix));
    gl.glUniform1i(m_shader.useTexLoc, 0);  // No texture by default

    for (u32 i = 0; i < m_modelRenderData.size(); i++) {
        renderModel(i, viewProjMatrix);
    }

    gl.glUseProgram(0);
}

void CourseModelRenderer::renderModel(u32 modelIdx, const f32 viewProjMatrix[4][4]) {
    if (!m_initialized || modelIdx >= m_modelRenderData.size()) return;

    const auto& rd = m_modelRenderData[modelIdx];

    gl.glBindVertexArray(rd.vao);

    if (rd.hasIndices) {
        gl.glDrawElements(GL_TRIANGLES, static_cast<GLsizei>(rd.indexCount),
                          GL_UNSIGNED_SHORT, nullptr);
    } else {
        gl.glDrawArrays(GL_TRIANGLES, 0, static_cast<GLsizei>(rd.vertexCount));
    }

    gl.glBindVertexArray(0);
}

} // namespace Render
