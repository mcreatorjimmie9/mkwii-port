/* Function at 0x80884D40, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80884D40(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80884D4C
    r31 = r3;
    FUN_808A0CB8(); // bl 0x808A0CB8
    r12 = *(0 + r31); // lwz @ 0x80884D58
    r3 = r31;
    r12 = *(0x12c + r12); // lwz @ 0x80884D60
    /* mtctr r12 */ // 0x80884D64
    /* bctrl  */ // 0x80884D68
    r0 = *(0x14 + r1); // lwz @ 0x80884D6C
    r31 = *(0xc + r1); // lwz @ 0x80884D70
    return;
}