/* Function at 0x808DF020, size=144 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_808DF020(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808DF02C
    r31 = r3;
    r0 = *(8 + r3); // lwz @ 0x808DF034
    if (==) goto 0x0x808df058;
    r3 = r0;
    r4 = r31 + 0x3c; // 0x808DF044
    r12 = *(0 + r3); // lwz @ 0x808DF048
    r12 = *(0x14 + r12); // lwz @ 0x808DF04C
    /* mtctr r12 */ // 0x808DF050
    /* bctrl  */ // 0x808DF054
    r0 = *(0x90 + r31); // lbz @ 0x808DF058
    if (==) goto 0x0x808df07c;
    r3 = *(0xc + r31); // lwz @ 0x808DF064
    r4 = r31 + 0x3c; // 0x808DF068
    r12 = *(0 + r3); // lwz @ 0x808DF06C
    r12 = *(0x14 + r12); // lwz @ 0x808DF070
    /* mtctr r12 */ // 0x808DF074
    /* bctrl  */ // 0x808DF078
    r3 = *(0x148 + r31); // lwz @ 0x808DF07C
    if (==) goto 0x0x808df09c;
    r12 = *(0 + r3); // lwz @ 0x808DF088
    r4 = r31 + 0x3c; // 0x808DF08C
    r12 = *(0x14 + r12); // lwz @ 0x808DF090
    /* mtctr r12 */ // 0x808DF094
    /* bctrl  */ // 0x808DF098
    r0 = *(0x14 + r1); // lwz @ 0x808DF09C
    r31 = *(0xc + r1); // lwz @ 0x808DF0A0
    return;
}