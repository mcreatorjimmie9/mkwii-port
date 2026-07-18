// Decompiled from StaticR.rel
// Address: 0x80589fa4
// Size: 2064 bytes (516 instructions)
// Stack frame: 0x0160
// Calls: 0x80555bf4, 0x80590a9c, 0x80655e98, indirect, indirect, indirect, indirect, indirect, indirect, 0x8052f248, 0x8052f248, 0x8052f248, indirect, indirect, indirect, 0x8052f248, indirect, 0x8052f094, indirect, 0x8052f094, indirect, 0x8052f094, indirect, 0x8052f094, indirect, 0x8052f094, indirect, 0x8052f094, indirect, 0x8052f094, indirect, 0x8052f094, indirect, 0x8052f094, indirect, 0x8052f094, indirect, 0x8052f094, indirect, 0x8052f094, indirect, 0x8052f094, indirect, 0x8052f094, 0x8058b130, 0x8058b14c, 0x8058b168, 0x80555bf4

void sub_80589fa4(void) {
    // stwu r1, -0x160(r1)
    // mflr r0
    // stw r0, 0x164(r1)
    r11 = r1 + 0x160; // addi
    sub_0x80555bf4();
    r11 = (uint32_t)0 << 16; // lis
    r10 = (uint32_t)0 << 16; // lis
    f7 = /* load */ f7, 0(r11); // lfs
    r9 = (uint32_t)0 << 16; // lis
    f6 = /* load */ f6, 0(r10); // lfs
    r8 = (uint32_t)0 << 16; // lis
    f4 = /* load */ f4, 0(r8); // lfs
    r7 = (uint32_t)0 << 16; // lis
    f3 = /* load */ f3, 0(r7); // lfs
    r6 = (uint32_t)0 << 16; // lis
    f2 = /* load */ f2, 0(r6); // lfs
    r5 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0(r5); // lfs
    r4 = (uint32_t)0 << 16; // lis
    f0 = /* load */ f0, 0(r4); // lfs
    r12 = (uint32_t)0 << 16; // lis
    r11 = (uint32_t)0 << 16; // lis
    r10 = (uint32_t)0 << 16; // lis
    r10 = r10 + 0; // addi
    f5 = /* load */ f5, 0(r9); // lfs
    r8 = (uint32_t)0 << 16; // lis
    r7 = (uint32_t)0 << 16; // lis
    r7 = r7 + 0; // addi
    r6 = (uint32_t)0 << 16; // lis
    r6 = r6 + 0; // addi
    r5 = (uint32_t)0 << 16; // lis
    r4 = (uint32_t)0 << 16; // lis
    r12 = r12 + 0; // addi
    r11 = r11 + 0; // addi
    r8 = r8 + 0; // addi
    r5 = r5 + 0; // addi
    r4 = r4 + 0; // addi
    r31 = (uint32_t)0 << 16; // lis
    // stw r12, 0xf4(r1)
    r24 = r3; // mr
    r29 = r1 + 0xdc; // addi
    // stfs f7, 0xfc(r1)
    r31 = r31 + 0; // addi
    r30 = r1 + 0xe4; // addi
    r14 = r1 + 0xec; // addi
    // stw r10, 0xf8(r1)
    r26 = r1 + 0xc0; // addi
    // stfs f6, 0x104(r1)
    // stw r10, 0x100(r1)
    // stfs f5, 0x10c(r1)
    // stw r10, 0x108(r1)
    // stw r8, 0xd8(r1)
    // stfs f4, 0xe0(r1)
    // stw r7, 0xdc(r1)
    // stfs f3, 0xe8(r1)
    // stw r7, 0xe4(r1)
    // stfs f2, 0xf0(r1)
    // stw r7, 0xec(r1)
    // stfs f1, 0x94(r1)
    // stw r6, 0x90(r1)
    // stfs f1, 0x8c(r1)
    // stw r6, 0x88(r1)
    // stfs f0, 0x84(r1)
    // stw r5, 0x80(r1)
    // stw r4, 0xbc(r1)
    // stw r11, 0xc0(r1)
    r4 = (uint32_t)0 << 16; // lis
    r12 = (uint32_t)0 << 16; // lis
    r18 = /* load */ r18, 0(r4); // lbz
    r4 = (uint32_t)0 << 16; // lis
    r17 = /* load */ r17, 0(r4); // lwz
    r4 = (uint32_t)0 << 16; // lis
    r16 = /* load */ r16, 0(r4); // lbz
    r4 = (uint32_t)0 << 16; // lis
    r15 = /* load */ r15, 0(r4); // lbz
    r11 = (uint32_t)0 << 16; // lis
    f3 = /* load */ f3, 0(r12); // lfs
    r10 = (uint32_t)0 << 16; // lis
    f1 = /* load */ f1, 0(r10); // lfs
    r9 = (uint32_t)0 << 16; // lis
    r8 = (uint32_t)0 << 16; // lis
    r4 = (uint32_t)0 << 16; // lis
    r21 = /* load */ r21, 0(r8); // lhz
    r19 = (uint32_t)0 << 16; // lis
    r19 = r19 + 0; // addi
    r0 = /* load */ r0, 0(r4); // lbz
    f2 = /* load */ f2, 0(r11); // lfs
    r7 = (uint32_t)0 << 16; // lis
    r11 = /* load */ r11, 0(r7); // lbz
    r20 = (uint32_t)0 << 16; // lis
    r20 = r20 + 0; // addi
    f0 = /* load */ f0, 0(r9); // lfs
    r6 = (uint32_t)0 << 16; // lis
    r22 = (uint32_t)0 << 16; // lis
    r9 = /* load */ r9, 0(r6); // lbz
    r5 = (uint32_t)0 << 16; // lis
    r6 = /* load */ r6, 0(r5); // lbz
    r23 = (uint32_t)0 << 16; // lis
    r23 = r23 + 0; // addi
    r12 = (uint32_t)0 << 16; // lis
    r12 = r12 + 0; // addi
    r10 = (uint32_t)0 << 16; // lis
    r8 = (uint32_t)0 << 16; // lis
    r7 = (uint32_t)0 << 16; // lis
    r7 = r7 + 0; // addi
    r5 = (uint32_t)0 << 16; // lis
    r4 = (uint32_t)0 << 16; // lis
    r25 = (uint32_t)0 << 16; // lis
    r22 = r22 + 0; // addi
    r10 = r10 + 0; // addi
    r8 = r8 + 0; // addi
    r5 = r5 + 0; // addi
    r4 = r4 + 0; // addi
    // stfs f3, 0xc4(r1)
    r25 = /* load */ r25, 0(r25); // lwz
    r27 = r1 + 0xc8; // addi
    // stw r19, 0xc0(r1)
    r28 = r1 + 0xd0; // addi
    // stfs f2, 0xcc(r1)
    // stw r19, 0xc8(r1)
    // stfs f1, 0xd4(r1)
    // stw r19, 0xd0(r1)
    // stfs f0, 0x7c(r1)
    // stw r19, 0x78(r1)
    // stb r18, 0x74(r1)
    // stw r20, 0x70(r1)
    // stb r18, 0x6c(r1)
    // stw r20, 0x68(r1)
    // sth r21, 0x64(r1)
    // stw r22, 0x60(r1)
    // stw r17, 0x5c(r1)
    // stw r23, 0x58(r1)
    // stw r17, 0x54(r1)
    // stw r23, 0x50(r1)
    // stb r16, 0x4c(r1)
    // stw r12, 0x48(r1)
    // stb r11, 0x44(r1)
    // stw r10, 0x40(r1)
    // stb r16, 0x3c(r1)
    // stw r12, 0x38(r1)
    // stb r9, 0x34(r1)
    // stw r8, 0x30(r1)
    // stb r15, 0x2c(r1)
    // stw r7, 0x28(r1)
    // stb r15, 0x24(r1)
    // stw r7, 0x20(r1)
    // stb r6, 0x1c(r1)
    // stw r5, 0x18(r1)
    // stb r0, 0x14(r1)
    // stw r4, 0x10(r1)
    // stw r17, 0xc(r1)
    // stw r23, 8(r1)
    sub_0x80590a9c();
    // clrlwi r4, r3, 0x18
    r3 = r25; // mr
    sub_0x80655e98();
    r12 = /* load */ r12, 0xf8(r1); // lwz
    r15 = r3; // mr
    r3 = r1 + 0xf8; // addi
    r5 = 0; // li
    r12 = /* load */ r12, 0x10(r12); // lwz
    r4 = r15; // mr
    // mtctr r12
    // bctrl   (indirect call)
    r12 = /* load */ r12, 0x100(r1); // lwz
    r5 = r3; // mr
    r3 = r1 + 0x100; // addi
    r4 = r15; // mr
    r12 = /* load */ r12, 0x10(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r12 = /* load */ r12, 0x108(r1); // lwz
    r5 = r3; // mr
    r3 = r1 + 0x108; // addi
    r4 = r15; // mr
    r12 = /* load */ r12, 0x10(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r12 = /* load */ r12, 0(r29); // lwz
    r5 = r3; // mr
    r3 = r29; // mr
    r4 = r15; // mr
    r12 = /* load */ r12, 0x10(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r12 = /* load */ r12, 0(r30); // lwz
    r5 = r3; // mr
    r3 = r30; // mr
    r4 = r15; // mr
    r12 = /* load */ r12, 0x10(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r12 = /* load */ r12, 0(r14); // lwz
    r5 = r3; // mr
    r3 = r14; // mr
    r4 = r15; // mr
    r12 = /* load */ r12, 0x10(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r7 = r3; // mr
    r6 = r15; // mr
    r3 = r1 + 0x94; // addi
    r4 = 4; // li
    r5 = 0xf; // li
    sub_0x8052f248();
    f1 = /* load */ f1, 0x94(r1); // lfs
    r7 = r3; // mr
    f0 = /* load */ f0, 0x24(r31); // lfs
    r6 = r15; // mr
    r3 = r1 + 0x8c; // addi
    r4 = 4; // li
    f0 = f1 + f0; // fadds
    r5 = 0xf; // li
    // stfs f0, 0x94(r1)
    sub_0x8052f248();
    f1 = /* load */ f1, 0x8c(r1); // lfs
    r7 = r3; // mr
    f0 = /* load */ f0, 0x24(r31); // lfs
    r6 = r15; // mr
    r3 = r1 + 0x84; // addi
    r4 = 4; // li
    f0 = f1 + f0; // fadds
    r5 = 0xf; // li
    // stfs f0, 0x8c(r1)
    sub_0x8052f248();
    f1 = /* load */ f1, 0x84(r1); // lfs
    r5 = r3; // mr
    f0 = /* load */ f0, 0x28(r31); // lfs
    r3 = r26; // mr
    r4 = r15; // mr
    f0 = f1 + f0; // fadds
    // stfs f0, 0x84(r1)
    r12 = /* load */ r12, 0(r26); // lwz
    r12 = /* load */ r12, 0x10(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r12 = /* load */ r12, 0(r27); // lwz
    r5 = r3; // mr
    r3 = r27; // mr
    r4 = r15; // mr
    r12 = /* load */ r12, 0x10(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r12 = /* load */ r12, 0(r28); // lwz
    r5 = r3; // mr
    r3 = r28; // mr
    r4 = r15; // mr
    r12 = /* load */ r12, 0x10(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r7 = r3; // mr
    r6 = r15; // mr
    r3 = r1 + 0x7c; // addi
    r4 = 2; // li
    r5 = 0x17; // li
    sub_0x8052f248();
    f1 = /* load */ f1, 0x7c(r1); // lfs
    r14 = r3; // mr
    f0 = /* load */ f0, 0x2c(r31); // lfs
    r3 = r1 + 0x70; // addi
    r12 = /* load */ r12, 0x70(r1); // lwz
    f0 = f1 + f0; // fadds
    // stfs f0, 0x7c(r1)
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r5 = r15; // mr
    r6 = r14; // mr
    r3 = r1 + 0x74; // addi
    r7 = 1; // li
    sub_0x8052f094();
    r0 = /* load */ r0, 0x74(r1); // lbz
    r16 = r3; // mr
    r14 = -0x80; // li
    r12 = /* load */ r12, 0x68(r1); // lwz
    r4 = (int8_t)r0; // extsb
    r3 = r1 + 0x68; // addi
    // srawi r0, r4, 0x1f
    r0 = r14 + r4; // addc
    // stb r0, 0x74(r1)
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r5 = r15; // mr
    r6 = r16; // mr
    r3 = r1 + 0x6c; // addi
    r7 = 1; // li
    sub_0x8052f094();
    r0 = /* load */ r0, 0x6c(r1); // lbz
    r16 = r3; // mr
    r12 = /* load */ r12, 0x60(r1); // lwz
    r3 = r1 + 0x60; // addi
    r4 = (int8_t)r0; // extsb
    // srawi r0, r4, 0x1f
    r0 = r14 + r4; // addc
    // stb r0, 0x6c(r1)
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r5 = r15; // mr
    r6 = r16; // mr
    r3 = r1 + 0x64; // addi
    r7 = 2; // li
    sub_0x8052f094();
    r12 = /* load */ r12, 0x58(r1); // lwz
    r14 = r3; // mr
    r3 = r1 + 0x58; // addi
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r5 = r15; // mr
    r6 = r14; // mr
    r3 = r1 + 0x5c; // addi
    r7 = 4; // li
    sub_0x8052f094();
    r12 = /* load */ r12, 0x50(r1); // lwz
    r14 = r3; // mr
    r3 = r1 + 0x50; // addi
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r5 = r15; // mr
    r6 = r14; // mr
    r3 = r1 + 0x54; // addi
    r7 = 4; // li
    sub_0x8052f094();
    r12 = /* load */ r12, 0x48(r1); // lwz
    r14 = r3; // mr
    r3 = r1 + 0x48; // addi
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r5 = r15; // mr
    r6 = r14; // mr
    r3 = r1 + 0x4c; // addi
    r7 = 1; // li
    sub_0x8052f094();
    r12 = /* load */ r12, 0x40(r1); // lwz
    r14 = r3; // mr
    r3 = r1 + 0x40; // addi
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r5 = r15; // mr
    r6 = r14; // mr
    r3 = r1 + 0x44; // addi
    r7 = 1; // li
    sub_0x8052f094();
    r12 = /* load */ r12, 0x38(r1); // lwz
    r14 = r3; // mr
    r3 = r1 + 0x38; // addi
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r5 = r15; // mr
    r6 = r14; // mr
    r3 = r1 + 0x3c; // addi
    r7 = 1; // li
    sub_0x8052f094();
    r12 = /* load */ r12, 0x30(r1); // lwz
    r14 = r3; // mr
    r3 = r1 + 0x30; // addi
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r5 = r15; // mr
    r6 = r14; // mr
    r3 = r1 + 0x34; // addi
    r7 = 1; // li
    sub_0x8052f094();
    r12 = /* load */ r12, 0x28(r1); // lwz
    r14 = r3; // mr
    r3 = r1 + 0x28; // addi
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r5 = r15; // mr
    r6 = r14; // mr
    r3 = r1 + 0x2c; // addi
    r7 = 1; // li
    sub_0x8052f094();
    r12 = /* load */ r12, 0x20(r1); // lwz
    r14 = r3; // mr
    r3 = r1 + 0x20; // addi
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r5 = r15; // mr
    r6 = r14; // mr
    r3 = r1 + 0x24; // addi
    r7 = 1; // li
    sub_0x8052f094();
    r12 = /* load */ r12, 0x18(r1); // lwz
    r14 = r3; // mr
    r3 = r1 + 0x18; // addi
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r5 = r15; // mr
    r6 = r14; // mr
    r3 = r1 + 0x1c; // addi
    r7 = 1; // li
    sub_0x8052f094();
    r12 = /* load */ r12, 0x10(r1); // lwz
    r14 = r3; // mr
    r3 = r1 + 0x10; // addi
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r5 = r15; // mr
    r6 = r14; // mr
    r3 = r1 + 0x14; // addi
    r7 = 1; // li
    sub_0x8052f094();
    r12 = /* load */ r12, 8(r1); // lwz
    r14 = r3; // mr
    r3 = r1 + 8; // addi
    r12 = /* load */ r12, 0x14(r12); // lwz
    // mtctr r12
    // bctrl   (indirect call)
    r4 = r3; // mr
    r5 = r15; // mr
    r6 = r14; // mr
    r3 = r1 + 0xc; // addi
    r7 = 4; // li
    sub_0x8052f094();
    r3 = r1 + 0xb0; // addi
    r4 = r1 + 0xf4; // addi
    sub_0x8058b130();
    f0 = /* load */ f0, 0xb0(r1); // lfs
    r3 = r1 + 0xa4; // addi
    // stfs f0, 0x68(r24)
    r4 = r1 + 0xd8; // addi
    f0 = /* load */ f0, 0xb4(r1); // lfs
    // stfs f0, 0x6c(r24)
    f0 = /* load */ f0, 0xb8(r1); // lfs
    // stfs f0, 0x70(r24)
    sub_0x8058b14c();
    f0 = /* load */ f0, 0xa4(r1); // lfs
    r3 = r1 + 0x98; // addi
    // stfs f0, 0x74(r24)
    r4 = r1 + 0xbc; // addi
    f0 = /* load */ f0, 0xa8(r1); // lfs
    // stfs f0, 0x78(r24)
    f0 = /* load */ f0, 0xac(r1); // lfs
    // stfs f0, 0x7c(r24)
    f0 = /* load */ f0, 0x94(r1); // lfs
    // stfs f0, 0x80(r24)
    f0 = /* load */ f0, 0x8c(r1); // lfs
    // stfs f0, 0x84(r24)
    f0 = /* load */ f0, 0x84(r1); // lfs
    // stfs f0, 0x88(r24)
    sub_0x8058b168();
    f0 = /* load */ f0, 0x98(r1); // lfs
    // stfs f0, 0x8c(r24)
    f0 = /* load */ f0, 0x9c(r1); // lfs
    // stfs f0, 0x90(r24)
    f0 = /* load */ f0, 0xa0(r1); // lfs
    // stfs f0, 0x94(r24)
    f0 = /* load */ f0, 0x7c(r1); // lfs
    // stfs f0, 0x98(r24)
    r0 = /* load */ r0, 0x74(r1); // lbz
    // stb r0, 0x9c(r24)
    r0 = /* load */ r0, 0x6c(r1); // lbz
    // stb r0, 0x9d(r24)
    r0 = /* load */ r0, 0x64(r1); // lhz
    // sth r0, 0xa6(r24)
    r0 = /* load */ r0, 0x5c(r1); // lwz
    // stw r0, 0xa8(r24)
    r0 = /* load */ r0, 0x54(r1); // lwz
    // stw r0, 0xac(r24)
    r0 = /* load */ r0, 0x4c(r1); // lbz
    // stb r0, 0x9e(r24)
    r0 = /* load */ r0, 0x44(r1); // lbz
    // stb r0, 0x9f(r24)
    r0 = /* load */ r0, 0x3c(r1); // lbz
    // stb r0, 0xa1(r24)
    r0 = /* load */ r0, 0x34(r1); // lbz
    // stb r0, 0xa0(r24)
    r0 = /* load */ r0, 0x2c(r1); // lbz
    // stb r0, 0xa2(r24)
    r0 = /* load */ r0, 0x24(r1); // lbz
    // stb r0, 0xa3(r24)
    r0 = /* load */ r0, 0x1c(r1); // lbz
    // stb r0, 0xa4(r24)
    // cmplwi r0, 1
    L_8058a77c:
    r0 = 1; // li
    goto L_8058a788;
    // cmplwi r0, 0xc
    L_8058a788:
    r0 = 0xc; // li
    // stb r0, 0xa4(r24)
    r11 = r1 + 0x160; // addi
    r0 = /* load */ r0, 0x14(r1); // lbz
    // stb r0, 0xa5(r24)
    r0 = /* load */ r0, 0xc(r1); // lwz
    // stw r0, 0xb0(r24)
    sub_0x80555bf4();
    r0 = /* load */ r0, 0x164(r1); // lwz
    // mtlr r0
    // addi r1, r1, 0x160
}
