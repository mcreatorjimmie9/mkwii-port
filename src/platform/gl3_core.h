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
constexpr GLenum GL_LINES          = 0x0001;
constexpr GLenum GL_LINE_STRIP      = 0x0003;
constexpr GLenum GL_TRIANGLES      = 0x0004;
constexpr GLenum GL_TRIANGLE_STRIP = 0x0005;
constexpr GLenum GL_TRIANGLE_FAN   = 0x0006;
constexpr GLenum GL_POINTS         = 0x0000;

// Buffer objects
constexpr GLenum GL_ARRAY_BUFFER         = 0x8892;
constexpr GLenum GL_ELEMENT_ARRAY_BUFFER = 0x8893;
constexpr GLenum GL_STATIC_DRAW  = 0x88E4;
constexpr GLenum GL_DYNAMIC_DRAW = 0x88E8;

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
constexpr GLenum GL_BLEND      = 0x0BE2;

// Face culling
constexpr GLenum GL_BACK  = 0x0405;
constexpr GLenum GL_FRONT = 0x0404;
constexpr GLenum GL_FRONT_AND_BACK = 0x0408;
constexpr GLenum GL_CCW   = 0x0901;

// Depth comparison
constexpr GLenum GL_NEVER              = 0x0200;
constexpr GLenum GL_LESS               = 0x0201;
constexpr GLenum GL_EQUAL              = 0x0202;
constexpr GLenum GL_LEQUAL             = 0x0203;
constexpr GLenum GL_GREATER            = 0x0204;
constexpr GLenum GL_NOTEQUAL           = 0x0205;
constexpr GLenum GL_GEQUAL             = 0x0206;
constexpr GLenum GL_ALWAYS             = 0x0207;

// Blending
constexpr GLenum GL_ZERO                 = 0;
constexpr GLenum GL_ONE                  = 1;
constexpr GLenum GL_SRC_ALPHA            = 0x0302;
constexpr GLenum GL_ONE_MINUS_SRC_ALPHA  = 0x0303;
constexpr GLenum GL_DST_ALPHA            = 0x0304;
constexpr GLenum GL_ONE_MINUS_DST_ALPHA  = 0x0305;

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
// Phase 34: Polygon offset and coplanar
constexpr GLenum GL_POLYGON_OFFSET_FILL = 0x8037;

// Texture
constexpr GLenum GL_TEXTURE_2D        = 0x0DE1;
constexpr GLenum GL_TEXTURE0          = 0x84C0;
constexpr GLenum GL_TEXTURE_MIN_FILTER = 0x2800;
constexpr GLenum GL_TEXTURE_MAG_FILTER = 0x2801;
constexpr GLenum GL_TEXTURE_WRAP_S     = 0x2802;
constexpr GLenum GL_TEXTURE_WRAP_T     = 0x2803;
constexpr GLenum GL_NEAREST           = 0x2600;
constexpr GLenum GL_LINEAR            = 0x2601;
constexpr GLenum GL_NEAREST_MIPMAP_NEAREST = 0x2700;
constexpr GLenum GL_NEAREST_MIPMAP_LINEAR  = 0x2702;
constexpr GLenum GL_LINEAR_MIPMAP_NEAREST  = 0x2701;
constexpr GLenum GL_LINEAR_MIPMAP_LINEAR   = 0x2703;
constexpr GLenum GL_CLAMP_TO_EDGE    = 0x812F;
constexpr GLenum GL_REPEAT            = 0x2901;
constexpr GLenum GL_MIRRORED_REPEAT   = 0x8370;
constexpr GLenum GL_FOG                 = 0x0B60;
constexpr GLenum GL_FOG_MODE            = 0x0B65;
constexpr GLenum GL_FOG_DENSITY         = 0x0B62;
constexpr GLenum GL_FOG_START           = 0x0B63;
constexpr GLenum GL_FOG_END             = 0x0B64;
constexpr GLenum GL_FOG_COLOR           = 0x0B66;
constexpr GLenum GL_EXP                 = 0x0800;
constexpr GLenum GL_EXP2                = 0x0801;
constexpr GLenum GL_DEPTH_WRITEMASK     = 0x0B73;
constexpr GLenum GL_RGBA8             = 0x8058;
constexpr GLenum GL_RGBA              = 0x1908;
constexpr GLenum GL_RGB               = 0x1907;

