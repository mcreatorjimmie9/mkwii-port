// GHIRDA Auto-Decompiled
// Address: 0x805764fc (section offset: 0x063c60)
// Size: 392 bytes, 98 instructions
// Module: StaticR.rel | Class: Physics

void PlayerTrick_updateRot(void* arg0) {
    // Allocate stack frame: 0x10 bytes
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r3; // mr
    float f1 = *(float*)(0x28(r3)); // lfs
    float f0 = *(float*)(0x2c(r3)); // lfs
    uint32_t r4 = *(uint32_t*)(0x20(r3)); // lwz
    f0 = fmuls(f1, f0); // fmuls
    *(uint32_t*)(0x28(r3)) = f0; // stfs
    float f1 = *(float*)(4(r4)); // lfs
    /* gekko_0x3f 0xfc010040 */ // 0xfc010040
    if (/* ble 0x63c98 */) {
    // branch to 0x063c98
        *(uint32_t*)(0x28(r3)) = f1; // stfs
        float f1 = *(float*)(0x2c(r3)); // lfs
        float f0 = *(float*)(0x30(r3)); // lfs
        uint32_t r4 = *(uint32_t*)(0x20(r3)); // lwz
        f0 = fsubs(f1, f0); // fsubs
        *(uint32_t*)(0x2c(r3)) = f0; // stfs
        float f1 = *(float*)(8(r4)); // lfs
        /* gekko_0x3f 0xfc010040 */ // 0xfc010040
        if (/* ble 0x63cbc */) {
        // branch to 0x063cbc
            *(uint32_t*)(0x2c(r3)) = f1; // stfs
            float f1 = *(float*)(0x24(r3)); // lfs
            float f0 = *(float*)(0x28(r3)); // lfs
            float f2 = *(float*)(0x34(r3)); // lfs
            f0 = fadds(f1, f0); // fadds
            *(uint32_t*)(0x24(r3)) = f0; // stfs
            /* gekko_0x3f 0xfc020040 */ // 0xfc020040
            if (/* bge 0x63cdc */) {
            // branch to 0x063cdc
                *(uint32_t*)(0x24(r3)) = f2; // stfs
                uint32_t r0 = *(uint32_t*)(0x10(r3)); // lwz
                // Compare r0 cmpwi 5
                if (/* bne 0x63d1c */) {
                // branch to 0x063d1c
                    r4 = 0x0 << 16; // lis
                    r5 = 0x0 << 16; // lis
                    float f2 = *(float*)(0(r4)); // lfs
                    float f0 = *(float*)(0x24(r3)); // lfs
                    float f1 = *(float*)(0(r5)); // lfs
                    f3 = fmuls(f2, f0); // fmuls
                    float f0 = *(float*)(0x1c(r3)); // lfs
                    /* fmr f2, f1 */ // 0xfc400890
                    r3 = r3 + 0x3c; // addi
                    f3 = -f3; // fneg
                    f3 = fmuls(f3, f0); // fmuls
                    // Call 0x00063358
                    int var_1 = sub_0x00063358(...);
                    goto label_0x063d58;
                    // Compare r0 cmpwi 3
                    if (/* beq 0x63d2c */) {
                    // branch to 0x063d2c
                        // Compare r0 cmpwi 4
                        if (/* bne 0x63d58 */) {
                        // branch to 0x063d58
                            r4 = 0x0 << 16; // lis
                            r5 = 0x0 << 16; // lis
                            float f3 = *(float*)(0(r4)); // lfs
                            float f2 = *(float*)(0x24(r3)); // lfs
                            float f0 = *(float*)(0x1c(r3)); // lfs
                            r3 = r3 + 0x3c; // addi
                            f2 = fmuls(f3, f2); // fmuls
                            float f1 = *(float*)(0(r5)); // lfs
                            /* fmr f3, f1 */ // 0xfc600890
                            f2 = fmuls(f2, f0); // fmuls
                            // Call 0x00063358
                            int var_2 = sub_0x00063358(...);
                            r3 = r31; // mr
                            // Call 0x0005db50
                            int var_3 = sub_0x0005db50(...);
                            r4 = r31 + 0x3c; // addi
                            // Call 0x00069eec
                            int var_4 = sub_0x00069eec(...);
                            uint32_t r0 = *(uint32_t*)(0x14(r1)); // lwz
                            uint32_t r31 = *(uint32_t*)(0xc(r1)); // lwz
                            /* mtlr r0 */ // SPR operation
                            r1 = r1 + 0x10; // addi
                            // Restore stack (addi r1, r1, 0x10)
                            // Restore LR (lwz r0, N(r1); mtlr r0)
                            return;
                            float f1 = *(float*)(0x28(r3)); // lfs
                            float f0 = *(float*)(0x2c(r3)); // lfs
                            uint32_t r4 = *(uint32_t*)(0x20(r3)); // lwz
                            f0 = fmuls(f1, f0); // fmuls
                            *(uint32_t*)(0x28(r3)) = f0; // stfs
                            float f1 = *(float*)(4(r4)); // lfs
                            /* gekko_0x3f 0xfc010040 */ // 0xfc010040
                            if (/* ble 0x63da0 */) {
                            // branch to 0x063da0
                                *(uint32_t*)(0x28(r3)) = f1; // stfs
                                float f1 = *(float*)(0x2c(r3)); // lfs
                                float f0 = *(float*)(0x30(r3)); // lfs
                                uint32_t r4 = *(uint32_t*)(0x20(r3)); // lwz
                                f0 = fsubs(f1, f0); // fsubs
                                *(uint32_t*)(0x2c(r3)) = f0; // stfs
                                float f1 = *(float*)(8(r4)); // lfs
                                /* gekko_0x3f 0xfc010040 */ // 0xfc010040
                                if (/* ble 0x63dc4 */) {
                                // branch to 0x063dc4
                                    *(uint32_t*)(0x2c(r3)) = f1; // stfs
                                    float f1 = *(float*)(0x24(r3)); // lfs
                                    float f0 = *(float*)(0x28(r3)); // lfs
                                    float f2 = *(float*)(0x34(r3)); // lfs
                                    f0 = fadds(f1, f0); // fadds
                                    *(uint32_t*)(0x24(r3)) = f0; // stfs
                                    /* gekko_0x3f 0xfc020040 */ // 0xfc020040
                                    if (/* bgelr  */) {
                                    // branch to 0x063dfc
                                        *(uint32_t*)(0x24(r3)) = f2; // stfs
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
