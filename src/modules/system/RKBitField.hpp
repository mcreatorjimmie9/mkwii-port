#pragma once
// RKBitField.hpp — Retro bitfield utility
#include "../rk_types.h"

template<int BITS>
class RKBitField {
public:
    u32 data;

    RKBitField() : data(0) {}
    bool test(int bit) const { return (data & (1u << bit)) != 0; }
    void set(int bit) { data |= (1u << bit); }
    void clear(int bit) { data &= ~(1u << bit); }
    void reset() { data = 0; }
};
