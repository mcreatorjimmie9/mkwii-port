/* Function at 0x80633954, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80633954(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80633960
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80633968
    r12 = *(0x14 + r12); // lwz @ 0x8063396C
    /* mtctr r12 */ // 0x80633970
    /* bctrl  */ // 0x80633974
    r4 = *(0 + r3); // lwz @ 0x80633978
    r3 = *(4 + r31); // lwz @ 0x8063397C
    /* lfs f0, 0x14(r4) */ // 0x80633980
    r3 = *(0x90 + r3); // lwz @ 0x80633984
    /* lfs f1, 0x10(r4) */ // 0x80633988
    /* lfs f2, 0xc(r4) */ // 0x8063398C
    /* stfs f2, 0x64(r3) */ // 0x80633990
    /* stfs f1, 0x68(r3) */ // 0x80633994
    /* stfs f0, 0x6c(r3) */ // 0x80633998
    r31 = *(0xc + r1); // lwz @ 0x8063399C
    r0 = *(0x14 + r1); // lwz @ 0x806339A0
    return;
}