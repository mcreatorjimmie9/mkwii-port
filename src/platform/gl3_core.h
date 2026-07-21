#ifndef MKWII_PORT_GL3_CORE_H
#define MKWII_PORT_GL3_CORE_H

/*
 * Minimal self-contained OpenGL 3.3 Core Profile header.
 * No external GL headers required — all types, constants, and function
 * pointers are defined here.  Functions are loaded at runtime via
 * a caller-supplied getProcAddress callback (typically SDL_GL_GetProcAddress).
 *
 * Usage:
 *   #include "platform/gl3_core.h"
 *   GL3::loadFunctions(SDL_GL_GetProcAddress);
 *   GL3::gl.glClear(GL3::GL_COLOR_BUFFER_BIT | GL3::GL_DEPTH_BUFFER_BIT);
 */

#include <cstdint>

// ---------------------------------------------------------------------------
// Calling convention — empty on most platforms (Linux/macOS)
// ---------------------------------------------------------------------------
#ifndef GLAPIENTRY
#define GLAPIENTRY
#endif

// ---------------------------------------------------------------------------
// GL basic types
// ---------------------------------------------------------------------------
typedef unsigned int   GLuint;
typedef unsigned int   GLenum;
typedef unsigned int   GLbitfield;
typedef int            GLint;
typedef int            GLsizei;
typedef unsigned char  GLboolean;
typedef float          GLfloat;
typedef double         GLdouble;
typedef char           GLchar;
typedef void           GLvoid;
typedef ptrdiff_t      GLsizeiptr;
typedef ptrdiff_t      GLintptr;

