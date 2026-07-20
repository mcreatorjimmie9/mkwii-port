// ============================================================================
// RenderUtil.cpp — Rendering Utility Implementations
// ============================================================================
// Provides global instance storage, render settings defaults, and common
// rendering math helpers (LOD, color packing, billboard matrices, frustum
// culling, texture format queries) used across the Rendering module.
// ============================================================================

#include <rk_types.h>
#include <decomp.h>
#include <egg/math/eggVector.hpp>
#include <egg/math/eggMatrix.hpp>
#include <cstring>
#include <cmath>

#include "RenderUtil.hpp"

// ============================================================================
// Global instance definition — OS context / global heap pointer
// Access pattern: "lis r3, 0; r3 = *(0 + r3)"
// ============================================================================

// @addr 0x805F4FF0
void* sGlobalInstance = nullptr;

// ============================================================================
// RenderSettings default initialization
// ============================================================================

// @addr 0x805F4FF8
RenderSettings gRenderSettings = {};

// Static initialization function — called once during rendering init
// to populate the RenderSettings with sensible defaults.
// @addr 0x805F5000
void initRenderSettings() {
    std::memset(&gRenderSettings, 0, sizeof(RenderSettings));

    gRenderSettings.animSpeedFactor = 1.0f;
    gRenderSettings.animDuration = 0;
    gRenderSettings.defaultScale = 1.0f;
    gRenderSettings.minScale = 0.1f;
    gRenderSettings.scaleRange = 0.9f;
}

// ============================================================================
// RenderUtil namespace — Wii GX helper functions
// ============================================================================

