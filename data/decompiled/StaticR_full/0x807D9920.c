/* Function at 0x807D9920, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807D9920(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x807D9928
    *(0xc + r1) = r31; // stw @ 0x807D9930
    r31 = r4;
    /* clrlwi r4, r4, 0x18 */ // 0x807D9938
    *(8 + r1) = r30; // stw @ 0x807D993C
    r30 = r3;
    r3 = *(0 + r5); // lwz @ 0x807D9944
    FUN_805C5D80(); // bl 0x805C5D80
    *(8 + r30) = r3; // stb @ 0x807D994C
    *(0x30 + r30) = r31; // stw @ 0x807D9950
    r31 = *(0xc + r1); // lwz @ 0x807D9954
    r30 = *(8 + r1); // lwz @ 0x807D9958
    r0 = *(0x14 + r1); // lwz @ 0x807D995C
    return;
}