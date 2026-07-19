/* Function at 0x80824A34, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80824A34(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3 + 0x48; // 0x80824A44
    *(8 + r1) = r30; // stw @ 0x80824A48
    /* li r30, 0 */ // 0x80824A4C
    r0 = *(0x10 + r31); // lwz @ 0x80824A50
    if (==) goto 0x0x80824a64;
    r3 = r31;
    FUN_80821BC4(r3); // bl 0x80821BC4
    r30 = r30 + 1; // 0x80824A64
    r31 = r31 + 0x24; // 0x80824A68
    if (<) goto 0x0x80824a50;
    r0 = *(0x14 + r1); // lwz @ 0x80824A74
    r31 = *(0xc + r1); // lwz @ 0x80824A78
    r30 = *(8 + r1); // lwz @ 0x80824A7C
    return;
}