// ---------------------------------------------------------------------------
// GL function pointer types
// ---------------------------------------------------------------------------

// Clear
using PFNGLCLEAR      = void   (GLAPIENTRY *)(GLbitfield mask);
using PFNGLCLEARCOLOR = void   (GLAPIENTRY *)(GLfloat r, GLfloat g, GLfloat b, GLfloat a);
using PFNGLVIEWPORT   = void   (GLAPIENTRY *)(GLint x, GLint y, GLsizei w, GLsizei h);

// Enable / Disable
using PFNGLENABLE      = void   (GLAPIENTRY *)(GLenum cap);
using PFNGLDISABLE     = void   (GLAPIENTRY *)(GLenum cap);
using PFNGLDEPTHFUNC   = void   (GLAPIENTRY *)(GLenum func);
using PFNGLBLENDFUNC   = void   (GLAPIENTRY *)(GLenum sfactor, GLenum dfactor);
using PFNGLCULLFACE    = void   (GLAPIENTRY *)(GLenum mode);
using PFNGLFLUSH       = void   (GLAPIENTRY *)(void);
using PFNGLGETERROR    = GLenum (GLAPIENTRY *)(void);

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
using PFNGLBUFFERSUBDATA  = void (GLAPIENTRY *)(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data);
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
using PFNGLUNIFORM2F           = void  (GLAPIENTRY *)(GLint location, GLfloat v0, GLfloat v1);
using PFNGLUNIFORM3F           = void  (GLAPIENTRY *)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
using PFNGLUNIFORM4F           = void  (GLAPIENTRY *)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
using PFNGLUNIFORM1F           = void  (GLAPIENTRY *)(GLint location, GLfloat v0);
using PFNGLUNIFORM1I           = void  (GLAPIENTRY *)(GLint location, GLint v0);

// Textures
using PFNGLGENTEXTURES          = void  (GLAPIENTRY *)(GLsizei n, GLuint* textures);
using PFNGLDELETETEXTURES        = void  (GLAPIENTRY *)(GLsizei n, const GLuint* textures);
using PFNGLBINDTEXTURE           = void  (GLAPIENTRY *)(GLenum target, GLuint texture);
using PFNGLTEXIMAGE2D            = void  (GLAPIENTRY *)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
using PFNGLTEXSUBIMAGE2D         = void  (GLAPIENTRY *)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels);
using PFNGLTEXPARAMETERI         = void  (GLAPIENTRY *)(GLenum target, GLenum pname, GLint param);
using PFNGLACTIVETEXTURE         = void  (GLAPIENTRY *)(GLenum texture);
using PFNGLGENERATEMIPMAP        = void  (GLAPIENTRY *)(GLenum target);
using PFNGLFOGF                 = void  (GLAPIENTRY *)(GLenum pname, GLfloat param);
using PFNGLFOGFV                = void  (GLAPIENTRY *)(GLenum pname, const GLfloat* params);
using PFNGLFOGI                 = void  (GLAPIENTRY *)(GLenum pname, GLint param);
using PFNGLGETFLOATV            = GLfloat(GLAPIENTRY *)(GLenum pname, GLfloat* params);
using PFNGLDEPTHMASK            = void  (GLAPIENTRY *)(GLboolean flag);
using PFNGLPOLYGONOFFSET        = void  (GLAPIENTRY *)(GLfloat factor, GLfloat units); // Phase 34
using PFNGLBLENDFUNCSEPARATE    = void  (GLAPIENTRY *)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);

// ---------------------------------------------------------------------------
// GL function pointer storage
// ---------------------------------------------------------------------------
struct GLFunctions {
    // Clear
    PFNGLCLEAR      glClear      = nullptr;
    PFNGLCLEARCOLOR glClearColor = nullptr;
    PFNGLVIEWPORT   glViewport   = nullptr;

