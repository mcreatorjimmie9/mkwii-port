/* Function at 0x80876544, size=240 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80876544(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80876550
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80876558
    r12 = *(0x3c + r12); // lwz @ 0x8087655C
    /* mtctr r12 */ // 0x80876560
    /* bctrl  */ // 0x80876564
    r3 = *(0x1b8 + r31); // lwz @ 0x80876568
    r0 = *(0x9b + r3); // lbz @ 0x8087656C
    if (==) goto 0x0x80876584;
    r0 = *(0x9d + r3); // lbz @ 0x80876578
    if (!=) goto 0x0x808765ac;
    r12 = *(0 + r3); // lwz @ 0x80876584
    r12 = *(0x24 + r12); // lwz @ 0x80876588
    /* mtctr r12 */ // 0x8087658C
    /* bctrl  */ // 0x80876590
    /* clrlwi r0, r3, 0x10 */ // 0x80876594
    if (==) goto 0x0x808765ac;
    /* li r0, 1 */ // 0x808765A0
    *(0x80 + r31) = r0; // stb @ 0x808765A4
    /* b 0x80876620 */ // 0x808765A8
    /* li r0, 0 */ // 0x808765AC
    *(0x80 + r31) = r0; // stb @ 0x808765B0
    r3 = *(0x1b8 + r31); // lwz @ 0x808765B4
    r12 = *(0 + r3); // lwz @ 0x808765B8
    r12 = *(0x24 + r12); // lwz @ 0x808765BC
    /* mtctr r12 */ // 0x808765C0
    /* bctrl  */ // 0x808765C4
    /* clrlwi r3, r3, 0x10 */ // 0x808765C8
    r0 = r3 + -0x1f5; // 0x808765CC
    if (<=) goto 0x0x80876620;
    if (==) goto 0x0x80876620;
    if (==) goto 0x0x80876620;
    if (==) goto 0x0x80876620;
    if (==) goto 0x0x80876620;
    r12 = *(0 + r31); // lwz @ 0x808765F8
    /* lis r5, 0 */ // 0x808765FC
    r4 = *(0x1b8 + r31); // lwz @ 0x80876600
    r5 = r5 + 0; // 0x80876604
    r12 = *(0x50 + r12); // lwz @ 0x80876608
    r3 = r31;
    r4 = r4 + 0x30; // 0x80876610
    r6 = r5;
    /* mtctr r12 */ // 0x80876618
    /* bctrl  */ // 0x8087661C
    r0 = *(0x14 + r1); // lwz @ 0x80876620
    r31 = *(0xc + r1); // lwz @ 0x80876624
    return;
}