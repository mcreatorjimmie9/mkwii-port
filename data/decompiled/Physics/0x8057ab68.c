// GHIRDA Auto-Decompiled
// Address: 0x8057ab68 (section offset: 0x0682cc)
// Size: 1216 bytes, 304 instructions
// Module: StaticR.rel | Class: Physics

void updateVehicleSpeed(void* arg0) {
    // Allocate stack frame: 0x30 bytes
    *(uint32_t*)(0x20(r1)) = f31; // stfd
    /* gekko_0x3c 0xf3e10028 */ // 0xf3e10028
    /* li r4, 2 */ // 0x38800002
    *(uint32_t*)(0x1c(r1)) = r31; // stw
    r31 = 0x0 << 16; // lis
    r31 = r31 + 0; // addi
    *(uint32_t*)(0x18(r1)) = r30; // stw
    r30 = 0x0 << 16; // lis
    r30 = r30 + 0; // addi
    *(uint32_t*)(0x14(r1)) = r29; // stw
    r29 = r3; // mr
    *(uint32_t*)(0x10(r1)) = r28; // stw
    r28 = 0x0 << 16; // lis
    uint32_t r3 = *(uint32_t*)(0(r28)); // lwz
    // Call 0x000656b0
    int var_1 = sub_0x000656b0(...);
    // Compare r3 cmpwi 0
    if (/* beq 0x68394 */) {
    // branch to 0x068394
        r3 = r29; // mr
        // Call 0x0006db70
        int var_2 = sub_0x0006db70(...);
        float f31 = *(float*)(0x17c(r3)); // lfs
        /* li r4, 2 */ // 0x38800002
        uint32_t r3 = *(uint32_t*)(0(r28)); // lwz
        // Call 0x000656b0
        int var_3 = sub_0x000656b0(...);
        // Compare r3 cmpwi 0
        if (/* beq 0x68384 */) {
        // branch to 0x068384
            uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
            uint32_t r4 = *(uint32_t*)(4(r3)); // lwz
            uint32_t r0 = *(uint32_t*)(8(r4)); // lwz
            /* clrlwi. r0, r0, 0x1f */ // 0x540007ff
            if (/* bne 0x68388 */) {
            // branch to 0x068388
                uint32_t r4 = *(uint32_t*)(4(r4)); // lwz
                /* rlwinm. r0, r4, 0, 0x11, 0x11 */ // 0x54800463
                if (/* bne 0x6837c */) {
                // branch to 0x06837c
                    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                    uint16_t r0 = *(uint16_t*)(0xa4(r3)); // lha
                    // Compare r0 cmpwi 0
                    if (/* ble 0x6837c */) {
                    // branch to 0x06837c
                        f1 = fabsf(f31); // fabs
                        float f0 = *(float*)(0x224(r30)); // lfs
                        /* gekko_0x3f 0xfc010040 */ // 0xfc010040
                        if (/* blt 0x68384 */) {
                        // branch to 0x068384
                            /* rlwinm. r0, r4, 0, 0x1c, 0x1c */ // 0x54800739
                            if (/* beq 0x68388 */) {
                            // branch to 0x068388
                                float f31 = *(float*)(0(r31)); // lfs
                                float f0 = *(float*)(0x20(r29)); // lfs
                                f0 = fadds(f0, f31); // fadds
                                *(uint32_t*)(0x20(r29)) = f0; // stfs
                                float f1 = *(float*)(0x20(r29)); // lfs
                                float f0 = *(float*)(0x68(r31)); // lfs
                                /* gekko_0x3f 0xfc010040 */ // 0xfc010040
                                if (/* bge 0x683b0 */) {
                                // branch to 0x0683b0
                                    float f0 = *(float*)(0x1c(r31)); // lfs
                                    f0 = fadds(f1, f0); // fadds
                                    *(uint32_t*)(0x20(r29)) = f0; // stfs
                                    uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
                                    /* li r0, 0 */ // 0x38000000
                                    uint32_t r7 = *(uint32_t*)(4(r3)); // lwz
                                    uint32_t r3 = *(uint32_t*)(0x10(r7)); // lwz
                                    /* rlwinm. r3, r3, 0, 0x16, 0x16 */ // 0x546305ad
                                    if (/* bne 0x6843c */) {
                                    // branch to 0x06843c
                                        uint32_t r8 = *(uint32_t*)(8(r7)); // lwz
                                        /* li r5, 1 */ // 0x38a00001
                                        /* li r6, 1 */ // 0x38c00001
                                        /* rlwinm. r3, r8, 0, 5, 5 */ // 0x5503014b
                                        if (/* bne 0x683f4 */) {
                                        // branch to 0x0683f4
                                            r3 = 0x0x2801 << 16; // lis
                                            uint32_t r4 = *(uint32_t*)(0xc(r7)); // lwz
                                            r3 = r3 + -0x8000; // addi
                                            /* and. r3, r4, r3 */ // 0x7c831839
                                            if (/* bne 0x683f4 */) {
                                            // branch to 0x0683f4
                                                /* li r6, 0 */ // 0x38c00000
                                                // Compare r6 cmpwi 0
                                                if (/* bne 0x68408 */) {
                                                // branch to 0x068408
                                                    /* rlwinm. r3, r8, 0, 0, 0 */ // 0x55030001
                                                    if (/* bne 0x68408 */) {
                                                    // branch to 0x068408
                                                        /* li r5, 0 */ // 0x38a00000
                                                        // Compare r5 cmpwi 0
                                                        if (/* bne 0x6845c */) {
                                                        // branch to 0x06845c
                                                            uint32_t r3 = *(uint32_t*)(0xc(r7)); // lwz
                                                            /* rlwinm. r3, r3, 0, 0xa, 0xa */ // 0x54630295
                                                            if (/* beq 0x6845c */) {
                                                            // branch to 0x06845c
                                                                uint32_t r3 = *(uint32_t*)(4(r7)); // lwz
                                                                /* rlwinm. r3, r3, 0, 5, 5 */ // 0x5463014b
                                                                if (/* bne 0x6845c */) {
                                                                // branch to 0x06845c
                                                                    float f1 = *(float*)(0x20(r29)); // lfs
                                                                    float f0 = *(float*)(0x6c(r31)); // lfs
                                                                    f1 = fabsf(f1); // fabs
                                                                    /* gekko_0x3f 0xfc010040 */ // 0xfc010040
                                                                    if (/* ble 0x6845c */) {
                                                                    // branch to 0x06845c
                                                                        r3 = r29; // mr
                                                                        // Call 0x0006dff0
                                                                        int var_4 = sub_0x0006dff0(...);
                                                                        uint32_t r3 = *(uint32_t*)(0x10(r3)); // lwz
                                                                        /* li r0, 1 */ // 0x38000001
                                                                        float f0 = *(float*)(0x20(r29)); // lfs
                                                                        float f1 = *(float*)(0x38(r3)); // lfs
                                                                        f0 = fmuls(f0, f1); // fmuls
                                                                        *(uint32_t*)(0x20(r29)) = f0; // stfs
                                                                        float f1 = *(float*)(0(r31)); // lfs
                                                                        float f0 = *(float*)(4(r31)); // lfs
                                                                        *(uint32_t*)(0x30(r29)) = f1; // stfs
                                                                        uint32_t r5 = *(uint32_t*)(0(r29)); // lwz
                                                                        *(uint32_t*)(0x34(r29)) = f0; // stfs
                                                                        uint32_t r6 = *(uint32_t*)(4(r5)); // lwz
                                                                        uint32_t r7 = *(uint32_t*)(8(r6)); // lwz
                                                                        /* clrlwi. r3, r7, 0x1f */ // 0x54e307ff
                                                                        if (/* beq 0x68494 */) {
                                                                        // branch to 0x068494
                                                                            r3 = r29; // mr
                                                                            // Call 0x0006df08
                                                                            int var_5 = sub_0x0006df08(...);
                                                                            uint32_t r3 = *(uint32_t*)(0x14(r3)); // lwz
                                                                            // Call 0x0006792c
                                                                            int var_6 = sub_0x0006792c(...);
                                                                            goto label_0x068764;
                                                                            uint32_t r3 = *(uint32_t*)(0x10(r6)); // lwz
                                                                            /* li r9, 0 */ // 0x39200000
                                                                            /* li r4, 0 */ // 0x38800000
                                                                            /* rlwinm. r8, r3, 0, 0x1c, 0x1c */ // 0x54680739
                                                                            if (/* beq 0x684b8 */) {
                                                                            // branch to 0x0684b8
                                                                                uint32_t r3 = *(uint32_t*)(4(r6)); // lwz
                                                                                /* rlwinm. r3, r3, 0, 0xd, 0xd */ // 0x5463035b
                                                                                if (/* beq 0x684b8 */) {
                                                                                // branch to 0x0684b8
                                                                                    /* li r4, 1 */ // 0x38800001
                                                                                    // Compare r4 cmpwi 0
                                                                                    if (/* beq 0x684d0 */) {
                                                                                    // branch to 0x0684d0
                                                                                        uint32_t r3 = *(uint32_t*)(4(r6)); // lwz
                                                                                        /* rlwinm. r3, r3, 0, 0x14, 0x14 */ // 0x54630529
                                                                                        if (/* bne 0x684d0 */) {
                                                                                        // branch to 0x0684d0
                                                                                            /* li r9, 1 */ // 0x39200001
                                                                                            uint32_t r4 = *(uint32_t*)(4(r6)); // lwz
                                                                                            /* rlwinm. r3, r4, 0, 9, 9 */ // 0x54830253
                                                                                            if (/* beq 0x684e0 */) {
                                                                                            // branch to 0x0684e0
                                                                                                /* li r9, 1 */ // 0x39200001
                                                                                                // Compare r9 cmpwi 0
                                                                                                if (/* bne 0x686e4 */) {
                                                                                                // branch to 0x0686e4
                                                                                                    /* rlwinm. r3, r4, 0, 0xd, 0xd */ // 0x5483035b
                                                                                                    if (/* beq 0x686e4 */) {
                                                                                                    // branch to 0x0686e4
                                                                                                        /* rlwinm. r3, r7, 0, 6, 6 */ // 0x54e3018d
                                                                                                        if (/* bne 0x686e4 */) {
                                                                                                        // branch to 0x0686e4
                                                                                                            /* rlwinm. r3, r4, 0, 0xb, 0xb */ // 0x548302d7
                                                                                                            if (/* beq 0x68524 */) {
                                                                                                            // branch to 0x068524
                                                                                                                // Compare r0 cmpwi 0
                                                                                                                if (/* beq 0x68518 */) {
                                                                                                                // branch to 0x068518
                                                                                                                    r3 = r29; // mr
                                                                                                                    // Call 0x00068fcc
                                                                                                                    int var_7 = sub_0x00068fcc(...);
                                                                                                                    *(uint32_t*)(0x30(r29)) = f1; // stfs
                                                                                                                    goto label_0x068764;
                                                                                                                    float f0 = *(float*)(0x120(r29)); // lfs
                                                                                                                    *(uint32_t*)(0x30(r29)) = f0; // stfs
                                                                                                                    goto label_0x068764;
                                                                                                                    /* rlwinm. r3, r4, 0, 0, 1 */ // 0x54830003
                                                                                                                    if (/* beq 0x68550 */) {
                                                                                                                    // branch to 0x068550
                                                                                                                        // Compare r0 cmpwi 0
                                                                                                                        if (/* beq 0x68544 */) {
                                                                                                                        // branch to 0x068544
                                                                                                                            r3 = r29; // mr
                                                                                                                            // Call 0x00068fcc
                                                                                                                            int var_8 = sub_0x00068fcc(...);
                                                                                                                            *(uint32_t*)(0x30(r29)) = f1; // stfs
                                                                                                                            goto label_0x068764;
                                                                                                                            float f0 = *(float*)(0xe0(r30)); // lfs
                                                                                                                            *(uint32_t*)(0x30(r29)) = f0; // stfs
                                                                                                                            goto label_0x068764;
                                                                                                                            /* clrlwi. r3, r4, 0x1f */ // 0x548307ff
                                                                                                                            if (/* beq 0x685cc */) {
                                                                                                                            // branch to 0x0685cc
                                                                                                                                // Compare r0 cmpwi 0
                                                                                                                                if (/* beq 0x68570 */) {
                                                                                                                                // branch to 0x068570
                                                                                                                                    r3 = r29; // mr
                                                                                                                                    // Call 0x00068fcc
                                                                                                                                    int var_9 = sub_0x00068fcc(...);
                                                                                                                                    *(uint32_t*)(0x30(r29)) = f1; // stfs
                                                                                                                                    goto label_0x06866c;
                                                                                                                                    /* rlwinm. r0, r7, 0, 0, 0 */ // 0x54e00001
                                                                                                                                    if (/* bne 0x68588 */) {
                                                                                                                                    // branch to 0x068588
                                                                                                                                        uint32_t r3 = *(uint32_t*)(0xc(r6)); // lwz
                                                                                                                                        r0 = ROTATE_AND_MASK(r3, 0); // rlwinm
                                                                                                                                        /* rlwimi. r0, r3, 0, 0x10, 0x10 */ // 0x50600421
                                                                                                                                        if (/* beq 0x68594 */) {
                                                                                                                                        // branch to 0x068594
                                                                                                                                            float f0 = *(float*)(0xec(r30)); // lfs
                                                                                                                                            *(uint32_t*)(0x30(r29)) = f0; // stfs
                                                                                                                                            goto label_0x06866c;
                                                                                                                                            /* rlwinm. r0, r3, 0, 0x1e, 0x1e */ // 0x546007bd
                                                                                                                                            if (/* beq 0x685a8 */) {
                                                                                                                                            // branch to 0x0685a8
                                                                                                                                                float f0 = *(float*)(0x2a4(r30)); // lfs
                                                                                                                                                *(uint32_t*)(0x30(r29)) = f0; // stfs
                                                                                                                                                goto label_0x06866c;
                                                                                                                                                /* rlwinm. r0, r3, 0, 0x1c, 0x1c */ // 0x54600739
                                                                                                                                                if (/* beq 0x685bc */) {
                                                                                                                                                // branch to 0x0685bc
                                                                                                                                                    float f0 = *(float*)(0x250(r30)); // lfs
                                                                                                                                                    *(uint32_t*)(0x30(r29)) = f0; // stfs
                                                                                                                                                    goto label_0x06866c;
                                                                                                                                                    r3 = r29; // mr
                                                                                                                                                    // Call 0x00068fcc
                                                                                                                                                    int var_10 = sub_0x00068fcc(...);
                                                                                                                                                    *(uint32_t*)(0x30(r29)) = f1; // stfs
                                                                                                                                                    goto label_0x06866c;
                                                                                                                                                    /* rlwinm. r0, r4, 0, 0x1e, 0x1e */ // 0x548007bd
                                                                                                                                                    if (/* beq 0x68644 */) {
                                                                                                                                                    // branch to 0x068644
                                                                                                                                                        /* rlwinm. r0, r7, 0, 0xf, 0xf */ // 0x54e003df
                                                                                                                                                        if (/* bne 0x68644 */) {
                                                                                                                                                        // branch to 0x068644
                                                                                                                                                            // Compare r8 cmpwi 0
                                                                                                                                                            if (/* bne 0x68644 */) {
                                                                                                                                                            // branch to 0x068644
                                                                                                                                                                uint32_t r0 = *(uint32_t*)(0x248(r29)); // lwz
                                                                                                                                                                // Compare r0 cmpwi 1
                                                                                                                                                                if (/* bne 0x685fc */) {
                                                                                                                                                                // branch to 0x0685fc
                                                                                                                                                                    float f0 = *(float*)(0x70(r30)); // lfs
                                                                                                                                                                    *(uint32_t*)(0x30(r29)) = f0; // stfs
                                                                                                                                                                    goto label_0x06866c;
                                                                                                                                                                    // Compare r0 cmpwi 2
                                                                                                                                                                    if (/* bne 0x6862c */) {
                                                                                                                                                                    // branch to 0x06862c
                                                                                                                                                                        uint16_t r3 = *(uint16_t*)(0x24c(r29)); // lha
                                                                                                                                                                        r0 = r3 + 1; // addi
                                                                                                                                                                        *(uint32_t*)(0x24c(r29)) = r0; // sth
                                                                                                                                                                        r3 = sign_extend(r0); // extsh
                                                                                                                                                                        uint16_t r0 = *(uint16_t*)(0x6c(r30)); // lha
                                                                                                                                                                        // Compare r3 cmpw r0
                                                                                                                                                                        if (/* ble 0x6862c */) {
                                                                                                                                                                        // branch to 0x06862c
                                                                                                                                                                            /* li r0, 3 */ // 0x38000003
                                                                                                                                                                            *(uint32_t*)(0x248(r29)) = r0; // stw
                                                                                                                                                                            goto label_0x06866c;
                                                                                                                                                                            uint32_t r0 = *(uint32_t*)(0x248(r29)); // lwz
                                                                                                                                                                            // Compare r0 cmpwi 3
                                                                                                                                                                            if (/* bne 0x6866c */) {
                                                                                                                                                                            // branch to 0x06866c
                                                                                                                                                                                float f0 = *(float*)(0x74(r30)); // lfs
                                                                                                                                                                                *(uint32_t*)(0x30(r29)) = f0; // stfs
                                                                                                                                                                                goto label_0x06866c;
                                                                                                                                                                                float f1 = *(float*)(0x20(r29)); // lfs
                                                                                                                                                                                float f0 = *(float*)(0(r31)); // lfs
                                                                                                                                                                                /* gekko_0x3f 0xfc010040 */ // 0xfc010040
                                                                                                                                                                                if (/* ble 0x6865c */) {
                                                                                                                                                                                // branch to 0x06865c
                                                                                                                                                                                    float f1 = *(float*)(0x230(r30)); // lfs
                                                                                                                                                                                    goto label_0x068660;
                                                                                                                                                                                    float f1 = *(float*)(0x234(r30)); // lfs
                                                                                                                                                                                    float f0 = *(float*)(0x20(r29)); // lfs
                                                                                                                                                                                    f0 = fmuls(f0, f1); // fmuls
                                                                                                                                                                                    *(uint32_t*)(0x20(r29)) = f0; // stfs
                                                                                                                                                                                    uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
                                                                                                                                                                                    uint32_t r4 = *(uint32_t*)(4(r3)); // lwz
                                                                                                                                                                                    uint32_t r3 = *(uint32_t*)(4(r4)); // lwz
                                                                                                                                                                                    r0 = ROTATE_AND_MASK(r3, 0); // rlwinm
                                                                                                                                                                                    /* rlwimi. r0, r3, 0, 0x1c, 0x1c */ // 0x50600739
                                                                                                                                                                                    if (/* bne 0x68764 */) {
                                                                                                                                                                                    // branch to 0x068764
                                                                                                                                                                                        uint32_t r0 = *(uint32_t*)(0x14(r4)); // lwz
                                                                                                                                                                                        /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x540006f7
                                                                                                                                                                                        if (/* bne 0x68764 */) {
                                                                                                                                                                                        // branch to 0x068764
                                                                                                                                                                                            float f0 = *(float*)(0x15c(r29)); // lfs
                                                                                                                                                                                            r3 = r29; // mr
                                                                                                                                                                                            f31 = fabsf(f0); // fabs
                                                                                                                                                                                            // Call 0x0006e564
                                                                                                                                                                                            int var_11 = sub_0x0006e564(...);
                                                                                                                                                                                            f1 = fmuls(f31, f1); // fmuls
                                                                                                                                                                                            float f0 = *(float*)(4(r31)); // lfs
                                                                                                                                                                                            r3 = r29; // mr
                                                                                                                                                                                            f31 = fsubs(f0, f1); // fsubs
                                                                                                                                                                                            // Call 0x0006e018
                                                                                                                                                                                            int var_12 = sub_0x0006e018(...);
                                                                                                                                                                                            float f1 = *(float*)(0x1c(r3)); // lfs
                                                                                                                                                                                            r3 = r29; // mr
                                                                                                                                                                                            float f0 = *(float*)(4(r31)); // lfs
                                                                                                                                                                                            f0 = fsubs(f0, f1); // fsubs
                                                                                                                                                                                            f31 = fmuls(f0, f31); // fmuls
                                                                                                                                                                                            // Call 0x0006e018
                                                                                                                                                                                            int var_13 = sub_0x0006e018(...);
                                                                                                                                                                                            float f1 = *(float*)(0x1c(r3)); // lfs
                                                                                                                                                                                            float f0 = *(float*)(0x20(r29)); // lfs
                                                                                                                                                                                            f1 = fadds(f1, f31); // fadds
                                                                                                                                                                                            f0 = fmuls(f0, f1); // fmuls
                                                                                                                                                                                            *(uint32_t*)(0x20(r29)) = f0; // stfs
                                                                                                                                                                                            goto label_0x068764;
                                                                                                                                                                                            /* rlwinm. r0, r4, 0, 0, 0 */ // 0x54800001
                                                                                                                                                                                            if (/* beq 0x6870c */) {
                                                                                                                                                                                            // branch to 0x06870c
                                                                                                                                                                                                uint32_t r3 = *(uint32_t*)(4(r5)); // lwz
                                                                                                                                                                                                uint16_t r0 = *(uint16_t*)(0xe4(r30)); // lha
                                                                                                                                                                                                uint32_t r3 = *(uint32_t*)(0x1c(r3)); // lwz
                                                                                                                                                                                                // Compare r3 cmplw r0
                                                                                                                                                                                                if (/* bge 0x6870c */) {
                                                                                                                                                                                                // branch to 0x06870c
                                                                                                                                                                                                    float f0 = *(float*)(0xe0(r30)); // lfs
                                                                                                                                                                                                    *(uint32_t*)(0x30(r29)) = f0; // stfs
                                                                                                                                                                                                    goto label_0x068764;
                                                                                                                                                                                                    /* rlwinm. r0, r4, 0, 1, 1 */ // 0x54800043
                                                                                                                                                                                                    if (/* beq 0x68728 */) {
                                                                                                                                                                                                    // branch to 0x068728
                                                                                                                                                                                                        /* clrlwi. r0, r4, 0x1f */ // 0x548007ff
                                                                                                                                                                                                        if (/* bne 0x68728 */) {
                                                                                                                                                                                                        // branch to 0x068728
                                                                                                                                                                                                            float f0 = *(float*)(0x48(r30)); // lfs
                                                                                                                                                                                                            *(uint32_t*)(0x34(r29)) = f0; // stfs
                                                                                                                                                                                                            goto label_0x068754;
                                                                                                                                                                                                            /* rlwinm. r0, r7, 0, 0x15, 0x15 */ // 0x54e0056b
                                                                                                                                                                                                            if (/* beq 0x6873c */) {
                                                                                                                                                                                                            // branch to 0x06873c
                                                                                                                                                                                                                float f0 = *(float*)(0x44(r30)); // lfs
                                                                                                                                                                                                                *(uint32_t*)(0x34(r29)) = f0; // stfs
                                                                                                                                                                                                                goto label_0x068754;
                                                                                                                                                                                                                uint32_t r3 = *(uint32_t*)(4(r5)); // lwz
                                                                                                                                                                                                                uint32_t r0 = *(uint32_t*)(0x1c(r3)); // lwz
                                                                                                                                                                                                                // Compare r0 cmplwi 5
                                                                                                                                                                                                                if (/* ble 0x68754 */) {
                                                                                                                                                                                                                // branch to 0x068754
                                                                                                                                                                                                                    float f0 = *(float*)(0x40(r30)); // lfs
                                                                                                                                                                                                                    *(uint32_t*)(0x34(r29)) = f0; // stfs
                                                                                                                                                                                                                    float f1 = *(float*)(0x20(r29)); // lfs
                                                                                                                                                                                                                    float f0 = *(float*)(0x34(r29)); // lfs
                                                                                                                                                                                                                    f0 = fmuls(f1, f0); // fmuls
                                                                                                                                                                                                                    *(uint32_t*)(0x20(r29)) = f0; // stfs
                                                                                                                                                                                                                    /* gekko_0x38 0xe3e10028 */ // 0xe3e10028
                                                                                                                                                                                                                    uint32_t r0 = *(uint32_t*)(0x34(r1)); // lwz
                                                                                                                                                                                                                    float f31 = *(float*)(0x20(r1)); // lfd
                                                                                                                                                                                                                    uint32_t r31 = *(uint32_t*)(0x1c(r1)); // lwz
                                                                                                                                                                                                                    uint32_t r30 = *(uint32_t*)(0x18(r1)); // lwz
                                                                                                                                                                                                                    uint32_t r29 = *(uint32_t*)(0x14(r1)); // lwz
                                                                                                                                                                                                                    uint32_t r28 = *(uint32_t*)(0x10(r1)); // lwz
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
                            }
                        }
                    }
                }
            }
        }
    }
}
