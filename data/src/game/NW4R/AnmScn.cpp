#include "AnmScn.hpp"
#include "AnmObjTexPat.hpp"
#include "AnmObjTexSrt.hpp"
#include "AnmObjMatClr.hpp"
#include "AnmObjChr.hpp"
#include "G3dObj.hpp"
#include "ResTex.hpp"
#include <common.h>
#include <cstring>

// ============================================================================
// AnmScn Implementation
// ============================================================================
// NW4R animation scene container — manages a collection of typed animation
// objects and orchestrates their collective calc/apply lifecycle.
// ============================================================================

// ============================================================================
// AnmScn_Create()
// 0x80601E00
// ============================================================================
// Create an animation scene from a SCN0 resource, binding all child
// animation objects to the target model.
// ============================================================================
AnmScnData* AnmScn_Create(AnmScnData* obj, ResAnmScn* res, G3dObjData* model) {
    if (!obj) return NULL;

    std::memset(obj, 0, sizeof(AnmScnData));

    obj->resource = res;
    obj->targetModel = model;
    obj->globalFrame = 0.0f;
    obj->globalFrameRate = 1.0f;
    obj->globalPlayMode = ANM_PLAY_LOOP;
    obj->flags = ANMSCN_FLAG_PLAYING;

    if (res) {
        AnmScnInfo info;
        AnmScn_GetScnInfo(res, &info);
        obj->globalDuration = info.duration;
        obj->texPatCount = static_cast<u8>(info.texPatCount);
        obj->texSrtCount = static_cast<u8>(info.texSrtCount);
        obj->matClrCount = static_cast<u8>(info.matClrCount);
        obj->chrCount = static_cast<u8>(info.chrCount);
        obj->shpCount = static_cast<u8>(info.shpCount);
    }

    return obj;
}

// ============================================================================
// AnmScn_Destroy()
// 0x80601EC0
// ============================================================================
void AnmScn_Destroy(AnmScnData* obj) {
    if (!obj) return;

    // Destroy all child animation objects
    for (u8 i = 0; i < obj->texPatCount && i < ANMSCN_MAX_TEXPAT; i++) {
        if (obj->texPatAnims[i]) {
            AnmObjTexPat_Destroy(obj->texPatAnims[i]);
            obj->texPatAnims[i] = NULL;
        }
    }
    for (u8 i = 0; i < obj->texSrtCount && i < ANMSCN_MAX_TEXSRT; i++) {
        if (obj->texSrtAnims[i]) {
            AnmObjTexSrt_Destroy(obj->texSrtAnims[i]);
            obj->texSrtAnims[i] = NULL;
        }
    }
    for (u8 i = 0; i < obj->matClrCount && i < ANMSCN_MAX_MATCLR; i++) {
        if (obj->matClrAnims[i]) {
            AnmObjMatClr_Destroy(obj->matClrAnims[i]);
            obj->matClrAnims[i] = NULL;
        }
    }
    for (u8 i = 0; i < obj->chrCount && i < ANMSCN_MAX_CHR; i++) {
        if (obj->chrAnims[i]) {
            AnmObjChr_Destroy(obj->chrAnims[i]);
            obj->chrAnims[i] = NULL;
        }
    }

    obj->resource = NULL;
    obj->targetModel = NULL;
    obj->flags = 0;
}

// ============================================================================
// AnmScn_Calc()
// 0x80601F60
// ============================================================================
// Advance all child animations by the given delta time.
// ============================================================================
void AnmScn_Calc(AnmScnData* obj, f32 deltaTime) {
    if (!obj || !(obj->flags & ANMSCN_FLAG_PLAYING)) return;

    f32 scaledDelta = deltaTime * obj->globalFrameRate;

    // Calc all TexPat animations
    for (u8 i = 0; i < obj->texPatCount && i < ANMSCN_MAX_TEXPAT; i++) {
        if (obj->texPatAnims[i]) {
            AnmObjTexPat_Calc(obj->texPatAnims[i], scaledDelta);
        }
    }

    // Calc all TexSrt animations
    for (u8 i = 0; i < obj->texSrtCount && i < ANMSCN_MAX_TEXSRT; i++) {
        if (obj->texSrtAnims[i]) {
            AnmObjTexSrt_Calc(obj->texSrtAnims[i], scaledDelta);
        }
    }

    // Calc all MatClr animations
    for (u8 i = 0; i < obj->matClrCount && i < ANMSCN_MAX_MATCLR; i++) {
        if (obj->matClrAnims[i]) {
            AnmObjMatClr_Calc(obj->matClrAnims[i], scaledDelta);
        }
    }

    // Calc all Chr animations
    for (u8 i = 0; i < obj->chrCount && i < ANMSCN_MAX_CHR; i++) {
        if (obj->chrAnims[i]) {
            AnmObjChr_Calc(obj->chrAnims[i], scaledDelta);
        }
    }

    // Advance global frame
    obj->globalFrame += scaledDelta;
}

