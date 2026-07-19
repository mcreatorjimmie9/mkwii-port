// GHIRDA Auto-Decompiled
// Address: 0x8057b9bc (section offset: 0x069120)
// Size: 2584 bytes, 646 instructions
// Module: StaticR.rel | Class: Physics

void updateAcceleration(void* arg0) {
    // Allocate stack frame: 0xd0 bytes
    *(uint32_t*)(0xc0(r1)) = f31; // stfd
    /* xsmsubmsp f31, f1, f0 */ // 0xf3e100c8
    *(uint32_t*)(0xb0(r1)) = f30; // stfd
    /* xxsel vs30, vs1, vs0, v2 */ // 0xf3c100b8
    *(uint32_t*)(0xa0(r1)) = f29; // stfd
    /* gekko_0x3c 0xf3a100a8 */ // 0xf3a100a8
    *(uint32_t*)(0x90(r1)) = f28; // stfd
    /* xscmpgedp vs28, f1, f0 */ // 0xf3810098
    *(uint32_t*)(0x80(r1)) = f27; // stfd
    /* xsmsubasp f27, f1, f0 */ // 0xf3610088
    *(uint32_t*)(0x7c(r1)) = r31; // stw
    r31 = 0x0 << 16; // lis
    r31 = r31 + 0; // addi
    *(uint32_t*)(0x78(r1)) = r30; // stw
    r30 = 0x0 << 16; // lis
    r30 = r30 + 0; // addi
    *(uint32_t*)(0x74(r1)) = r29; // stw
    r29 = r3; // mr
    *(uint32_t*)(0x70(r1)) = r28; // stw
    float f0 = *(float*)(0x20(r3)); // lfs
    *(uint32_t*)(0x24(r3)) = f0; // stfs
    uint32_t r4 = *(uint32_t*)(0(r3)); // lwz
    uint32_t r4 = *(uint32_t*)(4(r4)); // lwz
    uint32_t r0 = *(uint32_t*)(4(r4)); // lwz
    /* rlwinm. r0, r0, 0, 0x16, 0x16 */ // 0x540005ad
    if (/* beq 0x692e4 */) {
    // branch to 0x0692e4
        // Call 0x0006e4ac
        int var_1 = sub_0x0006e4ac(...);
        float f0 = *(float*)(0x18(r30)); // lfs
        float f1 = *(float*)(4(r3)); // lfs
        f0 = -f0; // fneg
        /* gekko_0x3f 0xfc010040 */ // 0xfc010040
        if (/* bge 0x692e4 */) {
        // branch to 0x0692e4
            uint32_t r0 = *(uint32_t*)(0x218(r29)); // lwz
            // Compare r0 cmplwi 0xa
            if (/* ble 0x692e4 */) {
            // branch to 0x0692e4
                r3 = r29; // mr
                // Call 0x0006e4ac
                int var_2 = sub_0x0006e4ac(...);
                float f3 = *(float*)(0x44(r29)); // lfs
                float f2 = *(float*)(0(r3)); // lfs
                float f1 = *(float*)(0x48(r29)); // lfs
                float f0 = *(float*)(4(r3)); // lfs
                f2 = fmuls(f3, f2); // fmuls
                float f4 = *(float*)(0x4c(r29)); // lfs
                f1 = fmuls(f1, f0); // fmuls
                float f3 = *(float*)(8(r3)); // lfs
                float f0 = *(float*)(0x18(r30)); // lfs
                f3 = fmuls(f4, f3); // fmuls
                f1 = fadds(f2, f1); // fadds
                f0 = -f0; // fneg
                f1 = fadds(f3, f1); // fadds
                /* gekko_0x3f 0xfc010040 */ // 0xfc010040
                if (/* bge 0x692e4 */) {
                // branch to 0x0692e4
                    r3 = r29; // mr
                    // Call 0x0006db70
                    int var_3 = sub_0x0006db70(...);
                    r4 = 0x0 << 16; // lis
                    r5 = r1 + 0x30; // addi
                    r4 = r4 + 0; // addi
                    r3 = r3 + 0xf0; // addi
                    // Call 0x00063358
                    int var_4 = sub_0x00063358(...);
                    float f2 = *(float*)(0x30(r1)); // lfs
                    r4 = r29 + 0x44; // addi
                    float f3 = *(float*)(0x44(r29)); // lfs
                    r3 = r1 + 0xc; // addi
                    float f1 = *(float*)(0x48(r29)); // lfs
                    r5 = r1 + 0x30; // addi
                    float f0 = *(float*)(0x34(r1)); // lfs
                    f2 = fmuls(f3, f2); // fmuls
                    float f3 = *(float*)(0x4c(r29)); // lfs
                    f0 = fmuls(f1, f0); // fmuls
                    float f1 = *(float*)(0x38(r1)); // lfs
                    f1 = fmuls(f3, f1); // fmuls
                    f0 = fadds(f2, f0); // fadds
                    f31 = fadds(f1, f0); // fadds
                    // Call 0x00066cb0
                    int var_5 = sub_0x00066cb0(...);
                    float f1 = *(float*)(0xc(r1)); // lfs
                    float f0 = *(float*)(0x10(r1)); // lfs
                    f1 = fmuls(f1, f1); // fmuls
                    float f2 = *(float*)(0x14(r1)); // lfs
                    f0 = fmuls(f0, f0); // fmuls
                    f2 = fmuls(f2, f2); // fmuls
                    f0 = fadds(f1, f0); // fadds
                    f1 = fadds(f2, f0); // fadds
                    // Call 0x00063358
                    int var_6 = sub_0x00063358(...);
                    /* fmr f2, f31 */ // 0xfc40f890
                    // Call 0x00063358
                    int var_7 = sub_0x00063358(...);
                    float f0 = *(float*)(0(r31)); // lfs
                    /* gekko_0x3f 0xfc010040 */ // 0xfc010040
                    if (/* ble 0x69290 */) {
                    // branch to 0x069290
                    } else {
                        goto label_0x069294;
                        f1 = -f1; // fneg
                        float f0 = *(float*)(0x58(r31)); // lfs
                        float f3 = *(float*)(0x1c(r30)); // lfs
                        f0 = fmuls(f0, f1); // fmuls
                        f0 = fabsf(f0); // fabs
                        /* gekko_0x3f 0xfc001840 */ // 0xfc001840
                        if (/* ble 0x692e4 */) {
                        // branch to 0x0692e4
                            float f1 = *(float*)(0x80(r31)); // lfs
                            f2 = fsubs(f0, f3); // fsubs
                            float f0 = *(float*)(0x20(r30)); // lfs
                            f1 = fsubs(f1, f3); // fsubs
                            f1 = fdivs(f2, f1); // fdivs
                            f2 = fmuls(f0, f1); // fmuls
                            /* gekko_0x3f 0xfc001040 */ // 0xfc001040
                            if (/* bge 0x692d0 */) {
                            // branch to 0x0692d0
                                /* fmr f2, f0 */ // 0xfc400090
                                float f1 = *(float*)(4(r31)); // lfs
                                float f0 = *(float*)(0x20(r29)); // lfs
                                f1 = fsubs(f1, f2); // fsubs
                                f0 = fmuls(f0, f1); // fmuls
                                *(uint32_t*)(0x20(r29)) = f0; // stfs
                                uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
                                uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                uint32_t r4 = *(uint32_t*)(8(r3)); // lwz
                                /* clrlwi. r0, r4, 0x1f */ // 0x548007ff
                                if (/* bne 0x69308 */) {
                                // branch to 0x069308
                                    r3 = r29; // mr
                                    r28 = ROTATE_AND_MASK(r4, 0xf); // rlwinm
                                    // Call 0x0006db70
                                    int var_8 = sub_0x0006db70(...);
                                    *(uint32_t*)(0x172(r3)) = r28; // stb
                                    uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
                                    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                    uint32_t r0 = *(uint32_t*)(0xc(r3)); // lwz
                                    /* rlwinm. r0, r0, 0, 4, 4 */ // 0x54000109
                                    if (/* beq 0x69344 */) {
                                    // branch to 0x069344
                                        r3 = r29; // mr
                                        // Call 0x0006edbc
                                        int var_9 = sub_0x0006edbc(...);
                                        float f2 = *(float*)(0x10(r29)); // lfs
                                        float f0 = *(float*)(0x108(r30)); // lfs
                                        float f1 = *(float*)(0x2c(r3)); // lfs
                                        f0 = fmuls(f0, f2); // fmuls
                                        f31 = fmuls(f0, f1); // fmuls
                                        *(uint32_t*)(0x18(r29)) = f31; // stfs
                                        *(uint32_t*)(0x20(r29)) = f31; // stfs
                                        goto label_0x06960c;
                                        uint32_t r0 = *(uint32_t*)(8(r3)); // lwz
                                        /* rlwinm. r0, r0, 0, 0xd, 0xd */ // 0x5400035b
                                        if (/* beq 0x6935c */) {
                                        // branch to 0x06935c
                                            float f0 = *(float*)(0(r31)); // lfs
                                            *(uint32_t*)(0x20(r29)) = f0; // stfs
                                            goto label_0x0693ac;
                                            float f3 = *(float*)(0x30(r29)); // lfs
                                            float f0 = *(float*)(0(r31)); // lfs
                                            /* gekko_0x3f 0xfc030040 */ // 0xfc030040
                                            if (/* bge 0x6939c */) {
                                            // branch to 0x06939c
                                                float f2 = *(float*)(0x20(r29)); // lfs
                                                float f1 = *(float*)(0x68(r31)); // lfs
                                                /* gekko_0x3f 0xfc020840 */ // 0xfc020840
                                                if (/* bge 0x69384 */) {
                                                // branch to 0x069384
                                                    *(uint32_t*)(0x30(r29)) = f0; // stfs
                                                    goto label_0x06939c;
                                                    f0 = fadds(f2, f3); // fadds
                                                    /* gekko_0x3f 0xfc000840 */ // 0xfc000840
                                                    /* cror cr0eq, cr0lt, cr0eq */ // condition register
                                                    if (/* bne 0x6939c */) {
                                                    // branch to 0x06939c
                                                        f0 = fsubs(f1, f2); // fsubs
                                                        *(uint32_t*)(0x30(r29)) = f0; // stfs
                                                        float f1 = *(float*)(0x20(r29)); // lfs
                                                        float f0 = *(float*)(0x30(r29)); // lfs
                                                        f0 = fadds(f1, f0); // fadds
                                                        *(uint32_t*)(0x20(r29)) = f0; // stfs
                                                        uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
                                                        uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                                        uint32_t r0 = *(uint32_t*)(4(r3)); // lwz
                                                        /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x540006f7
                                                        if (/* beq 0x693d4 */) {
                                                        // branch to 0x0693d4
                                                            float f1 = *(float*)(0x20(r29)); // lfs
                                                            float f0 = *(float*)(0x10(r30)); // lfs
                                                            f0 = fmuls(f1, f0); // fmuls
                                                            *(uint32_t*)(0x20(r29)) = f0; // stfs
                                                            goto label_0x06944c;
                                                            uint32_t r0 = *(uint32_t*)(8(r3)); // lwz
                                                            /* rlwinm. r0, r0, 0, 6, 6 */ // 0x5400018d
                                                            if (/* beq 0x693f4 */) {
                                                            // branch to 0x0693f4
                                                                float f1 = *(float*)(0x20(r29)); // lfs
                                                                float f0 = *(float*)(0x84(r31)); // lfs
                                                                f0 = fmuls(f1, f0); // fmuls
                                                                *(uint32_t*)(0x20(r29)) = f0; // stfs
                                                                goto label_0x06944c;
                                                                uint32_t r0 = *(uint32_t*)(0x248(r29)); // lwz
                                                                // Compare r0 cmpwi 1
                                                                if (/* bne 0x6944c */) {
                                                                // branch to 0x06944c
                                                                    float f1 = *(float*)(0(r31)); // lfs
                                                                    float f0 = *(float*)(0x20(r29)); // lfs
                                                                    /* gekko_0x3f 0xfc010040 */ // 0xfc010040
                                                                    if (/* ble 0x6941c */) {
                                                                    // branch to 0x06941c
                                                                        *(uint32_t*)(0x20(r29)) = f1; // stfs
                                                                        /* li r0, 1 */ // 0x38000001
                                                                        goto label_0x069420;
                                                                        /* li r0, 0 */ // 0x38000000
                                                                        // Compare r0 cmpwi 0
                                                                        if (/* beq 0x6944c */) {
                                                                        // branch to 0x06944c
                                                                            /* li r3, 2 */ // 0x38600002
                                                                            /* li r0, 0 */ // 0x38000000
                                                                            *(uint32_t*)(0x248(r29)) = r3; // stw
                                                                            r3 = r29; // mr
                                                                            /* li r4, 8 */ // 0x38800008
                                                                            /* li r5, 0 */ // 0x38a00000
                                                                            *(uint32_t*)(0x24c(r29)) = r0; // sth
                                                                            /* li r6, 1 */ // 0x38c00001
                                                                            // Call 0x0006e7f4
                                                                            int var_10 = sub_0x0006e7f4(...);
                                                                            uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
                                                                            uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                                                            uint32_t r0 = *(uint32_t*)(4(r3)); // lwz
                                                                            /* rlwinm. r0, r0, 0, 1, 1 */ // 0x54000043
                                                                            if (/* beq 0x69468 */) {
                                                                            // branch to 0x069468
                                                                                float f31 = *(float*)(0x1b4(r29)); // lfs
                                                                                goto label_0x069498;
                                                                                r3 = r29; // mr
                                                                                // Call 0x0006de08
                                                                                int var_11 = sub_0x0006de08(...);
                                                                                // Compare r3 cmpwi 0
                                                                                if (/* beq 0x6948c */) {
                                                                                // branch to 0x06948c
                                                                                    uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
                                                                                    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                                                                    uint32_t r0 = *(uint32_t*)(4(r3)); // lwz
                                                                                    /* rlwinm. r0, r0, 0, 0xd, 0xd */ // 0x5400035b
                                                                                    if (/* bne 0x69494 */) {
                                                                                    // branch to 0x069494
                                                                                        float f31 = *(float*)(0x14(r29)); // lfs
                                                                                        goto label_0x069498;
                                                                                        float f31 = *(float*)(0x1c(r29)); // lfs
                                                                                        uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
                                                                                        float f28 = *(float*)(0x128(r29)); // lfs
                                                                                        uint32_t r4 = *(uint32_t*)(4(r3)); // lwz
                                                                                        float f30 = *(float*)(0x11c(r29)); // lfs
                                                                                        uint32_t r5 = *(uint32_t*)(0xc(r4)); // lwz
                                                                                        float f0 = *(float*)(0(r31)); // lfs
                                                                                        r0 = ROTATE_AND_MASK(r5, 0); // rlwinm
                                                                                        /* rlwimi. r0, r5, 0, 0x10, 0x10 */ // 0x50a00421
                                                                                        if (/* beq 0x694d4 */) {
                                                                                        // branch to 0x0694d4
                                                                                            r3 = r30 + 0x3b8; // addi
                                                                                            float f0 = *(float*)(0x14(r3)); // lfs
                                                                                            /* gekko_0x3f 0xfc00e040 */ // 0xfc00e040
                                                                                            if (/* ble 0x694d0 */) {
                                                                                            // branch to 0x0694d0
                                                                                            } else {
                                                                                                goto label_0x0694d4;
                                                                                                /* fmr f0, f28 */ // 0xfc00e090
                                                                                                uint32_t r0 = *(uint32_t*)(8(r4)); // lwz
                                                                                                /* rlwinm. r0, r0, 0, 0, 0 */ // 0x54000001
                                                                                                if (/* beq 0x694f8 */) {
                                                                                                // branch to 0x0694f8
                                                                                                    r3 = r30 + 0x3b8; // addi
                                                                                                    float f0 = *(float*)(4(r3)); // lfs
                                                                                                    /* gekko_0x3f 0xfc00e040 */ // 0xfc00e040
                                                                                                    if (/* ble 0x694f4 */) {
                                                                                                    // branch to 0x0694f4
                                                                                                    } else {
                                                                                                        goto label_0x0694f8;
                                                                                                        /* fmr f0, f28 */ // 0xfc00e090
                                                                                                        /* rlwinm. r0, r5, 0, 0x1e, 0x1e */ // 0x54a007bd
                                                                                                        if (/* beq 0x69518 */) {
                                                                                                        // branch to 0x069518
                                                                                                            r3 = r30 + 0x3b8; // addi
                                                                                                            float f0 = *(float*)(8(r3)); // lfs
                                                                                                            /* gekko_0x3f 0xfc00e040 */ // 0xfc00e040
                                                                                                            if (/* ble 0x69514 */) {
                                                                                                            // branch to 0x069514
                                                                                                            } else {
                                                                                                                goto label_0x069518;
                                                                                                                /* fmr f0, f28 */ // 0xfc00e090
                                                                                                                /* gekko_0x3f 0xfc00e040 */ // 0xfc00e040
                                                                                                                if (/* ble 0x69524 */) {
                                                                                                                // branch to 0x069524
                                                                                                                    /* fmr f28, f0 */ // 0xff800090
                                                                                                                    /* rlwinm. r0, r5, 0, 0xf, 0xf */ // 0x54a003df
                                                                                                                    float f27 = *(float*)(0x178(r29)); // lfs
                                                                                                                    if (/* beq 0x69538 */) {
                                                                                                                    // branch to 0x069538
                                                                                                                        float f0 = *(float*)(0xe8(r30)); // lfs
                                                                                                                        f27 = fmuls(f27, f0); // fmuls
                                                                                                                        uint32_t r12 = *(uint32_t*)(0xc(r29)); // lwz
                                                                                                                        r3 = r29; // mr
                                                                                                                        float f29 = *(float*)(0xb8(r29)); // lfs
                                                                                                                        uint32_t r12 = *(uint32_t*)(0x50(r12)); // lwz
                                                                                                                        /* mtctr r12 */ // SPR operation
                                                                                                                        /* bctrl  */ // indirect call/branch
                                                                                                                        f0 = fadds(f30, f1); // fadds
                                                                                                                        *(uint32_t*)(0x1b8(r29)) = f30; // stfs
                                                                                                                        uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
                                                                                                                        uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                                                                                                        f0 = fmuls(f0, f29); // fmuls
                                                                                                                        uint32_t r0 = *(uint32_t*)(0xc(r3)); // lwz
                                                                                                                        f0 = fmuls(f27, f0); // fmuls
                                                                                                                        /* rlwinm. r0, r0, 0, 0xb, 0xb */ // 0x540002d7
                                                                                                                        if (/* beq 0x69578 */) {
                                                                                                                        // branch to 0x069578
                                                                                                                            float f0 = *(float*)(4(r31)); // lfs
                                                                                                                            uint32_t r4 = *(uint32_t*)(4(r3)); // lwz
                                                                                                                            f31 = fmuls(f31, f0); // fmuls
                                                                                                                            /* rlwinm. r0, r4, 0, 0, 0 */ // 0x54800001
                                                                                                                            if (/* bne 0x69594 */) {
                                                                                                                            // branch to 0x069594
                                                                                                                                uint32_t r0 = *(uint32_t*)(8(r3)); // lwz
                                                                                                                                r0 = r0 andi 0x1600;
                                                                                                                                if (/* beq 0x69598 */) {
                                                                                                                                // branch to 0x069598
                                                                                                                                    float f27 = *(float*)(4(r31)); // lfs
                                                                                                                                    float f0 = *(float*)(0xb8(r29)); // lfs
                                                                                                                                    /* rlwinm. r0, r4, 0, 1, 1 */ // 0x54800043
                                                                                                                                    float f1 = *(float*)(0x10(r29)); // lfs
                                                                                                                                    f0 = fmuls(f1, f0); // fmuls
                                                                                                                                    f0 = fmuls(f27, f0); // fmuls
                                                                                                                                    f28 = fmuls(f28, f0); // fmuls
                                                                                                                                    if (/* bne 0x695cc */) {
                                                                                                                                    // branch to 0x0695cc
                                                                                                                                        float f0 = *(float*)(0(r31)); // lfs
                                                                                                                                        /* gekko_0x3f 0xfc1c0040 */ // 0xfc1c0040
                                                                                                                                        if (/* ble 0x695cc */) {
                                                                                                                                        // branch to 0x0695cc
                                                                                                                                            /* gekko_0x3f 0xfc1cf840 */ // 0xfc1cf840
                                                                                                                                            if (/* ble 0x695cc */) {
                                                                                                                                            // branch to 0x0695cc
                                                                                                                                                /* fmr f31, f28 */ // 0xffe0e090
                                                                                                                                                *(uint32_t*)(0x1bc(r29)) = f28; // stfs
                                                                                                                                                uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
                                                                                                                                                uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                                                                                                                                uint32_t r0 = *(uint32_t*)(4(r3)); // lwz
                                                                                                                                                /* rlwinm. r0, r0, 0, 0, 0 */ // 0x54000001
                                                                                                                                                if (/* beq 0x695f4 */) {
                                                                                                                                                // branch to 0x0695f4
                                                                                                                                                    float f0 = *(float*)(0x25c(r30)); // lfs
                                                                                                                                                    /* gekko_0x3f 0xfc00f840 */ // 0xfc00f840
                                                                                                                                                    if (/* ble 0x695f4 */) {
                                                                                                                                                    // branch to 0x0695f4
                                                                                                                                                        /* fmr f31, f0 */ // 0xffe00090
                                                                                                                                                        r3 = 0x0 << 16; // lis
                                                                                                                                                        uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
                                                                                                                                                        uint32_t r0 = *(uint32_t*)(0x28(r3)); // lwz
                                                                                                                                                        /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x540007bd
                                                                                                                                                        if (/* beq 0x6960c */) {
                                                                                                                                                        // branch to 0x06960c
                                                                                                                                                            float f31 = *(float*)(0x1c(r29)); // lfs
                                                                                                                                                            float f1 = *(float*)(0x20(r29)); // lfs
                                                                                                                                                            float f0 = *(float*)(0(r31)); // lfs
                                                                                                                                                            /* gekko_0x3f 0xfc010040 */ // 0xfc010040
                                                                                                                                                            if (/* ble 0x69624 */) {
                                                                                                                                                            // branch to 0x069624
                                                                                                                                                                float f4 = *(float*)(4(r31)); // lfs
                                                                                                                                                                goto label_0x069628;
                                                                                                                                                                float f4 = *(float*)(0xc(r31)); // lfs
                                                                                                                                                                float f2 = *(float*)(0x5c(r29)); // lfs
                                                                                                                                                                r3 = r29; // mr
                                                                                                                                                                float f1 = *(float*)(0x64(r29)); // lfs
                                                                                                                                                                r4 = r1 + 8; // addi
                                                                                                                                                                f3 = fmuls(f4, f2); // fmuls
                                                                                                                                                                float f0 = *(float*)(0x60(r29)); // lfs
                                                                                                                                                                f1 = fmuls(f4, f1); // fmuls
                                                                                                                                                                f2 = fmuls(f4, f0); // fmuls
                                                                                                                                                                *(uint32_t*)(0x68(r29)) = f3; // stfs
                                                                                                                                                                float f0 = *(float*)(4(r31)); // lfs
                                                                                                                                                                *(uint32_t*)(0x6c(r29)) = f2; // stfs
                                                                                                                                                                *(uint32_t*)(0x70(r29)) = f1; // stfs
                                                                                                                                                                *(uint32_t*)(8(r1)) = f0; // stfs
                                                                                                                                                                // Call 0x0006886c
                                                                                                                                                                int var_12 = sub_0x0006886c(...);
                                                                                                                                                                uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
                                                                                                                                                                f31 = fmuls(f31, f1); // fmuls
                                                                                                                                                                uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                                                                                                                                                uint32_t r0 = *(uint32_t*)(0xc(r3)); // lwz
                                                                                                                                                                /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x5400077b
                                                                                                                                                                if (/* beq 0x69680 */) {
                                                                                                                                                                // branch to 0x069680
                                                                                                                                                                    float f0 = *(float*)(0x2a8(r30)); // lfs
                                                                                                                                                                    f31 = fmuls(f31, f0); // fmuls
                                                                                                                                                                    uint32_t r0 = *(uint32_t*)(0x14(r3)); // lwz
                                                                                                                                                                    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x54000739
                                                                                                                                                                    if (/* beq 0x696ac */) {
                                                                                                                                                                    // branch to 0x0696ac
                                                                                                                                                                        r3 = r29; // mr
                                                                                                                                                                        // Call 0x0006ebf0
                                                                                                                                                                        int var_13 = sub_0x0006ebf0(...);
                                                                                                                                                                        float f0 = *(float*)(0x84(r3)); // lfs
                                                                                                                                                                        /* gekko_0x3f 0xfc00f840 */ // 0xfc00f840
                                                                                                                                                                        if (/* ble 0x696ac */) {
                                                                                                                                                                        // branch to 0x0696ac
                                                                                                                                                                            r3 = r29; // mr
                                                                                                                                                                            // Call 0x0006ebf0
                                                                                                                                                                            int var_14 = sub_0x0006ebf0(...);
                                                                                                                                                                            float f31 = *(float*)(0x84(r3)); // lfs
                                                                                                                                                                            float f1 = *(float*)(0x18(r29)); // lfs
                                                                                                                                                                            /* gekko_0x3f 0xfc01f840 */ // 0xfc01f840
                                                                                                                                                                            if (/* ble 0x696f0 */) {
                                                                                                                                                                            // branch to 0x0696f0
                                                                                                                                                                                uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
                                                                                                                                                                                uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                                                                                                                                                                uint32_t r0 = *(uint32_t*)(4(r3)); // lwz
                                                                                                                                                                                /* rlwinm. r0, r0, 0, 0x19, 0x1a */ // 0x54000675
                                                                                                                                                                                if (/* beq 0x696d4 */) {
                                                                                                                                                                                // branch to 0x0696d4
                                                                                                                                                                                    *(uint32_t*)(0x18(r29)) = f31; // stfs
                                                                                                                                                                                    goto label_0x0696f4;
                                                                                                                                                                                    float f0 = *(float*)(0x208(r30)); // lfs
                                                                                                                                                                                    f0 = fsubs(f1, f0); // fsubs
                                                                                                                                                                                    *(uint32_t*)(0x18(r29)) = f0; // stfs
                                                                                                                                                                                    /* gekko_0x3f 0xfc1f0040 */ // 0xfc1f0040
                                                                                                                                                                                    if (/* ble 0x696f4 */) {
                                                                                                                                                                                    // branch to 0x0696f4
                                                                                                                                                                                        *(uint32_t*)(0x18(r29)) = f31; // stfs
                                                                                                                                                                                        goto label_0x0696f4;
                                                                                                                                                                                        *(uint32_t*)(0x18(r29)) = f31; // stfs
                                                                                                                                                                                        uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
                                                                                                                                                                                        uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                                                                                                                                                                        uint32_t r0 = *(uint32_t*)(0xc(r3)); // lwz
                                                                                                                                                                                        /* rlwinm. r0, r0, 0, 0xd, 0xd */ // 0x5400035b
                                                                                                                                                                                        if (/* beq 0x69718 */) {
                                                                                                                                                                                        // branch to 0x069718
                                                                                                                                                                                            float f1 = *(float*)(0x20(r29)); // lfs
                                                                                                                                                                                            float f0 = *(float*)(0x88(r31)); // lfs
                                                                                                                                                                                            f0 = fmuls(f1, f0); // fmuls
                                                                                                                                                                                            *(uint32_t*)(0x20(r29)) = f0; // stfs
                                                                                                                                                                                            uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
                                                                                                                                                                                            uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                                                                                                                                                                            uint32_t r0 = *(uint32_t*)(0x14(r3)); // lwz
                                                                                                                                                                                            /* rlwinm. r0, r0, 0, 0x16, 0x16 */ // 0x540005ad
                                                                                                                                                                                            if (/* beq 0x69738 */) {
                                                                                                                                                                                            // branch to 0x069738
                                                                                                                                                                                                float f0 = *(float*)(0(r31)); // lfs
                                                                                                                                                                                                *(uint32_t*)(0x20(r29)) = f0; // stfs
                                                                                                                                                                                                *(uint32_t*)(0x18(r29)) = f0; // stfs
                                                                                                                                                                                                float f1 = *(float*)(0x2c(r29)); // lfs
                                                                                                                                                                                                float f0 = *(float*)(0x18(r29)); // lfs
                                                                                                                                                                                                /* gekko_0x3f 0xfc010040 */ // 0xfc010040
                                                                                                                                                                                                if (/* bge 0x6974c */) {
                                                                                                                                                                                                // branch to 0x06974c
                                                                                                                                                                                                    *(uint32_t*)(0x18(r29)) = f1; // stfs
                                                                                                                                                                                                    float f2 = *(float*)(0x18(r29)); // lfs
                                                                                                                                                                                                    float f0 = *(float*)(0x20(r29)); // lfs
                                                                                                                                                                                                    f1 = -f2; // fneg
                                                                                                                                                                                                    /* gekko_0x3f 0xfc010040 */ // 0xfc010040
                                                                                                                                                                                                    if (/* ble 0x69768 */) {
                                                                                                                                                                                                    // branch to 0x069768
                                                                                                                                                                                                        *(uint32_t*)(0x20(r29)) = f1; // stfs
                                                                                                                                                                                                        goto label_0x069774;
                                                                                                                                                                                                        /* gekko_0x3f 0xfc020040 */ // 0xfc020040
                                                                                                                                                                                                        if (/* bge 0x69774 */) {
                                                                                                                                                                                                        // branch to 0x069774
                                                                                                                                                                                                            *(uint32_t*)(0x20(r29)) = f2; // stfs
                                                                                                                                                                                                            uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
                                                                                                                                                                                                            uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                                                                                                                                                                                            uint32_t r0 = *(uint32_t*)(4(r3)); // lwz
                                                                                                                                                                                                            /* rlwinm. r0, r0, 0, 1, 1 */ // 0x54000043
                                                                                                                                                                                                            if (/* beq 0x6979c */) {
                                                                                                                                                                                                            // branch to 0x06979c
                                                                                                                                                                                                                float f1 = *(float*)(0x1b0(r29)); // lfs
                                                                                                                                                                                                                float f0 = *(float*)(0x20(r29)); // lfs
                                                                                                                                                                                                                /* gekko_0x3f 0xfc010040 */ // 0xfc010040
                                                                                                                                                                                                                if (/* ble 0x6979c */) {
                                                                                                                                                                                                                // branch to 0x06979c
                                                                                                                                                                                                                    *(uint32_t*)(0x20(r29)) = f1; // stfs
                                                                                                                                                                                                                    float f1 = *(float*)(0x24(r29)); // lfs
                                                                                                                                                                                                                    r3 = r29; // mr
                                                                                                                                                                                                                    float f2 = *(float*)(8(r1)); // lfs
                                                                                                                                                                                                                    // Call 0x00068a04
                                                                                                                                                                                                                    int var_15 = sub_0x00068a04(...);
                                                                                                                                                                                                                    float f2 = *(float*)(0x14(r29)); // lfs
                                                                                                                                                                                                                    float f1 = *(float*)(0x20(r29)); // lfs
                                                                                                                                                                                                                    float f0 = *(float*)(4(r31)); // lfs
                                                                                                                                                                                                                    f1 = fdivs(f1, f2); // fdivs
                                                                                                                                                                                                                    f1 = fabsf(f1); // fabs
                                                                                                                                                                                                                    *(uint32_t*)(0xb4(r29)) = f1; // stfs
                                                                                                                                                                                                                    f1 = (float)f1; // frsp
                                                                                                                                                                                                                    *(uint32_t*)(0xb0(r29)) = f1; // stfs
                                                                                                                                                                                                                    /* gekko_0x3f 0xfc000840 */ // 0xfc000840
                                                                                                                                                                                                                    if (/* bge 0x697d8 */) {
                                                                                                                                                                                                                    // branch to 0x0697d8
                                                                                                                                                                                                                        *(uint32_t*)(0xb0(r29)) = f0; // stfs
                                                                                                                                                                                                                        float f8 = *(float*)(0x38(r29)); // lfs
                                                                                                                                                                                                                        float f1 = *(float*)(0x60(r29)); // lfs
                                                                                                                                                                                                                        float f0 = *(float*)(0x40(r29)); // lfs
                                                                                                                                                                                                                        float f3 = *(float*)(0x5c(r29)); // lfs
                                                                                                                                                                                                                        f7 = fmuls(f8, f1); // fmuls
                                                                                                                                                                                                                        float f6 = *(float*)(0x3c(r29)); // lfs
                                                                                                                                                                                                                        f1 = fmuls(f0, f1); // fmuls
                                                                                                                                                                                                                        f4 = fmuls(f0, f3); // fmuls
                                                                                                                                                                                                                        float f2 = *(float*)(0x64(r29)); // lfs
                                                                                                                                                                                                                        f5 = fmuls(f6, f3); // fmuls
                                                                                                                                                                                                                        f3 = fmuls(f8, f2); // fmuls
                                                                                                                                                                                                                        float f0 = *(float*)(0(r31)); // lfs
                                                                                                                                                                                                                        f2 = fmuls(f6, f2); // fmuls
                                                                                                                                                                                                                        f5 = fsubs(f7, f5); // fsubs
                                                                                                                                                                                                                        f3 = fsubs(f4, f3); // fsubs
                                                                                                                                                                                                                        f2 = fsubs(f2, f1); // fsubs
                                                                                                                                                                                                                        *(uint32_t*)(0x2c(r1)) = f5; // stfs
                                                                                                                                                                                                                        *(uint32_t*)(0x24(r1)) = f2; // stfs
                                                                                                                                                                                                                        *(uint32_t*)(0x28(r1)) = f3; // stfs
                                                                                                                                                                                                                        float f1 = *(float*)(0x20(r29)); // lfs
                                                                                                                                                                                                                        /* gekko_0x3f 0xfc010040 */ // 0xfc010040
                                                                                                                                                                                                                        if (/* bge 0x69848 */) {
                                                                                                                                                                                                                        // branch to 0x069848
                                                                                                                                                                                                                            f2 = -f2; // fneg
                                                                                                                                                                                                                            f1 = -f3; // fneg
                                                                                                                                                                                                                            f0 = -f5; // fneg
                                                                                                                                                                                                                            *(uint32_t*)(0x24(r1)) = f2; // stfs
                                                                                                                                                                                                                            *(uint32_t*)(0x28(r1)) = f1; // stfs
                                                                                                                                                                                                                            *(uint32_t*)(0x2c(r1)) = f0; // stfs
                                                                                                                                                                                                                            float f27 = *(float*)(0xa8(r30)); // lfs
                                                                                                                                                                                                                            r3 = r29; // mr
                                                                                                                                                                                                                            // Call 0x0006dff0
                                                                                                                                                                                                                            int var_16 = sub_0x0006dff0(...);
                                                                                                                                                                                                                            uint32_t r0 = *(uint32_t*)(0x2c(r3)); // lwz
                                                                                                                                                                                                                            /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x540006f7
                                                                                                                                                                                                                            if (/* beq 0x69868 */) {
                                                                                                                                                                                                                            // branch to 0x069868
                                                                                                                                                                                                                                float f27 = *(float*)(0xb0(r30)); // lfs
                                                                                                                                                                                                                                goto label_0x069880;
                                                                                                                                                                                                                                uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
                                                                                                                                                                                                                                uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                                                                                                                                                                                                                uint32_t r0 = *(uint32_t*)(4(r3)); // lwz
                                                                                                                                                                                                                                /* rlwinm. r0, r0, 0, 0xd, 0xd */ // 0x5400035b
                                                                                                                                                                                                                                if (/* bne 0x69880 */) {
                                                                                                                                                                                                                                // branch to 0x069880
                                                                                                                                                                                                                                    float f27 = *(float*)(0xac(r30)); // lfs
                                                                                                                                                                                                                                    float f0 = *(float*)(0x54(r31)); // lfs
                                                                                                                                                                                                                                    r3 = r1 + 0x40; // addi
                                                                                                                                                                                                                                    r4 = r1 + 0x24; // addi
                                                                                                                                                                                                                                    f1 = fmuls(f0, f27); // fmuls
                                                                                                                                                                                                                                    // Call 0x00063358
                                                                                                                                                                                                                                    int var_17 = sub_0x00063358(...);
                                                                                                                                                                                                                                    float f3 = *(float*)(0x60(r1)); // lfs
                                                                                                                                                                                                                                    float f2 = *(float*)(0x74(r29)); // lfs
                                                                                                                                                                                                                                    float f1 = *(float*)(0x50(r1)); // lfs
                                                                                                                                                                                                                                    f7 = fmuls(f3, f2); // fmuls
                                                                                                                                                                                                                                    float f0 = *(float*)(0x40(r1)); // lfs
                                                                                                                                                                                                                                    f4 = fmuls(f1, f2); // fmuls
                                                                                                                                                                                                                                    float f3 = *(float*)(0x64(r1)); // lfs
                                                                                                                                                                                                                                    f1 = fmuls(f0, f2); // fmuls
                                                                                                                                                                                                                                    float f5 = *(float*)(0x78(r29)); // lfs
                                                                                                                                                                                                                                    float f0 = *(float*)(0x44(r1)); // lfs
                                                                                                                                                                                                                                    f6 = fmuls(f3, f5); // fmuls
                                                                                                                                                                                                                                    float f2 = *(float*)(0x54(r1)); // lfs
                                                                                                                                                                                                                                    f0 = fmuls(f0, f5); // fmuls
                                                                                                                                                                                                                                    float f8 = *(float*)(0x68(r1)); // lfs
                                                                                                                                                                                                                                    f3 = fmuls(f2, f5); // fmuls
                                                                                                                                                                                                                                    float f9 = *(float*)(0x7c(r29)); // lfs
                                                                                                                                                                                                                                    float f5 = *(float*)(0x58(r1)); // lfs
                                                                                                                                                                                                                                    f6 = fadds(f7, f6); // fadds
                                                                                                                                                                                                                                    float f2 = *(float*)(0x48(r1)); // lfs
                                                                                                                                                                                                                                    f8 = fmuls(f8, f9); // fmuls
                                                                                                                                                                                                                                    f3 = fadds(f4, f3); // fadds
                                                                                                                                                                                                                                    uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
                                                                                                                                                                                                                                    f5 = fmuls(f5, f9); // fmuls
                                                                                                                                                                                                                                    f0 = fadds(f1, f0); // fadds
                                                                                                                                                                                                                                    f2 = fmuls(f2, f9); // fmuls
                                                                                                                                                                                                                                    f4 = fadds(f8, f6); // fadds
                                                                                                                                                                                                                                    f1 = fadds(f5, f3); // fadds
                                                                                                                                                                                                                                    f0 = fadds(f2, f0); // fadds
                                                                                                                                                                                                                                    *(uint32_t*)(0x7c(r29)) = f4; // stfs
                                                                                                                                                                                                                                    *(uint32_t*)(0x78(r29)) = f1; // stfs
                                                                                                                                                                                                                                    *(uint32_t*)(0x74(r29)) = f0; // stfs
                                                                                                                                                                                                                                    uint32_t r4 = *(uint32_t*)(4(r3)); // lwz
                                                                                                                                                                                                                                    uint32_t r3 = *(uint32_t*)(8(r4)); // lwz
                                                                                                                                                                                                                                    r0 = ROTATE_AND_MASK(r3, 0); // rlwinm
                                                                                                                                                                                                                                    /* rlwimi. r0, r3, 0, 0x1f, 0x1f */ // 0x506007ff
                                                                                                                                                                                                                                    if (/* bne 0x69958 */) {
                                                                                                                                                                                                                                    // branch to 0x069958
                                                                                                                                                                                                                                        uint32_t r3 = *(uint32_t*)(4(r4)); // lwz
                                                                                                                                                                                                                                        /* rlwinm. r0, r3, 0, 0xd, 0xd */ // 0x5460035b
                                                                                                                                                                                                                                        if (/* beq 0x69958 */) {
                                                                                                                                                                                                                                        // branch to 0x069958
                                                                                                                                                                                                                                            /* clrlwi. r0, r3, 0x1f */ // 0x546007ff
                                                                                                                                                                                                                                            if (/* bne 0x69958 */) {
                                                                                                                                                                                                                                            // branch to 0x069958
                                                                                                                                                                                                                                                r3 = 0x0 << 16; // lis
                                                                                                                                                                                                                                                /* li r4, 2 */ // 0x38800002
                                                                                                                                                                                                                                                uint32_t r3 = *(uint32_t*)(0(r3)); // lwz
                                                                                                                                                                                                                                                // Call 0x000656b0
                                                                                                                                                                                                                                                int var_18 = sub_0x000656b0(...);
                                                                                                                                                                                                                                                // Compare r3 cmpwi 0
                                                                                                                                                                                                                                                if (/* beq 0x69958 */) {
                                                                                                                                                                                                                                                // branch to 0x069958
                                                                                                                                                                                                                                                    r3 = r29; // mr
                                                                                                                                                                                                                                                    // Call 0x0006878c
                                                                                                                                                                                                                                                    int var_19 = sub_0x0006878c(...);
                                                                                                                                                                                                                                                    float f2 = *(float*)(0x20(r29)); // lfs
                                                                                                                                                                                                                                                    *(uint32_t*)(0x28(r29)) = f2; // stfs
                                                                                                                                                                                                                                                    uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
                                                                                                                                                                                                                                                    float f0 = *(float*)(0x78(r29)); // lfs
                                                                                                                                                                                                                                                    uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                                                                                                                                                                                                                                    f27 = fmuls(f2, f0); // fmuls
                                                                                                                                                                                                                                                    float f1 = *(float*)(0x74(r29)); // lfs
                                                                                                                                                                                                                                                    float f0 = *(float*)(0x7c(r29)); // lfs
                                                                                                                                                                                                                                                    uint32_t r0 = *(uint32_t*)(8(r3)); // lwz
                                                                                                                                                                                                                                                    f1 = fmuls(f2, f1); // fmuls
                                                                                                                                                                                                                                                    f0 = fmuls(f2, f0); // fmuls
                                                                                                                                                                                                                                                    /* rlwinm. r0, r0, 0, 0x15, 0x15 */ // 0x5400056b
                                                                                                                                                                                                                                                    *(uint32_t*)(0x18(r1)) = f1; // stfs
                                                                                                                                                                                                                                                    *(uint32_t*)(0x1c(r1)) = f27; // stfs
                                                                                                                                                                                                                                                    *(uint32_t*)(0x20(r1)) = f0; // stfs
                                                                                                                                                                                                                                                    if (/* beq 0x699a0 */) {
                                                                                                                                                                                                                                                    // branch to 0x0699a0
                                                                                                                                                                                                                                                        // Call 0x00062c58
                                                                                                                                                                                                                                                        int var_20 = sub_0x00062c58(...);
                                                                                                                                                                                                                                                        goto label_0x0699a4;
                                                                                                                                                                                                                                                        float f1 = *(float*)(0x24c(r30)); // lfs
                                                                                                                                                                                                                                                        /* gekko_0x3f 0xfc01d840 */ // 0xfc01d840
                                                                                                                                                                                                                                                        if (/* bge 0x699b0 */) {
                                                                                                                                                                                                                                                        // branch to 0x0699b0
                                                                                                                                                                                                                                                            /* fmr f27, f1 */ // 0xff600890
                                                                                                                                                                                                                                                            *(uint32_t*)(0x1c(r1)) = f27; // stfs
                                                                                                                                                                                                                                                            r3 = r29; // mr
                                                                                                                                                                                                                                                            // Call 0x0006db70
                                                                                                                                                                                                                                                            int var_21 = sub_0x0006db70(...);
                                                                                                                                                                                                                                                            float f2 = *(float*)(0x14c(r3)); // lfs
                                                                                                                                                                                                                                                            f1 = (float)f27; // frsp
                                                                                                                                                                                                                                                            float f0 = *(float*)(0x18(r1)); // lfs
                                                                                                                                                                                                                                                            f2 = fadds(f2, f0); // fadds
                                                                                                                                                                                                                                                            float f0 = *(float*)(0x20(r1)); // lfs
                                                                                                                                                                                                                                                            *(uint32_t*)(0x14c(r3)) = f2; // stfs
                                                                                                                                                                                                                                                            float f2 = *(float*)(0x150(r3)); // lfs
                                                                                                                                                                                                                                                            f1 = fadds(f2, f1); // fadds
                                                                                                                                                                                                                                                            *(uint32_t*)(0x150(r3)) = f1; // stfs
                                                                                                                                                                                                                                                            float f1 = *(float*)(0x154(r3)); // lfs
                                                                                                                                                                                                                                                            f0 = fadds(f1, f0); // fadds
                                                                                                                                                                                                                                                            *(uint32_t*)(0x154(r3)) = f0; // stfs
                                                                                                                                                                                                                                                            uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
                                                                                                                                                                                                                                                            uint32_t r4 = *(uint32_t*)(0x248(r29)); // lwz
                                                                                                                                                                                                                                                            uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                                                                                                                                                                                                                                            uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                                                                                                                                                                                                                                            /* rlwinm. r0, r3, 0, 0xd, 0xd */ // 0x5460035b
                                                                                                                                                                                                                                                            if (/* beq 0x69a70 */) {
                                                                                                                                                                                                                                                            // branch to 0x069a70
                                                                                                                                                                                                                                                                /* rlwinm. r0, r3, 0, 0x1c, 0x1c */ // 0x54600739
                                                                                                                                                                                                                                                                if (/* bne 0x69a70 */) {
                                                                                                                                                                                                                                                                // branch to 0x069a70
                                                                                                                                                                                                                                                                    /* rlwinm. r0, r3, 0, 0xc, 0xc */ // 0x54600319
                                                                                                                                                                                                                                                                    if (/* bne 0x69a70 */) {
                                                                                                                                                                                                                                                                    // branch to 0x069a70
                                                                                                                                                                                                                                                                        /* rlwinm. r0, r3, 0, 0x1e, 0x1e */ // 0x546007bd
                                                                                                                                                                                                                                                                        if (/* beq 0x69a50 */) {
                                                                                                                                                                                                                                                                        // branch to 0x069a50
                                                                                                                                                                                                                                                                            // Compare r4 cmpwi 0
                                                                                                                                                                                                                                                                            if (/* bne 0x69a78 */) {
                                                                                                                                                                                                                                                                            // branch to 0x069a78
                                                                                                                                                                                                                                                                                float f1 = *(float*)(0x28(r29)); // lfs
                                                                                                                                                                                                                                                                                float f0 = *(float*)(0x6c(r31)); // lfs
                                                                                                                                                                                                                                                                                /* gekko_0x3f 0xfc010040 */ // 0xfc010040
                                                                                                                                                                                                                                                                                /* cror cr0eq, cr0lt, cr0eq */ // condition register
                                                                                                                                                                                                                                                                                if (/* bne 0x69a44 */) {
                                                                                                                                                                                                                                                                                // branch to 0x069a44
                                                                                                                                                                                                                                                                                    /* li r0, 3 */ // 0x38000003
                                                                                                                                                                                                                                                                                    *(uint32_t*)(0x248(r29)) = r0; // stw
                                                                                                                                                                                                                                                                                    goto label_0x069a78;
                                                                                                                                                                                                                                                                                    /* li r0, 1 */ // 0x38000001
                                                                                                                                                                                                                                                                                    *(uint32_t*)(0x248(r29)) = r0; // stw
                                                                                                                                                                                                                                                                                    goto label_0x069a78;
                                                                                                                                                                                                                                                                                    float f1 = *(float*)(0x28(r29)); // lfs
                                                                                                                                                                                                                                                                                    float f0 = *(float*)(0(r31)); // lfs
                                                                                                                                                                                                                                                                                    /* gekko_0x3f 0xfc010040 */ // 0xfc010040
                                                                                                                                                                                                                                                                                    /* cror cr0eq, cr0gt, cr0eq */ // condition register
                                                                                                                                                                                                                                                                                    if (/* bne 0x69a78 */) {
                                                                                                                                                                                                                                                                                    // branch to 0x069a78
                                                                                                                                                                                                                                                                                        /* li r0, 0 */ // 0x38000000
                                                                                                                                                                                                                                                                                        *(uint32_t*)(0x248(r29)) = r0; // stw
                                                                                                                                                                                                                                                                                        goto label_0x069a78;
                                                                                                                                                                                                                                                                                        /* li r0, 0 */ // 0x38000000
                                                                                                                                                                                                                                                                                        *(uint32_t*)(0x248(r29)) = r0; // stw
                                                                                                                                                                                                                                                                                        uint32_t r3 = *(uint32_t*)(0(r29)); // lwz
                                                                                                                                                                                                                                                                                        uint32_t r3 = *(uint32_t*)(4(r3)); // lwz
                                                                                                                                                                                                                                                                                        uint32_t r0 = *(uint32_t*)(4(r3)); // lwz
                                                                                                                                                                                                                                                                                        /* clrlwi. r0, r0, 0x1f */ // 0x540007ff
                                                                                                                                                                                                                                                                                        if (/* bne 0x69ad0 */) {
                                                                                                                                                                                                                                                                                        // branch to 0x069ad0
                                                                                                                                                                                                                                                                                            uint32_t r0 = *(uint32_t*)(0x248(r29)); // lwz
                                                                                                                                                                                                                                                                                            // Compare r0 cmpwi 1
                                                                                                                                                                                                                                                                                            if (/* bne 0x69ab0 */) {
                                                                                                                                                                                                                                                                                            // branch to 0x069ab0
                                                                                                                                                                                                                                                                                                r3 = r29; // mr
                                                                                                                                                                                                                                                                                                /* li r4, 8 */ // 0x38800008
                                                                                                                                                                                                                                                                                                /* li r5, 0 */ // 0x38a00000
                                                                                                                                                                                                                                                                                                /* li r6, 1 */ // 0x38c00001
                                                                                                                                                                                                                                                                                                // Call 0x0006e7e8
                                                                                                                                                                                                                                                                                                int var_22 = sub_0x0006e7e8(...);
                                                                                                                                                                                                                                                                                                goto label_0x069ae4;
                                                                                                                                                                                                                                                                                                // Compare r4 cmpwi 1
                                                                                                                                                                                                                                                                                                if (/* bne 0x69ae4 */) {
                                                                                                                                                                                                                                                                                                // branch to 0x069ae4
                                                                                                                                                                                                                                                                                                    r3 = r29; // mr
                                                                                                                                                                                                                                                                                                    /* li r4, 8 */ // 0x38800008
                                                                                                                                                                                                                                                                                                    /* li r5, 0 */ // 0x38a00000
                                                                                                                                                                                                                                                                                                    /* li r6, 1 */ // 0x38c00001
                                                                                                                                                                                                                                                                                                    // Call 0x0006e7f4
                                                                                                                                                                                                                                                                                                    int var_23 = sub_0x0006e7f4(...);
                                                                                                                                                                                                                                                                                                    goto label_0x069ae4;
                                                                                                                                                                                                                                                                                                    r3 = r29; // mr
                                                                                                                                                                                                                                                                                                    /* li r4, 8 */ // 0x38800008
                                                                                                                                                                                                                                                                                                    /* li r5, 0 */ // 0x38a00000
                                                                                                                                                                                                                                                                                                    /* li r6, 1 */ // 0x38c00001
                                                                                                                                                                                                                                                                                                    // Call 0x0006e7f4
                                                                                                                                                                                                                                                                                                    int var_24 = sub_0x0006e7f4(...);
                                                                                                                                                                                                                                                                                                    /* gekko_0x38 0xe3e100c8 */ // 0xe3e100c8
                                                                                                                                                                                                                                                                                                    float f31 = *(float*)(0xc0(r1)); // lfd
                                                                                                                                                                                                                                                                                                    /* gekko_0x38 0xe3c100b8 */ // 0xe3c100b8
                                                                                                                                                                                                                                                                                                    float f30 = *(float*)(0xb0(r1)); // lfd
                                                                                                                                                                                                                                                                                                    /* gekko_0x38 0xe3a100a8 */ // 0xe3a100a8
                                                                                                                                                                                                                                                                                                    float f29 = *(float*)(0xa0(r1)); // lfd
                                                                                                                                                                                                                                                                                                    /* gekko_0x38 0xe3810098 */ // 0xe3810098
                                                                                                                                                                                                                                                                                                    float f28 = *(float*)(0x90(r1)); // lfd
                                                                                                                                                                                                                                                                                                    /* gekko_0x38 0xe3610088 */ // 0xe3610088
                                                                                                                                                                                                                                                                                                    float f27 = *(float*)(0x80(r1)); // lfd
                                                                                                                                                                                                                                                                                                    uint32_t r31 = *(uint32_t*)(0x7c(r1)); // lwz
                                                                                                                                                                                                                                                                                                    uint32_t r30 = *(uint32_t*)(0x78(r1)); // lwz
                                                                                                                                                                                                                                                                                                    uint32_t r29 = *(uint32_t*)(0x74(r1)); // lwz
                                                                                                                                                                                                                                                                                                    uint32_t r0 = *(uint32_t*)(0xd4(r1)); // lwz
                                                                                                                                                                                                                                                                                                    uint32_t r28 = *(uint32_t*)(0x70(r1)); // lwz
                                                                                                                                                                                                                                                                                                    /* mtlr r0 */ // SPR operation
                                                                                                                                                                                                                                                                                                    r1 = r1 + 0xd0; // addi
                                                                                                                                                                                                                                                                                                    // Restore stack (addi r1, r1, 0xd0)
                                                                                                                                                                                                                                                                                                    // Restore LR (lwz r0, N(r1); mtlr r0)
                                                                                                                                                                                                                                                                                                    return;
                                                                                                                                                                                                                                                                                                    r3 = 0x0 << 16; // lis
                                                                                                                                                                                                                                                                                                    float f1 = *(float*)(0(r3)); // lfs
                                                                                                                                                                                                                                                                                                    // Restore stack (addi r1, r1, 0xd0)
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
