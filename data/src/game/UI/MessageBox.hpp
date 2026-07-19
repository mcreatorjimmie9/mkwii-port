#pragma once
// MessageBox.hpp - In-game message box dialog
// Displays system messages, errors, and confirmation prompts
// Address range: 0x8050a38c - 0x8050b420 (embedded in layout system)

#include "rk_common.h"

namespace UI {

class Layout;
class MenuPage;

enum MessageBoxType {
    MSGBOX_INFO = 0,
    MSGBOX_WARNING = 1,
    MSGBOX_ERROR = 2,
    MSGBOX_CONFIRM = 3,
    MSGBOX_NETWORK_ERROR = 4,
};

enum MessageBoxResult {
    MSGBOX_RESULT_NONE = 0,
    MSGBOX_RESULT_OK = 1,
    MSGBOX_RESULT_CANCEL = 2,
    MSGBOX_RESULT_YES = 3,
    MSGBOX_RESULT_NO = 4,
    MSGBOX_RESULT_TIMEOUT = 5,
};

struct MessageBoxConfig {
    MessageBoxType type;
    u32 messageId;          // Primary message string ID
    u32 secondaryMessageId; // Optional secondary message
    u32 timeoutFrames;      // 0 = no timeout
    u8 showOkButton;
    u8 showCancelButton;
    u8 showYesButton;
    u8 showNoButton;
    u8 autoClose;
    u8 _pad[3];
};

class MessageBox {
public:
    MessageBox();
    virtual ~MessageBox();

    // @addr 0x8050a38c
    void show(const MessageBoxConfig& config);
    // @addr 0x8050a75c
    void hide();

    // @addr 0x8050a144
    void configureForScene();

    // Input handling
    void onConfirm();
    void onCancel();
    void onUpdate(f32 deltaTime);

    // Result
    MessageBoxResult getResult() const { return mResult; }
    bool isShown() const { return mIsShown; }
    bool isAnimating() const { return mIsAnimating; }

    // Callback
    typedef void (*CallbackFunc)(MessageBoxResult result, void* userData);
    void setCallback(CallbackFunc callback, void* userData) {
        mCallback = callback;
        mUserData = userData;
    }

    // @addr 0x8050a678
    static void* construct(void* buffer);
    // @addr 0x8050a6f4
    static void* destroy(void* buffer, s32 freeMemory);

    // Button text configuration
    void setOkText(u32 messageId);
    void setCancelText(u32 messageId);
    void setYesText(u32 messageId);
    void setNoText(u32 messageId);

private:
    bool mIsShown;
    bool mIsAnimating;
    MessageBoxType mType;
    MessageBoxResult mResult;

    // Timing
    f32 mShowTimer;
    f32 mAnimTimer;
    u32 mTimeoutFrames;
    u32 mElapsedFrames;

    // Layout references
    Layout* mLayout;
    u32 mWindowPane;           // 0x48
    u32 mTextPane;             // 0x7E0
    u32 mOkButtonPane;         // 0x2A4
    u32 mCancelButtonPane;     // 0x2A8

    // Config
    MessageBoxConfig mConfig;

    // Callback
    CallbackFunc mCallback;
    void* mUserData;

    // State tracking
    u32 mTransitionState;      // 0xC98
    u8 mInitFlag;              // 0x10
    u8 mOverlayFlag;           // 0x93

    void startShowAnimation();
    void startHideAnimation();
    void onShowAnimationComplete();
    void onHideAnimationComplete();
    void onTimeout();
};

} // namespace UI