/* Function at 0x807F647C, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807F647C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807F6488
    r31 = r3;
    FUN_807F66AC(); // bl 0x807F66AC
    r12 = *(0 + r31); // lwz @ 0x807F6494
    r3 = r31;
    r12 = *(0x100 + r12); // lwz @ 0x807F649C
    /* mtctr r12 */ // 0x807F64A0
    /* bctrl  */ // 0x807F64A4
    r12 = *(0 + r31); // lwz @ 0x807F64A8
    r3 = r31;
    r12 = *(0xfc + r12); // lwz @ 0x807F64B0
    /* mtctr r12 */ // 0x807F64B4
    /* bctrl  */ // 0x807F64B8
    r0 = *(0xdc + r31); // lwz @ 0x807F64BC
    /* addic. r0, r0, -1 */ // 0x807F64C0
    *(0xdc + r31) = r0; // stw @ 0x807F64C4
    if (!=) goto 0x0x807f64e0;
    r12 = *(0 + r31); // lwz @ 0x807F64CC
    r3 = r31;
    r12 = *(0x104 + r12); // lwz @ 0x807F64D4
    /* mtctr r12 */ // 0x807F64D8
    /* bctrl  */ // 0x807F64DC
    r0 = *(0x14 + r1); // lwz @ 0x807F64E0
    r31 = *(0xc + r1); // lwz @ 0x807F64E4
    return;
}