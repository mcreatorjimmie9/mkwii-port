// GHIRDA Auto-Decompiled
// Address: 0x8057c3d4 (section offset: 0x069b38)
// Size: 532 bytes, 133 instructions
// Module: StaticR.rel | Class: Physics

void updateOffroad(void* arg0) {
    // Allocate stack frame: 0x20 bytes
    /* li r6, 1 */ // 0x38c00001
    *(uint32_t*)(0x1c(r1)) = r31; // stw
    r31 = r3; // mr
    uint32_t r4 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r7 = *(uint32_t*)(4(r4)); // lwz
    uint32_t r0 = *(uint32_t*)(8(r7)); // lwz
    /* rlwinm. r0, r0, 0, 0x18, 0x18 */ // 0x54000631
    if (/* bne 0x69b7c */) {
    // branch to 0x069b7c
        r4 = 0x0x2801 << 16; // lis
        uint32_t r5 = *(uint32_t*)(0xc(r7)); // lwz
        r0 = r4 + -0x8000; // addi
        /* and. r0, r5, r0 */ // 0x7ca00039
        if (/* bne 0x69b7c */) {
        // branch to 0x069b7c
            /* li r6, 0 */ // 0x38c00000
            // Compare r6 cmpwi 0
            if (/* bne 0x69c88 */) {
            // branch to 0x069c88
                uint32_t r0 = *(uint32_t*)(4(r7)); // lwz
                /* rlwinm. r0, r0, 0, 0x14, 0x14 */ // 0x54000529
                if (/* beq 0x69bd8 */) {
                // branch to 0x069bd8
                    uint16_t r0 = *(uint16_t*)(0xc8(r3)); // lhz
                    float f0 = *(float*)(0xc0(r3)); // lfs
                    // Compare r0 cmpwi 0
                    *(uint32_t*)(0xb8(r3)) = f0; // stfs
                    if (/* bne 0x69bac */) {
                    // branch to 0x069bac
                        /* li r0, 1 */ // 0x38000001
                        *(uint32_t*)(0xc8(r3)) = r0; // sth
                        uint16_t r4 = *(uint16_t*)(0xc8(r3)); // lhz
                        r0 = 0x0x4330 << 16; // lis
                        *(uint32_t*)(0xc(r1)) = r4; // stw
                        r4 = 0x0 << 16; // lis
                        float f2 = *(float*)(0(r4)); // lfd
                        float f0 = *(float*)(0xc4(r3)); // lfs
                        float f1 = *(float*)(8(r1)); // lfd
                        f1 = fsubs(f1, f2); // fsubs
                        f0 = fdivs(f0, f1); // fdivs
                        *(uint32_t*)(0xbc(r3)) = f0; // stfs
                        uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
                        uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                        uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                        /* rlwinm. r0, r3, 0, 0x15, 0x15 */ // 0x5460056b
                        if (/* beq 0x69ca4 */) {
                        // branch to 0x069ca4
                            /* rlwinm. r0, r3, 0, 0x14, 0x14 */ // 0x54600529
                            if (/* beq 0x69c64 */) {
                            // branch to 0x069c64
                                r3 = r31; // mr
                                // Call 0x0006dfc0
                                int var_1 = sub_0x0006dfc0(...);
                                float f1 = *(float*)(0x64(r3)); // lfs
                                float f0 = *(float*)(0xc0(r31)); // lfs
                                /* gekko_0x3f 0xfc010040 */ // 0xfc010040
                                if (/* bge 0x69c1c */) {
                                // branch to 0x069c1c
                                    r3 = r31; // mr
                                    // Call 0x0006dfc0
                                    int var_2 = sub_0x0006dfc0(...);
                                    float f0 = *(float*)(0x64(r3)); // lfs
                                    *(uint32_t*)(0xb8(r31)) = f0; // stfs
                                    r3 = r31; // mr
                                    // Call 0x0006dfc0
                                    int var_3 = sub_0x0006dfc0(...);
                                    uint16_t r5 = *(uint16_t*)(0xc8(r31)); // lhz
                                    r0 = 0x0x4330 << 16; // lis
                                    r4 = 0x0 << 16; // lis
                                    r0 = r5 + 1; // addi
                                    float f3 = *(float*)(0x68(r3)); // lfs
                                    r0 = r0 xoris 0x8000;
                                    float f2 = *(float*)(0xc4(r31)); // lfs
                                    float f1 = *(float*)(0(r4)); // lfd
                                    float f0 = *(float*)(8(r1)); // lfd
                                    f2 = fadds(f2, f3); // fadds
                                    f0 = fsubs(f0, f1); // fsubs
                                    f0 = fdivs(f2, f0); // fdivs
                                    *(uint32_t*)(0xbc(r31)) = f0; // stfs
                                    goto label_0x069ca4;
                                    r3 = r31; // mr
                                    // Call 0x0006dfc0
                                    int var_4 = sub_0x0006dfc0(...);
                                    float f0 = *(float*)(0x64(r3)); // lfs
                                    r3 = r31; // mr
                                    *(uint32_t*)(0xb8(r31)) = f0; // stfs
                                    // Call 0x0006dfc0
                                    int var_5 = sub_0x0006dfc0(...);
                                    float f0 = *(float*)(0x68(r3)); // lfs
                                    *(uint32_t*)(0xbc(r31)) = f0; // stfs
                                    goto label_0x069ca4;
                                    r4 = 0x0 << 16; // lis
                                    float f0 = *(float*)(0(r4)); // lfs
                                    *(uint32_t*)(0xb8(r3)) = f0; // stfs
                                    r3 = r31; // mr
                                    // Call 0x0006e018
                                    int var_6 = sub_0x0006e018(...);
                                    float f0 = *(float*)(0xf0(r3)); // lfs
                                    *(uint32_t*)(0xbc(r31)) = f0; // stfs
                                    r3 = r31; // mr
                                    // Call 0x00063f20
                                    int var_7 = sub_0x00063f20(...);
                                    uint32_t r4 = *(uint32_t*)(0(r31)); // lwz
                                    uint32_t r3 = *(uint32_t*)(0(r4)); // lwz
                                    uint32_t r0 = *(uint32_t*)(0x34(r3)); // lwz
                                    // Compare r0 cmpwi 0
                                    if (/* beq 0x69d38 */) {
                                    // branch to 0x069d38
                                        uint32_t r3 = *(uint32_t*)(4(r4)); // lwz
                                        uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                        /* rlwinm. r0, r3, 0, 0xd, 0xd */ // 0x5460035b
                                        if (/* beq 0x69d38 */) {
                                        // branch to 0x069d38
                                            /* rlwinm. r0, r3, 0, 0x1b, 0x1b */ // 0x546006f7
                                            if (/* bne 0x69d38 */) {
                                            // branch to 0x069d38
                                                r3 = r31; // mr
                                                // Call 0x0006dff0
                                                int var_8 = sub_0x0006dff0(...);
                                                uint32_t r0 = *(uint32_t*)(0x2c(r3)); // lwz
                                                /* rlwinm. r0, r0, 0, 0x19, 0x19 */ // 0x54000673
                                                if (/* beq 0x69d38 */) {
                                                // branch to 0x069d38
                                                    uint32_t r6 = *(uint32_t*)(0(r31)); // lwz
                                                    /* li r5, 1 */ // 0x38a00001
                                                    uint32_t r4 = *(uint32_t*)(4(r6)); // lwz
                                                    uint32_t r0 = *(uint32_t*)(8(r4)); // lwz
                                                    /* rlwinm. r0, r0, 0, 0x18, 0x18 */ // 0x54000631
                                                    if (/* bne 0x69d1c */) {
                                                    // branch to 0x069d1c
                                                        r3 = 0x0x2801 << 16; // lis
                                                        uint32_t r4 = *(uint32_t*)(0xc(r4)); // lwz
                                                        r0 = r3 + -0x8000; // addi
                                                        /* and. r0, r4, r0 */ // 0x7c800039
                                                        if (/* bne 0x69d1c */) {
                                                        // branch to 0x069d1c
                                                            /* li r5, 0 */ // 0x38a00000
                                                            // Compare r5 cmpwi 0
                                                            if (/* bne 0x69d38 */) {
                                                            // branch to 0x069d38
                                                                uint32_t r3 = *(uint32_t*)(0(r6)); // lwz
                                                                uint32_t r4 = *(uint32_t*)(0x34(r3)); // lwz
                                                                uint32_t r3 = *(uint32_t*)(8(r4)); // lwz
                                                                r0 = r3 + 1; // addi
                                                                *(uint32_t*)(8(r4)) = r0; // stw
                                                                uint32_t r0 = *(uint32_t*)(0x24(r1)); // lwz
                                                                uint32_t r31 = *(uint32_t*)(0x1c(r1)); // lwz
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
                        }
                    }
                }
            }
        }
    }
}
