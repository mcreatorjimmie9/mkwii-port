// GHIRDA Auto-Decompiled
// Address: 0x80598460 (rel: 0x085bc4)
// Size: 388 bytes, 97 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: KartSub_init

void KartSub_init(void) {
    r4 = 0x0 << 16; // lis
    r31 = r3; // mr
    uint32_t r4 = *(uint32_t*)(0(r4)); // lwz
    r26 = 0x0; // li
    uint8_t r0 = *(uint8_t*)(0x25(r4)); // lbz
    // Compare r0, 0
    if (/* eq */) goto 0x80598498; // beq
    uint8_t r29 = *(uint8_t*)(0x27(r4)); // lbz
    // Call 0x80590a9c
    /* clrlwi r0, r3, 0x18 */ // mask lower bits
    // Compare r29, r0
    if (/* ne */) goto 0x805984bc; // bne
    r26 = 0x1; // li
    goto 0x805984bc; // b
    // Call 0x80590690
    // Compare r3, 0
    if (/* eq */) goto 0x805984bc; // beq
    uint32_t r3 = *(uint32_t*)(0(r31)); // lwz
    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
    uint32_t r0 = *(uint32_t*)(0x14(r3)); // lwz
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */
    if (/* ne */) goto 0x805984bc; // bne
    r26 = 0x1; // li
    // Compare r26, 0
    if (/* eq */) goto 0x80598550; // beq
    uint32_t r4 = *(uint32_t*)(0(r31)); // lwz
    r3 = 0x0 << 16; // lis
    float f0 = *(float*)(0(r3)); // lfs
    r3 = r31; // mr
    uint32_t r5 = *(uint32_t*)(4(r4)); // lwz
    r4 = r1 + 0x8; // addi
    uint32_t r0 = *(uint32_t*)(0x14(r5)); // lwz
    /* ori r0, r0, 0x4000 */ // 0x60004000
    *(uint32_t*)(0x14(r5)) = r0; // stw
    *(float*)(8(r1)) = f0; // stfs
    *(float*)(0xc(r1)) = f0; // stfs
    *(float*)(0x10(r1)) = f0; // stfs
    // Call 0x805916a4
    r3 = r31; // mr
    // Call 0x805961bc
    uint32_t r3 = *(uint32_t*)(0x1c(r31)); // lwz
    // Call 0x805945d4
    uint32_t r3 = *(uint32_t*)(0x10(r31)); // lwz
    uint32_t r12 = *(uint32_t*)(0xc(r3)); // lwz
    uint32_t r12 = *(uint32_t*)(0x10(r12)); // lwz
    /* mtctr r12 */ // SPR
    /* bctrl */ // indirect call
    uint32_t r3 = *(uint32_t*)(0x14(r31)); // lwz
    // Call 0x80569880
    r3 = r31; // mr
    // Call 0x80591658
    r4 = 0x0; // li
    // Call 0x805b7904
    r3 = r31; // mr
    // Call 0x805907bc
    // Call 0x8058496c
    r3 = r31; // mr
    r4 = 0x-1; // li
    // Call 0x805917c4
    goto 0x80598578; // b
    r3 = r31; // mr
    r4 = 0x1; // li
    // Call 0x8059174c
    uint32_t r4 = *(uint32_t*)(0(r31)); // lwz
    r3 = r31; // mr
    uint32_t r4 = *(uint32_t*)(4(r4)); // lwz
    uint32_t r0 = *(uint32_t*)(0x14(r4)); // lwz
    /* ori r0, r0, 0x1000 */ // 0x60001000
    *(uint32_t*)(0x14(r4)) = r0; // stw
    // Call 0x80590e98
    r3 = 0x0 << 16; // lis
    uint32_t r26 = *(uint32_t*)(0(r3)); // lwz
    // Compare r26, 0
    if (/* eq */) goto 0x80598600; // beq
    r28 = 0x0; // li
    r30 = 0x0; // li
    r29 = 0x1; // li
    goto 0x805985f0; // b
    /* rlwinm r0, r28, 3, 0x15, 0x1c */
    r3 = r26 + r0; // add
    uint32_t r27 = *(uint32_t*)(4(r3)); // lwz
    // Compare r27, 0
    if (/* eq */) goto 0x805985ec; // beq
    *(uint8_t*)(0x1e0(r27)) = r29; // stb
    uint32_t r3 = *(uint32_t*)(0x1d8(r27)); // lwz
    *(uint8_t*)(0xc(r3)) = r30; // stb
    uint32_t r4 = *(uint32_t*)(0x1d8(r27)); // lwz
    uint32_t r3 = *(uint32_t*)(0(r4)); // lwz
    // Compare r3, 0
    if (/* eq */) goto 0x805985ec; // beq
    uint32_t r0 = *(uint32_t*)(8(r4)); // lwz
    // Compare r0, 0
    if (/* eq */) goto 0x805985ec; // beq
    uint32_t r12 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r12 = *(uint32_t*)(0x10(r12)); // lwz
    /* mtctr r12 */ // SPR
    /* bctrl */ // indirect call
}