// ---------------------------------------------------------------------------
// GL constants
// ---------------------------------------------------------------------------
namespace GL3 {

// Boolean
constexpr GLenum GL_TRUE  = 1;
constexpr GLenum GL_FALSE = 0;

// Data types
constexpr GLenum GL_FLOAT = 0x1406;

// Primitives
constexpr GLenum GL_TRIANGLES = 0x0004;

// Buffer objects
constexpr GLenum GL_ARRAY_BUFFER         = 0x8892;
constexpr GLenum GL_ELEMENT_ARRAY_BUFFER = 0x8893;
constexpr GLenum GL_STATIC_DRAW          = 0x88E4;

// Index types
constexpr GLenum GL_UNSIGNED_INT = 0x1405;
constexpr GLenum GL_UNSIGNED_SHORT = 0x1403;
constexpr GLenum GL_UNSIGNED_BYTE = 0x1401;

// Shaders
constexpr GLenum GL_VERTEX_SHADER   = 0x8B31;
constexpr GLenum GL_FRAGMENT_SHADER = 0x8B30;

// Shader / program queries
constexpr GLenum GL_COMPILE_STATUS  = 0x8B81;
constexpr GLenum GL_LINK_STATUS     = 0x8B82;
constexpr GLenum GL_INFO_LOG_LENGTH = 0x8B84;

// Clear masks
constexpr GLbitfield GL_COLOR_BUFFER_BIT = 0x00004000;
constexpr GLbitfield GL_DEPTH_BUFFER_BIT = 0x00000100;

// Enable / disable
constexpr GLenum GL_DEPTH_TEST = 0x0B71;
constexpr GLenum GL_CULL_FACE  = 0x0B44;

// Face culling
constexpr GLenum GL_BACK = 0x0405;
constexpr GLenum GL_CCW  = 0x0901;

// Depth comparison
constexpr GLenum GL_LESS = 0x0201;

// Context profile
constexpr GLenum GL_MAJOR_VERSION        = 0x821B;
constexpr GLenum GL_MINOR_VERSION        = 0x821C;
constexpr GLenum GL_CONTEXT_PROFILE_MASK = 0x9126;
constexpr GLenum GL_CONTEXT_PROFILE_CORE = 0x9128;

// Errors
constexpr GLenum GL_NO_ERROR          = 0;
constexpr GLenum GL_INVALID_ENUM      = 0x0500;
constexpr GLenum GL_INVALID_VALUE     = 0x0501;
constexpr GLenum GL_INVALID_OPERATION = 0x0502;
constexpr GLenum GL_OUT_OF_MEMORY     = 0x0505;

// Pixel formats
constexpr GLenum GL_DEPTH24_STENCIL8 = 0x88F0;

// ---------------------------------------------------------------------------
// GL function pointer types
// ---------------------------------------------------------------------------

// Clear
using PFNGLCLEAR      = void   (GLAPIENTRY *)(GLbitfield mask);
using PFNGLCLEARCOLOR = void   (GLAPIENTRY *)(GLfloat r, GLfloat g, GLfloat b, GLfloat a);
using PFNGLVIEWPORT   = void   (GLAPIENTRY *)(GLint x, GLint y, GLsizei w, GLsizei h);

// Enable / Disable
using PFNGLENABLE    = void   (GLAPIENTRY *)(GLenum cap);
using PFNGLDISABLE   = void   (GLAPIENTRY *)(GLenum cap);
using PFNGLDEPTHFUNC = void   (GLAPIENTRY *)(GLenum func);
using PFNGLGETERROR  = GLenum (GLAPIENTRY *)(void);

// Shaders
using PFNGLCREATESHADER     = GLuint (GLAPIENTRY *)(GLenum type);
using PFNGLSHADERSOURCE     = void   (GLAPIENTRY *)(GLuint shader, GLsizei count, const GLchar* const* string, const GLint* length);
using PFNGLCOMPILESHADER    = void   (GLAPIENTRY *)(GLuint shader);
using PFNGLGETSHADERIV      = void   (GLAPIENTRY *)(GLuint shader, GLenum pname, GLint* params);
using PFNGLGETSHADERINFOLOG = void   (GLAPIENTRY *)(GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* infoLog);

// Programs
using PFNGLCREATEPROGRAM     = GLuint (GLAPIENTRY *)(void);
using PFNGLATTACHSHADER      = void   (GLAPIENTRY *)(GLuint program, GLuint shader);
using PFNGLLINKPROGRAM       = void   (GLAPIENTRY *)(GLuint program);
using PFNGLGETPROGRAMIV      = void   (GLAPIENTRY *)(GLuint program, GLenum pname, GLint* params);
using PFNGLGETPROGRAMINFOLOG = void   (GLAPIENTRY *)(GLuint program, GLsizei bufSize, GLsizei* length, GLchar* infoLog);
using PFNGLDELETESHADER      = void   (GLAPIENTRY *)(GLuint shader);
using PFNGLDELETEPROGRAM     = void   (GLAPIENTRY *)(GLuint program);
using PFNGLUSEPROGRAM        = void   (GLAPIENTRY *)(GLuint program);

// Buffers
using PFNGLGENBUFFERS    = void (GLAPIENTRY *)(GLsizei n, GLuint* buffers);
using PFNGLBINDBUFFER    = void (GLAPIENTRY *)(GLenum target, GLuint buffer);
using PFNGLBUFFERDATA    = void (GLAPIENTRY *)(GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage);
using PFNGLDELETEBUFFERS = void (GLAPIENTRY *)(GLsizei n, const GLuint* buffers);

// Vertex arrays
using PFNGLGENVERTEXARRAYS         = void (GLAPIENTRY *)(GLsizei n, GLuint* arrays);
using PFNGLBINDVERTEXARRAY         = void (GLAPIENTRY *)(GLuint array);
using PFNGLDELETEVERTEXARRAYS      = void (GLAPIENTRY *)(GLsizei n, const GLuint* arrays);
using PFNGLENABLEVERTEXATTRIBARRAY  = void (GLAPIENTRY *)(GLuint index);
using PFNGLDISABLEVERTEXATTRIBARRAY = void (GLAPIENTRY *)(GLuint index);
using PFNGLVERTEXATTRIBPOINTER     = void (GLAPIENTRY *)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* pointer);

// Drawing
using PFNGLDRAWARRAYS    = void (GLAPIENTRY *)(GLenum mode, GLint first, GLsizei count);
using PFNGLDRAWELEMENTS  = void (GLAPIENTRY *)(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices);

// Uniforms
using PFNGLGETUNIFORMLOCATION = GLint (GLAPIENTRY *)(GLuint program, const GLchar* name);
using PFNGLUNIFORMMATRIX4FV   = void  (GLAPIENTRY *)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
using PFNGLUNIFORM3F           = void  (GLAPIENTRY *)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
using PFNGLUNIFORM1F           = void  (GLAPIENTRY *)(GLint location, GLfloat v0);

// ---------------------------------------------------------------------------
// GL function pointer storage
// ---------------------------------------------------------------------------
struct GLFunctions {
    // Clear
    PFNGLCLEAR      glClear      = nullptr;
    PFNGLCLEARCOLOR glClearColor = nullptr;
    PFNGLVIEWPORT   glViewport   = nullptr;

