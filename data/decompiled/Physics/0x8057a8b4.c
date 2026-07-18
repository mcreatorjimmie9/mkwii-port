// GHIRDA Auto-Decompiled
// Address: 0x8057a8b4 (section offset: 0x068018)
// Size: 692 bytes, 173 instructions
// Module: StaticR.rel | Class: Physics

void updateTurn(void* arg0) {
    // Allocate stack frame: 0x30 bytes
    /* li r6, 1 */ // 0x38c00001
    /* li r7, 1 */ // 0x38e00001
    /* li r8, 1 */ // 0x39000001
    /* li r4, 1 */ // 0x38800001
    *(uint32_t*)(0x2c(r1)) = r31; // stw
    r31 = 0x0 << 16; // lis
    r31 = r31 + 0; // addi
    *(uint32_t*)(0x28(r1)) = r30; // stw
    r30 = 0x0 << 16; // lis
    float f0 = *(float*)(0(r31)); // lfs
    r30 = r30 + 0; // addi
    *(uint32_t*)(0x24(r1)) = r29; // stw
    r29 = r3; // mr
    uint32_t r9 = *(uint32_t*)(0(r3)); // lwz
    *(uint32_t*)(0x158(r3)) = f0; // stfs
    *(uint32_t*)(0x288(r3)) = f0; // stfs
    uint32_t r10 = *(uint32_t*)(4(r9)); // lwz
    uint32_t r11 = *(uint32_t*)(4(r10)); // lwz
    /* rlwinm. r0, r11, 0, 0x1b, 0x1b */ // 0x556006f7
    if (/* bne 0x68084 */) {
    // branch to 0x068084
        uint32_t r0 = *(uint32_t*)(8(r10)); // lwz
        r0 = r0 andi 0x1b;
        if (/* bne 0x68084 */) {
        // branch to 0x068084
            /* li r4, 0 */ // 0x38800000
            // Compare r4 cmpwi 0
            if (/* bne 0x680a4 */) {
            // branch to 0x0680a4
                r4 = 0x0x20c << 16; // lis
                uint32_t r5 = *(uint32_t*)(0xc(r10)); // lwz
                r0 = r4 + 0x100; // addi
                /* and. r0, r5, r0 */ // 0x7ca00039
                if (/* bne 0x680a4 */) {
                // branch to 0x0680a4
                    /* li r8, 0 */ // 0x39000000
                    // Compare r8 cmpwi 0
                    if (/* bne 0x680c4 */) {
                    // branch to 0x0680c4
                        r4 = 0x7 << 16; // lis
                        uint32_t r5 = *(uint32_t*)(0x14(r10)); // lwz
                        r0 = r4 + 0x4e80; // addi
                        /* and. r0, r5, r0 */ // 0x7ca00039
                        if (/* bne 0x680c4 */) {
                        // branch to 0x0680c4
                            /* li r7, 0 */ // 0x38e00000
                            // Compare r7 cmpwi 0
                            if (/* bne 0x680dc */) {
                            // branch to 0x0680dc
                                uint32_t r0 = *(uint32_t*)(8(r10)); // lwz
                                /* rlwinm. r0, r0, 0, 0x15, 0x15 */ // 0x5400056b
                                if (/* bne 0x680dc */) {
                                // branch to 0x0680dc
                                    /* li r6, 0 */ // 0x38c00000
                                    // Compare r6 cmpwi 0
                                    if (/* bne 0x682b0 */) {
                                    // branch to 0x0682b0
                                        /* rlwinm. r0, r11, 0, 0xc, 0xc */ // 0x55600319
                                        if (/* beq 0x6811c */) {
                                        // branch to 0x06811c
                                            uint32_t r0 = *(uint32_t*)(0xcc(r3)); // lwz
                                            // Compare r0 cmpwi 0
                                            if (/* beq 0x6811c */) {
                                            // branch to 0x06811c
                                                r4 = r0 xoris 0x8000;
                                                r0 = 0x0x4330 << 16; // lis
                                                *(uint32_t*)(0xc(r1)) = r4; // stw
                                                float f1 = *(float*)(0x60(r31)); // lfd
                                                float f0 = *(float*)(8(r1)); // lfd
                                                f0 = fsubs(f0, f1); // fsubs
                                                *(uint32_t*)(0x288(r3)) = f0; // stfs
                                                goto label_0x068170;
                                                uint32_t r5 = *(uint32_t*)(4(r9)); // lwz
                                                uint32_t r4 = *(uint32_t*)(0(r3)); // lwz
                                                float f0 = *(float*)(0x88(r5)); // lfs
                                                f0 = -f0; // fneg
                                                *(uint32_t*)(0x288(r3)) = f0; // stfs
                                                uint32_t r4 = *(uint32_t*)(4(r4)); // lwz
                                                uint32_t r0 = *(uint32_t*)(8(r4)); // lwz
                                                /* rlwinm. r0, r0, 0, 0x14, 0x14 */ // 0x54000529
                                                if (/* beq 0x68154 */) {
                                                // branch to 0x068154
                                                    f1 = (float)f0; // frsp
                                                    float f0 = *(float*)(0xa0(r30)); // lfs
                                                    f0 = fmuls(f1, f0); // fmuls
                                                    *(uint32_t*)(0x288(r3)) = f0; // stfs
                                                    goto label_0x068170;
                                                    uint32_t r0 = *(uint32_t*)(4(r4)); // lwz
                                                    /* rlwinm. r0, r0, 0, 0x10, 0x10 */ // 0x54000421
                                                    if (/* beq 0x68170 */) {
                                                    // branch to 0x068170
                                                        f1 = (float)f0; // frsp
                                                        float f0 = *(float*)(0x5c(r31)); // lfs
                                                        f0 = fmuls(f1, f0); // fmuls
                                                        *(uint32_t*)(0x288(r3)) = f0; // stfs
                                                        uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
                                                        uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                                        uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                                        r0 = ROTATE_AND_MASK(r3, 0); // rlwinm
                                                        /* rlwimi. r0, r3, 0, 0x1c, 0x1c */ // 0x50600739
                                                        if (/* beq 0x68198 */) {
                                                        // branch to 0x068198
                                                            r3 = r29; // mr
                                                            // Call 0x0006e018
                                                            int var_1 = sub_0x0006e018(...);
                                                            float f4 = *(float*)(0x60(r3)); // lfs
                                                            goto label_0x0681a4;
                                                            r3 = r29; // mr
                                                            // Call 0x0006e018
                                                            int var_2 = sub_0x0006e018(...);
                                                            float f4 = *(float*)(0x54(r3)); // lfs
                                                            float f3 = *(float*)(4(r31)); // lfs
                                                            float f0 = *(float*)(0x288(r29)); // lfs
                                                            f2 = fsubs(f3, f4); // fsubs
                                                            float f1 = *(float*)(0x15c(r29)); // lfs
                                                            f4 = fmuls(f0, f4); // fmuls
                                                            float f0 = *(float*)(0xc(r31)); // lfs
                                                            f1 = fmuls(f1, f2); // fmuls
                                                            f1 = fadds(f4, f1); // fadds
                                                            *(uint32_t*)(0x15c(r29)) = f1; // stfs
                                                            /* gekko_0x3f 0xfc000840 */ // 0xfc000840
                                                            if (/* ble 0x681d8 */) {
                                                            // branch to 0x0681d8
                                                                *(uint32_t*)(0x15c(r29)) = f0; // stfs
                                                                goto label_0x0681e4;
                                                                /* gekko_0x3f 0xfc030840 */ // 0xfc030840
                                                                if (/* bge 0x681e4 */) {
                                                                // branch to 0x0681e4
                                                                    *(uint32_t*)(0x15c(r29)) = f3; // stfs
                                                                    float f3 = *(float*)(0x15c(r29)); // lfs
                                                                    *(uint32_t*)(0x158(r29)) = f3; // stfs
                                                                    uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
                                                                    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                                                    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                                                    r0 = ROTATE_AND_MASK(r3, 0); // rlwinm
                                                                    /* rlwimi. r0, r3, 0, 0x1c, 0x1c */ // 0x50600739
                                                                    if (/* beq 0x682b0 */) {
                                                                    // branch to 0x0682b0
                                                                        uint32_t r4 = *(uint32_t*)(0xcc(r29)); // lwz
                                                                        r0 = 0x0x4330 << 16; // lis
                                                                        r3 = r29; // mr
                                                                        r0 = r4 xoris 0x8000;
                                                                        float f2 = *(float*)(0x60(r31)); // lfd
                                                                        float f0 = *(float*)(0x1c(r31)); // lfs
                                                                        float f1 = *(float*)(8(r1)); // lfd
                                                                        f1 = fsubs(f1, f2); // fsubs
                                                                        f1 = fadds(f3, f1); // fadds
                                                                        f0 = fmuls(f0, f1); // fmuls
                                                                        *(uint32_t*)(0x158(r29)) = f0; // stfs
                                                                        // Call 0x0006de08
                                                                        int var_3 = sub_0x0006de08(...);
                                                                        // Compare r3 cmpwi 0
                                                                        if (/* beq 0x6824c */) {
                                                                        // branch to 0x06824c
                                                                            float f4 = *(float*)(0(r31)); // lfs
                                                                            goto label_0x068250;
                                                                            float f4 = *(float*)(0x94(r30)); // lfs
                                                                            uint32_t r3 = *(uint32_t*)(0xcc(r29)); // lwz
                                                                            r0 = 0x0x4330 << 16; // lis
                                                                            float f0 = *(float*)(0x90(r30)); // lfs
                                                                            r3 = r3 xoris 0x8000;
                                                                            *(uint32_t*)(0x14(r1)) = r3; // stw
                                                                            f3 = fsubs(f0, f4); // fsubs
                                                                            float f0 = *(float*)(0x158(r29)); // lfs
                                                                            float f2 = *(float*)(0x60(r31)); // lfd
                                                                            float f1 = *(float*)(0x10(r1)); // lfd
                                                                            f3 = fmuls(f0, f3); // fmuls
                                                                            float f0 = *(float*)(0xc(r31)); // lfs
                                                                            f1 = fsubs(f1, f2); // fsubs
                                                                            f1 = fmuls(f4, f1); // fmuls
                                                                            f1 = fadds(f3, f1); // fadds
                                                                            *(uint32_t*)(0x158(r29)) = f1; // stfs
                                                                            /* gekko_0x3f 0xfc000840 */ // 0xfc000840
                                                                            if (/* ble 0x682a0 */) {
                                                                            // branch to 0x0682a0
                                                                                *(uint32_t*)(0x158(r29)) = f0; // stfs
                                                                                goto label_0x0682b0;
                                                                                float f0 = *(float*)(4(r31)); // lfs
                                                                                /* gekko_0x3f 0xfc000840 */ // 0xfc000840
                                                                                if (/* bge 0x682b0 */) {
                                                                                // branch to 0x0682b0
                                                                                    *(uint32_t*)(0x158(r29)) = f0; // stfs
                                                                                    uint32_t r0 = *(uint32_t*)(0x34(r1)); // lwz
                                                                                    uint32_t r31 = *(uint32_t*)(0x2c(r1)); // lwz
                                                                                    uint32_t r30 = *(uint32_t*)(0x28(r1)); // lwz
                                                                                    uint32_t r29 = *(uint32_t*)(0x24(r1)); // lwz
                                                                                    /* mtlr r0 */ // SPR operation
                                                                                    r1 = r1 + 0x30; // addi
                                                                                    // Restore stack (addi r1, r1, 0x30)
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
                }
            }
        }
    }
}
