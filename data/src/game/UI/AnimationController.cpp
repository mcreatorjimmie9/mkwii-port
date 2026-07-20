// AnimationController.cpp - Animation controller implementation
// Address range: 0x8050b8f4 - 0x8050c69c

#include "AnimationController.hpp"
#include "Layout.hpp"
#include "ui_stubs.h"
#include <cstring>

namespace UI {

AnimationController::AnimationController()
    : mBoundLayout(nullptr)
    , mTrackCount(0)
    , mGlobalFlags(0)
    , mPlayingCount(0)
    , mMasterSpeed(1.0f)
    , mBlendSourceId(0)
    , mBlendTime(0.0f)
    , mBlendElapsed(0.0f)
    , mListenerCount(0) {
    memset(mTracks, 0, sizeof(mTracks));
    memset(mAnimName, 0, sizeof(mAnimName));
    memset(mListeners, 0, sizeof(mListeners));
}

AnimationController::~AnimationController() {
    unbindFromLayout();
}

// Initialize the animation controller, resetting all state
void AnimationController::init() {
    mTrackCount = 0;
    mPlayingCount = 0;
    mGlobalFlags = 0;
    mMasterSpeed = 1.0f;
    mBlendSourceId = 0;
    mBlendTime = 0.0f;
    mBlendElapsed = 0.0f;
    mListenerCount = 0;
    memset(mTracks, 0, sizeof(mTracks));
    memset(mAnimName, 0, sizeof(mAnimName));
    memset(mListeners, 0, sizeof(mListeners));
}

// Play animation with loop count parameter
void AnimationController::play(u32 animId, f32 speed, s32 loopCount) {
    AnimPlayMode mode = ANIM_PLAY_ONCE;
    if (loopCount < 0) {
        mode = ANIM_PLAY_LOOP;
    } else if (loopCount > 1) {
        mode = ANIM_PLAY_LOOP;
    }
    play(animId, mode, speed);
}

// @addr 0x8050b8f4
void AnimationController::triggerPaneEvent(u32 paneId) {
    // Forward pane events through the bound layout
    // This triggers callback-based animation changes
    if (mBoundLayout == nullptr) return;

    PaneWrapper* pane = mBoundLayout->findPaneByName(
        resolvePaneNameFromId(paneId));
    if (pane != nullptr) {
        // Delegate to stub — pane->onPaneEvent handled by layout system
        (void)pane;
    }
}

void AnimationController::play(u32 animId, AnimPlayMode mode, f32 speed) {
    // Find existing track or create new one
    AnimTrack* track = nullptr;
    for (s32 i = 0; i < mTrackCount; i++) {
        if (mTracks[i].bindFrame == animId) {
            track = &mTracks[i];
            break;
        }
    }

    if (track == nullptr) {
        if (mTrackCount >= MAX_TRACKS) {
            // Evict oldest finished track
            for (s32 i = 0; i < mTrackCount; i++) {
                if (mTracks[i].state == ANIM_FINISHED) {
                    track = &mTracks[i];
                    break;
                }
            }
        }
        if (track == nullptr && mTrackCount < MAX_TRACKS) {
            track = &mTracks[mTrackCount++];
        }
    }

    if (track == nullptr) return;

    // Load animation data if needed
    if (track->animData == 0) {
        track->animData = loadAnimationResource(animId);
        if (track->animData == 0) return;
        track->duration = getAnimDuration(track->animData);
    }

    track->bindFrame = animId;
    track->mode = mode;
    track->speed = speed;
    track->currentTime = 0.0f;
    track->state = ANIM_PLAYING;
    track->blendWeight = 1.0f;
    track->looping = (mode == ANIM_PLAY_LOOP);
}

void AnimationController::pause(u32 animId) {
    for (s32 i = 0; i < mTrackCount; i++) {
        if (mTracks[i].bindFrame == animId && mTracks[i].state == ANIM_PLAYING) {
            mTracks[i].state = ANIM_PAUSED;
            return;
        }
    }
}

void AnimationController::resume(u32 animId) {
    for (s32 i = 0; i < mTrackCount; i++) {
        if (mTracks[i].bindFrame == animId && mTracks[i].state == ANIM_PAUSED) {
            mTracks[i].state = ANIM_PLAYING;
            return;
        }
    }
}

void AnimationController::stop(u32 animId) {
    for (s32 i = 0; i < mTrackCount; i++) {
        if (mTracks[i].bindFrame == animId) {
            mTracks[i].state = ANIM_STOPPED;
            mTracks[i].currentTime = 0.0f;
            return;
        }
    }
}

void AnimationController::setFrame(u32 animId, f32 time) {
    for (s32 i = 0; i < mTrackCount; i++) {
        if (mTracks[i].bindFrame == animId) {
            mTracks[i].currentTime = time;
            return;
        }
    }
}

f32 AnimationController::getFrame(u32 animId) const {
    for (s32 i = 0; i < mTrackCount; i++) {
        if (mTracks[i].bindFrame == animId) {
            return mTracks[i].currentTime;
        }
    }
    return 0.0f;
}

f32 AnimationController::getDuration(u32 animId) const {
    for (s32 i = 0; i < mTrackCount; i++) {
        if (mTracks[i].bindFrame == animId) {
            return mTracks[i].duration;
        }
    }
    return 0.0f;
}

void AnimationController::setBlendWeight(u32 animId, f32 weight) {
    for (s32 i = 0; i < mTrackCount; i++) {
        if (mTracks[i].bindFrame == animId) {
            mTracks[i].blendWeight = clamp(weight, 0.0f, 1.0f);
            return;
        }
    }
}

f32 AnimationController::getBlendWeight(u32 animId) const {
    for (s32 i = 0; i < mTrackCount; i++) {
        if (mTracks[i].bindFrame == animId) {
            return mTracks[i].blendWeight;
        }
    }
    return 0.0f;
}

void AnimationController::update(f32 deltaTime) {
    // Apply master speed
    f32 scaledDt = deltaTime * mMasterSpeed;
    mPlayingCount = 0;

    // Update crossfade blend
    if (mBlendTime > 0.0f && mBlendElapsed < mBlendTime) {
        mBlendElapsed += deltaTime;
        if (mBlendElapsed > mBlendTime) mBlendElapsed = mBlendTime;
        f32 blendT = mBlendElapsed / mBlendTime;
        // Set blend weights: source fades out, target fades in
        setBlendWeight(mBlendSourceId, 1.0f - blendT);
        // Target track is the last added playing track
        for (s32 i = mTrackCount - 1; i >= 0; i--) {
            if (mTracks[i].state == ANIM_PLAYING) {
                setBlendWeight(mTracks[i].bindFrame, blendT);
                break;
            }
        }
    }

    for (s32 i = 0; i < mTrackCount; i++) {
        AnimTrack& track = mTracks[i];

        if (track.state != ANIM_PLAYING) continue;

        mPlayingCount++;
        track.currentTime += scaledDt * track.speed;

        // Check frame event listeners
        for (u32 j = 0; j < mListenerCount; j++) {
            FrameListener& listener = mListeners[j];
            if (!listener.fired && listener.animId == track.bindFrame &&
                track.currentTime >= listener.triggerFrame) {
                listener.callback(track.bindFrame, track.currentTime,
                                  listener.userData);
                listener.fired = true;
            }
        }

        switch (track.mode) {
        case ANIM_PLAY_ONCE:
            if (track.currentTime >= track.duration) {
                track.currentTime = track.duration;
                track.state = ANIM_FINISHED;
                mPlayingCount--;
            }
            break;

        case ANIM_PLAY_LOOP:
            if (track.duration > 0.0f) {
                while (track.currentTime >= track.duration) {
                    track.currentTime -= track.duration;
                    // Reset frame event listeners on loop
                    for (u32 j = 0; j < mListenerCount; j++) {
                        if (mListeners[j].animId == track.bindFrame) {
                            mListeners[j].fired = false;
                        }
                    }
                }
            }
            break;

        case ANIM_PLAY_PING_PONG:
            if (track.duration > 0.0f) {
                f32 doubleDuration = track.duration * 2.0f;
                f32 wrapped = fmod(track.currentTime, doubleDuration);
                if (wrapped > track.duration) {
                    track.currentTime = doubleDuration - wrapped;
                }
            }
            break;

        case ANIM_PLAY_REVERSE:
            if (track.currentTime >= track.duration) {
                track.currentTime = 0.0f;
                track.state = ANIM_FINISHED;
                mPlayingCount--;
            }
            break;
        }

        // Apply to bound layout
        if (mBoundLayout != nullptr && track.animData != 0) {
            applyAnimationFrame(mBoundLayout, track.animData,
                              track.currentTime, track.blendWeight);
        }
    }
}

void AnimationController::bindToLayout(Layout* layout) {
    mBoundLayout = layout;
}

void AnimationController::unbindFromLayout() {
    for (s32 i = 0; i < mTrackCount; i++) {
        mTracks[i].state = ANIM_STOPPED;
        mTracks[i].currentTime = 0.0f;
    }
    mBoundLayout = nullptr;
}

AnimTrack* AnimationController::getTrack(s32 index) {
    if (index >= 0 && index < mTrackCount) {
        return &mTracks[index];
    }
    return nullptr;
}

const AnimTrack* AnimationController::getTrack(s32 index) const {
    if (index >= 0 && index < mTrackCount) {
        return &mTracks[index];
    }
    return nullptr;
}

// @addr 0x8050bbb4
void AnimationController::configureWindowAlpha(u32 alpha, u32 param) {
    setWindowAlpha(alpha, param);
    setWindowFade(3, 0x1E);
}

// @addr 0x8050bc00
void AnimationController::configureWindowFade(u32 fadeType, u32 param) {
    setAnimationFrameGroup(param, 0x1E, -1);
    setWindowAlpha(0xCF, 0);
    setWindowFade(3, 0);
}

// @addr 0x8050b420 (partial - animation configuration for scenes)
void AnimationController::configureSceneAnimations(s32 sceneId) {
    // Scene-specific animation setup
    // Different scenes use different animation bindings

    if (sceneId == 0x79) {
        // Message box scene
        play(0x0FB2, ANIM_PLAY_ONCE);
    } else if (sceneId == 0x78 || sceneId == 0x98) {
        // Race result scenes - no animation, uses stored data
    } else if (sceneId == 1) {
        // Course select
        play(0x0FB0, ANIM_PLAY_ONCE);
    } else if (sceneId == 2) {
        // Character select
        play(0x0FB0, ANIM_PLAY_ONCE);
    } else if (sceneId == 4) {
        // Kart select
        play(0x0818, ANIM_PLAY_ONCE);
    } else if (sceneId == 5) {
        // Options
        play(0x0804, ANIM_PLAY_ONCE);
    }
}

// Set frame on the primary (first) playing track
void AnimationController::setFrame(f32 frame) {
    for (s32 i = 0; i < mTrackCount; i++) {
        if (mTracks[i].state == ANIM_PLAYING) {
            mTracks[i].currentTime = frame;
            return;
        }
    }
}

// Get frame of the primary (first) playing track
f32 AnimationController::getFrame() const {
    for (s32 i = 0; i < mTrackCount; i++) {
        if (mTracks[i].state == ANIM_PLAYING) {
            return mTracks[i].currentTime;
        }
    }
    return 0.0f;
}

// Check if any track is currently playing
bool AnimationController::isPlaying() const {
    for (s32 i = 0; i < mTrackCount; i++) {
        if (mTracks[i].state == ANIM_PLAYING) {
            return true;
        }
    }
    return false;
}

// Get the name of the primary animation
const char* AnimationController::getAnimName() const {
    return mAnimName;
}

// Crossfade to a new animation over blendTime seconds
void AnimationController::blendTo(u32 animId, f32 blendTime) {
    if (blendTime <= 0.0f) {
        // Instant switch: stop all current and play new
        for (s32 i = 0; i < mTrackCount; i++) {
            if (mTracks[i].state == ANIM_PLAYING) {
                mBlendSourceId = mTracks[i].bindFrame;
                stop(mTracks[i].bindFrame);
            }
        }
        play(animId, ANIM_PLAY_LOOP, 1.0f);
        return;
    }

    // Find the currently playing track to use as blend source
    mBlendTime = blendTime;
    mBlendElapsed = 0.0f;
    mBlendSourceId = 0;
    for (s32 i = 0; i < mTrackCount; i++) {
        if (mTracks[i].state == ANIM_PLAYING) {
            mBlendSourceId = mTracks[i].bindFrame;
            break;
        }
    }

    // Start the target animation
    play(animId, ANIM_PLAY_LOOP, 1.0f);

    // Set initial blend weights
    setBlendWeight(mBlendSourceId, 1.0f);
    setBlendWeight(animId, 0.0f);
}

// Register a frame callback that fires when a specific frame is reached
void AnimationController::addEventListener(u32 animId, f32 triggerFrame,
                                          AnimFrameCallback callback,
                                          void* userData) {
    if (mListenerCount >= MAX_LISTENERS) return;

    FrameListener& listener = mListeners[mListenerCount++];
    listener.animId = animId;
    listener.triggerFrame = triggerFrame;
    listener.callback = callback;
    listener.userData = userData;
    listener.fired = false;
}

} // namespace UI