// Decompiled from StaticR.rel
// Address: 0x80583f6c
// Size: 280 bytes (70 instructions)
// Stack frame: 0x0050
// Calls: 0x80555bf4, 0x8059040c, 0x8059040c, 0x80555bf4, 0x8078cfdc, 0x80555bf4

void sub_80583f6c(void) {
    // stwu r1, -0x50(r1)
    // mflr r0
    // stw r0, 0x54(r1)
    // stfd f31, 0x40(r1)
    // xsmaddmsp f31, f1, f0
    // stfd f30, 0x30(r1)
    // xxsel vs30, vs1, vs0, v0
    r11 = r1 + 0x30; // addi
    sub_0x80555bf4();
    f30 = f1; // fmr
    r25 = r3; // mr
    f31 = f2; // fmr
    r26 = r4; // mr
    r27 = r5; // mr
    r28 = r6; // mr
    r29 = r7; // mr
    r30 = r8; // mr
    r31 = r9; // mr
    sub_0x8059040c();
    f0 = /* load */ f0, 0x68(r3); // lfs
    // stfs f0, 0(r26)
    f0 = /* load */ f0, 0x6c(r3); // lfs
    // stfs f0, 4(r26)
    f0 = /* load */ f0, 0x70(r3); // lfs
    r3 = r25; // mr
    // stfs f0, 8(r26)
    sub_0x8059040c();
    r4 = (uint32_t)0 << 16; // lis
    r5 = r27; // mr
    r4 = r4 + 0; // addi
    r3 = r3 + 0xf0; // addi
    sub_0x80555bf4();
    f2 = -f31; // fneg
    f0 = /* load */ f0, 0x168(r25); // lfs
    f4 = /* load */ f4, 0(r27); // lfs
    f1 = f30; // fmr
    f3 = /* load */ f3, 0(r26); // lfs
    r3 = (uint32_t)0 << 16; // lis
    f5 = f2 * f0; // fmuls
    f2 = /* load */ f2, 4(r26); // lfs
    f0 = /* load */ f0, 8(r26); // lfs
    r4 = r26; // mr
    r5 = r28; // mr
    r6 = r31; // mr
    f4 = f5 * f4; // fmuls
    r7 = r29; // mr
    r8 = r30; // mr
    r9 = 0; // li
    f3 = f3 + f4; // fadds
    // stfs f3, 0(r26)
    f3 = /* load */ f3, 4(r27); // lfs
    f3 = f5 * f3; // fmuls
    f2 = f2 + f3; // fadds
    // stfs f2, 4(r26)
    f2 = /* load */ f2, 8(r27); // lfs
    f2 = f5 * f2; // fmuls
    f0 = f0 + f2; // fadds
    // stfs f0, 8(r26)
    r3 = /* load */ r3, 0(r3); // lwz
    sub_0x8078cfdc();
    // .byte 0xe3, 0xe1, 0x00, 0x48
    f31 = /* load */ f31, 0x40(r1); // lfd
    // .byte 0xe3, 0xc1, 0x00, 0x38
    r11 = r1 + 0x30; // addi
    f30 = /* load */ f30, 0x30(r1); // lfd
    sub_0x80555bf4();
    r0 = /* load */ r0, 0x54(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x50
}
