// GHIRDA Auto-Decompiled
// Address: 0x8059b048 (rel: 0x0887ac)
// Size: 116 bytes, 29 instructions
// Module: StaticR.rel | Class: KartMovement
// Symbol: KartSus_init

void KartSus_init(void) {
    r4 = 0x0; // li
    // Call 0x80555bf4
    r31 = r31 + 0x1; // addi
    r30 = r30 + 0x4; // addi
    // Compare r31, 2
    if (/* lt */) goto 0x8059b034; // blt
    uint32_t r0 = *(uint32_t*)(0x64(r1)); // lwz
    uint32_t r31 = *(uint32_t*)(0x5c(r1)); // lwz
    uint32_t r30 = *(uint32_t*)(0x58(r1)); // lwz
    /* mtlr r0 */ // SPR
    r1 = r1 + 0x60; // addi
    return;
    *(uint32_t*)(-0x10(r1)) = r1; // stwu
    /* mflr r0 */ // SPR
    *(uint32_t*)(0x14(r1)) = r0; // stw
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r4; // mr
    *(uint32_t*)(8(r1)) = r30; // stw
    r30 = r3; // mr
    r3 = 0x84; // li
    // Call 0x80555bf4
    // Compare r3, 0
    if (/* eq */) goto 0x8059b0b0; // beq
    r4 = r31; // mr
    r5 = 0x0; // li
    // Call 0x8059944c
    *(uint32_t*)(0x98(r30)) = r3; // stw
    /* lwz r31, 0xc(r1) */
    uint32_t r30 = *(uint32_t*)(8(r1)); // lwz
}
