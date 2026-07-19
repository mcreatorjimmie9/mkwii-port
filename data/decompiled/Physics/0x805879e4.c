// Decompiled from StaticR.rel
// Address: 0x805879e4
// Size: 396 bytes (99 instructions)
// Stack frame: 0x0040
// Calls: 0x80555bf4, 0x80555bf4, 0x80555bf4

void sub_805879e4(r3 /* param */, r4 /* param */, r5 /* param */) {
    // stwu r1, -0x40(r1)
    // mflr r0
    // stw r0, 0x44(r1)
    // stfd f31, 0x30(r1)
    // xxsel vs31, vs1, vs0, v0
    // stfd f30, 0x20(r1)
    // .byte 0xf3, 0xc1, 0x00, 0x28
    // stfd f29, 0x10(r1)
    // xscmpeqdp vs29, f1, f0
    f31 = f1; // fmr
    f4 = /* load */ f4, 0(r4); // lfs
    f3 = /* load */ f3, 0(r5); // lfs
    f2 = /* load */ f2, 4(r4); // lfs
    f1 = f4 * f3; // fmuls
    f0 = /* load */ f0, 4(r5); // lfs
    f3 = /* load */ f3, 8(r4); // lfs
    f0 = f2 * f0; // fmuls
    f2 = /* load */ f2, 8(r5); // lfs
    // stw r31, 0xc(r1)
    r31 = (uint32_t)0 << 16; // lis
    f2 = f3 * f2; // fmuls
    f1 = f1 + f0; // fadds
    r31 = r31 + 0; // addi
    f5 = /* load */ f5, 0xc(r4); // lfs
    f4 = /* load */ f4, 0xc(r5); // lfs
    f1 = f2 + f1; // fadds
    f0 = /* load */ f0, 0xc(r31); // lfs
    f3 = f5 * f4; // fmuls
    f29 = /* load */ f29, 0x40(r31); // lfs
    f30 = f3 + f1; // fadds
    // .byte 0xfc, 0x00, 0xf0, 0x40
    L_80587a6c:
    f30 = f0; // fmr
    goto L_80587a7c;
    f0 = /* load */ f0, 4(r31); // lfs
    // .byte 0xfc, 0x00, 0xf0, 0x40
    L_80587a7c:
    f30 = f0; // fmr
    f0 = /* load */ f0, 4(r31); // lfs
    r0 = 0; // li
    // .byte 0xfc, 0x1e, 0x00, 0x40
    // cror cr0eq, cr0lt, cr0eq
    L_80587aa4:
    f0 = /* load */ f0, 0xc(r31); // lfs
    // .byte 0xfc, 0x1e, 0x00, 0x40
    // cror cr0eq, cr0gt, cr0eq
    L_80587aa4:
    r0 = 1; // li
    // cmpwi r0, 0
    L_80587ac8:
    r3 = (uint32_t)0 << 16; // lis
    r5 = (uint32_t)0 << 16; // lis
    r3 = r3 + 0; // addi
    r4 = 0xf2; // li
    r5 = r5 + 0; // addi
    // crclr cr1eq
    sub_0x80555bf4();
    f0 = /* load */ f0, 4(r31); // lfs
    r0 = 0; // li
    // .byte 0xfc, 0x1e, 0x00, 0x40
    // cror cr0eq, cr0lt, cr0eq
    L_80587af0:
    f0 = /* load */ f0, 0xc(r31); // lfs
    // .byte 0xfc, 0x1e, 0x00, 0x40
    // cror cr0eq, cr0gt, cr0eq
    L_80587af0:
    r0 = 1; // li
    // cmpwi r0, 0
    L_80587b14:
    r3 = (uint32_t)0 << 16; // lis
    r5 = (uint32_t)0 << 16; // lis
    r3 = r3 + 0; // addi
    r4 = 0xf3; // li
    r5 = r5 + 0; // addi
    // crclr cr1eq
    sub_0x80555bf4();
    f1 = f30; // fmr
    sub_0x80555bf4();
    f1 = (float)f1; // frsp
    f0 = /* load */ f0, 0(r31); // lfs
    // .byte 0xfc, 0x01, 0x00, 0x40
    L_80587b30:
    f29 = f31 / f1; // fdivs
    f0 = /* load */ f0, 0x40(r31); // lfs
    // .byte 0xfc, 0x1d, 0x00, 0x40
    L_80587b40:
    f29 = f0; // fmr
    f1 = f29; // fmr
    // .byte 0xe3, 0xe1, 0x00, 0x38
    f31 = /* load */ f31, 0x30(r1); // lfd
    // .byte 0xe3, 0xc1, 0x00, 0x28
    f30 = /* load */ f30, 0x20(r1); // lfd
    // .byte 0xe3, 0xa1, 0x00, 0x18
    f29 = /* load */ f29, 0x10(r1); // lfd
    r31 = /* load */ r31, 0xc(r1); // lwz
    r0 = /* load */ r0, 0x44(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x40
}
