// PageAnimCtrl.cpp - Page animation controller implementation
// Manages brlan animation tracks, interpolation, blending, and keyframe events
// Address range: 0x8061A000 - 0x80621000

#include "PageAnimCtrl.hpp"
#include "Layout.hpp"
#include "PaneWrapper.hpp"
#include <cstring>

namespace UI {

PageAnimCtrl::PageAnimCtrl()
    : mTracks(nullptr)
    , mMaxTracks(0)
    , mActiveTrackCount(0)
    , mKeyframePool(nullptr)
    , mKeyframePoolSize(0)
    , mKeyframePoolUsed(0)
    , mGroups(nullptr)
    , mMaxGroups(0)
    , mEventCallbackCount(0)
    , mBoundLayout(nullptr)
    , mCrossfadeActive(false)
    , mCrossfadeDuration(0.0f)
    , mCrossfadeProgress(0.0f)
    , mCrossfadeFromTrack(-1)
    , mCrossfadeToTrack(-1) {
    memset(mEventCallbacks, 0, sizeof(mEventCallbacks));
}

PageAnimCtrl::~PageAnimCtrl() {
    shutdown();
}

// @addr 0x8061A000
void PageAnimCtrl::init(u32 maxTracks, u32 maxGroups) {
    if (mTracks != nullptr) {
        shutdown();
    }

    if (maxTracks == 0) {
        maxTracks = DEFAULT_MAX_TRACKS;
    }
    if (maxGroups == 0) {
        maxGroups = DEFAULT_MAX_GROUPS;
    }

    mMaxTracks = maxTracks;
    mMaxGroups = maxGroups;
    mActiveTrackCount = 0;

    mTracks = new AnimTrack[mMaxTracks];
    memset(mTracks, 0, sizeof(AnimTrack) * mMaxTracks);

    mKeyframePoolSize = mMaxTracks * MAX_KEYFRAMES_PER_TRACK;
    mKeyframePool = new AnimKeyframe[mKeyframePoolSize];
    memset(mKeyframePool, 0, sizeof(AnimKeyframe) * mKeyframePoolSize);
    mKeyframePoolUsed = 0;

    mGroups = new AnimGroup[mMaxGroups];
    memset(mGroups, 0, sizeof(AnimGroup) * mMaxGroups);

    mEventCallbackCount = 0;
    memset(mEventCallbacks, 0, sizeof(mEventCallbacks));

    mCrossfadeActive = false;
    mCrossfadeDuration = 0.0f;
    mCrossfadeProgress = 0.0f;
    mCrossfadeFromTrack = -1;
    mCrossfadeToTrack = -1;
}

// @addr 0x8061A180
void PageAnimCtrl::shutdown() {
    delete[] mTracks;
    mTracks = nullptr;

    delete[] mKeyframePool;
    mKeyframePool = nullptr;

    delete[] mGroups;
    mGroups = nullptr;

    mMaxTracks = 0;
    mMaxGroups = 0;
    mActiveTrackCount = 0;
    mKeyframePoolSize = 0;
    mKeyframePoolUsed = 0;
    mEventCallbackCount = 0;
    mBoundLayout = nullptr;
    mCrossfadeActive = false;
}

// @addr 0x8061A300
s32 PageAnimCtrl::createTrack(u32 paneRef, AnimProperty property) {
    for (u32 i = 0; i < mMaxTracks; i++) {
        if (!mTracks[i].active) {
            AnimTrack& track = mTracks[i];
            memset(&track, 0, sizeof(AnimTrack));
            track.paneRef = paneRef;
            track.property = property;
            track.active = true;
            track.blendWeight = 1.0f;
            track.speed = 1.0f;
            track.currentKeyframeIdx = -1;

            // Allocate keyframe slot from pool
            track.keyframeDataRef = mKeyframePoolUsed;
            track.keyframeCount = 0;

            mActiveTrackCount++;
            return static_cast<s32>(i);
        }
    }
    return -1;
}

// @addr 0x8061A480
void PageAnimCtrl::destroyTrack(s32 trackIndex) {
    if (trackIndex < 0 || trackIndex >= static_cast<s32>(mMaxTracks)) {
        return;
    }
    AnimTrack& track = mTracks[trackIndex];
    if (!track.active) {
        return;
    }

    // Remove from any groups
    for (u32 g = 0; g < mMaxGroups; g++) {
        AnimGroup& group = mGroups[g];
        if (!group.isActive) {
            continue;
        }
        for (u32 t = 0; t < group.trackCount; t++) {
            if (group.trackIndices[t] == static_cast<u32>(trackIndex)) {
                // Shift remaining tracks down
                for (u32 r = t; r < group.trackCount - 1; r++) {
                    group.trackIndices[r] = group.trackIndices[r + 1];
                }
                group.trackCount--;
                break;
            }
        }
    }

    // Clear event callbacks for this track
    for (u32 e = 0; e < mEventCallbackCount; e++) {
        if (mEventCallbacks[e].trackIndex == trackIndex) {
            mEventCallbacks[e].active = false;
        }
    }

    track.active = false;
    track.state = ANIM_TRACK_STOPPED;
    mActiveTrackCount--;
}

// @addr 0x8061A5C0
AnimTrack* PageAnimCtrl::getTrack(s32 trackIndex) {
    if (trackIndex < 0 || trackIndex >= static_cast<s32>(mMaxTracks)) {
        return nullptr;
    }
    if (!mTracks[trackIndex].active) {
        return nullptr;
    }
    return &mTracks[trackIndex];
}

// @addr 0x8061A680
s32 PageAnimCtrl::findTrack(u32 paneRef, AnimProperty property) const {
    for (u32 i = 0; i < mMaxTracks; i++) {
        if (mTracks[i].active && mTracks[i].paneRef == paneRef &&
            mTracks[i].property == property) {
            return static_cast<s32>(i);
        }
    }
    return -1;
}

// @addr 0x8061A800
void PageAnimCtrl::addKeyframe(s32 trackIndex, const AnimKeyframe& keyframe) {
    if (trackIndex < 0 || trackIndex >= static_cast<s32>(mMaxTracks)) {
        return;
    }
    AnimTrack& track = mTracks[trackIndex];
    if (!track.active) {
        return;
    }
    if (track.keyframeCount >= MAX_KEYFRAMES_PER_TRACK) {
        return;
    }

    u32 poolOffset = track.keyframeDataRef + track.keyframeCount;
    if (poolOffset + 1 > mKeyframePoolSize) {
        return;
    }

    mKeyframePool[poolOffset] = keyframe;
    track.keyframeCount++;

    // Update track duration to the last keyframe time
    if (keyframe.time > track.duration) {
        track.duration = keyframe.time;
    }
}

// @addr 0x8061A970
void PageAnimCtrl::removeKeyframe(s32 trackIndex, s32 keyframeIndex) {
    if (trackIndex < 0 || trackIndex >= static_cast<s32>(mMaxTracks)) {
        return;
    }
    AnimTrack& track = mTracks[trackIndex];
    if (!track.active) {
        return;
    }
    if (keyframeIndex < 0 || keyframeIndex >= static_cast<s32>(track.keyframeCount)) {
        return;
    }

    u32 removeIdx = static_cast<u32>(keyframeIndex);
    u32 baseOffset = track.keyframeDataRef;

    // Shift keyframes down to fill the gap
    for (u32 i = removeIdx; i < track.keyframeCount - 1; i++) {
        mKeyframePool[baseOffset + i] = mKeyframePool[baseOffset + i + 1];
    }
    track.keyframeCount--;

    // Recalculate duration from remaining keyframes
    track.duration = 0.0f;
    for (u32 i = 0; i < track.keyframeCount; i++) {
        if (mKeyframePool[baseOffset + i].time > track.duration) {
            track.duration = mKeyframePool[baseOffset + i].time;
        }
    }
}

// @addr 0x8061AA80
AnimKeyframe* PageAnimCtrl::getKeyframe(s32 trackIndex, s32 keyframeIndex) {
    if (trackIndex < 0 || trackIndex >= static_cast<s32>(mMaxTracks)) {
        return nullptr;
    }
    AnimTrack& track = mTracks[trackIndex];
    if (!track.active) {
        return nullptr;
    }
    if (keyframeIndex < 0 || keyframeIndex >= static_cast<s32>(track.keyframeCount)) {
        return nullptr;
    }
    return &mKeyframePool[track.keyframeDataRef + keyframeIndex];
}

// @addr 0x8061AB40
s32 PageAnimCtrl::getKeyframeCount(s32 trackIndex) const {
    if (trackIndex < 0 || trackIndex >= static_cast<s32>(mMaxTracks)) {
        return 0;
    }
    if (!mTracks[trackIndex].active) {
        return 0;
    }
    return static_cast<s32>(mTracks[trackIndex].keyframeCount);
}

// @addr 0x8061AC00
void PageAnimCtrl::play(s32 trackIndex, AnimPlaybackMode mode, f32 speed) {
    AnimTrack* track = getTrack(trackIndex);
    if (track == nullptr) {
        return;
    }

    track->playMode = mode;
    track->speed = speed;
    track->state = ANIM_TRACK_PLAYING;
    track->looped = false;
    track->blendWeight = 1.0f;

    if (mode == ANIM_PLAYBACK_REVERSE_ONCE || mode == ANIM_PLAYBACK_REVERSE_LOOP) {
        track->currentTime = track->duration;
    } else {
        track->currentTime = 0.0f;
    }
    track->currentKeyframeIdx = -1;
}

// @addr 0x8061AD50
void PageAnimCtrl::playGroup(u32 groupId, AnimPlaybackMode mode, f32 speed) {
    AnimGroup* group = getGroup(groupId);
    if (group == nullptr) {
        return;
    }

    group->isActive = true;
    group->isPaused = false;
    group->playMode = mode;

    for (u32 i = 0; i < group->trackCount; i++) {
        s32 trackIdx = static_cast<s32>(group->trackIndices[i]);
        play(trackIdx, mode, speed);
    }
}

// @addr 0x8061AE90
void PageAnimCtrl::pause(s32 trackIndex) {
    AnimTrack* track = getTrack(trackIndex);
    if (track == nullptr) {
        return;
    }
    if (track->state == ANIM_TRACK_PLAYING) {
        track->state = ANIM_TRACK_PAUSED;
    }
}

// @addr 0x8061AF60
void PageAnimCtrl::pauseGroup(u32 groupId) {
    AnimGroup* group = getGroup(groupId);
    if (group == nullptr) {
        return;
    }

    group->isPaused = true;
    for (u32 i = 0; i < group->trackCount; i++) {
        pause(static_cast<s32>(group->trackIndices[i]));
    }
}

// @addr 0x8061B020
void PageAnimCtrl::resume(s32 trackIndex) {
    AnimTrack* track = getTrack(trackIndex);
    if (track == nullptr) {
        return;
    }
    if (track->state == ANIM_TRACK_PAUSED) {
        track->state = ANIM_TRACK_PLAYING;
    }
}

// @addr 0x8061B0F0
void PageAnimCtrl::resumeGroup(u32 groupId) {
    AnimGroup* group = getGroup(groupId);
    if (group == nullptr) {
        return;
    }

    group->isPaused = false;
    for (u32 i = 0; i < group->trackCount; i++) {
        resume(static_cast<s32>(group->trackIndices[i]));
    }
}

// @addr 0x8061B180
void PageAnimCtrl::stop(s32 trackIndex) {
    AnimTrack* track = getTrack(trackIndex);
    if (track == nullptr) {
        return;
    }
    track->state = ANIM_TRACK_STOPPED;
    track->currentTime = 0.0f;
    track->currentKeyframeIdx = -1;
}

// @addr 0x8061B250
void PageAnimCtrl::stopGroup(u32 groupId) {
    AnimGroup* group = getGroup(groupId);
    if (group == nullptr) {
        return;
    }

    group->isActive = false;
    group->isPaused = false;
    for (u32 i = 0; i < group->trackCount; i++) {
        stop(static_cast<s32>(group->trackIndices[i]));
    }
}

// @addr 0x8061B320
void PageAnimCtrl::stopAll() {
    for (u32 i = 0; i < mMaxTracks; i++) {
        if (mTracks[i].active) {
            mTracks[i].state = ANIM_TRACK_STOPPED;
            mTracks[i].currentTime = 0.0f;
            mTracks[i].currentKeyframeIdx = -1;
        }
    }
    for (u32 g = 0; g < mMaxGroups; g++) {
        mGroups[g].isActive = false;
        mGroups[g].isPaused = false;
    }
    mCrossfadeActive = false;
}

// @addr 0x8061B400
void PageAnimCtrl::setFrame(s32 trackIndex, f32 time) {
    AnimTrack* track = getTrack(trackIndex);
    if (track == nullptr) {
        return;
    }
    track->currentTime = time;
    track->currentValue = evaluateKeyframes(*track);
}

f32 PageAnimCtrl::getFrame(s32 trackIndex) const {
    if (trackIndex < 0 || trackIndex >= static_cast<s32>(mMaxTracks)) {
        return 0.0f;
    }
    if (!mTracks[trackIndex].active) {
        return 0.0f;
    }
    return mTracks[trackIndex].currentTime;
}

f32 PageAnimCtrl::getDuration(s32 trackIndex) const {
    if (trackIndex < 0 || trackIndex >= static_cast<s32>(mMaxTracks)) {
        return 0.0f;
    }
    if (!mTracks[trackIndex].active) {
        return 0.0f;
    }
    return mTracks[trackIndex].duration;
}

// @addr 0x8061B580
void PageAnimCtrl::setBlendWeight(s32 trackIndex, f32 weight) {
    AnimTrack* track = getTrack(trackIndex);
    if (track == nullptr) {
        return;
    }
    if (weight < 0.0f) {
        weight = 0.0f;
    }
    if (weight > 1.0f) {
        weight = 1.0f;
    }
    track->blendWeight = weight;
}

f32 PageAnimCtrl::getBlendWeight(s32 trackIndex) const {
    if (trackIndex < 0 || trackIndex >= static_cast<s32>(mMaxTracks)) {
        return 0.0f;
    }
    if (!mTracks[trackIndex].active) {
        return 0.0f;
    }
    return mTracks[trackIndex].blendWeight;
}

// @addr 0x8061B700
void PageAnimCtrl::crossfade(s32 fromTrack, s32 toTrack, f32 duration) {
    AnimTrack* from = getTrack(fromTrack);
    AnimTrack* to = getTrack(toTrack);
    if (from == nullptr || to == nullptr) {
        return;
    }
    if (duration <= 0.0f) {
        return;
    }

    from->state = ANIM_TRACK_BLENDING;
    from->blendWeight = 1.0f;
    to->state = ANIM_TRACK_BLENDING;
    to->blendWeight = 0.0f;

    mCrossfadeActive = true;
    mCrossfadeDuration = duration;
    mCrossfadeProgress = 0.0f;
    mCrossfadeFromTrack = fromTrack;
    mCrossfadeToTrack = toTrack;
}

// @addr 0x8061B890
u32 PageAnimCtrl::createGroup(u32 groupId) {
    // Check for duplicate
    for (u32 i = 0; i < mMaxGroups; i++) {
        if (mGroups[i].isActive && mGroups[i].groupId == groupId) {
            return groupId;
        }
    }

    // Find a free slot
    for (u32 i = 0; i < mMaxGroups; i++) {
        if (!mGroups[i].isActive) {
            AnimGroup& group = mGroups[i];
            memset(&group, 0, sizeof(AnimGroup));
            group.groupId = groupId;
            group.isActive = true;
            group.trackCount = 0;
            group.groupDuration = 0.0f;
            return groupId;
        }
    }
    return 0xFFFFFFFF;
}

// @addr 0x8061BA00
void PageAnimCtrl::destroyGroup(u32 groupId) {
    for (u32 i = 0; i < mMaxGroups; i++) {
        if (mGroups[i].isActive && mGroups[i].groupId == groupId) {
            mGroups[i].isActive = false;
            mGroups[i].trackCount = 0;
            mGroups[i].isPaused = false;
            return;
        }
    }
}

// @addr 0x8061BB20
void PageAnimCtrl::addTrackToGroup(u32 groupId, s32 trackIndex) {
    AnimGroup* group = getGroup(groupId);
    if (group == nullptr) {
        return;
    }
    if (trackIndex < 0 || trackIndex >= static_cast<s32>(mMaxTracks)) {
        return;
    }
    if (group->trackCount >= ARRAY_COUNT(group->trackIndices)) {
        return;
    }

    // Avoid duplicates
    for (u32 i = 0; i < group->trackCount; i++) {
        if (group->trackIndices[i] == static_cast<u32>(trackIndex)) {
            return;
        }
    }

    group->trackIndices[group->trackCount] = static_cast<u32>(trackIndex);
    group->trackCount++;

    // Update group duration to longest track
    if (mTracks[trackIndex].duration > group->groupDuration) {
        group->groupDuration = mTracks[trackIndex].duration;
    }
}

// @addr 0x8061BC40
void PageAnimCtrl::removeTrackFromGroup(u32 groupId, s32 trackIndex) {
    AnimGroup* group = getGroup(groupId);
    if (group == nullptr) {
        return;
    }

    for (u32 i = 0; i < group->trackCount; i++) {
        if (group->trackIndices[i] == static_cast<u32>(trackIndex)) {
            for (u32 r = i; r < group->trackCount - 1; r++) {
                group->trackIndices[r] = group->trackIndices[r + 1];
            }
            group->trackCount--;

            // Recalculate group duration
            group->groupDuration = 0.0f;
            for (u32 t = 0; t < group->trackCount; t++) {
                s32 idx = static_cast<s32>(group->trackIndices[t]);
                if (idx >= 0 && idx < static_cast<s32>(mMaxTracks) &&
                    mTracks[idx].duration > group->groupDuration) {
                    group->groupDuration = mTracks[idx].duration;
                }
            }
            return;
        }
    }
}

// @addr 0x8061BD40
AnimGroup* PageAnimCtrl::getGroup(u32 groupId) {
    for (u32 i = 0; i < mMaxGroups; i++) {
        if (mGroups[i].isActive && mGroups[i].groupId == groupId) {
            return &mGroups[i];
        }
    }
    return nullptr;
}

// @addr 0x8061BE40
void PageAnimCtrl::update(f32 deltaTime) {
    // Advance crossfade if active
    if (mCrossfadeActive) {
        mCrossfadeProgress += deltaTime / mCrossfadeDuration;
        if (mCrossfadeProgress >= 1.0f) {
            mCrossfadeProgress = 1.0f;
            mCrossfadeActive = false;

            AnimTrack* from = getTrack(mCrossfadeFromTrack);
            AnimTrack* to = getTrack(mCrossfadeToTrack);
            if (from != nullptr) {
                from->blendWeight = 0.0f;
                from->state = ANIM_TRACK_STOPPED;
            }
            if (to != nullptr) {
                to->blendWeight = 1.0f;
                to->state = ANIM_TRACK_PLAYING;
            }
        } else {
            AnimTrack* from = getTrack(mCrossfadeFromTrack);
            AnimTrack* to = getTrack(mCrossfadeToTrack);
            if (from != nullptr) {
                from->blendWeight = 1.0f - mCrossfadeProgress;
            }
            if (to != nullptr) {
                to->blendWeight = mCrossfadeProgress;
            }
        }
    }

    // Update each active track
    for (u32 i = 0; i < mMaxTracks; i++) {
        AnimTrack& track = mTracks[i];
        if (!track.active) {
            continue;
        }
        if (track.state != ANIM_TRACK_PLAYING && track.state != ANIM_TRACK_BLENDING) {
            continue;
        }

        interpolateTrack(track, deltaTime);
        track.currentValue = evaluateKeyframes(track);
        checkKeyframeEvents(track);
    }
}

// @addr 0x8061C050
void PageAnimCtrl::applyToPanes() {
    if (mBoundLayout == nullptr) {
        return;
    }

    for (u32 i = 0; i < mMaxTracks; i++) {
        AnimTrack& track = mTracks[i];
        if (!track.active) {
            continue;
        }
        if (track.blendWeight <= 0.0f) {
            continue;
        }

        applyPropertyValue(track);
    }
}

// @addr 0x8061C200
void PageAnimCtrl::setEventCallback(s32 trackIndex, s32 keyframeIdx,
        AnimEventCallback cb, void* userData) {
    if (mEventCallbackCount >= MAX_EVENT_CALLBACKS) {
        return;
    }

    EventCallbackEntry& entry = mEventCallbacks[mEventCallbackCount];
    entry.trackIndex = trackIndex;
    entry.keyframeIndex = keyframeIdx;
    entry.callback = cb;
    entry.userData = userData;
    entry.active = true;
    mEventCallbackCount++;
}

bool PageAnimCtrl::isPlaying(s32 trackIndex) const {
    if (trackIndex < 0 || trackIndex >= static_cast<s32>(mMaxTracks)) {
        return false;
    }
    const AnimTrack& track = mTracks[trackIndex];
    return track.active && (track.state == ANIM_TRACK_PLAYING ||
                            track.state == ANIM_TRACK_BLENDING);
}

bool PageAnimCtrl::isGroupPlaying(u32 groupId) const {
    for (u32 g = 0; g < mMaxGroups; g++) {
        if (mGroups[g].isActive && mGroups[g].groupId == groupId) {
            return !mGroups[g].isPaused;
        }
    }
    return false;
}

s32 PageAnimCtrl::getActiveTrackCount() const {
    return static_cast<s32>(mActiveTrackCount);
}

// @addr 0x8061C380
f32 PageAnimCtrl::interpolate(f32 a, f32 b, f32 t, AnimInterpMode mode) {
    if (t < 0.0f) {
        t = 0.0f;
    }
    if (t > 1.0f) {
        t = 1.0f;
    }

    switch (mode) {
    case ANIM_INTERP_LINEAR:
        return a + (b - a) * t;

    case ANIM_INTERP_EASE_IN:
        // t*t easing
        return a + (b - a) * (t * t);

    case ANIM_INTERP_EASE_OUT:
        // 1-(1-t)*(1-t) easing
        {
            f32 eased = 1.0f - (1.0f - t) * (1.0f - t);
            return a + (b - a) * eased;
        }

    case ANIM_INTERP_EASE_IN_OUT:
        // t<0.5 ? 2*t*t : 1-pow(-2*t+2,2)/2
        {
            f32 eased;
            if (t < 0.5f) {
                eased = 2.0f * t * t;
            } else {
                f32 tmp = -2.0f * t + 2.0f;
                eased = 1.0f - (tmp * tmp) * 0.5f;
            }
            return a + (b - a) * eased;
        }

    case ANIM_INTERP_BEZIER:
        // Hermite-style with tangent in/out
        // t^2*(3-2t) smoothstep as a bezier approximation
        {
            f32 s = t * t * (3.0f - 2.0f * t);
            return a + (b - a) * s;
        }

    case ANIM_INTERP_STEP:
        // No interpolation: snap at 50%
        return t < 0.5f ? a : b;

    default:
        return a + (b - a) * t;
    }
}

// @addr 0x8061C580
void PageAnimCtrl::bindToLayout(Layout* layout) {
    mBoundLayout = layout;
}

void PageAnimCtrl::unbindFromLayout() {
    stopAll();
    mBoundLayout = nullptr;
}

// --- Internal helpers ---

void PageAnimCtrl::interpolateTrack(AnimTrack& track, f32 deltaTime) {
    bool reverse = (track.playMode == ANIM_PLAYBACK_REVERSE_ONCE ||
                    track.playMode == ANIM_PLAYBACK_REVERSE_LOOP);

    if (reverse) {
        track.currentTime -= deltaTime * track.speed;
    } else {
        track.currentTime += deltaTime * track.speed;
    }

    if (track.duration <= 0.0f) {
        track.currentTime = 0.0f;
        return;
    }

    switch (track.playMode) {
    case ANIM_PLAYBACK_ONCE:
        if (track.currentTime >= track.duration) {
            track.currentTime = track.duration;
            track.state = ANIM_TRACK_FINISHED;
        }
        if (track.currentTime < 0.0f) {
            track.currentTime = 0.0f;
        }
        break;

    case ANIM_PLAYBACK_LOOP:
        if (track.currentTime >= track.duration) {
            track.currentTime -= track.duration;
            track.looped = true;
            track.currentKeyframeIdx = -1;
        }
        break;

    case ANIM_PLAYBACK_PING_PONG: {
        f32 doubleDur = track.duration * 2.0f;
        if (doubleDur > 0.0f) {
            f32 wrapped = track.currentTime;
            while (wrapped < 0.0f) {
                wrapped += doubleDur;
            }
            wrapped = wrapped - (static_cast<s32>(wrapped / doubleDur)) * doubleDur;
            if (wrapped > track.duration) {
                track.currentTime = doubleDur - wrapped;
            } else {
                track.currentTime = wrapped;
            }
            if (wrapped >= doubleDur) {
                track.looped = true;
                track.currentKeyframeIdx = -1;
            }
        }
        break;
    }

    case ANIM_PLAYBACK_REVERSE_ONCE:
        if (track.currentTime <= 0.0f) {
            track.currentTime = 0.0f;
            track.state = ANIM_TRACK_FINISHED;
        }
        break;

    case ANIM_PLAYBACK_REVERSE_LOOP:
        if (track.currentTime <= 0.0f) {
            track.currentTime += track.duration;
            track.looped = true;
            track.currentKeyframeIdx = -1;
        }
        break;
    }
}

f32 PageAnimCtrl::evaluateKeyframes(const AnimTrack& track) const {
    if (track.keyframeCount == 0) {
        return 0.0f;
    }

    const AnimKeyframe* keys = &mKeyframePool[track.keyframeDataRef];

    // Before first keyframe
    if (track.currentTime <= keys[0].time) {
        return keys[0].value;
    }

    // After last keyframe
    if (track.currentTime >= keys[track.keyframeCount - 1].time) {
        return keys[track.keyframeCount - 1].value;
    }

    // Find bracketing keyframes
    for (u32 i = 0; i < track.keyframeCount - 1; i++) {
        if (track.currentTime >= keys[i].time &&
            track.currentTime < keys[i + 1].time) {
            f32 span = keys[i + 1].time - keys[i].time;
            f32 t = 0.0f;
            if (span > 0.0f) {
                t = (track.currentTime - keys[i].time) / span;
            }

            AnimInterpMode mode = keys[i].interpMode;
            return interpolate(keys[i].value, keys[i + 1].value, t, mode);
        }
    }

    return keys[track.keyframeCount - 1].value;
}

void PageAnimCtrl::checkKeyframeEvents(AnimTrack& track) {
    if (track.keyframeCount == 0) {
        return;
    }

    const AnimKeyframe* keys = &mKeyframePool[track.keyframeDataRef];
    s32 prevIdx = track.currentKeyframeIdx;

    // Determine which keyframes we've passed
    for (s32 i = 0; i < static_cast<s32>(track.keyframeCount); i++) {
        if (track.currentTime >= keys[i].time && i > prevIdx) {
            track.currentKeyframeIdx = i;

            // Fire any callbacks bound to this keyframe
            for (u32 e = 0; e < mEventCallbackCount; e++) {
                EventCallbackEntry& entry = mEventCallbacks[e];
                if (!entry.active) {
                    continue;
                }
                if (entry.trackIndex == static_cast<s32>(
                        &track - mTracks) &&
                    entry.keyframeIndex == i &&
                    keys[i].hasCallback &&
                    entry.callback != nullptr) {
                    entry.callback(static_cast<u32>(i), entry.userData);
                }
            }
        }
    }
}

void PageAnimCtrl::applyPropertyValue(AnimTrack& track) {
    // Pane property application is handled through the bound layout
    // The actual nw4r::lyt pane property writes go through PaneWrapper
    // which is resolved from mBoundLayout by paneRef
    if (mBoundLayout == nullptr) {
        return;
    }

    f32 value = track.currentValue * track.blendWeight;
    UNUSED(value);
    // The real implementation resolves paneRef to a PaneWrapper* via
    // the layout's pane tree, then dispatches based on AnimProperty:
    //   TRANSLATE_X/Y/Z -> pane->setTranslate(...)
    //   ROTATE_X/Y/Z    -> pane->setRotate(...)
    //   SCALE_X/Y/Z     -> pane->setScale(...)
    //   ALPHA           -> pane->setAlpha(...)
    //   COLOR_R/G/B     -> pane->setColor(...)
    //   TEX_SRT_*       -> pane->setTexSRT(...)
}

} // namespace UI