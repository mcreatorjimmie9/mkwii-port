// GHIRDA Auto-Decompiled
// Address: 0x80596a44 (rel: 0x0841a8)
// Size: 56 bytes, 14 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: init__Q24Kart9KartStateFv

void init__Kart9KartState(void) {
    /* rlwinm. r0, r3, 0, 0x13, 0x13 */
    if (/* ne */) goto 0x80596aa0; // bne
    /* rlwinm. r0, r3, 0, 0xd, 0xd */
    if (/* eq */) goto 0x80596ab4; // beq
    r3 = r29; // mr
    // Call 0x80590cfc
    r5 = 0x0 << 16; // lis
    float f3 = *(float*)(0(r3)); // lfs
    r4 = r5 + 0x0; // addi
    float f2 = *(float*)(0(r5)); // lfs
    float f1 = *(float*)(4(r3)); // lfs
    float f0 = *(float*)(4(r4)); // lfs
    f2 = f3 * f2; // fmuls
    float f4 = *(float*)(8(r3)); // lfs
}
