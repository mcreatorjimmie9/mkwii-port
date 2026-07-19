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
    , m_tag(0xFFFF) {
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
}

J2DPane::~J2DPane() {
    // Children are NOT owned — the layout system manages lifetime
}

void J2DPane::calc() {
    calcSelf();
    for (u32 i = 0; i < m_childCount; i++) {
        if (m_children[i]) m_children[i]->calc();
    }
}

void J2DPane::draw() const {
    if (!m_visible) return;
    drawSelf();
    for (u32 i = 0; i < m_childCount; i++) {
        if (m_children[i]) m_children[i]->draw();
    }
}

void J2DPane::calcSelf() {
    // Update global position
    if (m_parent) {
        m_globalX = m_parent->m_globalX + m_x;
        m_globalY = m_parent->m_globalY + m_y;
    } else {
        m_globalX = m_x;
        m_globalY = m_y;
    }

    // Animation interpolation
    if (m_anim.active) {
        m_anim.timer += 1.0f / 60.0f; // Assuming 60fps step
    }
}

void J2DPane::drawSelf() const {
    // Base pane draws nothing — override in J2DPicture, J2DWindow, etc.
}

void J2DPane::addChild(J2DPane* child) {
    if (!child || m_childCount >= MAX_CHILDREN) return;
    if (child->m_parent) {
        child->m_parent->removeChild(child);
    }
    child->m_parent = this;
    m_children[m_childCount++] = child;
}

void J2DPane::removeChild(J2DPane* child) {
    if (!child) return;

    for (u32 i = 0; i < m_childCount; i++) {
        if (m_children[i] == child) {
            // Shift remaining children down
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

f32 J2DPane::getGlobalX() const {
    return m_globalX;
}

f32 J2DPane::getGlobalY() const {
    return m_globalY;
}

void J2DPane::startAnimation(f32 duration) {
    m_anim.active = true;
    m_anim.timer = 0.0f;
    m_anim.offsetX = 0.0f;
    m_anim.offsetY = 0.0f;
    (void)duration;
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

// =============================================================================
// J2DTextBox
// =============================================================================

J2DTextBox::J2DTextBox()
    : m_fontSize(16.0f)
    , m_textR(0xFF), m_textG(0xFF), m_textB(0xFF)
    , m_alignment(ALIGN_LEFT)
    , m_maxWidth(0.0f) {
    m_text[0] = '\0';
}

J2DTextBox::~J2DTextBox() {}

void J2DTextBox::calc() {
    J2DPane::calc();
}

void J2DTextBox::drawSelf() const {
    // Text rendering dispatched to font renderer
    (void)m_text;
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

} // namespace EGG