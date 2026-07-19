/* Function at 0x80824A8C, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80824A8C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3 + 0x48; // 0x80824A9C
    *(8 + r1) = r30; // stw @ 0x80824AA0
    /* li r30, 0 */ // 0x80824AA4
    r0 = *(0x14 + r31); // lwz @ 0x80824AA8
    if (==) goto 0x0x80824abc;
    r3 = r31;
    FUN_80821504(r3); // bl 0x80821504
    r30 = r30 + 1; // 0x80824ABC
    r31 = r31 + 0x24; // 0x80824AC0
    if (<) goto 0x0x80824aa8;
    r0 = *(0x14 + r1); // lwz @ 0x80824ACC
    r31 = *(0xc + r1); // lwz @ 0x80824AD0
    r30 = *(8 + r1); // lwz @ 0x80824AD4
    return;
}