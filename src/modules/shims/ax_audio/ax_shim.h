#pragma once
// ax_shim.h — AX Audio SDK compatibility shim
#include "../../rk_types.h"

typedef void* AXVPB;

inline u32 AXPlayVoice(AXVPB voice) { return 0; }
inline void AXSetVoiceAddr(AXVPB voice, void* addr) {}
inline void AXSetVoiceVolume(AXVPB voice, u16 vol) {}
inline AXVPB AXAllocVoice() { return nullptr; }
inline void AXFreeVoice(AXVPB voice) {}
