/* Function at 0x80711120, size=48 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80711120(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8071112C
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80711134
    r12 = *(0x28 + r12); // lwz @ 0x80711138
    /* mtctr r12 */ // 0x8071113C
    /* bctrl  */ // 0x80711140
    /* lis r4, 0 */ // 0x80711144
    r4 = r4 + 0; // 0x80711148
    FUN_805E3430(r4, r4); // bl 0x805E3430
}