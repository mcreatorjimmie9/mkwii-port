/* Function at 0x808E04F8, size=204 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808E04F8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808E050C
    r30 = r3;
    r0 = *(0xc + r3); // lwz @ 0x808E0514
    if (!=) goto 0x0x808e0528;
    if (==) goto 0x0x808e05ac;
    r3 = *(4 + r3); // lwz @ 0x808E0528
    if (==) goto 0x0x808e0548;
    r12 = *(0 + r3); // lwz @ 0x808E0534
    /* li r4, 0 */ // 0x808E0538
    r12 = *(0xc + r12); // lwz @ 0x808E053C
    /* mtctr r12 */ // 0x808E0540
    /* bctrl  */ // 0x808E0544
    r3 = *(8 + r30); // lwz @ 0x808E0548
    /* slwi r0, r31, 2 */ // 0x808E054C
    /* li r4, 1 */ // 0x808E0550
    /* lwzx r3, r3, r0 */ // 0x808E0554
    *(4 + r30) = r3; // stw @ 0x808E0558
    r12 = *(0 + r3); // lwz @ 0x808E055C
    r12 = *(0xc + r12); // lwz @ 0x808E0560
    /* mtctr r12 */ // 0x808E0564
    /* bctrl  */ // 0x808E0568
    r3 = *(4 + r30); // lwz @ 0x808E056C
    /* li r4, 0 */ // 0x808E0570
    r3 = *(0x28 + r3); // lwz @ 0x808E0574
    FUN_805E6F54(r4); // bl 0x805E6F54
    r0 = *(4 + r3); // lwz @ 0x808E057C
    if (==) goto 0x0x808e05a8;
    r4 = *(4 + r30); // lwz @ 0x808E0588
    /* lis r3, 0 */ // 0x808E058C
    /* lis r5, 0 */ // 0x808E0590
    /* lfs f1, 0(r3) */ // 0x808E0594
    r3 = *(0x28 + r4); // lwz @ 0x808E0598
    /* li r4, 0 */ // 0x808E059C
    /* lfs f2, 0(r5) */ // 0x808E05A0
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    *(0xc + r30) = r31; // stw @ 0x808E05A8
    r0 = *(0x14 + r1); // lwz @ 0x808E05AC
    r31 = *(0xc + r1); // lwz @ 0x808E05B0
    r30 = *(8 + r1); // lwz @ 0x808E05B4
    return;
}