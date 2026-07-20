#pragma once
// AnimationController.hpp - Manages layout animations
// Controls nw4r::lyt animation playback, blending, and frame updates
// Address range: 0x8050b8f4 - 0x8050c69c

#include "rk_common.h"

namespace UI {

class Layout;
class PaneWrapper;

enum AnimPlayMode {
    ANIM_PLAY_ONCE = 0,
    ANIM_PLAY_LOOP = 1,
    ANIM_PLAY_PING_PONG = 2,
    ANIM_PLAY_REVERSE = 3,
};

enum AnimState {
    ANIM_STOPPED = 0,
    ANIM_PLAYING = 1,
    ANIM_PAUSED = 2,
    ANIM_FINISHED = 3,
};

// Callback type for frame-based animation events
typedef void (*AnimFrameCallback)(u32 animId, f32 frame, void* userData);

// Keyframe interpolation data
struct AnimKeyFrame {
    f32 time;       // Time in seconds
    f32 value[4];   // Interpolated values (pos/rot/scale/color)
    u8  tangent;    // Tangent type (0=linear, 1=smooth)
    u8  _pad[3];
};

struct AnimTrack {
    u32 animData;       // Pointer to animation data resource
    f32 currentTime;     // Current playback time in seconds
    f32 duration;        // Total animation duration
    f32 speed;           // Playback speed multiplier (1.0 = normal)
    AnimPlayMode mode;   // Playback mode
    AnimState state;     // Current state
    f32 blendWeight;     // Blend weight for crossfading (0.0-1.0)
    u32 bindFrame;       // Frame index to bind to
    u8 looping;          // Whether to loop when finished
    u8 _pad[3];
};

class AnimationController {
public:
    AnimationController();
    ~AnimationController();

    // @addr 0x8050b8f4
    void triggerPaneEvent(u32 paneId);

    // Animation initialization
    void init();

    // Animation playback
    void play(u32 animId, AnimPlayMode mode = ANIM_PLAY_ONCE, f32 speed = 1.0f);
    void play(u32 animId, f32 speed, s32 loopCount);
    void pause(u32 animId);
    void resume(u32 animId);
    void stop(u32 animId);

    // @addr 0x8050bbb4
    static void configureWindowAlpha(u32 alpha, u32 param);

    // @addr 0x8050bc00
    static void configureWindowFade(u32 fadeType, u32 param);

    // Frame control
    void setFrame(u32 animId, f32 time);
    void setFrame(f32 frame);
    f32 getFrame(u32 animId) const;
    f32 getFrame() const;
    f32 getDuration(u32 animId) const;

    // Blending
    void setBlendWeight(u32 animId, f32 weight);
    f32 getBlendWeight(u32 animId) const;
    void blendTo(u32 animId, f32 blendTime);

    // State queries
    bool isPlaying() const;
    const char* getAnimName() const;

    // Event listeners
    void addEventListener(u32 animId, f32 triggerFrame,
                           AnimFrameCallback callback, void* userData);

    // Update all active animations
    void update(f32 deltaTime);

    // Track management
    s32 getTrackCount() const { return mTrackCount; }
    AnimTrack* getTrack(s32 index);
    const AnimTrack* getTrack(s32 index) const;

    // Layout binding
    void bindToLayout(Layout* layout);
    void unbindFromLayout();

    // @addr 0x8050b420
    void configureSceneAnimations(s32 sceneId);

private:
    static const u32 MAX_TRACKS = 16;
    static const u32 MAX_LISTENERS = 8;

    Layout* mBoundLayout;
    AnimTrack mTracks[MAX_TRACKS];
    s32 mTrackCount;
    u32 mGlobalFlags;
    u32 mPlayingCount;     // Number of currently playing tracks
    char mAnimName[32];    // Name of the primary animation
    f32 mMasterSpeed;      // Global speed multiplier

    // Blend state for crossfading
    u32 mBlendSourceId;
    f32 mBlendTime;
    f32 mBlendElapsed;

    // Frame event listeners
    struct FrameListener {
        u32 animId;
        f32 triggerFrame;
        AnimFrameCallback callback;
        void* userData;
        bool fired;
    };
    FrameListener mListeners[MAX_LISTENERS];
    u32 mListenerCount;
};

} // namespace UI