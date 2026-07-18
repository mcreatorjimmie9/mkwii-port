// GHIRDA Auto-Decompiled
// Address: 0x80567514 (section offset: 0x054c78)
// Size: 128 bytes, 32 instructions
// Module: StaticR.rel | Class: Physics

void sub_80567514(void* arg0) {
    // Allocate stack frame: 0x20 bytes
    /* stmw r26, 8(r1) */ // 0xbf410008
    r27 = 0x0 << 16; // lis
    r27 = r27 + 0; // addi
    /* li r26, 0 */ // 0x3b400000
    /* li r29, 0 */ // 0x3ba00000
    r28 = r27 + 0; // addi
    r30 = r27 + 0x18; // addi
    r31 = r27 + 0x20; // addi
    /* clrlwi r0, r26, 0x18 */ // 0x5740063e
    /* li r4, 0x18 */ // 0x38800018
    r0 = r0 * 0xc; // mulli
    r3 = r28 + r0; // add
    // Call 0x00053358
    int var_1 = sub_0x00053358(...);
    r0 = ROTATE_AND_MASK(r26, 2); // rlwinm
    r26 = r26 + 1; // addi
    // Compare r26 cmplwi 2
    /* stwx r29, r30, r0 */ // 0x7fbe012e
    /* stwx r29, r31, r0 */ // 0x7fbf012e
    while (/* blt 0x54ca4 */) {
        uint32_t r0 = *(uint32_t*)(0x44(r27)); // lwz
        /* li r3, 0 */ // 0x38600000
        *(uint32_t*)(0x28(r27)) = r3; // stw
        r0 = r0 ori 8;
        *(uint32_t*)(0x44(r27)) = r0; // stw
        /* lmw r26, 8(r1) */ // 0xbb410008
        uint32_t r0 = *(uint32_t*)(0x24(r1)); // lwz
        /* mtlr r0 */ // SPR operation
        r1 = r1 + 0x20; // addi
        // Restore stack (addi r1, r1, 0x20)
        // Restore LR (lwz r0, N(r1); mtlr r0)
        return;
    }
}
