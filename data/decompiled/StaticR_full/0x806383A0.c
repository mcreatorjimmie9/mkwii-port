/* Function at 0x806383A0, size=264 bytes */
/* Stack frame: 32 bytes */

int FUN_806383A0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* lis r7, 0 */ // 0x806383A4
    /* lfs f1, 0(r5) */ // 0x806383A8
    r7 = r7 + 0; // 0x806383AC
    /* lfs f3, 4(r3) */ // 0x806383B0
    /* li r0, 0 */ // 0x806383B4
    /* lfs f0, 0(r6) */ // 0x806383B8
    /* fmuls f5, f3, f1 */ // 0x806383BC
    /* lfs f4, 8(r3) */ // 0x806383C0
    /* fmuls f1, f3, f0 */ // 0x806383C4
    /* lfs f2, 4(r5) */ // 0x806383C8
    /* lfs f0, 4(r6) */ // 0x806383CC
    /* fmuls f3, f4, f2 */ // 0x806383D0
    /* fmuls f0, f4, f0 */ // 0x806383D4
    /* lfs f6, 0xc(r3) */ // 0x806383D8
    /* lfs f4, 8(r5) */ // 0x806383DC
    /* lfs f2, 8(r6) */ // 0x806383E0
    /* fadds f3, f5, f3 */ // 0x806383E4
    /* fmuls f4, f6, f4 */ // 0x806383E8
    /* fmuls f2, f6, f2 */ // 0x806383EC
    /* lfs f5, 0x18(r7) */ // 0x806383F0
    /* fadds f0, f1, f0 */ // 0x806383F4
    /* fadds f3, f4, f3 */ // 0x806383F8
    /* fadds f2, f2, f0 */ // 0x806383FC
    /* fcmpu cr0, f3, f2 */ // 0x80638400
    if (!=) goto 0x0x8063840c;
    /* b 0x80638420 */ // 0x80638408
    /* lfs f1, 0x10(r3) */ // 0x8063840C
    /* fsubs f0, f3, f2 */ // 0x80638410
    /* fadds f1, f2, f1 */ // 0x80638414
    /* fneg f1, f1 */ // 0x80638418
    /* fdivs f5, f1, f0 */ // 0x8063841C
    /* lfs f0, 4(r7) */ // 0x80638420
    /* .byte 0xfc, 0x05, 0x00, 0x40 */ // 0x80638424
    /* cror cr0eq, cr0gt, cr0eq */ // 0x80638428
    if (!=) goto 0x0x8063849c;
    /* lfs f0, 0(r7) */ // 0x80638430
    /* .byte 0xfc, 0x05, 0x00, 0x40 */ // 0x80638434
    /* cror cr0eq, cr0lt, cr0eq */ // 0x80638438
    if (!=) goto 0x0x8063849c;
    /* lfs f2, 0(r6) */ // 0x80638440
    /* fsubs f1, f0, f5 */ // 0x80638444
    /* lfs f7, 0(r5) */ // 0x80638448
    /* li r0, 1 */ // 0x8063844C
    /* lfs f0, 4(r6) */ // 0x80638450
    /* fsubs f3, f2, f7 */ // 0x80638454
    /* lfs f6, 4(r5) */ // 0x80638458
    /* lfs f2, 8(r6) */ // 0x8063845C
    /* fsubs f4, f0, f6 */ // 0x80638460
    /* lfs f5, 8(r5) */ // 0x80638464
    /* fmuls f0, f3, f1 */ // 0x80638468
    /* fsubs f3, f2, f5 */ // 0x8063846C
    /* fmuls f4, f4, f1 */ // 0x80638470
    /* stfs f0, 8(r1) */ // 0x80638474
    /* fadds f2, f7, f0 */ // 0x80638478
    /* fmuls f3, f3, f1 */ // 0x8063847C
    /* stfs f4, 0xc(r1) */ // 0x80638480
    /* fadds f1, f6, f4 */ // 0x80638484
    /* stfs f3, 0x10(r1) */ // 0x80638488
    /* fadds f0, f5, f3 */ // 0x8063848C
    /* stfs f2, 0(r4) */ // 0x80638490
    /* stfs f1, 4(r4) */ // 0x80638494
    /* stfs f0, 8(r4) */ // 0x80638498
    r3 = r0;
    return;
}