// GHIRDA Auto-Decompiled
// Address: 0x80596b1c (rel: 0x084280)
// Size: 16 bytes, 4 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: resetOob__Q24Kart9KartStateFv

void resetOob__Kart9KartState(void) {
    r0 = r0 >> 5; // srwi
    *(uint8_t*)(0x170(r3)) = r0; // stb
    r3 = r29; // mr
    // Call 0x805907bc
}
