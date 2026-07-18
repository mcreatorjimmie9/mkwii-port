// GHIRDA Auto-Decompiled
// Address: 0x8056731c (section offset: 0x054a80)
// Size: 504 bytes, 126 instructions
// Module: StaticR.rel | Class: Physics

void sub_8056731c(void* arg0) {
    // Allocate stack frame: 0x20 bytes
    r3 = 0x0 << 16; // lis
    /* li r0, 1 */ // 0x38000001
    *(uint32_t*)(0x1c(r1)) = r31; // stw
    r31 = 0x0 << 16; // lis
    r31 = r31 + 0; // addi
    *(uint32_t*)(0x18(r1)) = r30; // stw
    *(uint32_t*)(0x14(r1)) = r29; // stw
    r29 = r31 + 0x20; // addi
    *(uint32_t*)(0(r3)) = r0; // stw
    uint32_t r3 = *(uint32_t*)(4(r29)); // lwz
    // Compare r3 cmpwi 0
    if (/* beq 0x54ad4 */) {
    // branch to 0x054ad4
        uint32_t r12 = *(uint32_t*)(0(r3)); // lwz
        uint32_t r12 = *(uint32_t*)(0x14(r12)); // lwz
        /* mtctr r12 */ // SPR operation
        /* bctrl  */ // indirect call/branch
        uint32_t r3 = *(uint32_t*)(4(r29)); // lwz
        // Call 0x000524d0
        int var_1 = sub_0x000524d0(...);
        r30 = r31 + 0x18; // addi
        /* li r0, 0 */ // 0x38000000
        *(uint32_t*)(4(r30)) = r0; // stw
        r29 = r31 + 0; // addi
        goto label_0x054afc;
        uint32_t r3 = *(uint32_t*)(4(r30)); // lwz
        uint32_t r12 = *(uint32_t*)(0(r3)); // lwz
        uint32_t r12 = *(uint32_t*)(0xc(r12)); // lwz
        /* mtctr r12 */ // SPR operation
        /* bctrl  */ // indirect call/branch
        uint32_t r4 = *(uint32_t*)(4(r30)); // lwz
        r3 = r29 + 0xc; // addi
        // Call 0x00053358
        int var_2 = sub_0x00053358(...);
        // Compare r3 cmpwi 0
        *(uint32_t*)(4(r30)) = r3; // stw
        while (/* bne 0x54ae8 */) {
            // Call 0x00053358
            int var_3 = sub_0x00053358(...);
            uint8_t r7 = *(uint8_t*)(0x69(r3)); // lbz
            r5 = 0x0 << 16; // lis
            uint32_t r0 = *(uint32_t*)(0x44(r31)); // lwz
            r3 = 0x0 << 16; // lis
            r6 = -r7;
            /* li r4, 1 */ // 0x38800001
            r6 = r6 or r7; // or
            /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x540007bd
            /* srwi r6, r6, 0x1f */ // 0x54c60ffe
            *(uint32_t*)(0(r3)) = r4; // stw
            r0 = r6 + 1; // addi
            *(uint32_t*)(0(r5)) = r0; // stb
            if (/* bne 0x54b60 */) {
            // branch to 0x054b60
                r3 = r31 + 0x20; // addi
                uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                // Compare r3 cmpwi 0
                if (/* beq 0x54b60 */) {
                // branch to 0x054b60
                    // Call 0x00052114
                    int var_4 = sub_0x00052114(...);
                    r29 = r31 + 0x18; // addi
                    r30 = r31 + 0; // addi
                    goto label_0x054b80;
                    uint32_t r3 = *(uint32_t*)(4(r29)); // lwz
                    uint32_t r12 = *(uint32_t*)(0(r3)); // lwz
                    uint32_t r12 = *(uint32_t*)(0x10(r12)); // lwz
                    /* mtctr r12 */ // SPR operation
                    /* bctrl  */ // indirect call/branch
                    uint32_t r4 = *(uint32_t*)(4(r29)); // lwz
                    r3 = r30 + 0xc; // addi
                    // Call 0x00053358
                    int var_5 = sub_0x00053358(...);
                    // Compare r3 cmpwi 0
                    *(uint32_t*)(4(r29)) = r3; // stw
                    while (/* bne 0x54b6c */) {
                        uint32_t r0 = *(uint32_t*)(0x44(r31)); // lwz
                        /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x540007bd
                        if (/* bne 0x54bd0 */) {
                        // branch to 0x054bd0
                            r30 = r31 + 0x20; // addi
                            uint32_t r3 = *(uint32_t*)(4(r30)); // lwz
                            // Compare r3 cmpwi 0
                            if (/* beq 0x54bd0 */) {
                            // branch to 0x054bd0
                                // Call 0x00052168
                                int var_6 = sub_0x00052168(...);
                                uint32_t r0 = *(uint32_t*)(0x44(r31)); // lwz
                                /* clrlwi. r0, r0, 0x1f */ // 0x540007ff
                                if (/* bne 0x54bd0 */) {
                                // branch to 0x054bd0
                                    uint32_t r3 = *(uint32_t*)(4(r30)); // lwz
                                    /* li r4, 0 */ // 0x38800000
                                    // Call 0x0005322c
                                    int var_7 = sub_0x0005322c(...);
                                    uint32_t r0 = *(uint32_t*)(0x24(r1)); // lwz
                                    uint32_t r31 = *(uint32_t*)(0x1c(r1)); // lwz
                                    uint32_t r30 = *(uint32_t*)(0x18(r1)); // lwz
                                    uint32_t r29 = *(uint32_t*)(0x14(r1)); // lwz
                                    /* mtlr r0 */ // SPR operation
                                    r1 = r1 + 0x20; // addi
                                    // Restore stack (addi r1, r1, 0x20)
                                    // Restore LR (lwz r0, N(r1); mtlr r0)
                                    return;
                                    r3 = 0x0 << 16; // lis
                                    uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
                                    // Compare r3 cmpwi 0
                                    if (/* beqlr  */) {
                                    // branch to 0x054c18
                                    } else {
                                        continue; // loop back to 0x052164
                                        // Restore stack (addi r1, r1, 0x20)
                                        // Restore LR (lwz r0, N(r1); mtlr r0)
                                        return;
                                        r4 = 0x0 << 16; // lis
                                        uint32_t r0 = *(uint32_t*)(0(r4)); // lwz
                                        /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x54000739
                                        if (/* bnelr  */) {
                                        // branch to 0x054c30
                                            uint32_t r0 = *(uint32_t*)(0x14(r3)); // lwz
                                            // Compare r0 cmpwi 2
                                            if (/* bgelr  */) {
                                            // branch to 0x054c3c
                                                r0 = r0 * 0xc; // mulli
                                                r5 = 0x0 << 16; // lis
                                                r4 = r3; // mr
                                                r5 = r5 + 0; // addi
                                                r3 = r5 + r0; // add
                                                continue; // loop back to 0x053358
                                                // Restore stack (addi r1, r1, 0x20)
                                                // Restore LR (lwz r0, N(r1); mtlr r0)
                                                return;
                                                r4 = 0x0 << 16; // lis
                                                uint32_t r0 = *(uint32_t*)(0(r4)); // lwz
                                                /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x54000739
                                                if (/* bnelr  */) {
                                                // branch to 0x054c68
                                                    r5 = 0x0 << 16; // lis
                                                    uint32_t r4 = *(uint32_t*)(0(r5)); // lwzu
                                                    /* li r0, 0 */ // 0x38000000
                                                    // Compare r4 cmplw r3
                                                    if (/* bne 0x54c64 */) {
                                                    // branch to 0x054c64
                                                        *(uint32_t*)(0(r5)) = r0; // stw
                                                        uint32_t r4 = *(uint32_t*)(4(r5)); // lwz
                                                        // Compare r4 cmplw r3
                                                        if (/* bnelr  */) {
                                                        // branch to 0x054c8c
                                                            *(uint32_t*)(4(r5)) = r0; // stw
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
                    }
                }
            }
        }
    }
}
