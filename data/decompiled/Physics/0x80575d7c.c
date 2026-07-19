// GHIRDA Auto-Decompiled
// Address: 0x80575d7c (section offset: 0x0634e0)
// Size: 364 bytes, 91 instructions
// Module: StaticR.rel | Class: Physics

void PlayerTrick_tryStart(void* arg0) {
    // Allocate stack frame: 0x10 bytes
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r4; // mr
    *(uint32_t*)(8(r1)) = r30; // stw
    r30 = r3; // mr
    uint32_t r5 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r4 = *(uint32_t*)(4(r5)); // lwz
    uint32_t r0 = *(uint32_t*)(0x14(r4)); // lwz
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x54000739
    if (/* beq 0x635b8 */) {
    // branch to 0x0635b8
        // Call 0x0005ec0c
        int var_1 = sub_0x0005ec0c(...);
        uint32_t r0 = *(uint32_t*)(0x1c(r3)); // lwz
        uint32_t r4 = *(uint32_t*)(0x18(r3)); // lwz
        r0 = ROTATE_AND_MASK(r0, 0x17); // rlwinm
        r3 = ROTATE_AND_MASK(r4, 0x17); // rlwinm
        // Compare r3 cmplw r0
        if (/* beq 0x635a0 */) {
        // branch to 0x0635a0
            uint32_t r3 = *(uint32_t*)(0(r30)); // lwz
            uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
            uint32_t r0 = *(uint32_t*)(8(r3)); // lwz
            /* rlwinm. r0, r0, 0, 9, 9 */ // 0x54000253
            if (/* bne 0x635a0 */) {
            // branch to 0x0635a0
                r3 = r30; // mr
                // Call 0x0005ebf0
                int var_2 = sub_0x0005ebf0(...);
                r3 = r30; // mr
                // Call 0x0005ebf0
                int var_3 = sub_0x0005ebf0(...);
                uint8_t r0 = *(uint8_t*)(0x9f(r3)); // lbz
                r3 = r30; // mr
                *(uint32_t*)(0x14(r30)) = r0; // stw
                // Call 0x0005ebf0
                int var_4 = sub_0x0005ebf0(...);
                uint8_t r0 = *(uint8_t*)(0x9e(r3)); // lbz
                *(uint32_t*)(0x18(r30)) = r0; // stb
                // Compare r0 cmplwi 1
                if (/* bge 0x63578 */) {
                // branch to 0x063578
                    /* li r0, 1 */ // 0x38000001
                    goto label_0x063584;
                    // Compare r0 cmplwi 4
                    if (/* ble 0x63584 */) {
                    // branch to 0x063584
                        /* li r0, 4 */ // 0x38000004
                        *(uint32_t*)(0x18(r30)) = r0; // stb
                        r3 = r30; // mr
                        r4 = r31; // mr
                        uint32_t r12 = *(uint32_t*)(0xc(r30)); // lwz
                        uint32_t r12 = *(uint32_t*)(0xc(r12)); // lwz
                        /* mtctr r12 */ // SPR operation
                        /* bctrl  */ // indirect call/branch
                        uint32_t r3 = *(uint32_t*)(0(r30)); // lwz
                        uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                        uint32_t r0 = *(uint32_t*)(8(r3)); // lwz
                        r0 = ROTATE_AND_MASK(r0, 0); // rlwinm
                        *(uint32_t*)(8(r3)) = r0; // stw
                        goto label_0x063634;
                        uint32_t r0 = *(uint32_t*)(8(r4)); // lwz
                        /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x540006b5
                        if (/* beq 0x63634 */) {
                        // branch to 0x063634
                            // Call 0x0005e564
                            int var_5 = sub_0x0005e564(...);
                            r3 = 0x0 << 16; // lis
                            float f0 = *(float*)(0(r3)); // lfs
                            /* gekko_0x3f 0xfc010040 */ // 0xfc010040
                            if (/* ble 0x63620 */) {
                            // branch to 0x063620
                                uint32_t r3 = *(uint32_t*)(0(r30)); // lwz
                                /* li r0, 0 */ // 0x38000000
                                uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                uint32_t r3 = *(uint32_t*)(0x74(r3)); // lwz
                                // Compare r3 cmpwi 0
                                if (/* bne 0x635f8 */) {
                                // branch to 0x0635f8
                                    /* li r0, 2 */ // 0x38000002
                                    goto label_0x063604;
                                    // Compare r3 cmpwi 1
                                    if (/* bne 0x63604 */) {
                                    // branch to 0x063604
                                        /* li r0, 1 */ // 0x38000001
                                        *(uint32_t*)(0x14(r30)) = r0; // stw
                                        r3 = r30; // mr
                                        r4 = r31; // mr
                                        uint32_t r12 = *(uint32_t*)(0xc(r30)); // lwz
                                        uint32_t r12 = *(uint32_t*)(0xc(r12)); // lwz
                                        /* mtctr r12 */ // SPR operation
                                        /* bctrl  */ // indirect call/branch
                                        uint32_t r3 = *(uint32_t*)(0(r30)); // lwz
                                        uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                        uint32_t r0 = *(uint32_t*)(8(r3)); // lwz
                                        r0 = ROTATE_AND_MASK(r0, 0); // rlwinm
                                        *(uint32_t*)(8(r3)) = r0; // stw
                                        uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
                                        uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
                                        uint32_t r30 = *(uint32_t*)(8(r1)); // lwz
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
