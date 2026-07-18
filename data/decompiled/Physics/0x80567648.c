// GHIRDA Auto-Decompiled
// Address: 0x80567648 (section offset: 0x054dac)
// Size: 260 bytes, 65 instructions
// Module: StaticR.rel | Class: Physics

void sub_80567648(void* arg0) {
    // Allocate stack frame: 0x20 bytes
    *(uint32_t*)(0x1c(r1)) = r31; // stw
    *(uint32_t*)(0x18(r1)) = r30; // stw
    *(uint32_t*)(0x14(r1)) = r29; // stw
    r29 = r3; // mr
    uint32_t r4 = *(uint32_t*)(0x10(r3)); // lwz
    uint32_t r31 = *(uint32_t*)(0x68(r4)); // lwz
    // Compare r31 cmpwi 0
    if (/* blt 0x54e7c */) {
    // branch to 0x054e7c
        /* li r4, 0 */ // 0x38800000
        if (/* blt 0x54df8 */) {
        // branch to 0x054df8
            r3 = 0x0 << 16; // lis
            r3 = r3 + 0; // addi
            uint32_t r0 = *(uint32_t*)(4(r3)); // lwz
            // Compare r31 cmpw r0
            if (/* bge 0x54df8 */) {
            // branch to 0x054df8
                /* li r4, 1 */ // 0x38800001
                // Compare r4 cmpwi 0
                if (/* bne 0x54e14 */) {
                // branch to 0x054e14
                    r3 = 0x0 << 16; // lis
                    uint32_t r12 = *(uint32_t*)(0(r3)); // lwzu
                    uint32_t r12 = *(uint32_t*)(0x18(r12)); // lwz
                    /* mtctr r12 */ // SPR operation
                    /* bctrl  */ // indirect call/branch
                    r4 = 0x0 << 16; // lis
                    /* slwi r30, r31, 2 */ // 0x57fe103a
                    r4 = r4 + 0; // addi
                    uint32_t r3 = *(uint32_t*)(8(r4)); // lwz
                    uint32_t r0 = *(uint32_t*)(r3); // lwzx
                    // Compare r0 cmpwi 0
                    if (/* bne 0x54e7c */) {
                    // branch to 0x054e7c
                        // Compare r31 cmpwi 0
                        /* li r3, 0 */ // 0x38600000
                        if (/* blt 0x54e4c */) {
                        // branch to 0x054e4c
                            uint32_t r0 = *(uint32_t*)(4(r4)); // lwz
                            // Compare r31 cmpw r0
                            if (/* bge 0x54e4c */) {
                            // branch to 0x054e4c
                                /* li r3, 1 */ // 0x38600001
                                // Compare r3 cmpwi 0
                                if (/* bne 0x54e68 */) {
                                // branch to 0x054e68
                                    r3 = 0x0 << 16; // lis
                                    uint32_t r12 = *(uint32_t*)(0(r3)); // lwzu
                                    uint32_t r12 = *(uint32_t*)(0x18(r12)); // lwz
                                    /* mtctr r12 */ // SPR operation
                                    /* bctrl  */ // indirect call/branch
                                    r3 = 0x0 << 16; // lis
                                    uint32_t r0 = *(uint32_t*)(0x10(r29)); // lwz
                                    r3 = r3 + 0; // addi
                                    uint32_t r3 = *(uint32_t*)(8(r3)); // lwz
                                    /* stwx r0, r3, r30 */ // 0x7c03f12e
                                    r3 = 0x0 << 16; // lis
                                    r4 = r29; // mr
                                    r3 = r3 + 0; // addi
                                    // Call 0x00053358
                                    int var_1 = sub_0x00053358(...);
                                    /* li r0, 0 */ // 0x38000000
                                    *(uint32_t*)(0x14(r29)) = r0; // stw
                                    uint32_t r31 = *(uint32_t*)(0x1c(r1)); // lwz
                                    uint32_t r30 = *(uint32_t*)(0x18(r1)); // lwz
                                    uint32_t r29 = *(uint32_t*)(0x14(r1)); // lwz
                                    uint32_t r0 = *(uint32_t*)(0x24(r1)); // lwz
                                    /* mtlr r0 */ // SPR operation
                                    r1 = r1 + 0x20; // addi
                                    // Restore stack (addi r1, r1, 0x20)
                                    // Restore LR (lwz r0, N(r1); mtlr r0)
                                    return;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
