#pragma once
// PageAnimCtrl.hpp - Page animation controller for brlan pane animations
// Manages animation tracks, interpolation, blending, and keyframe events
// Address range: 0x8061A000 - 0x80621000

#include "rk_common.h"

namespace UI {

class PaneWrapper;
class Layout;

// Animation interpolation modes
enum AnimInterpMode {
    ANIM_INTERP_LINEAR = 0,
    ANIM_INTERP_EASE_IN = 1,
    ANIM_INTERP_EASE_OUT = 2,
    ANIM_INTERP_EASE_IN_OUT = 3,
    ANIM_INTERP_BEZIER = 4,
    ANIM_INTERP_STEP = 5,
};

// Animation property types that can be animated
enum AnimProperty {
    ANIM_PROP_TRANSLATE_X = 0,
    ANIM_PROP_TRANSLATE_Y = 1,
    ANIM_PROP_TRANSLATE_Z = 2,
    ANIM_PROP_ROTATE_X = 3,
    ANIM_PROP_ROTATE_Y = 4,
    ANIM_PROP_ROTATE_Z = 5,
    ANIM_PROP_SCALE_X = 6,
    ANIM_PROP_SCALE_Y = 7,
    ANIM_PROP_SCALE_Z = 8,
    ANIM_PROP_ALPHA = 9,
    ANIM_PROP_COLOR_R = 10,
    ANIM_PROP_COLOR_G = 11,
    ANIM_PROP_COLOR_B = 12,
    ANIM_PROP_TEX_SRT_S = 13,
    ANIM_PROP_TEX_SRT_T = 14,
    ANIM_PROP_TEX_SRT_R = 15,
    ANIM_PROP_TEX_SRT_SX = 16,
    ANIM_PROP_TEX_SRT_SY = 17,
    ANIM_PROP_COUNT = 18,
};

// Playback modes
enum AnimPlaybackMode {
    ANIM_PLAYBACK_ONCE = 0,
    ANIM_PLAYBACK_LOOP = 1,
    ANIM_PLAYBACK_PING_PONG = 2,
    ANIM_PLAYBACK_REVERSE_ONCE = 3,
    ANIM_PLAYBACK_REVERSE_LOOP = 4,
};

// Track states
enum AnimTrackState {
    ANIM_TRACK_STOPPED = 0,
    ANIM_TRACK_PLAYING = 1,
    ANIM_TRACK_PAUSED = 2,
    ANIM_TRACK_FINISHED = 3,
    ANIM_TRACK_BLENDING = 4,
};

// Keyframe entry in an animation track
struct AnimKeyframe {
    f32 time;           // Time in seconds when this keyframe occurs
    f32 value;          // Property value at this keyframe
    f32 tangentIn;     // Incoming tangent for bezier interpolation
    f32 tangentOut;    // Outgoing tangent for bezier interpolation
    AnimInterpMode interpMode; // Interpolation mode to next keyframe
    u8 hasCallback;     // Whether this keyframe triggers a callback
    u8 _pad[3];
};

// Single animation track controlling one property of one pane
struct AnimTrack {
    u32 paneRef;                // Reference to the target pane
    AnimProperty property;     // Which property this track controls
    AnimPlaybackMode playMode; // Playback mode
    AnimTrackState state;      // Current track state
    f32 currentTime;            // Current playback time
    f32 duration;              // Total animation duration
    f32 speed;                 // Playback speed multiplier
    f32 blendWeight;           // Blend weight (for crossfade, 0.0-1.0)
    f32 currentValue;          // Current interpolated value
    u32 keyframeCount;         // Number of keyframes in this track
    u32 keyframeDataRef;       // Reference to keyframe array
    u8 active;                // Whether this track is active
    u8 looped;                // Whether track has looped at least once
    u8 _pad[2];
    s32 currentKeyframeIdx;    // Index of last keyframe passed
};

// Animation event callback
typedef void (*AnimEventCallback)(u32 eventId, void* userData);

// Animation group (collection of tracks for a set of panes)
struct AnimGroup {
    u32 groupId;
    u32 trackIndices[16];     // Indices into master track array
    u32 trackCount;
    f32 groupDuration;        // Longest track duration in group
    AnimPlaybackMode playMode;
    u8 isActive;
    u8 isPaused;
    u8 _pad[2];
};

class PageAnimCtrl {
public:
    PageAnimCtrl();
    ~PageAnimCtrl();

    // --- Initialization ---
    // @addr 0x8061A000
    void init(u32 maxTracks, u32 maxGroups);
    // @addr 0x8061A180
    void shutdown();

    // --- Track management ---
    // @addr 0x8061A300
    s32 createTrack(u32 paneRef, AnimProperty property);
    // @addr 0x8061A480
    void destroyTrack(s32 trackIndex);
    // @addr 0x8061A5C0
    AnimTrack* getTrack(s32 trackIndex);
    // @addr 0x8061A680
    s32 findTrack(u32 paneRef, AnimProperty property) const;

