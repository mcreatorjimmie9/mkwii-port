/* Function at 0x807B6548, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_807B6548(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807B655C
    r30 = r3;
    r0 = *(0xbc + r3); // lbz @ 0x807B6564
    if (==) goto 0x0x807b659c;
    /* lis r4, 0 */ // 0x807B6570
    /* lfs f0, 0(r4) */ // 0x807B6574
    /* stfs f0, 0xcc(r3) */ // 0x807B6578
    r12 = *(0x34 + r3); // lwz @ 0x807B657C
    r12 = *(0xc + r12); // lwz @ 0x807B6580
    /* mtctr r12 */ // 0x807B6584
    /* bctrl  */ // 0x807B6588
    /* lfs f1, 0xc(r31) */ // 0x807B658C
    /* lfs f0, 0xcc(r30) */ // 0x807B6590
    /* fmuls f0, f1, f0 */ // 0x807B6594
    /* stfs f0, 0xc(r31) */ // 0x807B6598
    r0 = *(0x14 + r1); // lwz @ 0x807B659C
    r31 = *(0xc + r1); // lwz @ 0x807B65A0
    r30 = *(8 + r1); // lwz @ 0x807B65A4
    return;
}