    // Enable / Disable
    PFNGLENABLE    glEnable    = nullptr;
    PFNGLDISABLE   glDisable   = nullptr;
    PFNGLDEPTHFUNC glDepthFunc = nullptr;
    PFNGLGETERROR  glGetError  = nullptr;

    // Shaders
    PFNGLCREATESHADER     glCreateShader     = nullptr;
    PFNGLSHADERSOURCE     glShaderSource     = nullptr;
    PFNGLCOMPILESHADER    glCompileShader    = nullptr;
    PFNGLGETSHADERIV      glGetShaderiv      = nullptr;
    PFNGLGETSHADERINFOLOG glGetShaderInfoLog = nullptr;

    // Programs
    PFNGLCREATEPROGRAM     glCreateProgram     = nullptr;
    PFNGLATTACHSHADER      glAttachShader      = nullptr;
    PFNGLLINKPROGRAM       glLinkProgram       = nullptr;
    PFNGLGETPROGRAMIV      glGetProgramiv      = nullptr;
    PFNGLGETPROGRAMINFOLOG glGetProgramInfoLog = nullptr;
    PFNGLDELETESHADER      glDeleteShader      = nullptr;
    PFNGLDELETEPROGRAM     glDeleteProgram     = nullptr;
    PFNGLUSEPROGRAM        glUseProgram        = nullptr;

    // Buffers
    PFNGLGENBUFFERS    glGenBuffers    = nullptr;
    PFNGLBINDBUFFER    glBindBuffer    = nullptr;
    PFNGLBUFFERDATA    glBufferData    = nullptr;
    PFNGLDELETEBUFFERS glDeleteBuffers = nullptr;

    // Vertex arrays
    PFNGLGENVERTEXARRAYS         glGenVertexArrays         = nullptr;
    PFNGLBINDVERTEXARRAY         glBindVertexArray         = nullptr;
    PFNGLDELETEVERTEXARRAYS      glDeleteVertexArrays      = nullptr;
    PFNGLENABLEVERTEXATTRIBARRAY  glEnableVertexAttribArray  = nullptr;
    PFNGLDISABLEVERTEXATTRIBARRAY glDisableVertexAttribArray = nullptr;
    PFNGLVERTEXATTRIBPOINTER     glVertexAttribPointer     = nullptr;

    // Drawing
    PFNGLDRAWARRAYS   glDrawArrays   = nullptr;
    PFNGLDRAWELEMENTS glDrawElements = nullptr;

    // Uniforms
    PFNGLGETUNIFORMLOCATION glGetUniformLocation = nullptr;
    PFNGLUNIFORMMATRIX4FV   glUniformMatrix4fv   = nullptr;
    PFNGLUNIFORM3F           glUniform3f           = nullptr;
    PFNGLUNIFORM1F           glUniform1f           = nullptr;
};

// Global function pointer table (all initialized to nullptr above)
inline GLFunctions gl;

// ---------------------------------------------------------------------------
// Helper: check for GL errors (returns the error code, or GL_NO_ERROR)
// ---------------------------------------------------------------------------
inline GLenum checkError(const char* file = __builtin_FILE(),
                         int line = __builtin_LINE()) {
    if (!gl.glGetError) return GL_NO_ERROR;
    GLenum err = gl.glGetError();
    if (err != GL_NO_ERROR) {
        // Minimal placeholder — callers can wrap this for verbose logging
        (void)file;
        (void)line;
    }
    return err;
}