    // Enable / Disable
    PFNGLENABLE      glEnable      = nullptr;
    PFNGLDISABLE     glDisable     = nullptr;
    PFNGLDEPTHFUNC   glDepthFunc   = nullptr;
    PFNGLBLENDFUNC   glBlendFunc   = nullptr;
    PFNGLCULLFACE    glCullFace    = nullptr;
    PFNGLFLUSH       glFlush       = nullptr;
    PFNGLGETERROR    glGetError    = nullptr;

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
    PFNGLBUFFERSUBDATA  glBufferSubData = nullptr;
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
    PFNGLUNIFORM2F           glUniform2f           = nullptr;
    PFNGLUNIFORM3F           glUniform3f           = nullptr;
    PFNGLUNIFORM4F           glUniform4f           = nullptr;
    PFNGLUNIFORM1F           glUniform1f           = nullptr;
    PFNGLUNIFORM1I           glUniform1i           = nullptr;

    // Textures
    PFNGLGENTEXTURES    glGenTextures    = nullptr;
    PFNGLDELETETEXTURES  glDeleteTextures  = nullptr;
    PFNGLBINDTEXTURE     glBindTexture     = nullptr;
    PFNGLTEXIMAGE2D      glTexImage2D      = nullptr;
    PFNGLTEXSUBIMAGE2D   glTexSubImage2D   = nullptr;
    PFNGLTEXPARAMETERI   glTexParameteri    = nullptr;
    PFNGLACTIVETEXTURE   glActiveTexture   = nullptr;
    PFNGLGENERATEMIPMAP  glGenerateMipmap  = nullptr;
    PFNGLFOGF              glFogf              = nullptr;
    PFNGLFOGFV             glFogfv             = nullptr;
    PFNGLFOGI              glFogi              = nullptr;
    PFNGLGETFLOATV         glGetFloatv         = nullptr;
    PFNGLDEPTHMASK         glDepthMask         = nullptr;
    PFNGLBLENDFUNCSEPARATE glBlendFuncSeparate = nullptr;
    PFNGLPOLYGONOFFSET     glPolygonOffset     = nullptr; // Phase 34
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
    RESOLVE(glBlendFunc,  PFNGLBLENDFUNC, "glBlendFunc");
    RESOLVE(glCullFace,   PFNGLCULLFACE,  "glCullFace");
    RESOLVE(glFlush,      PFNGLFLUSH,     "glFlush");
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
    RESOLVE(glBufferSubData, PFNGLBUFFERSUBDATA, "glBufferSubData");
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
    RESOLVE(glUniform2f,           PFNGLUNIFORM2F,           "glUniform2f");
    RESOLVE(glUniform3f,           PFNGLUNIFORM3F,           "glUniform3f");
    RESOLVE(glUniform4f,           PFNGLUNIFORM4F,           "glUniform4f");
    RESOLVE(glUniform1f,           PFNGLUNIFORM1F,           "glUniform1f");
    RESOLVE(glUniform1i,           PFNGLUNIFORM1I,           "glUniform1i");

    // Textures
    RESOLVE(glGenTextures,    PFNGLGENTEXTURES,    "glGenTextures");
    RESOLVE(glDeleteTextures,  PFNGLDELETETEXTURES,  "glDeleteTextures");
    RESOLVE(glBindTexture,     PFNGLBINDTEXTURE,     "glBindTexture");
    RESOLVE(glTexImage2D,      PFNGLTEXIMAGE2D,      "glTexImage2D");
    RESOLVE(glTexSubImage2D,   PFNGLTEXSUBIMAGE2D,   "glTexSubImage2D");
    RESOLVE(glTexParameteri,   PFNGLTEXPARAMETERI,   "glTexParameteri");
    RESOLVE(glActiveTexture,   PFNGLACTIVETEXTURE,   "glActiveTexture");
    RESOLVE(glGenerateMipmap,  PFNGLGENERATEMIPMAP,  "glGenerateMipmap");
    RESOLVE(glFogf,              PFNGLFOGF,              "glFogf");
    RESOLVE(glFogfv,             PFNGLFOGFV,             "glFogfv");
    RESOLVE(glFogi,              PFNGLFOGI,              "glFogi");
    RESOLVE(glGetFloatv,         PFNGLGETFLOATV,         "glGetFloatv");
    RESOLVE(glDepthMask,         PFNGLDEPTHMASK,         "glDepthMask");
    RESOLVE(glPolygonOffset,     PFNGLPOLYGONOFFSET,     "glPolygonOffset"); // Phase 34
    RESOLVE(glBlendFuncSeparate, PFNGLBLENDFUNCSEPARATE, "glBlendFuncSeparate");

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