/* Function at 0x80712354, size=208 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80712354(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -176(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x8071235C
    /* lis r0, 0x4330 */ // 0x80712364
    /* lfd f1, 0(r4) */ // 0x80712368
    *(0xac + r1) = r31; // stw @ 0x8071236C
    r31 = r3;
    *(0xa8 + r1) = r30; // stw @ 0x80712374
    *(0xa4 + r1) = r29; // stw @ 0x80712378
    r5 = *(0xf0 + r3); // lwz @ 0x8071237C
    /* lfs f0, 0xd0(r3) */ // 0x80712380
    r5 = r5 + 1; // 0x80712384
    *(0x90 + r1) = r0; // stw @ 0x80712388
    /* xoris r0, r5, 0x8000 */ // 0x8071238C
    /* fabs f2, f0 */ // 0x80712390
    *(0x94 + r1) = r0; // stw @ 0x80712394
    /* lfd f0, 0x90(r1) */ // 0x80712398
    *(0xf0 + r3) = r5; // stw @ 0x8071239C
    /* fsubs f0, f0, f1 */ // 0x807123A0
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x807123A4
    if (<=) goto 0x0x807123b4;
    /* li r0, 0 */ // 0x807123AC
    *(0xf0 + r3) = r0; // stw @ 0x807123B0
    r12 = *(0 + r31); // lwz @ 0x807123B4
    r3 = r31;
    r12 = *(0x120 + r12); // lwz @ 0x807123BC
    /* mtctr r12 */ // 0x807123C0
    /* bctrl  */ // 0x807123C4
    r3 = r31;
    FUN_80711568(r3, r3); // bl 0x80711568
    r0 = *(0x54 + r31); // lbz @ 0x807123D0
    if (==) goto 0x0x807123e4;
    r5 = r31 + 0x48; // 0x807123DC
    /* b 0x80712414 */ // 0x807123E0
    /* li r0, 1 */ // 0x807123E4
    *(0x54 + r31) = r0; // stb @ 0x807123E8
    r4 = r31 + 0x58; // 0x807123F0
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x807123F8
    r5 = r31 + 0x48; // 0x807123FC
    /* stfs f0, 0x48(r31) */ // 0x80712400
    /* lfs f0, 0xc(r1) */ // 0x80712404
    /* stfs f0, 0x4c(r31) */ // 0x80712408
    /* lfs f0, 0x10(r1) */ // 0x8071240C
    /* stfs f0, 0x50(r31) */ // 0x80712410
    r4 = r31 + 0x3c; // 0x80712418
    r6 = r31 + 0x30; // 0x8071241C
    FUN_805E3430(r3, r4, r6); // bl 0x805E3430
}