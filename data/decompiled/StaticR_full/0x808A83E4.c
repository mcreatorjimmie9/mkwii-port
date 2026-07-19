/* Function at 0x808A83E4, size=220 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_808A83E4(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x808A83EC
    *(0x34 + r1) = r0; // stw @ 0x808A83F0
    *(0x2c + r1) = r31; // stw @ 0x808A83F4
    r31 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    r0 = *(0x54 + r31); // lbz @ 0x808A8400
    /* lis r4, 0 */ // 0x808A8404
    r4 = r4 + 0; // 0x808A8408
    /* li r3, 1 */ // 0x808A840C
    /* li r0, 5 */ // 0x808A8414
    *(0 + r31) = r4; // stw @ 0x808A8418
    *(0xb0 + r31) = r3; // stw @ 0x808A841C
    *(0xb4 + r31) = r0; // stw @ 0x808A8420
    if (==) goto 0x0x808a8430;
    r5 = r31 + 0x48; // 0x808A8428
    /* b 0x808a845c */ // 0x808A842C
    *(0x54 + r31) = r3; // stb @ 0x808A8430
    r4 = r31 + 0x58; // 0x808A8438
    FUN_8070E704(r5, r3, r4); // bl 0x8070E704
    /* lfs f0, 0x14(r1) */ // 0x808A8440
    r5 = r31 + 0x48; // 0x808A8444
    /* stfs f0, 0x48(r31) */ // 0x808A8448
    /* lfs f0, 0x18(r1) */ // 0x808A844C
    /* stfs f0, 0x4c(r31) */ // 0x808A8450
    /* lfs f0, 0x1c(r1) */ // 0x808A8454
    /* stfs f0, 0x50(r31) */ // 0x808A8458
    r0 = *(0x54 + r31); // lbz @ 0x808A845C
    r4 = *(0 + r5); // lwz @ 0x808A8460
    r3 = *(4 + r5); // lwz @ 0x808A8464
    r0 = *(8 + r5); // lwz @ 0x808A846C
    *(0xb8 + r31) = r4; // stw @ 0x808A8470
    *(0xbc + r31) = r3; // stw @ 0x808A8474
    *(0xc0 + r31) = r0; // stw @ 0x808A8478
    if (==) goto 0x0x808a8488;
    r4 = r31 + 0x48; // 0x808A8480
    /* b 0x808a84b8 */ // 0x808A8484
    /* li r0, 1 */ // 0x808A8488
    *(0x54 + r31) = r0; // stb @ 0x808A848C
    r4 = r31 + 0x58; // 0x808A8494
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x808A849C
    r4 = r31 + 0x48; // 0x808A84A0
    /* stfs f0, 0x48(r31) */ // 0x808A84A4
    /* lfs f0, 0xc(r1) */ // 0x808A84A8
    /* stfs f0, 0x4c(r31) */ // 0x808A84AC
    /* lfs f0, 0x10(r1) */ // 0x808A84B0
    /* stfs f0, 0x50(r31) */ // 0x808A84B4
    r3 = r31 + 0xc4; // 0x808A84B8
    FUN_805E3430(r3); // bl 0x805E3430
}