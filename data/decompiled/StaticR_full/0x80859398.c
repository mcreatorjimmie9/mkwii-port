/* Function at 0x80859398, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80859398(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x808593A8
    r31 = r31 + 0; // 0x808593AC
    *(8 + r1) = r30; // stw @ 0x808593B0
    r30 = r3;
    r0 = *(0x4ac + r3); // lwz @ 0x808593B8
    if (==) goto 0x0x80859490;
    FUN_8061E63C(); // bl 0x8061E63C
    /* lfs f0, 0xa64(r31) */ // 0x808593C8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808593CC
    if (<=) goto 0x0x80859490;
    r0 = *(0xf4 + r30); // lhz @ 0x808593D4
    if (<=) goto 0x0x808593f0;
    if (==) goto 0x0x808593f0;
    if (!=) goto 0x0x80859490;
    r3 = r30;
    FUN_8061E63C(r3); // bl 0x8061E63C
    /* lfs f3, 0xa58(r31) */ // 0x808593F8
    /* lfs f0, 4(r31) */ // 0x808593FC
    /* lfs f2, 0(r31) */ // 0x80859400
    /* fsubs f3, f3, f0 */ // 0x80859404
    /* fcmpu cr0, f2, f3 */ // 0x80859408
    if (!=) goto 0x0x80859418;
    /* lfs f0, 0xa70(r31) */ // 0x80859410
    /* b 0x8085942c */ // 0x80859414
    /* fsubs f0, f1, f0 */ // 0x80859418
    /* lfs f1, 0xa70(r31) */ // 0x8085941C
    /* fmuls f0, f1, f0 */ // 0x80859420
    /* fdivs f0, f0, f3 */ // 0x80859424
    /* fadds f0, f1, f0 */ // 0x80859428
    /* lfs f1, 0xa70(r31) */ // 0x8085942C
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x80859430
    if (>=) goto 0x0x8085943c;
    /* b 0x80859450 */ // 0x80859438
    /* lfs f1, 4(r31) */ // 0x8085943C
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x80859440
    if (<=) goto 0x0x8085944c;
    /* b 0x80859450 */ // 0x80859448
    /* fmr f1, f0 */ // 0x8085944C
    r5 = *(0x4ac + r30); // lwz @ 0x80859450
    r0 = *(4 + r5); // lwz @ 0x80859454
    if (<) goto 0x0x80859490;
    if (<) goto 0x0x80859470;
    /* li r0, 0 */ // 0x80859468
    *(0x11 + r5) = r0; // stb @ 0x8085946C
    /* li r4, 0 */ // 0x80859470
    *(4 + r5) = r4; // stw @ 0x80859474
    /* li r3, 6 */ // 0x80859478
    /* li r0, 2 */ // 0x8085947C
    *(0 + r5) = r3; // stw @ 0x80859480
    *(8 + r5) = r0; // stw @ 0x80859484
    /* stfs f1, 0xc(r5) */ // 0x80859488
    *(0x10 + r5) = r4; // stb @ 0x8085948C
    r0 = *(0x14 + r1); // lwz @ 0x80859490
    r31 = *(0xc + r1); // lwz @ 0x80859494
    r30 = *(8 + r1); // lwz @ 0x80859498
    return;
}