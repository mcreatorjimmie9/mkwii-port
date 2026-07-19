// GHIRDA Auto-Decompiled
// Address: 0x80575b38 (section offset: 0x06329c)
// Size: 308 bytes, 77 instructions
// Module: StaticR.rel | Class: Physics

void PlayerTrick_updateNext(void* arg0) {
    // Allocate stack frame: 0x10 bytes
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r3; // mr
    // Call 0x0005db98
    int var_1 = sub_0x0005db98(...);
    uint32_t r4 = *(uint32_t*)(0(r31)); // lwz
    uint8_t r5 = *(uint8_t*)(0x3a(r3)); // lbz
    uint32_t r3 = *(uint32_t*)(4(r4)); // lwz
    uint32_t r0 = *(uint32_t*)(8(r3)); // lwz
    r0 = r0 andi 0x461;
    if (/* bne 0x632f0 */) {
    // branch to 0x0632f0
        // Compare r5 cmpwi 0
        /* li r0, 0 */ // 0x38000000
        if (/* ble 0x632dc */) {
        // branch to 0x0632dc
            /* li r0, 1 */ // 0x38000001
            // Compare r0 cmpwi 0
            if (/* beq 0x632f0 */) {
            // branch to 0x0632f0
                /* li r0, 0xe */ // 0x3800000e
                *(uint32_t*)(0x18(r31)) = r5; // stb
                *(uint32_t*)(0x1a(r31)) = r0; // sth
                uint32_t r3 = *(uint32_t*)(0(r31)); // lwz
                uint32_t r4 = *(uint32_t*)(4(r3)); // lwz
                uint32_t r5 = *(uint32_t*)(0x1c(r4)); // lwz
                // Compare r5 cmpwi 0
                if (/* beq 0x63370 */) {
                // branch to 0x063370
                    uint16_t r0 = *(uint16_t*)(0x1a(r31)); // lha
                    // Compare r0 cmpwi 0
                    if (/* ble 0x63370 */) {
                    // branch to 0x063370
                        // Compare r5 cmplwi 0xa
                        if (/* bgt 0x63370 */) {
                        // branch to 0x063370
                            uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                            uint32_t r3 = *(uint32_t*)(8(r3)); // lwz
                            /* rlwinm. r0, r3, 0, 1, 1 */ // 0x54600043
                            if (/* bne 0x63334 */) {
                            // branch to 0x063334
                                uint32_t r0 = *(uint32_t*)(0x74(r4)); // lwz
                                // Compare r0 cmpwi 0
                                if (/* blt 0x63370 */) {
                                // branch to 0x063370
                                    r0 = r3 andi 0x461;
                                    if (/* bne 0x63370 */) {
                                    // branch to 0x063370
                                        // Compare r5 cmplwi 3
                                        if (/* blt 0x63350 */) {
                                        // branch to 0x063350
                                            uint32_t r0 = *(uint32_t*)(8(r4)); // lwz
                                            r0 = r0 ori 0x20;
                                            *(uint32_t*)(8(r4)) = r0; // stw
                                            uint32_t r3 = *(uint32_t*)(0(r31)); // lwz
                                            uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                            uint32_t r0 = *(uint32_t*)(4(r3)); // lwz
                                            /* rlwinm. r0, r0, 0, 0, 0 */ // 0x54000001
                                            if (/* beq 0x6338c */) {
                                            // branch to 0x06338c
                                                /* li r0, 1 */ // 0x38000001
                                                *(uint32_t*)(0x3a(r31)) = r0; // stb
                                                goto label_0x06338c;
                                                uint16_t r3 = *(uint16_t*)(0x1a(r31)); // lha
                                                r0 = r3 + -1; // addi
                                                *(uint32_t*)(0x1a(r31)) = r0; // sth
                                                /* extsh. r0, r0 */ // 0x7c000735
                                                if (/* bge 0x6338c */) {
                                                // branch to 0x06338c
                                                    /* li r0, 0 */ // 0x38000000
                                                    *(uint32_t*)(0x1a(r31)) = r0; // sth
                                                    uint32_t r3 = *(uint32_t*)(0(r31)); // lwz
                                                    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                                    uint32_t r0 = *(uint32_t*)(4(r3)); // lwz
                                                    /* rlwinm. r0, r0, 0, 0xd, 0xd */ // 0x5400035b
                                                    if (/* beq 0x633bc */) {
                                                    // branch to 0x0633bc
                                                        r3 = r31; // mr
                                                        // Call 0x0005dff0
                                                        int var_2 = sub_0x0005dff0(...);
                                                        uint32_t r0 = *(uint32_t*)(0x2c(r3)); // lwz
                                                        /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x540006f7
                                                        if (/* bne 0x633bc */) {
                                                        // branch to 0x0633bc
                                                            /* li r0, 0 */ // 0x38000000
                                                            *(uint32_t*)(0x3a(r31)) = r0; // stb
                                                            uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
                                                            uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
                                                            /* mtlr r0 */ // SPR operation
                                                            r1 = r1 + 0x10; // addi
                                                            // Restore stack (addi r1, r1, 0x10)
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