// ============================================================================
// AnmScn_Apply()
// 0x80602060
// ============================================================================
// Apply all child animations to the target model.
// Each animation type applies to different parts of the rendering state.
// ============================================================================
void AnmScn_Apply(AnmScnData* obj) {
    if (!obj) return;

    // Apply MatClr animations (must come before shape draw)
    for (u8 i = 0; i < obj->matClrCount && i < ANMSCN_MAX_MATCLR; i++) {
        if (obj->matClrAnims[i]) {
            AnmObjMatClr_Apply(obj->matClrAnims[i]);
        }
    }

    // Apply Chr (visibility) animations
    if (obj->targetModel && obj->targetModel->shapeDrawFlags) {
        u32 visMask = 0xFFFFFFFF; // default: all visible
        for (u8 i = 0; i < obj->chrCount && i < ANMSCN_MAX_CHR; i++) {
            if (obj->chrAnims[i]) {
                // Combine visibility masks (AND)
                visMask &= obj->chrAnims[i]->currentMask;
            }
        }
        // Apply combined mask to model shapes
        for (u16 s = 0; s < obj->targetModel->_1D; s++) {
            if (s < 32 && !(visMask & BIT(s))) {
                obj->targetModel->shapeDrawFlags[s] = 0;
            }
        }
    }

    // TexPat and TexSrt are applied per-material during draw
}

// ============================================================================
// AnmScn_SetFrame()
// 0x80602140
// ============================================================================
void AnmScn_SetFrame(AnmScnData* obj, f32 frame) {
    if (!obj) return;

    obj->globalFrame = frame;
    obj->flags &= ~ANMSCN_FLAG_FINISHED;
    obj->flags |= ANMSCN_FLAG_PLAYING;

    for (u8 i = 0; i < obj->texPatCount && i < ANMSCN_MAX_TEXPAT; i++) {
        if (obj->texPatAnims[i]) AnmObjTexPat_SetFrame(obj->texPatAnims[i], frame);
    }
    for (u8 i = 0; i < obj->texSrtCount && i < ANMSCN_MAX_TEXSRT; i++) {
        if (obj->texSrtAnims[i]) AnmObjTexSrt_SetFrame(obj->texSrtAnims[i], frame);
    }
    for (u8 i = 0; i < obj->matClrCount && i < ANMSCN_MAX_MATCLR; i++) {
        if (obj->matClrAnims[i]) AnmObjMatClr_SetFrame(obj->matClrAnims[i], frame);
    }
    for (u8 i = 0; i < obj->chrCount && i < ANMSCN_MAX_CHR; i++) {
        if (obj->chrAnims[i]) AnmObjChr_SetFrame(obj->chrAnims[i], frame);
    }
}

// ============================================================================
// AnmScn_GetFrame()
// 0x806021E0
// ============================================================================
f32 AnmScn_GetFrame(const AnmScnData* obj) {
    if (!obj) return 0.0f;
    return obj->globalFrame;
}

// ============================================================================
// AnmScn_GetDuration()
// 0x80602200
// ============================================================================
f32 AnmScn_GetDuration(const AnmScnData* obj) {
    if (!obj) return 0.0f;
    return obj->globalDuration;
}

// ============================================================================
// AnmScn_SetFrameRate()
// 0x80602220
// ============================================================================
void AnmScn_SetFrameRate(AnmScnData* obj, f32 rate) {
    if (!obj) return;
    obj->globalFrameRate = rate;

    for (u8 i = 0; i < obj->texPatCount && i < ANMSCN_MAX_TEXPAT; i++) {
        if (obj->texPatAnims[i]) AnmObjTexPat_SetFrameRate(obj->texPatAnims[i], rate);
    }
    for (u8 i = 0; i < obj->texSrtCount && i < ANMSCN_MAX_TEXSRT; i++) {
        if (obj->texSrtAnims[i]) AnmObjTexSrt_SetFrameRate(obj->texSrtAnims[i], rate);
    }
    for (u8 i = 0; i < obj->matClrCount && i < ANMSCN_MAX_MATCLR; i++) {
        if (obj->matClrAnims[i]) AnmObjMatClr_SetFrameRate(obj->matClrAnims[i], rate);
    }
    for (u8 i = 0; i < obj->chrCount && i < ANMSCN_MAX_CHR; i++) {
        if (obj->chrAnims[i]) AnmObjChr_SetFrameRate(obj->chrAnims[i], rate);
    }
}

