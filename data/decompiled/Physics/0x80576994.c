// GHIRDA Auto-Decompiled
// Address: 0x80576994 (section offset: 0x0640f8)
// Size: 360 bytes, 90 instructions
// Module: StaticR.rel | Class: Physics

void PlayerTrickBike_updateRot(void* arg0) {
    // Allocate stack frame: 0x10 bytes
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = 0x0 << 16; // lis
    r31 = r31 + 0; // addi
    *(uint32_t*)(8(r1)) = r30; // stw
    r30 = r3; // mr
    float f1 = *(float*)(0x28(r3)); // lfs
    float f0 = *(float*)(0x2c(r3)); // lfs
    uint32_t r4 = *(uint32_t*)(0x20(r3)); // lwz
    f0 = fmuls(f1, f0); // fmuls
    *(uint32_t*)(0x28(r3)) = f0; // stfs
    float f1 = *(float*)(4(r4)); // lfs
    /* gekko_0x3f 0xfc010040 */ // 0xfc010040
    if (/* ble 0x6413c */) {
    // branch to 0x06413c
        *(uint32_t*)(0x28(r3)) = f1; // stfs
        float f1 = *(float*)(0x2c(r3)); // lfs
        float f0 = *(float*)(0x30(r3)); // lfs
        uint32_t r4 = *(uint32_t*)(0x20(r3)); // lwz
        f0 = fsubs(f1, f0); // fsubs
        *(uint32_t*)(0x2c(r3)) = f0; // stfs
        float f1 = *(float*)(8(r4)); // lfs
        /* gekko_0x3f 0xfc010040 */ // 0xfc010040
        if (/* ble 0x64160 */) {
        // branch to 0x064160
            *(uint32_t*)(0x2c(r3)) = f1; // stfs
            float f1 = *(float*)(0x24(r3)); // lfs
            float f0 = *(float*)(0x28(r3)); // lfs
            float f2 = *(float*)(0x34(r3)); // lfs
            f0 = fadds(f1, f0); // fadds
            *(uint32_t*)(0x24(r3)) = f0; // stfs
            /* gekko_0x3f 0xfc020040 */ // 0xfc020040
            if (/* bge 0x64180 */) {
            // branch to 0x064180
                *(uint32_t*)(0x24(r3)) = f2; // stfs
                uint32_t r0 = *(uint32_t*)(0x10(r3)); // lwz
                // Compare r0 cmpwi 1
                if (/* beq 0x64194 */) {
                // branch to 0x064194
                    // Compare r0 cmpwi 2
                    if (/* bne 0x641c0 */) {
                    // branch to 0x0641c0
                        float f2 = *(float*)(0x94(r31)); // lfs
                        float f1 = *(float*)(0x24(r3)); // lfs
                        float f0 = *(float*)(0x1c(r3)); // lfs
                        r3 = r3 + 0x3c; // addi
                        f1 = fmuls(f2, f1); // fmuls
                        float f2 = *(float*)(0(r31)); // lfs
                        /* fmr f3, f2 */ // 0xfc601090
                        f1 = -f1; // fneg
                        f1 = fmuls(f1, f0); // fmuls
                        // Call 0x00063358
                        int var_1 = sub_0x00063358(...);
                        goto label_0x064238;
                        // Compare r0 cmpwi 3
                        if (/* beq 0x641d0 */) {
                        // branch to 0x0641d0
                            // Compare r0 cmpwi 4
                            if (/* bne 0x641f8 */) {
                            // branch to 0x0641f8
                                float f3 = *(float*)(0x94(r31)); // lfs
                                float f2 = *(float*)(0x24(r3)); // lfs
                                float f0 = *(float*)(0x1c(r3)); // lfs
                                r3 = r3 + 0x3c; // addi
                                f2 = fmuls(f3, f2); // fmuls
                                float f1 = *(float*)(0(r31)); // lfs
                                /* fmr f3, f1 */ // 0xfc600890
                                f2 = fmuls(f2, f0); // fmuls
                                // Call 0x00063358
                                int var_2 = sub_0x00063358(...);
                                goto label_0x064238;
                                // Compare r0 cmpwi 6
                                if (/* bne 0x64238 */) {
                                // branch to 0x064238
                                    float f1 = *(float*)(0x24(r3)); // lfs
                                    float f0 = *(float*)(0xa4(r31)); // lfs
                                    f1 = fmuls(f0, f1); // fmuls
                                    // Call 0x00063358
                                    int var_3 = sub_0x00063358(...);
                                    float f0 = *(float*)(0x1c(r30)); // lfs
                                    r3 = r30 + 0x3c; // addi
                                    float f4 = *(float*)(0xa8(r31)); // lfs
                                    f3 = fmuls(f1, f0); // fmuls
                                    float f2 = *(float*)(0xac(r31)); // lfs
                                    float f0 = *(float*)(0xb0(r31)); // lfs
                                    f1 = fmuls(f4, f1); // fmuls
                                    f2 = fmuls(f2, f3); // fmuls
                                    f3 = fmuls(f0, f3); // fmuls
                                    // Call 0x00063358
                                    int var_4 = sub_0x00063358(...);
                                    r3 = r30; // mr
                                    // Call 0x0005db50
                                    int var_5 = sub_0x0005db50(...);
                                    r4 = r30 + 0x3c; // addi
                                    // Call 0x00069eec
                                    int var_6 = sub_0x00069eec(...);
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
