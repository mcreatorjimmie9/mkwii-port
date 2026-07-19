/* Function at 0x807B5094, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807B5094(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x807B509C
    *(0xc + r1) = r31; // stw @ 0x807B50A4
    *(8 + r1) = r30; // stw @ 0x807B50A8
    r30 = r3;
    r5 = *(4 + r3); // lwz @ 0x807B50B0
    r3 = *(0x28 + r5); // lwz @ 0x807B50B4
    FUN_805E7060(); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x807B50BC
    /* lis r31, 0 */ // 0x807B50C0
    /* lfs f1, 0(r31) */ // 0x807B50C4
    r12 = *(0x1c + r12); // lwz @ 0x807B50C8
    /* mtctr r12 */ // 0x807B50CC
    /* bctrl  */ // 0x807B50D0
    r3 = *(0x1c + r30); // lwz @ 0x807B50D4
    /* li r4, 0 */ // 0x807B50D8
    r3 = *(0x28 + r3); // lwz @ 0x807B50DC
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x807B50E4
    /* lfs f1, 0(r31) */ // 0x807B50E8
    r12 = *(0x1c + r12); // lwz @ 0x807B50EC
    /* mtctr r12 */ // 0x807B50F0
    /* bctrl  */ // 0x807B50F4
    r0 = *(0x14 + r1); // lwz @ 0x807B50F8
    r31 = *(0xc + r1); // lwz @ 0x807B50FC
    r30 = *(8 + r1); // lwz @ 0x807B5100
    return;
}