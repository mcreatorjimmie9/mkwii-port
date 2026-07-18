// GHIRDA Auto-Decompiled
// Address: 0x805814e0 (rel: 0x06ec44)
// Size: 44 bytes, 11 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: getAppliedHopStickX__Q24Kart8KartMoveFv

float getAppliedHopStickX__Kart8KartMove(void) {
    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
    uint32_t r4 = *(uint32_t*)(0x14(r3)); // lwz
    /* rlwinm. r0, r4, 0, 0xe, 0xe */
    if (/* eq */) goto 0x805815f4; // beq
    uint32_t r0 = *(uint32_t*)(4(r3)); // lwz
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */
    if (/* ne */) goto 0x805815f4; // bne
    uint32_t r0 = *(uint32_t*)(0xc(r3)); // lwz
    /* rlwinm. r0, r0, 0, 0x11, 0x12 */
    if (/* ne */) goto 0x805815f4; // bne
    /* rlwinm. r0, r4, 0, 0x1c, 0x1c */
}
