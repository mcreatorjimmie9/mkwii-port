#pragma once
// LayoutLoader.hpp - MKW .brlyt layout file loader
// Handles loading, caching, and resource management for layout files
// Address range: 0x8050b940 - 0x8050c5dc

#include "rk_common.h"

namespace UI {

class Layout;
class PaneWrapper;

enum LayoutResourceType {
    LYT_RES_LAYOUT = 0,
    LYT_RES_FONT = 1,
    LYT_RES_TEXTURE = 2,
    LYT_RES_ANIMATION = 3,
};

struct LayoutResource {
    u32 nameHash;         // Hashed layout name for lookup
    u32* resourcePtr;     // Pointer to loaded resource data
    u32 refCount;         // Reference count for caching
    u32 size;             // Resource data size
    LayoutResourceType type;
};

struct BrltHeader {
    char magic[4];       // 'RLYT'
    u32 size;
    u16 version[3];      // major.minor.micro
    u32 offsetPanes;     // Layout data section
    u32 offsetPanesData; // Pane binary data
    u32 offsetMat1;      // Materials section (PAT1)
    u32 offsetFnt1;      // Fonts section (FNT1)
    u32 offsetTxl1;      // Textures section (TXL1)
    u32 offsetPAN1;      // Pane name table
    u32 offsetPas1;      // Animation info
    u16 userCount;       // Number of usyd/udsd entries
    u32 offsetUsd1;      // User data section
};

struct BrltPaneEntry {
    u8 type;             // Pane type (0=Pane, 1=Picture, 2=Text, etc.)
    u8 _01[3];
    char name[16];       // Pane name (null-terminated)
    u32 userDataCount;
    u32 offsetUserData;
    u8 data[60];         // Pane-specific binary data
};

class LayoutLoader {
public:
    LayoutLoader();
    ~LayoutLoader();

    // BRLYT file parsing
    bool loadFromFile(const void* brlytData, u32 dataSize);
    bool parseHeader(const void* data, u32 dataSize);
    bool parsePanes(const void* data, u32 offset, u32 count);
    bool parseAnimations(const void* data, u32 offset, u32 size);
    bool parseFonts(const void* data, u32 offset, u32 size);
    bool parseMaterials(const void* data, u32 offset, u32 size);

    // Data access
    const void* getLayoutData() const;
    s32 getError() const;

    // @addr 0x8050b940
    static void* createWithTextBox(void* buffer);

    // @addr 0x8050b99c
    static void* destroyWithTextBox(void* buffer, s32 freeMemory);

    // @addr 0x8050bc84
    static void* createSimplePane(void* buffer);

    // @addr 0x8050bd00
    static void* destroySimplePane(void* buffer, s32 freeMemory);

    // Core loading functions
    // @addr 0x8050ca1c
    static void initLayout(Layout* layout);

    // @addr 0x8050ca74
    static void loadLayoutAsync(Layout* layout, u32 resourceId);

    // @addr 0x8050cb50
    static void loadLayoutSync(Layout* layout, u32 resourceId);

    // @addr 0x8050cc2c
    static void setLayoutState(Layout* layout, u32 resourceId);

    // @addr 0x8050cc70
    static void cancelLayoutLoad(Layout* layout, u32 resourceId);

    // Text binding
    // @addr 0x8050c1dc
    static void updateTextFrame(void* textCtrl);

    // Resource management
    static LayoutResource* loadResource(const char* name, LayoutResourceType type);
    static void releaseResource(LayoutResource* resource);
    static void flushCache();

    // Animation frame binding
    // @addr 0x80500a34
    static void setTextBinding(void* ctrl, u32 messageId, void* tagData);
    // @addr 0x80500c48
    static void clearTextBinding(void* ctrl, u32 group);
    // @addr 0x805011cc
    static void setAnimationFrame(void* ctrl, u32 animId, u32 group);

    // Singleton
    static LayoutLoader* getInstance();
    static void createInstance();
    static void destroyInstance();

private:
    static LayoutLoader* sInstance;

    // Resource cache (up to 32 entries)
    static LayoutResource sCache[32];
    static u32 sCacheCount;

    // Active layout tracking
    Layout* mActiveLayout;
    u32 mPendingLoads;

    // BRLYT parse state
    const void* mLayoutData;
    u32 mLayoutDataSize;
    s32 mLastError;
    BrltHeader mHeader;
};

// High-level loader: load BRLYT from a RARC archive by name
LayoutResource* LayoutLoader_loadFromArchive(const char* archiveName,
                                              const char* brlytName);

} // namespace UI