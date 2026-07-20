// J2DPane.cpp - UI pane base class implementation

#include "J2DPane.hpp"
#include <string.h>
#include <math.h>

namespace EGG {

// =============================================================================
// J2DPane
// =============================================================================

J2DPane::J2DPane()
    : m_x(0.0f), m_y(0.0f)
    , m_width(100.0f), m_height(100.0f)
    , m_rotation(0.0f)
    , m_scaleX(1.0f), m_scaleY(1.0f)
    , m_globalX(0.0f), m_globalY(0.0f)
    , m_alpha(0xFF)
    , m_colorR(0xFF), m_colorG(0xFF), m_colorB(0xFF), m_colorA(0xFF)
    , m_visible(true)
    , m_parent(nullptr)
    , m_childCount(0)
    , m_tag(0xFFFF)
    , m_userData(nullptr)
    , m_zOrder(0) {
    memset(m_name, 0, sizeof(m_name));
    memset(m_children, 0, sizeof(m_children));
    m_anim.active = false;
    m_anim.offsetX = 0.0f;
    m_anim.offsetY = 0.0f;
    m_anim.scaleX = 1.0f;
    m_anim.scaleY = 1.0f;
    m_anim.rotation = 0.0f;
    m_anim.alpha = 1.0f;
    m_anim.timer = 0.0f;
    m_anim.duration = 1.0f;
}

J2DPane::~J2DPane() {
    // Children are NOT owned -- the layout system manages lifetime
}

void J2DPane::calc() {
    calcSelf();
    for (u32 i = 0; i < m_childCount; i++) {
        if (m_children[i]) m_children[i]->calc();
    }
}

void J2DPane::draw() const {
    if (!m_visible) return;
    if (m_alpha == 0) return;
    drawSelf();
    for (u32 i = 0; i < m_childCount; i++) {
        if (m_children[i]) m_children[i]->draw();
    }
}

// =============================================================================
// calcSelf - Animation interpolation with parent inheritance chain
// @addr 0x803A2C00
// =============================================================================

void J2DPane::calcSelf() {
    // Accumulate global position through the parent chain (J2D walks up
    // ancestors to compute absolute screen transform).
    f32 parentGX = 0.0f, parentGY = 0.0f;
    u32 inheritedAlpha = 0xFF;
    const J2DPane* ancestor = m_parent;
    while (ancestor) {
        parentGX += ancestor->m_x;
        parentGY += ancestor->m_y;
        inheritedAlpha = (inheritedAlpha * (u32)ancestor->m_alpha) >> 8;
        ancestor = ancestor->m_parent;
    }
    m_globalX = parentGX + m_x;
    m_globalY = parentGY + m_y;

    if (m_anim.active) {
        m_anim.timer += 1.0f / 60.0f;

        // Normalize to [0,1], clamp at end
        f32 t = m_anim.timer / m_anim.duration;
        if (t > 1.0f) t = 1.0f;

        // Linear interpolation for position offset
        m_globalX += m_anim.offsetX * t;
        m_globalY += m_anim.offsetY * t;

        // Lerp scale: base -> base * anim target
        f32 baseSX = m_scaleX, baseSY = m_scaleY;
        f32 animSX = 1.0f + (m_anim.scaleX - 1.0f) * t;
        f32 animSY = 1.0f + (m_anim.scaleY - 1.0f) * t;
        m_scaleX = baseSX * animSX;
        m_scaleY = baseSY * animSY;

        // Lerp rotation additively
        m_rotation += m_anim.rotation * t;

        // Lerp alpha: base * anim * inherited
        f32 animA = 1.0f + (m_anim.alpha - 1.0f) * t;
        u8 baseA = m_alpha;
        m_alpha = (u8)((f32)baseA * animA * (f32)inheritedAlpha / 255.0f);

        // Auto-stop and snap to final values
        if (m_anim.timer >= m_anim.duration) {
            m_anim.active = false;
            m_globalX = parentGX + m_x + m_anim.offsetX;
            m_globalY = parentGY + m_y + m_anim.offsetY;
            m_scaleX = baseSX * m_anim.scaleX;
            m_scaleY = baseSY * m_anim.scaleY;
            m_rotation += m_anim.rotation;
            m_alpha = (u8)((f32)baseA * m_anim.alpha * (f32)inheritedAlpha / 255.0f);
        }
    } else {
        // No animation: apply inherited parent alpha
        m_alpha = (u8)((inheritedAlpha * (u32)m_alpha) >> 8);
    }
}

// =============================================================================
// drawSelf - GX viewport/scissor setup for pane bounds
// @addr 0x803A2E80
// =============================================================================

void J2DPane::drawSelf() const {
    // Base pane sets up GX scissor and viewport for its bounding box.
    // GXSetScissorBox((u32)m_globalX,
    //     (u32)(480.0f - m_globalY - m_height), (u32)m_width, (u32)m_height);
    // GXSetViewport(m_globalX + m_width * 0.5f,
    //     480.0f - (m_globalY + m_height * 0.5f),
    //     m_width * 0.5f, m_height * 0.5f, 0.0f, 1.0f);
    // GXSetAlphaCompare(GX_GREATER, 0, GX_AOP_AND, GX_ALWAYS, 0);
    // GXSetZMode(GX_DISABLE, GX_ALWAYS, GX_DISABLE);
    (void)m_globalX; (void)m_globalY;
    (void)m_width;  (void)m_height; (void)m_alpha;
}

// =============================================================================
// addChild - Insert with Z-ordering support
// @addr 0x803A3000
// =============================================================================

void J2DPane::addChild(J2DPane* child) {
    if (!child || m_childCount >= MAX_CHILDREN) return;
    if (child->m_parent) {
        child->m_parent->removeChild(child);
    }
    child->m_parent = this;

    // Insert before the first child with a higher Z-order.
    // If none, append (drawn on top).
    u32 insertIdx = m_childCount;
    for (u32 i = 0; i < m_childCount; i++) {
        if (m_children[i] && m_children[i]->m_zOrder > child->m_zOrder) {
            insertIdx = i;
            break;
        }
    }

    // Shift children right to make room
    if (insertIdx < m_childCount) {
        for (u32 j = m_childCount; j > insertIdx; j--) {
            m_children[j] = m_children[j - 1];
        }
    }
    m_children[insertIdx] = child;
    m_childCount++;
}

void J2DPane::removeChild(J2DPane* child) {
    if (!child) return;
    for (u32 i = 0; i < m_childCount; i++) {
        if (m_children[i] == child) {
            for (u32 j = i; j < m_childCount - 1; j++) {
                m_children[j] = m_children[j + 1];
            }
            m_children[m_childCount - 1] = nullptr;
            m_childCount--;
            child->m_parent = nullptr;
            return;
        }
    }
}

J2DPane* J2DPane::getChild(u32 index) const {
    if (index >= m_childCount) return nullptr;
    return m_children[index];
}

f32 J2DPane::getGlobalX() const { return m_globalX; }
f32 J2DPane::getGlobalY() const { return m_globalY; }

// =============================================================================
// setAlpha / setVisible - Mutators
// @addr 0x803A3180 / 0x803A31A0
// =============================================================================

void J2DPane::setAlpha(u8 alpha) {
    m_alpha = alpha;
}

void J2DPane::setVisible(bool visible) {
    m_visible = visible;
    // Cascade hide to direct children
    if (!visible) {
        for (u32 i = 0; i < m_childCount; i++) {
            if (m_children[i]) {
                m_children[i]->m_visible = false;
            }
        }
    }
}

// =============================================================================
// Animation control
// @addr 0x803A3200
// =============================================================================

void J2DPane::startAnimation(f32 duration) {
    m_anim.active = true;
    m_anim.timer = 0.0f;
    m_anim.duration = (duration > 0.0f) ? duration : 1.0f;
    m_anim.offsetX = 0.0f;
    m_anim.offsetY = 0.0f;
    m_anim.scaleX = 1.0f;
    m_anim.scaleY = 1.0f;
    m_anim.rotation = 0.0f;
    m_anim.alpha = 1.0f;
}

void J2DPane::stopAnimation() {
    m_anim.active = false;
    m_anim.timer = 0.0f;
}

void J2DPane::setName(const char* name) {
    if (name) {
        strncpy(m_name, name, sizeof(m_name) - 1);
        m_name[sizeof(m_name) - 1] = '\0';
    } else {
        m_name[0] = '\0';
    }
}

// =============================================================================
// findPane / getPaneByName - Tag and name based lookup
// @addr 0x803A3300 / 0x803A3380
// =============================================================================

J2DPane* J2DPane::findPane(u16 tag) {
    if (m_tag == tag) return this;
    for (u32 i = 0; i < m_childCount; i++) {
        if (m_children[i]) {
            J2DPane* found = m_children[i]->findPane(tag);
            if (found) return found;
        }
    }
    return nullptr;
}

J2DPane* J2DPane::getPaneByName(const char* name) {
    if (!name || name[0] == '\0') return nullptr;
    if (strncmp(m_name, name, sizeof(m_name) - 1) == 0) return this;
    for (u32 i = 0; i < m_childCount; i++) {
        if (m_children[i]) {
            J2DPane* found = m_children[i]->getPaneByName(name);
            if (found) return found;
        }
    }
    return nullptr;
}

// =============================================================================
// J2DTextBox
// =============================================================================

J2DTextBox::J2DTextBox()
    : m_fontSize(16.0f)
    , m_textR(0xFF), m_textG(0xFF), m_textB(0xFF)
    , m_alignment(ALIGN_LEFT)
    , m_maxWidth(0.0f)
    , m_drawX(0.0f)
    , m_charCount(0) {
    m_text[0] = '\0';
}

J2DTextBox::~J2DTextBox() {}

void J2DTextBox::calc() {
    J2DPane::calc();
}

// =============================================================================
// J2DTextBox::calcSelf - Text wrapping computation
// @addr 0x803A3C00
// =============================================================================

void J2DTextBox::calcSelf() {
    J2DPane::calcSelf();

    // Measure text and compute wrapping within m_maxWidth.
    // Uses approximate monospace width (real J2DTextBox uses JUTFont).
    m_charCount = 0;
    f32 charWidth = m_fontSize * 0.6f;

    s32 len = 0;
    while (m_text[len] != '\0') len++;

    if (m_maxWidth > 0.0f && charWidth > 0.0f) {
        s32 charsPerLine = (s32)(m_maxWidth / charWidth);
        if (charsPerLine <= 0) charsPerLine = 1;
        m_charCount = len < charsPerLine ? len : charsPerLine;
    } else {
        m_charCount = len;
    }

    f32 textWidth = (f32)m_charCount * charWidth;
    switch (m_alignment) {
    case ALIGN_CENTER:
        m_drawX = (m_width - textWidth) * 0.5f;
        break;
    case ALIGN_RIGHT:
        m_drawX = m_width - textWidth;
        break;
    case ALIGN_LEFT:
    default:
        m_drawX = 0.0f;
        break;
    }
    if (m_drawX < 0.0f) m_drawX = 0.0f;
}

// =============================================================================
// J2DTextBox::drawSelf - Font rendering dispatch
// @addr 0x803A3E00
// =============================================================================

void J2DTextBox::drawSelf() const {
    if (m_charCount == 0 || m_alpha == 0) return;

    // Dispatch to JUTFont for actual glyph rendering:
    //   font->setGX();
    //   font->drawString(m_globalX + m_drawX, m_globalY,
    //                    m_text, m_charCount, m_fontSize,
    //                    m_textR, m_textG, m_textB, m_alpha);
    //
    // GX: GXSetTevOp(GX_TEVSTAGE0, GX_MODULATE);
    //     GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);
    //     GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);

    f32 renderX = m_globalX + m_drawX;
    f32 renderY = m_globalY;
    (void)renderX; (void)renderY; (void)m_fontSize;
}

void J2DTextBox::setText(const char* text) {
    if (text) {
        strncpy(m_text, text, sizeof(m_text) - 1);
        m_text[sizeof(m_text) - 1] = '\0';
    } else {
        m_text[0] = '\0';
    }
}

J2DPane* J2DTextBox::findPane(u16 tag) {
    if (m_tag == tag) return this;
    return J2DPane::findPane(tag);
}

// =============================================================================
// J2DPicture - Image rendering pane (texture quad)
// =============================================================================

J2DPicture::J2DPicture()
    : m_texResPtr(nullptr)
    , m_u0(0.0f), m_v0(0.0f), m_u1(1.0f), m_v1(1.0f)
    , m_materialID(0xFFFF) {}

J2DPicture::~J2DPicture() {}

// @addr 0x803A4500
void J2DPicture::calcSelf() {
    J2DPane::calcSelf();
    // Update animated UV / material properties from BRLYT MAT1 data.
    // Real implementation cycles texture frames and scrolls UVs.
}

// @addr 0x803A4600
void J2DPicture::drawSelf() const {
    if (!m_texResPtr || m_alpha == 0) return;

    // Bind ResTIMG and render a textured quad via GX:
    //   ResTIMG* timg = (ResTIMG*)m_texResPtr;
    //   GXTexObj texObj;
    //   GXInitTexObj(&texObj, timg->data, timg->width, timg->height,
    //                timg->format, GX_CLAMP, GX_CLAMP, GX_FALSE);
    //   GXLoadTexObj(&texObj, GX_TEXMAP0);
    //
    //   GXSetTevOp(GX_TEVSTAGE0, GX_MODULATE);
    //   GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);
    //   GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
    //   GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
    //   GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
    //
    //   f32 x0 = m_globalX, y0 = m_globalY;
    //   f32 x1 = m_globalX + m_width * m_scaleX;
    //   f32 y1 = m_globalY + m_height * m_scaleY;
    //
    //   GXBegin(GX_QUADS, GX_VTXFMT0, 4);
    //     GXPosition3f32(x0, y0, 0.0f);
    //     GXTexCoord2f32(m_u0, m_v1);  // Top-left
    //     GXColor4u8(m_colorR, m_colorG, m_colorB, m_alpha);
    //     GXPosition3f32(x1, y0, 0.0f);
    //     GXTexCoord2f32(m_u1, m_v1);  // Top-right
    //     GXColor4u8(m_colorR, m_colorG, m_colorB, m_alpha);
    //     GXPosition3f32(x1, y1, 0.0f);
    //     GXTexCoord2f32(m_u1, m_v0);  // Bottom-right
    //     GXColor4u8(m_colorR, m_colorG, m_colorB, m_alpha);
    //     GXPosition3f32(x0, y1, 0.0f);
    //     GXTexCoord2f32(m_u0, m_v0);  // Bottom-left
    //     GXColor4u8(m_colorR, m_colorG, m_colorB, m_alpha);
    //   GXEnd();
    (void)m_u0; (void)m_v0; (void)m_u1; (void)m_v1; (void)m_materialID;
}

} // namespace EGG