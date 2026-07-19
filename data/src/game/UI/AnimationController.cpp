// AnimationController.cpp - Animation controller implementation
// Address range: 0x8050b8f4 - 0x8050c69c

#include "AnimationController.hpp"
#include "Layout.hpp"
#include "ui_stubs.h"

namespace UI {

AnimationController::AnimationController()
    : mBoundLayout(nullptr)
    , mTrackCount(0)
    , mGlobalFlags(0) {
    memset(mTracks, 0, sizeof(mTracks));
}

AnimationController::~AnimationController() {
    unbindFromLayout();
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
    for (s32 i = 0; i < mTrackCount; i++) {
        AnimTrack& track = mTracks[i];

        if (track.state != ANIM_PLAYING) continue;

        track.currentTime += deltaTime * track.speed;

        switch (track.mode) {
        case ANIM_PLAY_ONCE:
            if (track.currentTime >= track.duration) {
                track.currentTime = track.duration;
                track.state = ANIM_FINISHED;
            }
            break;

        case ANIM_PLAY_LOOP:
            if (track.duration > 0.0f) {
                while (track.currentTime >= track.duration) {
                    track.currentTime -= track.duration;
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

} // namespace UI