// ============================================================================
// AnmScn_SetPlayMode()
// 0x80602260
// ============================================================================
void AnmScn_SetPlayMode(AnmScnData* obj, u8 mode) {
    if (!obj) return;
    obj->globalPlayMode = mode;

    for (u8 i = 0; i < obj->texPatCount && i < ANMSCN_MAX_TEXPAT; i++) {
        if (obj->texPatAnims[i]) AnmObjTexPat_SetPlayMode(obj->texPatAnims[i], mode);
    }
    for (u8 i = 0; i < obj->texSrtCount && i < ANMSCN_MAX_TEXSRT; i++) {
        if (obj->texSrtAnims[i]) AnmObjTexSrt_SetPlayMode(obj->texSrtAnims[i], mode);
    }
    for (u8 i = 0; i < obj->matClrCount && i < ANMSCN_MAX_MATCLR; i++) {
        if (obj->matClrAnims[i]) AnmObjMatClr_SetPlayMode(obj->matClrAnims[i], mode);
    }
    for (u8 i = 0; i < obj->chrCount && i < ANMSCN_MAX_CHR; i++) {
        if (obj->chrAnims[i]) AnmObjChr_SetPlayMode(obj->chrAnims[i], mode);
    }
}

// ============================================================================
// AnmScn_IsFinished()
// 0x806022A0
// ============================================================================
BOOL AnmScn_IsFinished(const AnmScnData* obj) {
    if (!obj) return TRUE;

    // Scene is finished when ALL children are finished
    for (u8 i = 0; i < obj->texPatCount && i < ANMSCN_MAX_TEXPAT; i++) {
        if (obj->texPatAnims[i] && !AnmObjTexPat_IsFinished(obj->texPatAnims[i])) {
            return FALSE;
        }
    }
    for (u8 i = 0; i < obj->texSrtCount && i < ANMSCN_MAX_TEXSRT; i++) {
        if (obj->texSrtAnims[i] && !AnmObjTexSrt_IsFinished(obj->texSrtAnims[i])) {
            return FALSE;
        }
    }
    for (u8 i = 0; i < obj->matClrCount && i < ANMSCN_MAX_MATCLR; i++) {
        if (obj->matClrAnims[i] && !AnmObjMatClr_IsFinished(obj->matClrAnims[i])) {
            return FALSE;
        }
    }
    for (u8 i = 0; i < obj->chrCount && i < ANMSCN_MAX_CHR; i++) {
        if (obj->chrAnims[i] && !AnmObjChr_IsFinished(obj->chrAnims[i])) {
            return FALSE;
        }
    }

    return TRUE;
}

// ============================================================================
// AnmScn_Pause()
// 0x806022E0
// ============================================================================
void AnmScn_Pause(AnmScnData* obj) {
    if (!obj) return;
    obj->flags |= ANMSCN_FLAG_PAUSED;
    obj->flags &= ~ANMSCN_FLAG_PLAYING;
}

// ============================================================================
// AnmScn_Resume()
// 0x80602300
// ============================================================================
void AnmScn_Resume(AnmScnData* obj) {
    if (!obj) return;
    obj->flags &= ~ANMSCN_FLAG_PAUSED;
    obj->flags |= ANMSCN_FLAG_PLAYING;
}

// ============================================================================
// AnmScn_Reset()
// 0x80602320
// ============================================================================
void AnmScn_Reset(AnmScnData* obj) {
    if (!obj) return;
    AnmScn_SetFrame(obj, 0.0f);
}

// ============================================================================
// AnmScn_AttachTexPat()
// 0x80602380
// ============================================================================
BOOL AnmScn_AttachTexPat(AnmScnData* obj, AnmObjTexPatData* anm) {
    if (!obj || !anm) return FALSE;
    if (obj->texPatCount >= ANMSCN_MAX_TEXPAT) return FALSE;

    obj->texPatAnims[obj->texPatCount] = anm;
    obj->texPatCount++;
    return TRUE;
}

// ============================================================================
// AnmScn_AttachTexSrt()
// 0x806023E0
// ============================================================================
BOOL AnmScn_AttachTexSrt(AnmScnData* obj, AnmObjTexSrtData* anm) {
    if (!obj || !anm) return FALSE;
    if (obj->texSrtCount >= ANMSCN_MAX_TEXSRT) return FALSE;

    obj->texSrtAnims[obj->texSrtCount] = anm;
    obj->texSrtCount++;
    return TRUE;
}

// ============================================================================
// AnmScn_AttachMatClr()
// 0x80602440
// ============================================================================
BOOL AnmScn_AttachMatClr(AnmScnData* obj, AnmObjMatClrData* anm) {
    if (!obj || !anm) return FALSE;
    if (obj->matClrCount >= ANMSCN_MAX_MATCLR) return FALSE;

    obj->matClrAnims[obj->matClrCount] = anm;
    obj->matClrCount++;
    return TRUE;
}