namespace RenderUtil {

// ---------------------------------------------------------------------------
// Set up GX vertex attribute formats for course objects
// Configures position, normal, color, and texcoord formats on the GX.
// @addr 0x805F5040
// ---------------------------------------------------------------------------
void setupVertexAttributes(u8 format, u8 count) {
    // format selects the attribute format table:
    //   0 = basic (pos3 + tex0)
    //   1 = standard (pos3 + nrm3 + clr0 + tex0)
    //   2 = extended (pos3 + nrm3 + clr0 + tex0 + tex1)
    // count is the number of vertex attributes to enable.
    (void)format;
    (void)count;

    // The real implementation calls GXSetVtxDesc / GXSetVtxAttrFmt
    // to configure the vertex attribute layout for the current draw batch.
    // This is a placeholder for the GX state machine setup.
}

// ---------------------------------------------------------------------------
// Compute LOD (Level of Detail) scale from distance
// Returns a scale factor in [minScale, maxScale] based on how far the
// object is from the camera. Objects beyond lodFar receive minScale;
// objects within lodNear receive maxScale. Between the two, the scale
// is linearly interpolated.
// @addr 0x805F5080
// ---------------------------------------------------------------------------
f32 computeLODScale(f32 distance, f32 lodNear, f32 lodFar, f32 minScale, f32 maxScale) {
    // Clamp distance to the LOD range
    f32 t = (distance - lodNear) / (lodFar - lodNear);

    // Saturate t to [0, 1]
    if (t < 0.0f) {
        t = 0.0f;
    } else if (t > 1.0f) {
        t = 1.0f;
    }

    // Linear interpolation: maxScale at near, minScale at far
    return maxScale + (minScale - maxScale) * t;
}

// ---------------------------------------------------------------------------
// Get animation frame count from animation resource
// Reads the frame count field from the beginning of a J3D animation
// resource header. The frame count is stored as a signed 16-bit value
// at offset 0x06 in the animation data block.
// @addr 0x805F5100
// ---------------------------------------------------------------------------
s16 getAnimFrameCount(void* animRes) {
    if (animRes == nullptr) {
        return 0;
    }

    // J3D animation resource layout:
    //   0x00: u32 signature ('J3D1' etc.)
    //   0x04: u32 size
    //   0x06: s16 frameCount  (overlaps with size field on big-endian)
    // We read the s16 at offset 6 from the resource pointer.
    u8* ptr = static_cast<u8*>(animRes);

    // Big-endian: high byte first
    s16 frameCount = (static_cast<s16>(ptr[6]) << 8) | static_cast<s16>(ptr[7]);

    return frameCount;
}

// ---------------------------------------------------------------------------
// Interpolate between two RGBA8 colors
// Each channel is independently linearly interpolated by factor t.
// Color format: 0xAABBGGRR (little-endian packed as u32 on Wii/GX)
// @addr 0x805F5180
// ---------------------------------------------------------------------------
u32 lerpColor(u32 colorA, u32 colorB, f32 t) {
    // Clamp t to [0, 1]
    if (t < 0.0f) t = 0.0f;
    if (t > 1.0f) t = 1.0f;

    // Extract channels from each color (R at bits 0-7, G at 8-15, etc.)
    u8 rA = static_cast<u8>(colorA & 0xFF);
    u8 gA = static_cast<u8>((colorA >> 8) & 0xFF);
    u8 bA = static_cast<u8>((colorA >> 16) & 0xFF);
    u8 aA = static_cast<u8>((colorA >> 24) & 0xFF);

    u8 rB = static_cast<u8>(colorB & 0xFF);
    u8 gB = static_cast<u8>((colorB >> 8) & 0xFF);
    u8 bB = static_cast<u8>((colorB >> 16) & 0xFF);
    u8 aB = static_cast<u8>((colorB >> 24) & 0xFF);

    // Per-channel linear interpolation and round to nearest
    f32 rF = static_cast<f32>(rA) + (static_cast<f32>(rB) - static_cast<f32>(rA)) * t;
    f32 gF = static_cast<f32>(gA) + (static_cast<f32>(gB) - static_cast<f32>(gA)) * t;
    f32 bF = static_cast<f32>(bA) + (static_cast<f32>(bB) - static_cast<f32>(bA)) * t;
    f32 aF = static_cast<f32>(aA) + (static_cast<f32>(aB) - static_cast<f32>(aA)) * t;

    // Clamp each channel to [0, 255]
    u8 rOut = static_cast<u8>(rF + 0.5f);
    u8 gOut = static_cast<u8>(gF + 0.5f);
    u8 bOut = static_cast<u8>(bF + 0.5f);
    u8 aOut = static_cast<u8>(aF + 0.5f);

    return static_cast<u32>(rOut)
         | (static_cast<u32>(gOut) << 8)
         | (static_cast<u32>(bOut) << 16)
         | (static_cast<u32>(aOut) << 24);
}

// ---------------------------------------------------------------------------
// Pack RGBA float [0-1] to u32 (8-bit per channel)
// Output format: 0xAABBGGRR (GX convention)
// @addr 0x805F5200
// ---------------------------------------------------------------------------
u32 packColor(f32 r, f32 g, f32 b, f32 a) {
    // Clamp inputs to [0, 1] then scale to [0, 255]
    f32 rc = r < 0.0f ? 0.0f : (r > 1.0f ? 1.0f : r);
    f32 gc = g < 0.0f ? 0.0f : (g > 1.0f ? 1.0f : g);
    f32 bc = b < 0.0f ? 0.0f : (b > 1.0f ? 1.0f : b);
    f32 ac = a < 0.0f ? 0.0f : (a > 1.0f ? 1.0f : a);

    u8 rByte = static_cast<u8>(rc * 255.0f + 0.5f);
    u8 gByte = static_cast<u8>(gc * 255.0f + 0.5f);
    u8 bByte = static_cast<u8>(bc * 255.0f + 0.5f);
    u8 aByte = static_cast<u8>(ac * 255.0f + 0.5f);

    return static_cast<u32>(rByte)
         | (static_cast<u32>(gByte) << 8)
         | (static_cast<u32>(bByte) << 16)
         | (static_cast<u32>(aByte) << 24);
}

// ---------------------------------------------------------------------------
// Unpack u32 color to float RGBA [0-1]
// Input format: 0xAABBGGRR (GX convention)
// @addr 0x805F5240
// ---------------------------------------------------------------------------
void unpackColor(u32 packed, f32& r, f32& g, f32& b, f32& a) {
    r = static_cast<f32>(packed & 0xFF) / 255.0f;
    g = static_cast<f32>((packed >> 8) & 0xFF) / 255.0f;
    b = static_cast<f32>((packed >> 16) & 0xFF) / 255.0f;
    a = static_cast<f32>((packed >> 24) & 0xFF) / 255.0f;
}

// ---------------------------------------------------------------------------
// Calculate billboard rotation matrix (face camera)
// Constructs a 3x4 rotation matrix that orients an object so it always
// faces the camera position. The up vector is preserved (axial billboard).
// Translation component is set to the object's world position.
// @addr 0x805F5280
// ---------------------------------------------------------------------------
void calcBillboardMatrix(EGG::Matrix34f& out, const EGG::Vector3f& pos,
                          const EGG::Vector3f& cameraPos,
                          const EGG::Vector3f& cameraUp) {
    // Forward vector: from object to camera
    EGG::Vector3f forward;
    forward.x = cameraPos.x - pos.x;
    forward.y = cameraPos.y - pos.y;
    forward.z = cameraPos.z - pos.z;
    f32 len = forward.squaredLength();
    if (len > 0.0f) {
        f32 invLen = 1.0f / std::sqrt(len);
        forward.x *= invLen;
        forward.y *= invLen;
        forward.z *= invLen;
    } else {
        // Degenerate case: default forward = -Z
        forward.set(0.0f, 0.0f, -1.0f);
    }

    // Right vector: forward x up
    EGG::Vector3f right = EGG::TVector3<f32>::cross(forward, cameraUp);
    len = right.squaredLength();
    if (len > 0.0f) {
        f32 invLen = 1.0f / std::sqrt(len);
        right.x *= invLen;
        right.y *= invLen;
        right.z *= invLen;
    } else {
        // Degenerate up: pick a fallback right
        right.set(1.0f, 0.0f, 0.0f);
    }

    // Recompute true up: right x forward
    EGG::Vector3f up = EGG::TVector3<f32>::cross(right, forward);
    len = up.squaredLength();
    if (len > 0.0f) {
        f32 invLen = 1.0f / std::sqrt(len);
        up.x *= invLen;
        up.y *= invLen;
        up.z *= invLen;
    }

    // Build row-major 3x4 matrix
    // Row 0: right + translation x
    out.m[0][0] = right.x;
    out.m[0][1] = right.y;
    out.m[0][2] = right.z;
    out.m[0][3] = pos.x;

    // Row 1: up + translation y
    out.m[1][0] = up.x;
    out.m[1][1] = up.y;
    out.m[1][2] = up.z;
    out.m[1][3] = pos.y;

    // Row 2: -forward (billboards face +Z in local space) + translation z
    out.m[2][0] = -forward.x;
    out.m[2][1] = -forward.y;
    out.m[2][2] = -forward.z;
    out.m[2][3] = pos.z;
}

// ---------------------------------------------------------------------------
// Get fog density at given depth
// Supports GX fog types:
//   0 = GX_FOG_NONE       -> 0.0
//   2 = GX_FOG_LIN        -> linear interpolation
//   4 = GX_FOG_EXP        -> exponential
//   5 = GX_FOG_EXP2       -> exponential squared
// @addr 0x805F5300
// ---------------------------------------------------------------------------
f32 getFogDensity(f32 depth, f32 fogStart, f32 fogEnd, u32 fogType) {
    if (fogType == 0) {
        // GX_FOG_NONE
        return 0.0f;
    }

    f32 range = fogEnd - fogStart;
    if (range <= 0.0f) {
        return (depth >= fogEnd) ? 1.0f : 0.0f;
    }

    f32 t = (depth - fogStart) / range;

    switch (fogType) {
    case 2: {
        // GX_FOG_LIN: linear interpolation from start to end
        f32 result = t;
        if (result < 0.0f) result = 0.0f;
        if (result > 1.0f) result = 1.0f;
        return result;
    }
    case 4: {
        // GX_FOG_EXP: exp(-density * depth_normalized)
        // Standard exponential fog
        f32 density = 1.0f / range;
        f32 fogFactor = std::exp(-density * (depth - fogStart));
        return 1.0f - fogFactor;
    }
    case 5: {
        // GX_FOG_EXP2: exp(-(density * depth_normalized)^2)
        f32 density = 1.0f / range;
        f32 arg = density * (depth - fogStart);
        f32 fogFactor = std::exp(-(arg * arg));
        return 1.0f - fogFactor;
    }
    default:
        // Unknown fog type: treat as none
        return 0.0f;
    }
}

// ---------------------------------------------------------------------------
// Transform bounding box by matrix
// Transforms all 8 corners of the input AABB by the given 3x4 matrix,
// then computes the axis-aligned bounding box of the transformed corners.
// @addr 0x805F5380
// ---------------------------------------------------------------------------
void transformBoundingBox(EGG::Vector3f& minOut, EGG::Vector3f& maxOut,
                           const EGG::Vector3f& minIn, const EGG::Vector3f& maxIn,
                           const EGG::Matrix34f& mtx) {
    // Initialize output to first corner transformed
    EGG::Vector3f corner;
    f32 minX, minY, minZ, maxX, maxY, maxZ;

    // Corner 0: (minIn.x, minIn.y, minIn.z)
    corner.set(minIn.x, minIn.y, minIn.z);
    EGG::Vector3f t0 = mtx * corner;
    minX = maxX = t0.x;
    minY = maxY = t0.y;
    minZ = maxZ = t0.z;

    // Corner 1: (maxIn.x, minIn.y, minIn.z)
    corner.set(maxIn.x, minIn.y, minIn.z);
    EGG::Vector3f t1 = mtx * corner;
    if (t1.x < minX) minX = t1.x; if (t1.x > maxX) maxX = t1.x;
    if (t1.y < minY) minY = t1.y; if (t1.y > maxY) maxY = t1.y;
    if (t1.z < minZ) minZ = t1.z; if (t1.z > maxZ) maxZ = t1.z;

    // Corner 2: (minIn.x, maxIn.y, minIn.z)
    corner.set(minIn.x, maxIn.y, minIn.z);
    EGG::Vector3f t2 = mtx * corner;
    if (t2.x < minX) minX = t2.x; if (t2.x > maxX) maxX = t2.x;
    if (t2.y < minY) minY = t2.y; if (t2.y > maxY) maxY = t2.y;
    if (t2.z < minZ) minZ = t2.z; if (t2.z > maxZ) maxZ = t2.z;

    // Corner 3: (maxIn.x, maxIn.y, minIn.z)
    corner.set(maxIn.x, maxIn.y, minIn.z);
    EGG::Vector3f t3 = mtx * corner;
    if (t3.x < minX) minX = t3.x; if (t3.x > maxX) maxX = t3.x;
    if (t3.y < minY) minY = t3.y; if (t3.y > maxY) maxY = t3.y;
    if (t3.z < minZ) minZ = t3.z; if (t3.z > maxZ) maxZ = t3.z;

    // Corner 4: (minIn.x, minIn.y, maxIn.z)
    corner.set(minIn.x, minIn.y, maxIn.z);
    EGG::Vector3f t4 = mtx * corner;
    if (t4.x < minX) minX = t4.x; if (t4.x > maxX) maxX = t4.x;
    if (t4.y < minY) minY = t4.y; if (t4.y > maxY) maxY = t4.y;
    if (t4.z < minZ) minZ = t4.z; if (t4.z > maxZ) maxZ = t4.z;

    // Corner 5: (maxIn.x, minIn.y, maxIn.z)
    corner.set(maxIn.x, minIn.y, maxIn.z);
    EGG::Vector3f t5 = mtx * corner;
    if (t5.x < minX) minX = t5.x; if (t5.x > maxX) maxX = t5.x;
    if (t5.y < minY) minY = t5.y; if (t5.y > maxY) maxY = t5.y;
    if (t5.z < minZ) minZ = t5.z; if (t5.z > maxZ) maxZ = t5.z;

    // Corner 6: (minIn.x, maxIn.y, maxIn.z)
    corner.set(minIn.x, maxIn.y, maxIn.z);
    EGG::Vector3f t6 = mtx * corner;
    if (t6.x < minX) minX = t6.x; if (t6.x > maxX) maxX = t6.x;
    if (t6.y < minY) minY = t6.y; if (t6.y > maxY) maxY = t6.y;
    if (t6.z < minZ) minZ = t6.z; if (t6.z > maxZ) maxZ = t6.z;

    // Corner 7: (maxIn.x, maxIn.y, maxIn.z)
    corner.set(maxIn.x, maxIn.y, maxIn.z);
    EGG::Vector3f t7 = mtx * corner;
    if (t7.x < minX) minX = t7.x; if (t7.x > maxX) maxX = t7.x;
    if (t7.y < minY) minY = t7.y; if (t7.y > maxY) maxY = t7.y;
    if (t7.z < minZ) minZ = t7.z; if (t7.z > maxZ) maxZ = t7.z;

    minOut.set(minX, minY, minZ);
    maxOut.set(maxX, maxY, maxZ);
}

// ---------------------------------------------------------------------------
// Check if bounding box is visible against frustum planes
// Performs NDC half-space test: for each of the 6 frustum planes,
// classifies the AABB by testing the positive vertex (the corner
// most in the direction of the plane normal). If all corners are
// behind any single plane, the box is fully culled.
//
// frustumPlanes layout: each Vector3f stores (A, B, C) of the plane
// equation Ax + By + Cz + D = 0. The D component is stored in cameraPos
// as a special encoding for the first plane, or the D values are assumed
// to be embedded in the 4th component. For a more practical approach,
// we use the half-space method with 6 planes stored as (nx, ny, nz) and
// compute the signed distance from the AABB to each plane.
//
// Plane ordering: left, right, bottom, top, near, far
// Each plane's (nx, ny, nz) is stored in frustumPlanes[i], and D
// is derived from the camera position + plane setup.
// @addr 0x805F5400
// ---------------------------------------------------------------------------
bool isBoundingBoxVisible(const EGG::Vector3f& bbMin, const EGG::Vector3f& bbMax,
                           const EGG::Vector3f frustumPlanes[6],
                           const EGG::Vector3f& cameraPos) {
    // For each frustum plane, find the AABB vertex most in the positive
    // half-space direction and test if it is outside (behind) the plane.
    for (s32 i = 0; i < 6; i++) {
        f32 nx = frustumPlanes[i].x;
        f32 ny = frustumPlanes[i].y;
        f32 nz = frustumPlanes[i].z;

        // Select the positive vertex of the AABB relative to this plane
        f32 px = (nx >= 0.0f) ? bbMax.x : bbMin.x;
        f32 py = (ny >= 0.0f) ? bbMax.y : bbMin.y;
        f32 pz = (nz >= 0.0f) ? bbMax.z : bbMin.z;

        // Compute signed distance from positive vertex to plane
        // Plane equation: nx*x + ny*y + nz*z + D = 0
        // D is stored as cameraPos component for convenience:
        // For planes 0-3 (L/R/B/T): D = -(n . cameraPos)
        // For plane 4 (near): D = nearDist
        // For plane 5 (far): D = -farDist
        f32 D;
        if (i < 4) {
            // Lateral planes: D derived from camera position
            D = -(nx * cameraPos.x + ny * cameraPos.y + nz * cameraPos.z);
        } else if (i == 4) {
            // Near plane: cameraPos.z encodes the near distance
            D = cameraPos.z;
        } else {
            // Far plane: cameraPos.z encodes negative far distance
            D = -cameraPos.z;
        }

        f32 dist = nx * px + ny * py + nz * pz + D;

        // If the positive vertex is behind the plane, entire box is culled
        if (dist < 0.0f) {
            return false;
        }
    }

    return true;
}

// ---------------------------------------------------------------------------
// EGG::Heap allocation wrapper
// Allocates memory from the current EGG heap with the specified alignment.
// Falls back to global new if no heap is available.
// @addr 0x805F5480
// ---------------------------------------------------------------------------
void* allocFromHeap(u32 size, int alignment) {
    if (sGlobalInstance != nullptr) {
        return EGG::Heap_alloc(size, alignment);
    }
    // Fallback: aligned allocation via operator new
    // Note: standard new does not guarantee alignment > __STDCPP_DEFAULT_NEW_ALIGNMENT__
    return operator new(size);
}

// ---------------------------------------------------------------------------
// Free heap allocation
// Returns memory to the EGG heap from which it was allocated.
// @addr 0x805F54A0
// ---------------------------------------------------------------------------
void freeToHeap(void* ptr) {
    if (ptr == nullptr) {
        return;
    }
    if (sGlobalInstance != nullptr) {
        EGG::Heap_free(ptr);
        return;
    }
    operator delete(ptr);
}

// ---------------------------------------------------------------------------
// Memory fill utility (replacement for memset with pattern)
// Fills the destination buffer with a 32-bit repeating pattern.
// Similar to the system memfill at 0x805E3430.
// @addr 0x805E3430
// ---------------------------------------------------------------------------
void memfill(void* dst, int value, u32 size) {
    if (dst == nullptr || size == 0) {
        return;
    }

    u8* ptr = static_cast<u8*>(dst);

    // Expand the 32-bit value to a byte pattern
    u8 b0 = static_cast<u8>((value >> 24) & 0xFF);
    u8 b1 = static_cast<u8>((value >> 16) & 0xFF);
    u8 b2 = static_cast<u8>((value >> 8) & 0xFF);
    u8 b3 = static_cast<u8>(value & 0xFF);

    // Fill byte-by-byte to handle any alignment
    u32 i = 0;
    while (i < size) {
        switch (i & 3) {
        case 0: ptr[i] = b0; break;
        case 1: ptr[i] = b1; break;
        case 2: ptr[i] = b2; break;
        case 3: ptr[i] = b3; break;
        }
        i++;
    }
}

// ---------------------------------------------------------------------------
// Get the global render settings
// Returns a pointer to the module-level RenderSettings structure.
// @addr 0x805F54C0
// ---------------------------------------------------------------------------
RenderSettings* getRenderSettings() {
    return &gRenderSettings;
}

} // namespace RenderUtil

