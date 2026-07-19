/* Function at 0x807B03BC, size=340 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_807B03BC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807B03C4
    /* li r5, 1 */ // 0x807B03C8
    *(0x24 + r1) = r0; // stw @ 0x807B03CC
    /* li r0, 0 */ // 0x807B03D0
    /* lfs f0, 0(r4) */ // 0x807B03D4
    *(0x1c + r1) = r31; // stw @ 0x807B03D8
    *(0x18 + r1) = r30; // stw @ 0x807B03DC
    /* lis r30, 0 */ // 0x807B03E0
    r30 = r30 + 0; // 0x807B03E4
    *(0x14 + r1) = r29; // stw @ 0x807B03E8
    r29 = r3;
    /* stfs f0, 0x18(r3) */ // 0x807B03F0
    r4 = *(0 + r3); // lwz @ 0x807B03F4
    *(0x1c + r3) = r5; // stb @ 0x807B03F8
    /* stfs f0, 0xc(r3) */ // 0x807B03FC
    /* stfs f0, 0x10(r3) */ // 0x807B0400
    *(8 + r4) = r0; // stw @ 0x807B0404
    r3 = *(0 + r3); // lwz @ 0x807B0408
    /* lfs f1, 0x84(r30) */ // 0x807B040C
    FUN_807D021C(); // bl 0x807D021C
    r3 = *(0 + r29); // lwz @ 0x807B0414
    /* li r4, 0 */ // 0x807B0418
    /* lfs f1, 0x84(r30) */ // 0x807B041C
    /* lfs f2, 0x88(r30) */ // 0x807B0420
    FUN_807D0288(r4); // bl 0x807D0288
    /* lfs f0, 0x88(r30) */ // 0x807B0428
    /* lfs f1, 0x14(r29) */ // 0x807B042C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807B0430
    if (<=) goto 0x0x807b043c;
    /* b 0x807b0440 */ // 0x807B0438
    /* fmr f1, f0 */ // 0x807B043C
    /* stfs f1, 0x14(r29) */ // 0x807B0440
    /* lis r31, 0 */ // 0x807B0444
    r3 = *(4 + r29); // lwz @ 0x807B0448
    /* li r0, 0 */ // 0x807B044C
    /* lfs f1, 0(r31) */ // 0x807B0450
    *(8 + r3) = r0; // stw @ 0x807B0454
    r3 = *(4 + r29); // lwz @ 0x807B0458
    FUN_807D021C(); // bl 0x807D021C
    r3 = *(4 + r29); // lwz @ 0x807B0460
    /* li r4, 0 */ // 0x807B0464
    /* lfs f1, 0(r31) */ // 0x807B0468
    /* lfs f2, 0x88(r30) */ // 0x807B046C
    FUN_807D0288(r4); // bl 0x807D0288
    /* lfs f0, 0x88(r30) */ // 0x807B0474
    /* lfs f1, 0x14(r29) */ // 0x807B0478
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807B047C
    if (<=) goto 0x0x807b0488;
    /* b 0x807b048c */ // 0x807B0484
    /* fmr f1, f0 */ // 0x807B0488
    /* stfs f1, 0x14(r29) */ // 0x807B048C
    /* lis r3, 0 */ // 0x807B0490
    r4 = *(8 + r29); // lwz @ 0x807B0494
    /* li r0, 0 */ // 0x807B0498
    /* lfs f1, 0(r3) */ // 0x807B049C
    *(8 + r4) = r0; // stw @ 0x807B04A0
    r3 = *(8 + r29); // lwz @ 0x807B04A4
    FUN_807D021C(); // bl 0x807D021C
    /* lis r4, 0 */ // 0x807B04AC
    r3 = *(8 + r29); // lwz @ 0x807B04B0
    /* lfs f1, 0(r4) */ // 0x807B04B4
    /* lfs f2, 0x88(r30) */ // 0x807B04B8
    r4 = *(0x8c + r30); // lha @ 0x807B04BC
    FUN_807D0288(r4); // bl 0x807D0288
    /* lfs f0, 0x88(r30) */ // 0x807B04C4
    /* lfs f1, 0x14(r29) */ // 0x807B04C8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807B04CC
    if (<=) goto 0x0x807b04d8;
    /* b 0x807b04dc */ // 0x807B04D4
    /* fmr f1, f0 */ // 0x807B04D8
    /* lis r3, 0 */ // 0x807B04DC
    /* li r0, 1 */ // 0x807B04E0
    /* lfs f0, 0(r3) */ // 0x807B04E4
    /* stfs f1, 0x14(r29) */ // 0x807B04E8
    *(0x1c + r29) = r0; // stb @ 0x807B04EC
    /* stfs f0, 0x10(r29) */ // 0x807B04F0
    r31 = *(0x1c + r1); // lwz @ 0x807B04F4
    r30 = *(0x18 + r1); // lwz @ 0x807B04F8
    r29 = *(0x14 + r1); // lwz @ 0x807B04FC
    r0 = *(0x24 + r1); // lwz @ 0x807B0500
    return;
}