// ============================================================================
// AnmScn_GetTexPat()
// 0x806024A0
// ============================================================================
AnmObjTexPatData* AnmScn_GetTexPat(AnmScnData* obj, u8 idx) {
    if (!obj || idx >= obj->texPatCount || idx >= ANMSCN_MAX_TEXPAT) return NULL;
    return obj->texPatAnims[idx];
}

// ============================================================================
// AnmScn_GetTexSrt()
// 0x806024E0
// ============================================================================
AnmObjTexSrtData* AnmScn_GetTexSrt(AnmScnData* obj, u8 idx) {
    if (!obj || idx >= obj->texSrtCount || idx >= ANMSCN_MAX_TEXSRT) return NULL;
    return obj->texSrtAnims[idx];
}

// ============================================================================
// AnmScn_GetScnInfo()
// 0x80602520
// ============================================================================
void AnmScn_GetScnInfo(ResAnmScn* res, AnmScnInfo* out) {
    if (!res || !out) return;
    // In real NW4R, this parses the SCN0 resource header.
    out->texPatCount = 0;
    out->texSrtCount = 0;
    out->matClrCount = 0;
    out->chrCount = 0;
    out->shpCount = 0;
    out->_0A = 0;
    out->duration = 60.0f;
}

// @addr 0x80602560 (estimated)
// AnmScn_GetFrameCount — Get the total number of frames in the scene.
// Returns the scene duration as a frame count at 60fps.
f32 AnmScn_GetFrameCount(const AnmScnData* obj) {
    if (!obj) return 0.0f;
    return obj->globalDuration;
}

// @addr 0x80602580 (estimated)
// AnmScn_GetAnimationCount — Get the total number of child animations.
u16 AnmScn_GetAnimationCount(const AnmScnData* obj) {
    if (!obj) return 0;
    return (u16)(obj->texPatCount + obj->texSrtCount +
                 obj->matClrCount + obj->chrCount + obj->shpCount);
}

// @addr 0x806025A0 (estimated)
// AnmScn_GetAnimation — Get a child animation by type and index.
// Returns nullptr if the type/index is out of range.
void* AnmScn_GetAnimation(AnmScnData* obj, u8 animType, u8 index) {
    if (!obj) return NULL;
    switch (animType) {
    case 0: // TexPat
        return AnmScn_GetTexPat(obj, index);
    case 1: // TexSrt
        return AnmScn_GetTexSrt(obj, index);
    case 2: // MatClr
        if (index < obj->matClrCount && index < ANMSCN_MAX_MATCLR)
            return obj->matClrAnims[index];
        break;
    case 3: // Chr
        if (index < obj->chrCount && index < ANMSCN_MAX_CHR)
            return obj->chrAnims[index];
        break;
    }
    return NULL;
}

// @addr 0x806025C0 (estimated)
// AnmScn_Play — Start playing the animation scene.
void AnmScn_Play(AnmScnData* obj) {
    if (!obj) return;
    obj->flags |= ANMSCN_FLAG_PLAYING;
    obj->flags &= ~ANMSCN_FLAG_PAUSED;
    obj->flags &= ~ANMSCN_FLAG_FINISHED;
}

// @addr 0x806025E0 (estimated)
// AnmScn_Stop — Stop and reset the animation scene.
void AnmScn_Stop(AnmScnData* obj) {
    if (!obj) return;
    obj->flags &= ~ANMSCN_FLAG_PLAYING;
    obj->flags &= ~ANMSCN_FLAG_PAUSED;
    AnmScn_SetFrame(obj, 0.0f);
}

// @addr 0x80602600 (estimated)
// AnmScn_Attach — Generic attach for any animation type.
BOOL AnmScn_Attach(AnmScnData* obj, u8 animType, void* anm) {
    if (!obj || !anm) return FALSE;
    switch (animType) {
    case 0: return AnmScn_AttachTexPat(obj, (AnmObjTexPatData*)anm);
    case 1: return AnmScn_AttachTexSrt(obj, (AnmObjTexSrtData*)anm);
    case 2: return AnmScn_AttachMatClr(obj, (AnmObjMatClrData*)anm);
    default: return FALSE;
    }
}

// @addr 0x80602620 (estimated)
// AnmScn_GetTargetModel — Get the model this scene is attached to.
G3dObjData* AnmScn_GetTargetModel(const AnmScnData* obj) {
    if (!obj) return NULL;
    return obj->targetModel;
}

// @addr 0x80602640 (estimated)
// AnmScn_IsPlaying — Check if the animation scene is currently playing.
BOOL AnmScn_IsPlaying(const AnmScnData* obj) {
    if (!obj) return FALSE;
    return (obj->flags & ANMSCN_FLAG_PLAYING) != 0;
}