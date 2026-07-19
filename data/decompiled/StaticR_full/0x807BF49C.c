/* Function at 0x807BF49C, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807BF49C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807BF4A8
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x807BF4B0
    r12 = *(0x18 + r12); // lwz @ 0x807BF4B4
    /* mtctr r12 */ // 0x807BF4B8
    /* bctrl  */ // 0x807BF4BC
    r3 = r31;
    FUN_807BF4E8(r3); // bl 0x807BF4E8
    r0 = *(0x14 + r1); // lwz @ 0x807BF4C8
    r31 = *(0xc + r1); // lwz @ 0x807BF4CC
    return;
}