    // --- Keyframe management ---
    // @addr 0x8061A800
    void addKeyframe(s32 trackIndex, const AnimKeyframe& keyframe);
    // @addr 0x8061A970
    void removeKeyframe(s32 trackIndex, s32 keyframeIndex);
    // @addr 0x8061AA80
    AnimKeyframe* getKeyframe(s32 trackIndex, s32 keyframeIndex);
    // @addr 0x8061AB40
    s32 getKeyframeCount(s32 trackIndex) const;

    // --- Playback control ---
    // @addr 0x8061AC00
    void play(s32 trackIndex, AnimPlaybackMode mode, f32 speed = 1.0f);
    // @addr 0x8061AD50
    void playGroup(u32 groupId, AnimPlaybackMode mode, f32 speed = 1.0f);
    // @addr 0x8061AE90
    void pause(s32 trackIndex);
    // @addr 0x8061AF60
    void pauseGroup(u32 groupId);
    // @addr 0x8061B020
    void resume(s32 trackIndex);
    // @addr 0x8061B0F0
    void resumeGroup(u32 groupId);
    // @addr 0x8061B180
    void stop(s32 trackIndex);
    // @addr 0x8061B250
    void stopGroup(u32 groupId);
    // @addr 0x8061B320
    void stopAll();

    // --- Frame control ---
    // @addr 0x8061B400
    void setFrame(s32 trackIndex, f32 time);
    f32 getFrame(s32 trackIndex) const;
    f32 getDuration(s32 trackIndex) const;

    // --- Blending ---
    // @addr 0x8061B580
    void setBlendWeight(s32 trackIndex, f32 weight);
    f32 getBlendWeight(s32 trackIndex) const;
    // @addr 0x8061B700
    void crossfade(s32 fromTrack, s32 toTrack, f32 duration);

    // --- Group management ---
    // @addr 0x8061B890
    u32 createGroup(u32 groupId);
    // @addr 0x8061BA00
    void destroyGroup(u32 groupId);
    // @addr 0x8061BB20
    void addTrackToGroup(u32 groupId, s32 trackIndex);
    // @addr 0x8061BC40
    void removeTrackFromGroup(u32 groupId, s32 trackIndex);
    // @addr 0x8061BD40
    AnimGroup* getGroup(u32 groupId);

    // --- Update/draw ---
    // @addr 0x8061BE40
    void update(f32 deltaTime);
    // @addr 0x8061C050
    void applyToPanes();

    // --- Event callbacks ---
    // @addr 0x8061C200
    void setEventCallback(s32 trackIndex, s32 keyframeIdx, AnimEventCallback cb, void* userData);

    // --- State queries ---
    bool isPlaying(s32 trackIndex) const;
    bool isGroupPlaying(u32 groupId) const;
    s32 getActiveTrackCount() const;
    u32 getMaxTracks() const { return mMaxTracks; }

    // --- Interpolation ---
    // @addr 0x8061C380
    static f32 interpolate(f32 a, f32 b, f32 t, AnimInterpMode mode);

    // --- Binding ---
    // @addr 0x8061C580
    void bindToLayout(Layout* layout);
    void unbindFromLayout();

private:
    static const u32 DEFAULT_MAX_TRACKS = 64;
    static const u32 DEFAULT_MAX_GROUPS = 16;
    static const u32 MAX_KEYFRAMES_PER_TRACK = 32;
    static const u32 MAX_EVENT_CALLBACKS = 64;

    // Track array
    AnimTrack* mTracks;
    u32 mMaxTracks;
    u32 mActiveTrackCount;

    // Keyframe storage
    AnimKeyframe* mKeyframePool;
    u32 mKeyframePoolSize;
    u32 mKeyframePoolUsed;

    // Group array
    AnimGroup* mGroups;
    u32 mMaxGroups;

    // Event callback storage
    struct EventCallbackEntry {
        s32 trackIndex;
        s32 keyframeIndex;
        AnimEventCallback callback;
        void* userData;
        u8 active;
        u8 _pad[3];
    };
    EventCallbackEntry mEventCallbacks[MAX_EVENT_CALLBACKS];
    u32 mEventCallbackCount;

    // Layout binding
    Layout* mBoundLayout;

    // Crossfade state
    bool mCrossfadeActive;
    f32 mCrossfadeDuration;
    f32 mCrossfadeProgress;
    s32 mCrossfadeFromTrack;
    s32 mCrossfadeToTrack;

    // Internal helpers
    void interpolateTrack(AnimTrack& track, f32 deltaTime);
    f32 evaluateKeyframes(const AnimTrack& track) const;
    void checkKeyframeEvents(AnimTrack& track);
    void applyPropertyValue(AnimTrack& track);
};

} // namespace UI