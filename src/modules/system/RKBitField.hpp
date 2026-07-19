#pragma once
// RKBitField.hpp — Retro bitfield utility
#include "../rk_types.h"

template<int BITS>
class RKBitField {
public:
    static constexpr int WORDS = (BITS + 31) / 32;
    u32 data[WORDS];

    RKBitField() { reset(); }
    bool test(int bit) const { return (data[bit / 32] & (1u << (bit % 32))) != 0; }
    void set(int bit) { data[bit / 32] |= (1u << (bit % 32)); }
    void clear(int bit) { data[bit / 32] &= ~(1u << (bit % 32)); }
    void reset() { for (int i = 0; i < WORDS; i++) data[i] = 0; }
    bool on(size_t n) const { return (data[n / 32] & (1u << (n % 32))) != 0; }
    void reset(size_t n) { data[n / 32] &= ~(1u << (n % 32)); }
    u32& field(size_t n) { return data[n / 32]; }
};
