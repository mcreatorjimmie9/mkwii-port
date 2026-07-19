#pragma once
// J2DPane.hpp - UI pane base class
// Reconstructed from J2DPane / J2DTextBox patterns in the Scene module
//
// J2DPane is the base class for all 2D UI elements in Nintendo's J2D
// framework. It provides positioning, sizing, alpha, color tinting,
// animation, and a parent-child hierarchy for layout.

#include "rk_common.h"

namespace EGG {

// Forward declarations
class J2DPane;

// =============================================================================
// PaneAnim — Animation state for a pane
// =============================================================================
struct PaneAnim {
    f32 offsetX, offsetY;
    f32 scaleX, scaleY;
    f32 rotation;
    f32 alpha;
    f32 timer;
    bool active;
};

// =============================================================================
// J2DPane — Base 2D UI pane
//
// This is the root of the J2D display list hierarchy. All UI elements
// (text boxes, pictures, windows, etc.) inherit from J2DPane.
// In MKWii, the HUD, menus, and race UI are built from J2DPane trees
// loaded from BRLYT layouts.
// =============================================================================
class J2DPane {
public:
    J2DPane();
    virtual ~J2DPane();

    // --- Virtual interface (override in derived classes) ---
    virtual void calc();
    virtual void draw() const;
    virtual void calcSelf();
    virtual void drawSelf() const;

    // --- Hierarchy ---
    void addChild(J2DPane* child);
    void removeChild(J2DPane* child);
    J2DPane* getParent() const { return m_parent; }
    J2DPane* getChild(u32 index) const;
    u32 getChildCount() const { return m_childCount; }

    // --- Positioning ---
    void setBounds(f32 x, f32 y, f32 width, f32 height) {
        m_x = x; m_y = y; m_width = width; m_height = height;
    }
    f32 getX() const { return m_x; }
    f32 getY() const { return m_y; }
    f32 getWidth() const { return m_width; }
    f32 getHeight() const { return m_height; }

    // --- Global transform (with parent) ---
    f32 getGlobalX() const;
    f32 getGlobalY() const;

    // --- Alpha / visibility ---
    void setAlpha(u8 alpha) { m_alpha = alpha; }
    u8 getAlpha() const { return m_alpha; }
    void setVisible(bool visible) { m_visible = visible; }
    bool isVisible() const { return m_visible; }

    // --- Color tint ---
    void setColor(u8 r, u8 g, u8 b, u8 a) {
        m_colorR = r; m_colorG = g; m_colorB = b; m_colorA = a;
    }
    u8 getColorR() const { return m_colorR; }
    u8 getColorG() const { return m_colorG; }
    u8 getColorB() const { return m_colorB; }
    u8 getColorA() const { return m_colorA; }

    // --- Rotation ---
    void setRotation(f32 degrees) { m_rotation = degrees; }
    f32 getRotation() const { return m_rotation; }

    // --- Scale ---
    void setScale(f32 sx, f32 sy) { m_scaleX = sx; m_scaleY = sy; }
    f32 getScaleX() const { return m_scaleX; }
    f32 getScaleY() const { return m_scaleY; }

    // --- Animation ---
    void startAnimation(f32 duration);
    void stopAnimation();
    bool isAnimating() const { return m_anim.active; }

    // --- Tag-based lookup ---
    void setTag(u16 tag) { m_tag = tag; }
    u16 getTag() const { return m_tag; }
    virtual J2DPane* findPane(u16 tag);

    // --- Name ---
    void setName(const char* name);
    const char* getName() const { return m_name; }

protected:
    static const u32 MAX_CHILDREN = 64;

    // Layout
    f32 m_x, m_y;
    f32 m_width, m_height;
    f32 m_rotation;
    f32 m_scaleX, m_scaleY;
    f32 m_globalX, m_globalY;

    // Appearance
    u8 m_alpha;
    u8 m_colorR, m_colorG, m_colorB, m_colorA;
    bool m_visible;

    // Hierarchy
    J2DPane* m_parent;
    J2DPane* m_children[MAX_CHILDREN];
    u32 m_childCount;

    // Animation
    PaneAnim m_anim;

    // Identification
    u16 m_tag;
    char m_name[32];
};

// =============================================================================
// J2DTextBox — Text rendering pane
// =============================================================================
class J2DTextBox : public J2DPane {
public:
    J2DTextBox();
    ~J2DTextBox() override;

    void calc() override;
    void drawSelf() const override;

    // Text content
    void setText(const char* text);
    const char* getText() const { return m_text; }

    // Font properties
    void setFontSize(f32 size) { m_fontSize = size; }
    f32 getFontSize() const { return m_fontSize; }

    void setTextColor(u8 r, u8 g, u8 b) {
        m_textR = r; m_textG = g; m_textB = b;
    }

    // Alignment
    enum Alignment {
        ALIGN_LEFT = 0,
        ALIGN_CENTER = 1,
        ALIGN_RIGHT = 2,
    };
    void setAlignment(Alignment align) { m_alignment = align; }

    // Max width for wrapping
    void setMaxWidth(f32 maxWidth) { m_maxWidth = maxWidth; }

    // Find by tag (searches self)
    J2DPane* findPane(u16 tag) override;

private:
    char m_text[256];
    f32 m_fontSize;
    u8 m_textR, m_textG, m_textB;
    Alignment m_alignment;
    f32 m_maxWidth;
};

} // namespace EGG