// ---------------------------------------------------------------------------
// Load all function pointers via a getProcAddress callback.
// The callback is typically SDL_GL_GetProcAddress, passed as:
//   GL3::loadFunctions(reinterpret_cast<void*(*)(const char*)>(SDL_GL_GetProcAddress));
// Returns true if all critical functions were resolved.
// ---------------------------------------------------------------------------
inline bool loadFunctions(void* (*getProcAddr)(const char*)) {
    if (!getProcAddr) return false;

    #define RESOLVE(member, pfn_type, func_name) \
        gl.member = reinterpret_cast<pfn_type>(getProcAddr(func_name))

    // Clear
    RESOLVE(glClear,      PFNGLCLEAR,      "glClear");
    RESOLVE(glClearColor, PFNGLCLEARCOLOR, "glClearColor");
    RESOLVE(glViewport,   PFNGLVIEWPORT,   "glViewport");

    // Enable / Disable
    RESOLVE(glEnable,     PFNGLENABLE,     "glEnable");
    RESOLVE(glDisable,    PFNGLDISABLE,    "glDisable");
    RESOLVE(glDepthFunc,  PFNGLDEPTHFUNC, "glDepthFunc");
    RESOLVE(glGetError,   PFNGLGETERROR,  "glGetError");

    // Shaders
    RESOLVE(glCreateShader,     PFNGLCREATESHADER,     "glCreateShader");
    RESOLVE(glShaderSource,     PFNGLSHADERSOURCE,     "glShaderSource");
    RESOLVE(glCompileShader,    PFNGLCOMPILESHADER,    "glCompileShader");
    RESOLVE(glGetShaderiv,      PFNGLGETSHADERIV,      "glGetShaderiv");
    RESOLVE(glGetShaderInfoLog, PFNGLGETSHADERINFOLOG, "glGetShaderInfoLog");

    // Programs
    RESOLVE(glCreateProgram,     PFNGLCREATEPROGRAM,     "glCreateProgram");
    RESOLVE(glAttachShader,      PFNGLATTACHSHADER,      "glAttachShader");
    RESOLVE(glLinkProgram,       PFNGLLINKPROGRAM,       "glLinkProgram");
    RESOLVE(glGetProgramiv,      PFNGLGETPROGRAMIV,      "glGetProgramiv");
    RESOLVE(glGetProgramInfoLog, PFNGLGETPROGRAMINFOLOG, "glGetProgramInfoLog");
    RESOLVE(glDeleteShader,      PFNGLDELETESHADER,      "glDeleteShader");
    RESOLVE(glDeleteProgram,     PFNGLDELETEPROGRAM,     "glDeleteProgram");
    RESOLVE(glUseProgram,        PFNGLUSEPROGRAM,        "glUseProgram");

    // Buffers
    RESOLVE(glGenBuffers,    PFNGLGENBUFFERS,    "glGenBuffers");
    RESOLVE(glBindBuffer,    PFNGLBINDBUFFER,    "glBindBuffer");
    RESOLVE(glBufferData,    PFNGLBUFFERDATA,    "glBufferData");
    RESOLVE(glDeleteBuffers, PFNGLDELETEBUFFERS, "glDeleteBuffers");

    // Vertex arrays
    RESOLVE(glGenVertexArrays,         PFNGLGENVERTEXARRAYS,         "glGenVertexArrays");
    RESOLVE(glBindVertexArray,         PFNGLBINDVERTEXARRAY,         "glBindVertexArray");
    RESOLVE(glDeleteVertexArrays,      PFNGLDELETEVERTEXARRAYS,      "glDeleteVertexArrays");
    RESOLVE(glEnableVertexAttribArray,  PFNGLENABLEVERTEXATTRIBARRAY,  "glEnableVertexAttribArray");
    RESOLVE(glDisableVertexAttribArray, PFNGLDISABLEVERTEXATTRIBARRAY, "glDisableVertexAttribArray");
    RESOLVE(glVertexAttribPointer,     PFNGLVERTEXATTRIBPOINTER,     "glVertexAttribPointer");

    // Drawing
    RESOLVE(glDrawArrays,   PFNGLDRAWARRAYS,   "glDrawArrays");
    RESOLVE(glDrawElements, PFNGLDRAWELEMENTS, "glDrawElements");

    // Uniforms
    RESOLVE(glGetUniformLocation, PFNGLGETUNIFORMLOCATION, "glGetUniformLocation");
    RESOLVE(glUniformMatrix4fv,   PFNGLUNIFORMMATRIX4FV,   "glUniformMatrix4fv");
    RESOLVE(glUniform3f,           PFNGLUNIFORM3F,           "glUniform3f");
    RESOLVE(glUniform1f,           PFNGLUNIFORM1F,           "glUniform1f");

    #undef RESOLVE

    // Verify critical functions loaded successfully
    return gl.glClear != nullptr
        && gl.glClearColor != nullptr
        && gl.glViewport != nullptr
        && gl.glCreateShader != nullptr
        && gl.glCreateProgram != nullptr
        && gl.glDrawArrays != nullptr
        && gl.glGetError != nullptr;
}

} // namespace GL3

#endif // MKWII_PORT_GL3_CORE_H