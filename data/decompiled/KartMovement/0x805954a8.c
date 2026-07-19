// GHIRDA Auto-Decompiled
// Address: 0x805954a8 (rel: 0x082c0c)
// Size: 204 bytes, 51 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: __ct__Q24Kart12KartSettingsFv

void Kart12KartSettings(void) {
    // Compare r22, 0
    r27 = 0x0; // li
    if (/* le */) goto 0x805954c8; // ble
    r3 = r26; // mr
    // Call 0x80590aac
    // Compare r3, 1
    if (/* ne */) goto 0x805954c8; // bne
    r27 = 0x1; // li
    // Compare r22, 0
    if (/* le */) goto 0x805954e8; // ble
    uint32_t r0 = *(uint32_t*)(4(r20)); // lwz
    /* rlwinm. r0, r0, 0, 0xc, 0xc */
    if (/* ne */) goto 0x805954e8; // bne
    uint32_t r0 = *(uint32_t*)(0x10(r20)); // lwz
    /* ori r0, r0, 0x10 */ // 0x60000010
    *(uint32_t*)(0x10(r20)) = r0; // stw
    // Compare r21, 0
    if (/* eq */) goto 0x805954fc; // beq
    uint32_t r0 = *(uint32_t*)(0x10(r20)); // lwz
    /* ori r0, r0, 0x20 */ // 0x60000020
    *(uint32_t*)(0x10(r20)) = r0; // stw
    // Compare r24, 0
    if (/* ne */) goto 0x80595514; // bne
    // Compare r21, 0
    if (/* ne */) goto 0x80595514; // bne
    // Compare r27, 0
    if (/* eq */) goto 0x80595538; // beq
    uint32_t r0 = *(uint32_t*)(0x10(r20)); // lwz
    // Compare r21, 0
    /* ori r0, r0, 8 */ // 0x60000008
    *(uint32_t*)(0x10(r20)) = r0; // stw
    uint32_t r0 = *(uint32_t*)(0x44(r30)); // lwz
    *(uint32_t*)(0x6c(r20)) = r0; // stw
    if (/* eq */) goto 0x80595538; // beq
    r0 = r0 << 1; // slwi
    *(uint32_t*)(0x6c(r20)) = r0; // stw
    int16_t r3 = *(int16_t*)(0xa6(r20)); // lha
    uint32_t r5 = *(uint32_t*)(4(r20)); // lwz
    r3 = r3 + 0x-1; // addi
    uint32_t r4 = *(uint32_t*)(8(r20)); // lwz
    r0 = sign_extend_16(r3); // extsh.
    /* rlwinm r5, r5, 0, 0x11, 0xf */
    /* rlwinm r0, r4, 0, 0x1e, 0x1c */
    *(uint32_t*)(4(r20)) = r5; // stw
    *(uint32_t*)(8(r20)) = r0; // stw
    *(uint16_t*)(0xa6(r20)) = r3; // sth
    if (/* ge */) goto 0x8059556c; // bge
    r0 = 0x0; // li
    *(uint16_t*)(0xa6(r20)) = r0; // sth
    // Compare r23, 0
    if (/* gt */) goto 0x80595580; // bgt
}
