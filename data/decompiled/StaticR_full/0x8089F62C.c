/* Function at 0x8089F62C, size=208 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8089F62C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8089F638
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x8089F640
    r12 = *(0x58 + r12); // lwz @ 0x8089F644
    /* mtctr r12 */ // 0x8089F648
    /* bctrl  */ // 0x8089F64C
    r12 = *(0 + r31); // lwz @ 0x8089F650
    r3 = r31;
    r12 = *(0x44 + r12); // lwz @ 0x8089F658
    /* mtctr r12 */ // 0x8089F65C
    /* bctrl  */ // 0x8089F660
    r12 = *(0 + r31); // lwz @ 0x8089F664
    r3 = r31;
    r12 = *(0x5c + r12); // lwz @ 0x8089F66C
    /* mtctr r12 */ // 0x8089F670
    /* bctrl  */ // 0x8089F674
    r12 = *(0 + r31); // lwz @ 0x8089F678
    r3 = r31;
    r12 = *(0x60 + r12); // lwz @ 0x8089F680
    /* mtctr r12 */ // 0x8089F684
    /* bctrl  */ // 0x8089F688
    r12 = *(0 + r31); // lwz @ 0x8089F68C
    r3 = r31;
    r12 = *(0xb4 + r12); // lwz @ 0x8089F694
    /* mtctr r12 */ // 0x8089F698
    /* bctrl  */ // 0x8089F69C
    if (==) goto 0x0x8089f6c4;
    r12 = *(0 + r31); // lwz @ 0x8089F6A8
    /* lis r4, 0 */ // 0x8089F6AC
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x8089F6B4
    r12 = *(0xe0 + r12); // lwz @ 0x8089F6B8
    /* mtctr r12 */ // 0x8089F6BC
    /* bctrl  */ // 0x8089F6C0
    r12 = *(0 + r31); // lwz @ 0x8089F6C4
    r3 = r31;
    r12 = *(0x64 + r12); // lwz @ 0x8089F6CC
    /* mtctr r12 */ // 0x8089F6D0
    /* bctrl  */ // 0x8089F6D4
    /* lis r3, 0 */ // 0x8089F6D8
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x8089F6E0
    FUN_808AB674(r3, r4); // bl 0x808AB674
    r0 = *(0x14 + r1); // lwz @ 0x8089F6E8
    r31 = *(0xc + r1); // lwz @ 0x8089F6EC
    return;
}