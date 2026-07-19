// GHIRDA Auto-Decompiled
// Address: 0x8057829c (section offset: 0x065a00)
// Size: 568 bytes, 142 instructions
// Module: StaticR.rel | Class: Physics

void setTurnParams(void* arg0) {
    // Allocate stack frame: 0x10 bytes
    /* li r4, 0 */ // 0x38800000
    /* li r5, 0 */ // 0x38a00000
    *(uint32_t*)(0xc(r1)) = r31; // stw
    r31 = r3; // mr
    *(uint32_t*)(8(r1)) = r30; // stw
    uint32_t r12 = *(uint32_t*)(0xc(r3)); // lwz
    uint32_t r12 = *(uint32_t*)(0x14(r12)); // lwz
    /* mtctr r12 */ // SPR operation
    /* bctrl  */ // indirect call/branch
    r3 = r31; // mr
    r4 = r31 + 0x5c; // addi
    // Call 0x0005e438
    int var_1 = sub_0x0005e438(...);
    float f5 = *(float*)(0x5c(r31)); // lfs
    r3 = r31; // mr
    float f4 = *(float*)(0x60(r31)); // lfs
    float f3 = *(float*)(0x64(r31)); // lfs
    f2 = (float)f5; // frsp
    f1 = (float)f4; // frsp
    *(uint32_t*)(0x68(r31)) = f5; // stfs
    f0 = (float)f3; // frsp
    *(uint32_t*)(0x6c(r31)) = f4; // stfs
    *(uint32_t*)(0x70(r31)) = f3; // stfs
    *(uint32_t*)(0x74(r31)) = f5; // stfs
    *(uint32_t*)(0x78(r31)) = f4; // stfs
    *(uint32_t*)(0x7c(r31)) = f3; // stfs
    *(uint32_t*)(0x50(r31)) = f5; // stfs
    *(uint32_t*)(0x54(r31)) = f4; // stfs
    *(uint32_t*)(0x58(r31)) = f3; // stfs
    *(uint32_t*)(0x80(r31)) = f5; // stfs
    *(uint32_t*)(0x84(r31)) = f4; // stfs
    *(uint32_t*)(0x88(r31)) = f3; // stfs
    *(uint32_t*)(0xa4(r31)) = f2; // stfs
    *(uint32_t*)(0xa8(r31)) = f1; // stfs
    *(uint32_t*)(0xac(r31)) = f0; // stfs
    // Call 0x0005e1b4
    int var_2 = sub_0x0005e1b4(...);
    // Compare r3 cmpwi 0
    if (/* beq 0x65ab4 */) {
    // branch to 0x065ab4
        // Compare r3 cmplwi 1
        if (/* beq 0x65ac4 */) {
        // branch to 0x065ac4
            // Compare r3 cmplwi 2
            if (/* beq 0x65ad8 */) {
            // branch to 0x065ad8
            } else {
                goto label_0x065ae8;
                r3 = 0x0 << 16; // lis
                r3 = r3 + 0; // addi
                *(uint32_t*)(0x284(r31)) = r3; // stw
                goto label_0x065ae8;
                r3 = 0x0 << 16; // lis
                r3 = r3 + 0; // addi
                r0 = r3 + 0x10; // addi
                *(uint32_t*)(0x284(r31)) = r0; // stw
                goto label_0x065ae8;
                r3 = 0x0 << 16; // lis
                r3 = r3 + 0; // addi
                r0 = r3 + 0x20; // addi
                *(uint32_t*)(0x284(r31)) = r0; // stw
                uint32_t r4 = *(uint32_t*)(0(r31)); // lwz
                r3 = r31; // mr
                /* li r5, 0 */ // 0x38a00000
                /* li r6, 1 */ // 0x38c00001
                uint32_t r4 = *(uint32_t*)(4(r4)); // lwz
                /* li r7, 0 */ // 0x38e00000
                uint32_t r0 = *(uint32_t*)(0x14(r4)); // lwz
                r0 = ROTATE_AND_MASK(r0, 0); // rlwinm
                *(uint32_t*)(0x14(r4)) = r0; // stw
                uint32_t r4 = *(uint32_t*)(0(r31)); // lwz
                uint32_t r4 = *(uint32_t*)(4(r4)); // lwz
                uint32_t r0 = *(uint32_t*)(0x14(r4)); // lwz
                r0 = ROTATE_AND_MASK(r0, 0); // rlwinm
                r0 = __builtin_clz(r0);
                /* srwi r4, r0, 5 */ // 0x5404d97e
                // Call 0x0005e240
                int var_3 = sub_0x0005e240(...);
                uint32_t r3 = *(uint32_t*)(0x260(r31)); // lwz
                // Call 0x00062454
                int var_4 = sub_0x00062454(...);
                r3 = r31; // mr
                // Call 0x0005e7dc
                int var_5 = sub_0x0005e7dc(...);
                /* li r30, 0 */ // 0x3bc00000
                *(uint32_t*)(0x190(r31)) = r30; // stb
                r3 = r31; // mr
                // Call 0x0005ebcc
                int var_6 = sub_0x0005ebcc(...);
                r4 = 0x0 << 16; // lis
                *(uint32_t*)(0x54(r3)) = r30; // stb
                float f0 = *(float*)(0(r4)); // lfs
                *(uint32_t*)(0x50(r3)) = f0; // stfs
                r3 = r31; // mr
                // Call 0x0005e830
                int var_7 = sub_0x0005e830(...);
                /* li r4, 1 */ // 0x38800001
                // Call 0x00069f48
                int var_8 = sub_0x00069f48(...);
                r3 = r31; // mr
                // Call 0x0005e848
                int var_9 = sub_0x0005e848(...);
                /* li r4, 1 */ // 0x38800001
                // Call 0x0006a320
                int var_10 = sub_0x0006a320(...);
                r3 = r31; // mr
                /* li r4, 9 */ // 0x38800009
                /* li r5, 1 */ // 0x38a00001
                /* li r6, 0 */ // 0x38c00000
                // Call 0x0005e7f4
                int var_11 = sub_0x0005e7f4(...);
                r3 = r31; // mr
                // Call 0x0005e4c4
                int var_12 = sub_0x0005e4c4(...);
                /* li r4, 1 */ // 0x38800001
                // Call 0x000676d0
                int var_13 = sub_0x000676d0(...);
                uint32_t r3 = *(uint32_t*)(0(r31)); // lwz
                uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                uint32_t r0 = *(uint32_t*)(0xc(r3)); // lwz
                /* rlwinm. r0, r0, 0, 4, 4 */ // 0x54000109
                if (/* beq 0x65bbc */) {
                // branch to 0x065bbc
                    r3 = r31; // mr
                    // Call 0x0005edbc
                    int var_14 = sub_0x0005edbc(...);
                    // Call 0x000650c8
                    int var_15 = sub_0x000650c8(...);
                    uint32_t r4 = *(uint32_t*)(0(r31)); // lwz
                    uint32_t r3 = *(uint32_t*)(4(r4)); // lwz
                    uint32_t r0 = *(uint32_t*)(0xc(r3)); // lwz
                    /* rlwinm. r0, r0, 0, 6, 6 */ // 0x5400018d
                    if (/* beq 0x65bf0 */) {
                    // branch to 0x065bf0
                        uint32_t r4 = *(uint32_t*)(4(r4)); // lwz
                        r3 = r31; // mr
                        uint32_t r0 = *(uint32_t*)(0xc(r4)); // lwz
                        r0 = ROTATE_AND_MASK(r0, 0); // rlwinm
                        *(uint32_t*)(0xc(r4)) = r0; // stw
                        // Call 0x0006db70
                        int var_16 = sub_0x0006db70(...);
                        /* li r0, 0 */ // 0x38000000
                        *(uint32_t*)(0x171(r3)) = r0; // stb
                        r3 = r31; // mr
                        r4 = r31 + 0x164; // addi
                        // Call 0x0005ee08
                        int var_17 = sub_0x0005ee08(...);
                        uint32_t r4 = *(uint32_t*)(0(r31)); // lwz
                        uint32_t r3 = *(uint32_t*)(4(r4)); // lwz
                        uint32_t r0 = *(uint32_t*)(0x14(r3)); // lwz
                        /* rlwinm. r0, r0, 0, 0x13, 0x13 */ // 0x540004e7
                        if (/* beq 0x65c20 */) {
                        // branch to 0x065c20
                            uint32_t r3 = *(uint32_t*)(4(r4)); // lwz
                            uint32_t r0 = *(uint32_t*)(0xc(r3)); // lwz
                            r0 = r0 oris 8;
                            *(uint32_t*)(0xc(r3)) = r0; // stw
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
