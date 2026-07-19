/* Function at 0x80616EA8, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80616EA8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80616EB4
    r31 = r3;
    FUN_8061ECE4(); // bl 0x8061ECE4
    r0 = *(0x1c + r3); // lwz @ 0x80616EC0
    r4 = *(0x18 + r3); // lwz @ 0x80616EC4
    r0 = r0 rlwinm 0x15; // rlwinm
    r3 = r4 rlwinm 0x15; // rlwinm
    if (==) goto 0x0x80616eec;
    r12 = *(0xc + r31); // lwz @ 0x80616ED8
    r3 = r31;
    r12 = *(0x6c + r12); // lwz @ 0x80616EE0
    /* mtctr r12 */ // 0x80616EE4
    /* bctrl  */ // 0x80616EE8
    r3 = r31;
    FUN_8061ECE4(r3, r3); // bl 0x8061ECE4
    r0 = *(0x1c + r3); // lwz @ 0x80616EF4
    r4 = *(0x18 + r3); // lwz @ 0x80616EF8
    r0 = r0 rlwinm 0x14; // rlwinm
    r3 = r4 rlwinm 0x14; // rlwinm
    if (==) goto 0x0x80616f20;
    r12 = *(0xc + r31); // lwz @ 0x80616F0C
    r3 = r31;
    r12 = *(0x70 + r12); // lwz @ 0x80616F14
    /* mtctr r12 */ // 0x80616F18
    /* bctrl  */ // 0x80616F1C
    r0 = *(0x14 + r1); // lwz @ 0x80616F20
    r31 = *(0xc + r1); // lwz @ 0x80616F24
    return;
}