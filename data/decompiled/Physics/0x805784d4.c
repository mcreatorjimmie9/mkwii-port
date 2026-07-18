// GHIRDA Auto-Decompiled
// Address: 0x805784d4 (section offset: 0x065c38)
// Size: 1032 bytes, 258 instructions
// Module: StaticR.rel | Class: Physics

void PlayerSub10_init(void* arg0) {
    // Allocate stack frame: 0x20 bytes
    *(uint32_t*)(0x1c(r1)) = r31; // stw
    r31 = 0x0 << 16; // lis
    r31 = r31 + 0; // addi
    *(uint32_t*)(0x18(r1)) = r30; // stw
    r30 = r3; // mr
    *(uint32_t*)(0x14(r1)) = r29; // stw
    r29 = r5; // mr
    *(uint32_t*)(0x10(r1)) = r28; // stw
    r28 = r4; // mr
    // Call 0x0005e018
    int var_1 = sub_0x0005e018(...);
    float f1 = *(float*)(0x18(r3)); // lfs
    r8 = 0x0 << 16; // lis
    float f0 = *(float*)(0x10(r30)); // lfs
    r6 = 0x0 << 16; // lis
    float f7 = *(float*)(0(r31)); // lfs
    r4 = 0x0 << 16; // lis
    f0 = fmuls(f0, f1); // fmuls
    *(uint32_t*)(0x24(r30)) = f7; // stfs
    r9 = 0x0 << 16; // lis
    float f6 = *(float*)(4(r31)); // lfs
    *(uint32_t*)(0x14(r30)) = f0; // stfs
    r7 = r8 + 0; // addi
    *(uint32_t*)(0x1c(r30)) = f0; // stfs
    r5 = r6 + 0; // addi
    r3 = r4 + 0; // addi
    /* li r0, 0 */ // 0x38000000
    *(uint32_t*)(0x18(r30)) = f0; // stfs
    // Compare r29 cmpwi 0
    *(uint32_t*)(0x28(r30)) = f7; // stfs
    *(uint32_t*)(0x20(r30)) = f7; // stfs
    float f0 = *(float*)(0(r9)); // lfs
    *(uint32_t*)(0x2c(r30)) = f0; // stfs
    *(uint32_t*)(0x30(r30)) = f7; // stfs
    *(uint32_t*)(0x34(r30)) = f6; // stfs
    float f2 = *(float*)(0(r8)); // lfs
    *(uint32_t*)(0x44(r30)) = f2; // stfs
    float f1 = *(float*)(4(r7)); // lfs
    *(uint32_t*)(0x48(r30)) = f1; // stfs
    float f0 = *(float*)(8(r7)); // lfs
    *(uint32_t*)(0x4c(r30)) = f0; // stfs
    *(uint32_t*)(0x38(r30)) = f2; // stfs
    *(uint32_t*)(0x3c(r30)) = f1; // stfs
    *(uint32_t*)(0x40(r30)) = f0; // stfs
    float f5 = *(float*)(0(r6)); // lfs
    *(uint32_t*)(0x80(r30)) = f5; // stfs
    f2 = (float)f5; // frsp
    float f4 = *(float*)(4(r5)); // lfs
    *(uint32_t*)(0x84(r30)) = f4; // stfs
    f1 = (float)f4; // frsp
    float f3 = *(float*)(8(r5)); // lfs
    *(uint32_t*)(0x88(r30)) = f3; // stfs
    f0 = (float)f3; // frsp
    *(uint32_t*)(0x74(r30)) = f5; // stfs
    *(uint32_t*)(0x78(r30)) = f4; // stfs
    *(uint32_t*)(0x7c(r30)) = f3; // stfs
    *(uint32_t*)(0x68(r30)) = f5; // stfs
    *(uint32_t*)(0x6c(r30)) = f4; // stfs
    *(uint32_t*)(0x70(r30)) = f3; // stfs
    *(uint32_t*)(0x5c(r30)) = f5; // stfs
    *(uint32_t*)(0x60(r30)) = f4; // stfs
    *(uint32_t*)(0x64(r30)) = f3; // stfs
    *(uint32_t*)(0x50(r30)) = f2; // stfs
    *(uint32_t*)(0x54(r30)) = f1; // stfs
    *(uint32_t*)(0x58(r30)) = f0; // stfs
    float f0 = *(float*)(0(r4)); // lfs
    *(uint32_t*)(0x8c(r30)) = f0; // stfs
    float f0 = *(float*)(4(r3)); // lfs
    *(uint32_t*)(0x90(r30)) = f0; // stfs
    float f0 = *(float*)(8(r3)); // lfs
    *(uint32_t*)(0x94(r30)) = f0; // stfs
    *(uint32_t*)(0x98(r30)) = r0; // stb
    *(uint32_t*)(0x9c(r30)) = f7; // stfs
    *(uint32_t*)(0xa0(r30)) = f7; // stfs
    float f0 = *(float*)(0(r6)); // lfs
    *(uint32_t*)(0xa4(r30)) = f0; // stfs
    float f0 = *(float*)(4(r5)); // lfs
    *(uint32_t*)(0xa8(r30)) = f0; // stfs
    float f0 = *(float*)(8(r5)); // lfs
    *(uint32_t*)(0xac(r30)) = f0; // stfs
    *(uint32_t*)(0xb4(r30)) = f7; // stfs
    *(uint32_t*)(0xb0(r30)) = f7; // stfs
    *(uint32_t*)(0xb8(r30)) = f6; // stfs
    *(uint32_t*)(0xbc(r30)) = f6; // stfs
    *(uint32_t*)(0xc0(r30)) = f6; // stfs
    *(uint32_t*)(0xc4(r30)) = f6; // stfs
    if (/* bne 0x65da0 */) {
    // branch to 0x065da0
        *(uint32_t*)(0xc8(r30)) = r0; // sth
        /* li r0, 0 */ // 0x38000000
        *(uint32_t*)(0xcc(r30)) = r0; // stw
        r6 = 0x0 << 16; // lis
        r4 = 0x0 << 16; // lis
        *(uint32_t*)(0xd0(r30)) = r0; // stw
        r5 = r6 + 0; // addi
        r3 = r4 + 0; // addi
        // Compare r28 cmpwi 0
        float f0 = *(float*)(0(r6)); // lfs
        *(uint32_t*)(0xd4(r30)) = f0; // stfs
        float f2 = *(float*)(4(r31)); // lfs
        float f0 = *(float*)(4(r5)); // lfs
        *(uint32_t*)(0xd8(r30)) = f0; // stfs
        float f1 = *(float*)(0(r31)); // lfs
        float f0 = *(float*)(8(r5)); // lfs
        *(uint32_t*)(0xdc(r30)) = f0; // stfs
        float f0 = *(float*)(0xc(r31)); // lfs
        float f3 = *(float*)(0(r4)); // lfs
        *(uint32_t*)(0xe0(r30)) = f3; // stfs
        float f3 = *(float*)(4(r3)); // lfs
        *(uint32_t*)(0xe4(r30)) = f3; // stfs
        float f3 = *(float*)(8(r3)); // lfs
        *(uint32_t*)(0xe8(r30)) = f3; // stfs
        *(uint32_t*)(0xec(r30)) = r0; // stw
        *(uint32_t*)(0xf0(r30)) = f2; // stfs
        *(uint32_t*)(0xf4(r30)) = f1; // stfs
        *(uint32_t*)(0xf8(r30)) = f1; // stfs
        *(uint32_t*)(0xfc(r30)) = r0; // sth
        *(uint32_t*)(0x100(r30)) = r0; // sth
        *(uint32_t*)(0xfe(r30)) = r0; // sth
        *(uint32_t*)(0x102(r30)) = r0; // sth
        *(uint32_t*)(0x104(r30)) = f1; // stfs
        *(uint32_t*)(0x10c(r30)) = r0; // sth
        *(uint32_t*)(0x10e(r30)) = r0; // sth
        *(uint32_t*)(0x110(r30)) = r0; // sth
        *(uint32_t*)(0x112(r30)) = r0; // sth
        *(uint32_t*)(0x114(r30)) = r0; // sth
        *(uint32_t*)(0x116(r30)) = r0; // sth
        *(uint32_t*)(0x11c(r30)) = f2; // stfs
        *(uint32_t*)(0x120(r30)) = f2; // stfs
        *(uint32_t*)(0x128(r30)) = f0; // stfs
        *(uint32_t*)(0x12c(r30)) = r0; // sth
        *(uint32_t*)(0x12e(r30)) = r0; // sth
        *(uint32_t*)(0x140(r30)) = f1; // stfs
        *(uint32_t*)(0x148(r30)) = r0; // sth
        *(uint32_t*)(0x14c(r30)) = r0; // sth
        *(uint32_t*)(0x14e(r30)) = r0; // sth
        *(uint32_t*)(0x150(r30)) = r0; // sth
        *(uint32_t*)(0x152(r30)) = r0; // sth
        *(uint32_t*)(0x158(r30)) = f1; // stfs
        *(uint32_t*)(0x15c(r30)) = f1; // stfs
        *(uint32_t*)(0x160(r30)) = f2; // stfs
        if (/* bne 0x65ee0 */) {
        // branch to 0x065ee0
            float f0 = *(float*)(0x38(r31)); // lfs
            r4 = 0x0 << 16; // lis
            *(uint32_t*)(0x164(r30)) = f2; // stfs
            r3 = r4 + 0; // addi
            *(uint32_t*)(0x168(r30)) = f2; // stfs
            *(uint32_t*)(0x16c(r30)) = f2; // stfs
            *(uint32_t*)(0x170(r30)) = f2; // stfs
            *(uint32_t*)(0x174(r30)) = f2; // stfs
            *(uint32_t*)(0x178(r30)) = f2; // stfs
            *(uint32_t*)(0x17c(r30)) = f2; // stfs
            *(uint32_t*)(0x180(r30)) = f2; // stfs
            *(uint32_t*)(0x184(r30)) = f2; // stfs
            *(uint32_t*)(0x188(r30)) = r0; // sth
            *(uint32_t*)(0x18a(r30)) = r0; // sth
            *(uint32_t*)(0x18c(r30)) = r0; // sth
            *(uint32_t*)(0x18e(r30)) = r0; // sth
            *(uint32_t*)(0x190(r30)) = r0; // stb
            *(uint32_t*)(0x192(r30)) = r0; // sth
            *(uint32_t*)(0x194(r30)) = r0; // sth
            *(uint32_t*)(0x196(r30)) = r0; // stb
            *(uint32_t*)(0x198(r30)) = f0; // stfs
            float f0 = *(float*)(0(r4)); // lfs
            *(uint32_t*)(0x19c(r30)) = f0; // stfs
            float f0 = *(float*)(4(r3)); // lfs
            *(uint32_t*)(0x1a0(r30)) = f0; // stfs
            float f0 = *(float*)(8(r3)); // lfs
            *(uint32_t*)(0x1a4(r30)) = f0; // stfs
            float f2 = *(float*)(0(r31)); // lfs
            /* li r29, 0 */ // 0x3ba00000
            float f0 = *(float*)(0x18(r30)); // lfs
            r3 = r30 + 0x1d0; // addi
            /* fmr f3, f2 */ // 0xfc601090
            *(uint32_t*)(0x1a8(r30)) = r29; // sth
            /* fmr f4, f2 */ // 0xfc801090
            float f1 = *(float*)(4(r31)); // lfs
            *(uint32_t*)(0x1aa(r30)) = r29; // sth
            *(uint32_t*)(0x1ac(r30)) = r29; // sth
            *(uint32_t*)(0x1b0(r30)) = f2; // stfs
            *(uint32_t*)(0x1b4(r30)) = f2; // stfs
            *(uint32_t*)(0x1b8(r30)) = f2; // stfs
            *(uint32_t*)(0x1bc(r30)) = f0; // stfs
            *(uint32_t*)(0x1c0(r30)) = r29; // stw
            *(uint32_t*)(0x1c4(r30)) = r29; // sth
            *(uint32_t*)(0x1c8(r30)) = f2; // stfs
            *(uint32_t*)(0x1cc(r30)) = r29; // sth
            // Call 0x00063358
            int var_2 = sub_0x00063358(...);
            float f1 = *(float*)(0(r31)); // lfs
            r7 = 0x0 << 16; // lis
            *(uint32_t*)(0x1e0(r30)) = f1; // stfs
            r5 = 0x0 << 16; // lis
            r6 = r7 + 0; // addi
            uint32_t r3 = *(uint32_t*)(0x258(r30)); // lwz
            *(uint32_t*)(0x1e4(r30)) = f1; // stfs
            r4 = r5 + 0; // addi
            float f0 = *(float*)(0(r7)); // lfs
            *(uint32_t*)(0x1e8(r30)) = f0; // stfs
            float f0 = *(float*)(4(r6)); // lfs
            *(uint32_t*)(0x1ec(r30)) = f0; // stfs
            float f0 = *(float*)(8(r6)); // lfs
            *(uint32_t*)(0x1f0(r30)) = f0; // stfs
            float f0 = *(float*)(0(r7)); // lfs
            *(uint32_t*)(0x1f4(r30)) = f0; // stfs
            float f0 = *(float*)(4(r6)); // lfs
            *(uint32_t*)(0x1f8(r30)) = f0; // stfs
            float f0 = *(float*)(8(r6)); // lfs
            *(uint32_t*)(0x1fc(r30)) = f0; // stfs
            float f0 = *(float*)(0(r5)); // lfs
            *(uint32_t*)(0x200(r30)) = f0; // stfs
            float f0 = *(float*)(4(r4)); // lfs
            *(uint32_t*)(0x204(r30)) = f0; // stfs
            float f0 = *(float*)(8(r4)); // lfs
            *(uint32_t*)(0x208(r30)) = f0; // stfs
            float f0 = *(float*)(0(r7)); // lfs
            *(uint32_t*)(0x20c(r30)) = f0; // stfs
            float f0 = *(float*)(4(r6)); // lfs
            *(uint32_t*)(0x210(r30)) = f0; // stfs
            float f0 = *(float*)(8(r6)); // lfs
            *(uint32_t*)(0x214(r30)) = f0; // stfs
            *(uint32_t*)(0x218(r30)) = r29; // stw
            *(uint32_t*)(0x21c(r30)) = r29; // sth
            *(uint32_t*)(0x158(r30)) = f1; // stfs
            *(uint32_t*)(0x224(r30)) = f1; // stfs
            *(uint32_t*)(0x220(r30)) = f1; // stfs
            *(uint32_t*)(0x228(r30)) = f1; // stfs
            *(uint32_t*)(0x22c(r30)) = f1; // stfs
            *(uint32_t*)(0x230(r30)) = f1; // stfs
            *(uint32_t*)(0x234(r30)) = r29; // sth
            *(uint32_t*)(0x236(r30)) = r29; // sth
            *(uint32_t*)(0x238(r30)) = r29; // sth
            *(uint32_t*)(0x23a(r30)) = r29; // sth
            *(uint32_t*)(0x23c(r30)) = r29; // sth
            *(uint32_t*)(0x23e(r30)) = r29; // sth
            *(uint32_t*)(0x240(r30)) = f1; // stfs
            *(uint32_t*)(0x244(r30)) = r29; // sth
            *(uint32_t*)(0x248(r30)) = r29; // stw
            *(uint32_t*)(0x24c(r30)) = r29; // sth
            *(uint32_t*)(0x250(r30)) = r29; // stw
            *(uint32_t*)(0x254(r30)) = r29; // sth
            // Call 0x0006324c
            int var_3 = sub_0x0006324c(...);
            uint32_t r3 = *(uint32_t*)(0x25c(r30)); // lwz
            // Call 0x00062d00
            int var_4 = sub_0x00062d00(...);
            float f0 = *(float*)(0(r31)); // lfs
            r3 = r30; // mr
            *(uint32_t*)(0x288(r30)) = f0; // stfs
            *(uint32_t*)(0x28c(r30)) = f0; // stfs
            *(uint32_t*)(0x290(r30)) = r29; // sth
            // Call 0x0005e67c
            int var_5 = sub_0x0005e67c(...);
            uint32_t r0 = *(uint32_t*)(0x24(r1)); // lwz
            uint32_t r31 = *(uint32_t*)(0x1c(r1)); // lwz
            uint32_t r30 = *(uint32_t*)(0x18(r1)); // lwz
            uint32_t r29 = *(uint32_t*)(0x14(r1)); // lwz
            uint32_t r28 = *(uint32_t*)(0x10(r1)); // lwz
            /* mtlr r0 */ // SPR operation
            r1 = r1 + 0x20; // addi
            // Restore stack (addi r1, r1, 0x20)
            // Restore LR (lwz r0, N(r1); mtlr r0)
            return;
        }
    }
}
