/* Function at 0x807B6BC8, size=28 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807B6BC8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807B6BD4
    r31 = r3;
    r3 = r3 + 0x20; // 0x807B6BDC
    FUN_805E3430(r3); // bl 0x805E3430
}