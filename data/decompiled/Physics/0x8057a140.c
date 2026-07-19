// GHIRDA Auto-Decompiled
// Address: 0x8057a140 (section offset: 0x0678a4)
// Size: 1908 bytes, 477 instructions
// Module: StaticR.rel | Class: Physics

void updateDir(void* arg0) {
    // Allocate stack frame: 0x120 bytes
    *(uint32_t*)(0x110(r1)) = f31; // stfd
    /* gekko_0x3c 0xf3e10118 */ // 0xf3e10118
    *(uint32_t*)(0x100(r1)) = f30; // stfd
    /* xsmaddadp f30, f1, f0 */ // 0xf3c10108
    r6 = 0x0 << 16; // lis
    *(uint32_t*)(0xfc(r1)) = r31; // stw
    r31 = 0x0 << 16; // lis
    r31 = r31 + 0; // addi
    *(uint32_t*)(0xf8(r1)) = r30; // stw
    r30 = 0x0 << 16; // lis
    r30 = r30 + 0; // addi
    *(uint32_t*)(0xf4(r1)) = r29; // stw
    r29 = r3; // mr
    uint32_t r5 = *(uint32_t*)(0(r6)); // lwzu
    *(uint32_t*)(0xb0(r1)) = r5; // stw
    uint32_t r4 = *(uint32_t*)(4(r6)); // lwz
    uint32_t r0 = *(uint32_t*)(8(r6)); // lwz
    *(uint32_t*)(0xb4(r1)) = r4; // stw
    // Call 0x0006db70
    int var_1 = sub_0x0006db70(...);
    r4 = r1 + 0xb0; // addi
    r3 = r3 + 0xf0; // addi
    r5 = r4; // mr
    // Call 0x00063358
    int var_2 = sub_0x00063358(...);
    uint32_t r4 = *(uint32_t*)(0x38(r29)); // lwz
    r3 = r1 + 0x98; // addi
    uint32_t r0 = *(uint32_t*)(0x3c(r29)); // lwz
    float f7 = *(float*)(0xb0(r1)); // lfs
    *(uint32_t*)(0xa4(r1)) = r4; // stw
    float f0 = *(float*)(0xa8(r1)); // lfs
    uint32_t r0 = *(uint32_t*)(0x40(r29)); // lwz
    f6 = fmuls(f7, f0); // fmuls
    float f2 = *(float*)(0xb8(r1)); // lfs
    float f4 = *(float*)(0xa4(r1)); // lfs
    float f5 = *(float*)(0xb4(r1)); // lfs
    f0 = fmuls(f2, f0); // fmuls
    f3 = fmuls(f2, f4); // fmuls
    float f1 = *(float*)(0xac(r1)); // lfs
    f4 = fmuls(f5, f4); // fmuls
    f2 = fmuls(f7, f1); // fmuls
    f1 = fmuls(f5, f1); // fmuls
    f4 = fsubs(f6, f4); // fsubs
    f2 = fsubs(f3, f2); // fsubs
    f0 = fsubs(f1, f0); // fsubs
    *(uint32_t*)(0xa0(r1)) = f4; // stfs
    *(uint32_t*)(0x98(r1)) = f0; // stfs
    *(uint32_t*)(0x9c(r1)) = f2; // stfs
    // Call 0x00063358
    int var_3 = sub_0x00063358(...);
    uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
    uint32_t r0 = *(uint32_t*)(8(r3)); // lwz
    r0 = ROTATE_AND_MASK(r0, 0); // rlwinm
    *(uint32_t*)(8(r3)) = r0; // stw
    uint16_t r0 = *(uint16_t*)(0x254(r29)); // lhz
    uint32_t r4 = *(uint32_t*)(0(r29)); // lwz
    r0 = r0 ori 0x10;
    *(uint32_t*)(0x254(r29)) = r0; // sth
    uint32_t r5 = *(uint32_t*)(4(r4)); // lwz
    uint32_t r7 = *(uint32_t*)(8(r5)); // lwz
    r0 = r7 andi 0x440;
    if (/* bne 0x67d70 */) {
    // branch to 0x067d70
        uint32_t r6 = *(uint32_t*)(4(r5)); // lwz
        /* rlwinm. r0, r6, 0, 0xd, 0xd */ // 0x54c0035b
        if (/* bne 0x679d0 */) {
        // branch to 0x0679d0
            /* rlwinm. r0, r6, 0, 0, 0 */ // 0x54c00001
            if (/* beq 0x679d0 */) {
            // branch to 0x0679d0
                uint32_t r3 = *(uint32_t*)(0x258(r29)); // lwz
                uint8_t r0 = *(uint8_t*)(0x3a(r3)); // lbz
                // Compare r0 cmpwi 0
                if (/* bne 0x679ec */) {
                // branch to 0x0679ec
                    /* rlwinm. r0, r6, 0, 1, 1 */ // 0x54c00043
                    if (/* bne 0x679ec */) {
                    // branch to 0x0679ec
                        uint32_t r3 = *(uint32_t*)(4(r4)); // lwz
                        uint16_t r0 = *(uint16_t*)(0x78(r30)); // lha
                        uint32_t r3 = *(uint32_t*)(0x1c(r3)); // lwz
                        // Compare r3 cmplw r0
                        if (/* ble 0x67a08 */) {
                        // branch to 0x067a08
                            uint32_t r3 = *(uint32_t*)(0xc(r5)); // lwz
                            /* rlwinm. r0, r3, 0, 4, 4 */ // 0x54600109
                            if (/* bne 0x67a08 */) {
                            // branch to 0x067a08
                                /* rlwinm. r0, r7, 0, 0x14, 0x14 */ // 0x54e00529
                                if (/* bne 0x67a08 */) {
                                // branch to 0x067a08
                                    /* rlwinm. r0, r3, 0, 0x14, 0x14 */ // 0x54600529
                                    if (/* beq 0x67d70 */) {
                                    // branch to 0x067d70
                                        uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
                                        uint32_t r5 = *(uint32_t*)(0x98(r1)); // lwz
                                        uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                        uint32_t r4 = *(uint32_t*)(0x9c(r1)); // lwz
                                        uint32_t r0 = *(uint32_t*)(4(r3)); // lwz
                                        uint32_t r3 = *(uint32_t*)(0xa0(r1)); // lwz
                                        /* rlwinm. r0, r0, 0, 0xc, 0xc */ // 0x54000319
                                        *(uint32_t*)(0x8c(r1)) = r5; // stw
                                        *(uint32_t*)(0x90(r1)) = r4; // stw
                                        *(uint32_t*)(0x94(r1)) = r3; // stw
                                        if (/* beq 0x67a4c */) {
                                        // branch to 0x067a4c
                                            float f2 = *(float*)(0xe0(r29)); // lfs
                                            float f1 = *(float*)(0xe4(r29)); // lfs
                                            float f0 = *(float*)(0xe8(r29)); // lfs
                                            *(uint32_t*)(0x8c(r1)) = f2; // stfs
                                            *(uint32_t*)(0x90(r1)) = f1; // stfs
                                            *(uint32_t*)(0x94(r1)) = f0; // stfs
                                            uint32_t r4 = *(uint32_t*)(0xa4(r1)); // lwz
                                            r7 = 0x0 << 16; // lis
                                            uint32_t r5 = *(uint32_t*)(0xa8(r1)); // lwz
                                            r3 = r1 + 0xc0; // addi
                                            uint32_t r0 = *(uint32_t*)(0xac(r1)); // lwz
                                            *(uint32_t*)(0x80(r1)) = r4; // stw
                                            r4 = r1 + 0x80; // addi
                                            uint32_t r6 = *(uint32_t*)(0(r7)); // lwzu
                                            *(uint32_t*)(0x84(r1)) = r5; // stw
                                            uint32_t r5 = *(uint32_t*)(4(r7)); // lwz
                                            uint32_t r0 = *(uint32_t*)(8(r7)); // lwz
                                            float f2 = *(float*)(0x9c(r29)); // lfs
                                            float f0 = *(float*)(0xa0(r29)); // lfs
                                            float f1 = *(float*)(0x1c8(r29)); // lfs
                                            f2 = fadds(f2, f0); // fadds
                                            float f0 = *(float*)(0x54(r31)); // lfs
                                            *(uint32_t*)(0x74(r1)) = r6; // stw
                                            f1 = fadds(f1, f2); // fadds
                                            *(uint32_t*)(0x78(r1)) = r5; // stw
                                            f1 = fmuls(f0, f1); // fmuls
                                            // Call 0x00063358
                                            int var_4 = sub_0x00063358(...);
                                            float f3 = *(float*)(0xe0(r1)); // lfs
                                            r3 = r1 + 0x68; // addi
                                            float f2 = *(float*)(0x8c(r1)); // lfs
                                            r4 = r3; // mr
                                            float f1 = *(float*)(0xd0(r1)); // lfs
                                            r5 = r1 + 0xa4; // addi
                                            f7 = fmuls(f3, f2); // fmuls
                                            float f0 = *(float*)(0xc0(r1)); // lfs
                                            f4 = fmuls(f1, f2); // fmuls
                                            float f3 = *(float*)(0xe4(r1)); // lfs
                                            f1 = fmuls(f0, f2); // fmuls
                                            float f5 = *(float*)(0x90(r1)); // lfs
                                            float f0 = *(float*)(0xc4(r1)); // lfs
                                            f6 = fmuls(f3, f5); // fmuls
                                            float f2 = *(float*)(0xd4(r1)); // lfs
                                            /* li r6, 1 */ // 0x38c00001
                                            f0 = fmuls(f0, f5); // fmuls
                                            float f8 = *(float*)(0xe8(r1)); // lfs
                                            f3 = fmuls(f2, f5); // fmuls
                                            float f9 = *(float*)(0x94(r1)); // lfs
                                            f6 = fadds(f7, f6); // fadds
                                            float f5 = *(float*)(0xd8(r1)); // lfs
                                            float f2 = *(float*)(0xc8(r1)); // lfs
                                            f8 = fmuls(f8, f9); // fmuls
                                            f3 = fadds(f4, f3); // fadds
                                            f5 = fmuls(f5, f9); // fmuls
                                            f0 = fadds(f1, f0); // fadds
                                            f2 = fmuls(f2, f9); // fmuls
                                            f4 = fadds(f8, f6); // fadds
                                            f1 = fadds(f5, f3); // fadds
                                            f0 = fadds(f2, f0); // fadds
                                            *(uint32_t*)(0x70(r1)) = f4; // stfs
                                            *(uint32_t*)(0x6c(r1)) = f1; // stfs
                                            *(uint32_t*)(0x68(r1)) = f0; // stfs
                                            // Call 0x00067a8c
                                            int var_5 = sub_0x00067a8c(...);
                                            float f30 = *(float*)(0x68(r1)); // lfs
                                            float f31 = *(float*)(0x5c(r29)); // lfs
                                            float f13 = *(float*)(0x6c(r1)); // lfs
                                            f5 = fsubs(f30, f31); // fsubs
                                            float f12 = *(float*)(0x60(r29)); // lfs
                                            float f10 = *(float*)(0x70(r1)); // lfs
                                            f11 = fsubs(f13, f12); // fsubs
                                            float f9 = *(float*)(0x64(r29)); // lfs
                                            f2 = fmuls(f5, f5); // fmuls
                                            f8 = fsubs(f10, f9); // fsubs
                                            float f0 = *(float*)(8(r31)); // lfs
                                            f1 = fmuls(f11, f11); // fmuls
                                            *(uint32_t*)(0x5c(r1)) = f5; // stfs
                                            f3 = fmuls(f8, f8); // fmuls
                                            f1 = fadds(f2, f1); // fadds
                                            *(uint32_t*)(0x60(r1)) = f11; // stfs
                                            *(uint32_t*)(0x64(r1)) = f8; // stfs
                                            f1 = fadds(f3, f1); // fadds
                                            /* gekko_0x3f 0xfc010040 */ // 0xfc010040
                                            /* cror cr0eq, cr0lt, cr0eq */ // condition register
                                            /* mfcr r0 */ // condition register
                                            /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x54001fff
                                            if (/* bne 0x67cf4 */) {
                                            // branch to 0x067cf4
                                                uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
                                                uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                                uint32_t r0 = *(uint32_t*)(0xc(r3)); // lwz
                                                /* rlwinm. r0, r0, 0, 4, 4 */ // 0x54000109
                                                if (/* bne 0x67cf4 */) {
                                                // branch to 0x067cf4
                                                    float f0 = *(float*)(0xbc(r29)); // lfs
                                                    f7 = fmuls(f31, f13); // fmuls
                                                    f6 = fmuls(f12, f30); // fmuls
                                                    float f4 = *(float*)(0x8c(r29)); // lfs
                                                    f5 = fmuls(f0, f5); // fmuls
                                                    float f2 = *(float*)(0x90(r29)); // lfs
                                                    f3 = fmuls(f0, f11); // fmuls
                                                    f1 = fmuls(f0, f8); // fmuls
                                                    f5 = fadds(f4, f5); // fadds
                                                    float f0 = *(float*)(0x94(r29)); // lfs
                                                    f4 = fadds(f2, f3); // fadds
                                                    float f2 = *(float*)(0x5c(r29)); // lfs
                                                    f3 = fadds(f0, f1); // fadds
                                                    float f1 = *(float*)(0x60(r29)); // lfs
                                                    f6 = fsubs(f7, f6); // fsubs
                                                    float f0 = *(float*)(0x64(r29)); // lfs
                                                    f2 = fadds(f2, f5); // fadds
                                                    *(uint32_t*)(0x8c(r29)) = f5; // stfs
                                                    f1 = fadds(f1, f4); // fadds
                                                    r3 = r29 + 0x5c; // addi
                                                    *(uint32_t*)(0x58(r1)) = f6; // stfs
                                                    f0 = fadds(f0, f3); // fadds
                                                    f6 = fmuls(f9, f30); // fmuls
                                                    *(uint32_t*)(0x90(r29)) = f4; // stfs
                                                    f5 = fmuls(f31, f10); // fmuls
                                                    f4 = fmuls(f12, f10); // fmuls
                                                    *(uint32_t*)(0x94(r29)) = f3; // stfs
                                                    f3 = fmuls(f9, f13); // fmuls
                                                    f5 = fsubs(f6, f5); // fsubs
                                                    *(uint32_t*)(0x5c(r29)) = f2; // stfs
                                                    f2 = fsubs(f4, f3); // fsubs
                                                    *(uint32_t*)(0x54(r1)) = f5; // stfs
                                                    *(uint32_t*)(0x50(r1)) = f2; // stfs
                                                    *(uint32_t*)(0x60(r29)) = f1; // stfs
                                                    *(uint32_t*)(0x64(r29)) = f0; // stfs
                                                    // Call 0x00063358
                                                    int var_6 = sub_0x00063358(...);
                                                    float f4 = *(float*)(0x228(r30)); // lfs
                                                    float f2 = *(float*)(0x8c(r29)); // lfs
                                                    float f1 = *(float*)(0x90(r29)); // lfs
                                                    f3 = fmuls(f2, f4); // fmuls
                                                    float f0 = *(float*)(0x94(r29)); // lfs
                                                    f2 = fmuls(f1, f4); // fmuls
                                                    float f10 = *(float*)(0x5c(r29)); // lfs
                                                    f1 = fmuls(f0, f4); // fmuls
                                                    *(uint32_t*)(0x8c(r29)) = f3; // stfs
                                                    *(uint32_t*)(0x90(r29)) = f2; // stfs
                                                    float f8 = *(float*)(0x60(r29)); // lfs
                                                    *(uint32_t*)(0x94(r29)) = f1; // stfs
                                                    float f0 = *(float*)(0x64(r29)); // lfs
                                                    float f9 = *(float*)(0x6c(r1)); // lfs
                                                    float f7 = *(float*)(0x68(r1)); // lfs
                                                    float f5 = *(float*)(0x70(r1)); // lfs
                                                    f4 = fmuls(f0, f9); // fmuls
                                                    f6 = fmuls(f0, f7); // fmuls
                                                    float f2 = *(float*)(0x50(r1)); // lfs
                                                    f1 = fmuls(f10, f5); // fmuls
                                                    float f0 = *(float*)(0x54(r1)); // lfs
                                                    f5 = fmuls(f8, f5); // fmuls
                                                    f9 = fmuls(f10, f9); // fmuls
                                                    f6 = fsubs(f6, f1); // fsubs
                                                    float f3 = *(float*)(0x58(r1)); // lfs
                                                    f5 = fsubs(f5, f4); // fsubs
                                                    float f1 = *(float*)(0(r31)); // lfs
                                                    f4 = fmuls(f8, f7); // fmuls
                                                    f0 = fmuls(f0, f6); // fmuls
                                                    f2 = fmuls(f2, f5); // fmuls
                                                    *(uint32_t*)(0x48(r1)) = f6; // stfs
                                                    f4 = fsubs(f9, f4); // fsubs
                                                    *(uint32_t*)(0x44(r1)) = f5; // stfs
                                                    f0 = fadds(f2, f0); // fadds
                                                    f2 = fmuls(f3, f4); // fmuls
                                                    *(uint32_t*)(0x4c(r1)) = f4; // stfs
                                                    f0 = fadds(f2, f0); // fadds
                                                    /* gekko_0x3f 0xfc000840 */ // 0xfc000840
                                                    if (/* bge 0x67d1c */) {
                                                    // branch to 0x067d1c
                                                        *(uint32_t*)(0x5c(r29)) = f7; // stfs
                                                        float f0 = *(float*)(0x6c(r1)); // lfs
                                                        *(uint32_t*)(0x60(r29)) = f0; // stfs
                                                        float f0 = *(float*)(0x70(r1)); // lfs
                                                        *(uint32_t*)(0x64(r29)) = f0; // stfs
                                                        *(uint32_t*)(0x94(r29)) = f1; // stfs
                                                        *(uint32_t*)(0x90(r29)) = f1; // stfs
                                                        *(uint32_t*)(0x8c(r29)) = f1; // stfs
                                                        goto label_0x067d1c;
                                                        float f0 = *(float*)(0x68(r1)); // lfs
                                                        *(uint32_t*)(0x5c(r29)) = f0; // stfs
                                                        float f0 = *(float*)(0(r31)); // lfs
                                                        float f1 = *(float*)(0x6c(r1)); // lfs
                                                        *(uint32_t*)(0x60(r29)) = f1; // stfs
                                                        float f1 = *(float*)(0x70(r1)); // lfs
                                                        *(uint32_t*)(0x64(r29)) = f1; // stfs
                                                        *(uint32_t*)(0x94(r29)) = f0; // stfs
                                                        *(uint32_t*)(0x90(r29)) = f0; // stfs
                                                        *(uint32_t*)(0x8c(r29)) = f0; // stfs
                                                        uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
                                                        uint32_t r4 = *(uint32_t*)(4(r3)); // lwz
                                                        uint32_t r0 = *(uint32_t*)(8(r4)); // lwz
                                                        /* rlwinm. r0, r0, 0, 0xd, 0xd */ // 0x5400035b
                                                        if (/* bne 0x67d4c */) {
                                                        // branch to 0x067d4c
                                                            uint32_t r0 = *(uint32_t*)(0xc(r4)); // lwz
                                                            /* rlwinm. r0, r0, 0, 0x17, 0x17 */ // 0x540005ef
                                                            if (/* bne 0x67d4c */) {
                                                            // branch to 0x067d4c
                                                                uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                                                uint32_t r0 = *(uint32_t*)(8(r3)); // lwz
                                                                r0 = r0 oris 0x2000;
                                                                *(uint32_t*)(8(r3)) = r0; // stw
                                                                r3 = r29 + 0x74; // addi
                                                                r4 = r29 + 0x5c; // addi
                                                                r5 = r1 + 0xa4; // addi
                                                                /* li r6, 1 */ // 0x38c00001
                                                                // Call 0x00067a8c
                                                                int var_7 = sub_0x00067a8c(...);
                                                                uint16_t r0 = *(uint16_t*)(0x254(r29)); // lhz
                                                                r0 = ROTATE_AND_MASK(r0, 0); // rlwinm
                                                                *(uint32_t*)(0x254(r29)) = r0; // sth
                                                                goto label_0x067d88;
                                                                float f2 = *(float*)(0x5c(r29)); // lfs
                                                                float f1 = *(float*)(0x60(r29)); // lfs
                                                                float f0 = *(float*)(0x64(r29)); // lfs
                                                                *(uint32_t*)(0x74(r29)) = f2; // stfs
                                                                *(uint32_t*)(0x78(r29)) = f1; // stfs
                                                                *(uint32_t*)(0x7c(r29)) = f0; // stfs
                                                                uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
                                                                uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                                                uint32_t r0 = *(uint32_t*)(8(r3)); // lwz
                                                                /* rlwinm. r0, r0, 0, 0x15, 0x15 */ // 0x5400056b
                                                                if (/* bne 0x67df0 */) {
                                                                // branch to 0x067df0
                                                                    float f7 = *(float*)(0xa4(r1)); // lfs
                                                                    r4 = r1 + 0x38; // addi
                                                                    float f0 = *(float*)(0x60(r29)); // lfs
                                                                    float f2 = *(float*)(0xac(r1)); // lfs
                                                                    float f4 = *(float*)(0x5c(r29)); // lfs
                                                                    f6 = fmuls(f7, f0); // fmuls
                                                                    float f5 = *(float*)(0xa8(r1)); // lfs
                                                                    f0 = fmuls(f2, f0); // fmuls
                                                                    f3 = fmuls(f2, f4); // fmuls
                                                                    float f1 = *(float*)(0x64(r29)); // lfs
                                                                    f4 = fmuls(f5, f4); // fmuls
                                                                    f2 = fmuls(f7, f1); // fmuls
                                                                    f1 = fmuls(f5, f1); // fmuls
                                                                    f4 = fsubs(f6, f4); // fsubs
                                                                    f2 = fsubs(f3, f2); // fsubs
                                                                    f0 = fsubs(f1, f0); // fsubs
                                                                    *(uint32_t*)(0x40(r1)) = f4; // stfs
                                                                    *(uint32_t*)(0x38(r1)) = f0; // stfs
                                                                    *(uint32_t*)(0x3c(r1)) = f2; // stfs
                                                                    uint32_t r3 = *(uint32_t*)(0x258(r29)); // lwz
                                                                    // Call 0x000634e0
                                                                    int var_8 = sub_0x000634e0(...);
                                                                    uint32_t r5 = *(uint32_t*)(0x98(r1)); // lwz
                                                                    r3 = r29 + 0x80; // addi
                                                                    uint32_t r0 = *(uint32_t*)(0xa0(r1)); // lwz
                                                                    *(uint32_t*)(0x2c(r1)) = r5; // stw
                                                                    uint32_t r4 = *(uint32_t*)(0x9c(r1)); // lwz
                                                                    float f8 = *(float*)(0x44(r29)); // lfs
                                                                    float f1 = *(float*)(0x34(r1)); // lfs
                                                                    *(uint32_t*)(0x30(r1)) = r4; // stw
                                                                    float f5 = *(float*)(0x48(r29)); // lfs
                                                                    f0 = fmuls(f8, f1); // fmuls
                                                                    float f2 = *(float*)(0x2c(r1)); // lfs
                                                                    float f7 = *(float*)(0x30(r1)); // lfs
                                                                    f1 = fmuls(f5, f1); // fmuls
                                                                    float f6 = *(float*)(0x4c(r29)); // lfs
                                                                    f3 = fmuls(f5, f2); // fmuls
                                                                    f4 = fmuls(f8, f7); // fmuls
                                                                    f2 = fmuls(f6, f2); // fmuls
                                                                    f9 = fsubs(f4, f3); // fsubs
                                                                    f2 = fsubs(f2, f0); // fsubs
                                                                    f0 = fmuls(f6, f7); // fmuls
                                                                    *(uint32_t*)(0x28(r1)) = f9; // stfs
                                                                    f3 = fmuls(f9, f8); // fmuls
                                                                    f4 = fmuls(f2, f8); // fmuls
                                                                    *(uint32_t*)(0x24(r1)) = f2; // stfs
                                                                    f7 = fsubs(f1, f0); // fsubs
                                                                    f1 = fmuls(f2, f6); // fmuls
                                                                    f0 = fmuls(f9, f5); // fmuls
                                                                    *(uint32_t*)(0x20(r1)) = f7; // stfs
                                                                    f2 = fmuls(f7, f6); // fmuls
                                                                    f5 = fmuls(f7, f5); // fmuls
                                                                    f6 = fsubs(f1, f0); // fsubs
                                                                    f1 = fsubs(f3, f2); // fsubs
                                                                    f0 = fsubs(f5, f4); // fsubs
                                                                    *(uint32_t*)(0x80(r29)) = f6; // stfs
                                                                    *(uint32_t*)(0x84(r29)) = f1; // stfs
                                                                    *(uint32_t*)(0x88(r29)) = f0; // stfs
                                                                    // Call 0x00063358
                                                                    int var_9 = sub_0x00063358(...);
                                                                    uint8_t r0 = *(uint8_t*)(0x98(r29)); // lbz
                                                                    // Compare r0 cmpwi 0
                                                                    if (/* beq 0x67fa4 */) {
                                                                    // branch to 0x067fa4
                                                                        float f3 = *(float*)(0x5c(r29)); // lfs
                                                                        r3 = r1 + 8; // addi
                                                                        float f2 = *(float*)(0x50(r29)); // lfs
                                                                        r4 = r29 + 0x5c; // addi
                                                                        float f1 = *(float*)(0x60(r29)); // lfs
                                                                        r5 = r29 + 0x50; // addi
                                                                        float f0 = *(float*)(0x54(r29)); // lfs
                                                                        f2 = fmuls(f3, f2); // fmuls
                                                                        float f3 = *(float*)(0x64(r29)); // lfs
                                                                        f0 = fmuls(f1, f0); // fmuls
                                                                        float f1 = *(float*)(0x58(r29)); // lfs
                                                                        f1 = fmuls(f3, f1); // fmuls
                                                                        f0 = fadds(f2, f0); // fadds
                                                                        f30 = fadds(f1, f0); // fadds
                                                                        // Call 0x00066cb0
                                                                        int var_10 = sub_0x00066cb0(...);
                                                                        float f1 = *(float*)(8(r1)); // lfs
                                                                        float f0 = *(float*)(0xc(r1)); // lfs
                                                                        f1 = fmuls(f1, f1); // fmuls
                                                                        float f2 = *(float*)(0x10(r1)); // lfs
                                                                        f0 = fmuls(f0, f0); // fmuls
                                                                        f2 = fmuls(f2, f2); // fmuls
                                                                        f0 = fadds(f1, f0); // fadds
                                                                        f1 = fadds(f2, f0); // fadds
                                                                        // Call 0x00063358
                                                                        int var_11 = sub_0x00063358(...);
                                                                        /* fmr f2, f30 */ // 0xfc40f090
                                                                        // Call 0x00063358
                                                                        int var_12 = sub_0x00063358(...);
                                                                        float f0 = *(float*)(0(r31)); // lfs
                                                                        /* gekko_0x3f 0xfc010040 */ // 0xfc010040
                                                                        if (/* ble 0x67f0c */) {
                                                                        // branch to 0x067f0c
                                                                        } else {
                                                                            goto label_0x067f10;
                                                                            f1 = -f1; // fneg
                                                                            float f5 = *(float*)(0x5c(r29)); // lfs
                                                                            float f0 = *(float*)(0x54(r29)); // lfs
                                                                            float f3 = *(float*)(0x64(r29)); // lfs
                                                                            float f4 = *(float*)(0x50(r29)); // lfs
                                                                            f9 = fmuls(f5, f0); // fmuls
                                                                            float f8 = *(float*)(0x60(r29)); // lfs
                                                                            f2 = fmuls(f3, f0); // fmuls
                                                                            float f0 = *(float*)(0x58(r29)); // lfs
                                                                            f6 = fmuls(f3, f4); // fmuls
                                                                            f7 = fmuls(f8, f4); // fmuls
                                                                            f5 = fmuls(f5, f0); // fmuls
                                                                            float f3 = *(float*)(0x38(r29)); // lfs
                                                                            f4 = fmuls(f8, f0); // fmuls
                                                                            float f0 = *(float*)(0x3c(r29)); // lfs
                                                                            f7 = fsubs(f9, f7); // fsubs
                                                                            f6 = fsubs(f6, f5); // fsubs
                                                                            f8 = fsubs(f4, f2); // fsubs
                                                                            float f4 = *(float*)(0x40(r29)); // lfs
                                                                            float f5 = *(float*)(0x58(r31)); // lfs
                                                                            f2 = fmuls(f6, f0); // fmuls
                                                                            float f0 = *(float*)(0(r31)); // lfs
                                                                            f3 = fmuls(f8, f3); // fmuls
                                                                            f5 = fmuls(f5, f1); // fmuls
                                                                            *(uint32_t*)(0x14(r1)) = f8; // stfs
                                                                            f4 = fmuls(f7, f4); // fmuls
                                                                            f1 = fadds(f3, f2); // fadds
                                                                            *(uint32_t*)(0x18(r1)) = f6; // stfs
                                                                            float f2 = *(float*)(4(r31)); // lfs
                                                                            *(uint32_t*)(0x1c(r1)) = f7; // stfs
                                                                            f1 = fadds(f4, f1); // fadds
                                                                            /* gekko_0x3f 0xfc010040 */ // 0xfc010040
                                                                            if (/* bge 0x67f94 */) {
                                                                            // branch to 0x067f94
                                                                                float f2 = *(float*)(0xc(r31)); // lfs
                                                                                f5 = fmuls(f5, f2); // fmuls
                                                                                float f0 = *(float*)(0xa0(r29)); // lfs
                                                                                f0 = fadds(f0, f5); // fadds
                                                                                *(uint32_t*)(0xa0(r29)) = f0; // stfs
                                                                                float f2 = *(float*)(0xa0(r29)); // lfs
                                                                                float f1 = *(float*)(0(r31)); // lfs
                                                                                /* gekko_0x3f 0xfc020840 */ // 0xfc020840
                                                                                if (/* ble 0x67fd0 */) {
                                                                                // branch to 0x067fd0
                                                                                    float f0 = *(float*)(0x98(r30)); // lfs
                                                                                    f0 = fsubs(f2, f0); // fsubs
                                                                                    *(uint32_t*)(0xa0(r29)) = f0; // stfs
                                                                                    /* gekko_0x3f 0xfc010040 */ // 0xfc010040
                                                                                    if (/* ble 0x67fec */) {
                                                                                    // branch to 0x067fec
                                                                                        *(uint32_t*)(0xa0(r29)) = f1; // stfs
                                                                                        goto label_0x067fec;
                                                                                        if (/* bge 0x67fec */) {
                                                                                        // branch to 0x067fec
                                                                                            float f0 = *(float*)(0x98(r30)); // lfs
                                                                                            f0 = fadds(f2, f0); // fadds
                                                                                            *(uint32_t*)(0xa0(r29)) = f0; // stfs
                                                                                            /* gekko_0x3f 0xfc010040 */ // 0xfc010040
                                                                                            if (/* bge 0x67fec */) {
                                                                                            // branch to 0x067fec
                                                                                                *(uint32_t*)(0xa0(r29)) = f1; // stfs
                                                                                                /* gekko_0x38 0xe3e10118 */ // 0xe3e10118
                                                                                                float f31 = *(float*)(0x110(r1)); // lfd
                                                                                                /* gekko_0x38 0xe3c10108 */ // 0xe3c10108
                                                                                                float f30 = *(float*)(0x100(r1)); // lfd
                                                                                                uint32_t r31 = *(uint32_t*)(0xfc(r1)); // lwz
                                                                                                uint32_t r30 = *(uint32_t*)(0xf8(r1)); // lwz
                                                                                                uint32_t r0 = *(uint32_t*)(0x124(r1)); // lwz
                                                                                                uint32_t r29 = *(uint32_t*)(0xf4(r1)); // lwz
                                                                                                /* mtlr r0 */ // SPR operation
                                                                                                r1 = r1 + 0x120; // addi
                                                                                                // Restore stack (addi r1, r1, 0x120)
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
        }
    }
}