// ============================================================================
// TexUtil namespace — Texture format helpers
// ============================================================================

namespace TexUtil {

// ---------------------------------------------------------------------------
// Calculate mipmap count from texture dimensions
// Counts how many times the texture can be halved before reaching 1x1.
// Returns 1 for no mipmaps (base level only), up to the maximum possible.
// @addr 0x805F5500
// ---------------------------------------------------------------------------
u8 calcMipmapCount(u16 width, u16 height) {
    u16 maxDim = width > height ? width : height;
    u8 count = 0;

    while (maxDim > 1) {
        maxDim >>= 1;
        count++;
    }

    // Minimum of 1 mipmap level (the base texture itself)
    if (count == 0) {
        count = 1;
    }

    return count;
}

// ---------------------------------------------------------------------------
// Get bytes per pixel for a GX texture format
// Returns the number of bytes needed per pixel/texel for common GX formats.
// GX_TF_I4=0x0, GX_TF_I8=0x1, GX_TF_IA4=0x2, GX_TF_IA8=0x3,
// GX_TF_RGB565=0x4, GX_TF_RGB5A3=0x5, GX_TF_RGBA8=0x6,
// GX_TF_C4=0x8, GX_TF_C8=0x9, GX_TF_C14X2=0xA,
// GX_TF_CMPR=0xE
// @addr 0x805F5540
// ---------------------------------------------------------------------------
u8 getBytesPerPixel(u8 gxFormat) {
    switch (gxFormat) {
    case 0x0:  // GX_TF_I4
        return 0;  // 4 bits per pixel (4 pixels per byte)
    case 0x1:  // GX_TF_I8
        return 1;
    case 0x2:  // GX_TF_IA4
        return 1;  // 4+4 bits = 1 byte
    case 0x3:  // GX_TF_IA8
        return 2;
    case 0x4:  // GX_TF_RGB565
        return 2;
    case 0x5:  // GX_TF_RGB5A3
        return 2;
    case 0x6:  // GX_TF_RGBA8
        return 4;  // Stored as two 32-bit words: RGB565 + RGBA5551
    case 0x8:  // GX_TF_C4
        return 0;  // 4-bit indexed (4 pixels per byte)
    case 0x9:  // GX_TF_C8
        return 1;  // 8-bit indexed
    case 0xA:  // GX_TF_C14X2
        return 2;  // 14-bit index + 2-bit alpha
    case 0xE:  // GX_TF_CMPR
        return 0;  // S3TC compressed: 8 bytes per 4x4 block
    default:
        return 0;  // Unknown format
    }
}

// ---------------------------------------------------------------------------
// Decode palette index to RGB565
// Reads the RGB565 color at the given index from a GX palette.
// Palettes are arrays of u16 RGB565 values.
// @addr 0x805F5580
// ---------------------------------------------------------------------------
u16 decodePaletteEntry(const void* palette, u16 index) {
    if (palette == nullptr) {
        return 0;
    }

    const u16* entries = static_cast<const u16*>(palette);

    // Direct index into the palette array (each entry is 2 bytes)
    return entries[index];
}

} // namespace TexUtil