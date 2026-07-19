/* Function at 0x808C3190, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808C3190(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x808C3198
    *(0x14 + r1) = r0; // stw @ 0x808C319C
    *(0xc + r1) = r31; // stw @ 0x808C31A0
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x808C31A8
    r3 = *(0 + r3); // lwz @ 0x808C31AC
    r3 = *(0 + r3); // lwz @ 0x808C31B0
    FUN_80694774(); // bl 0x80694774
    if (==) goto 0x0x808c31c8;
    r3 = r31;
    FUN_808B4A48(r3); // bl 0x808B4A48
    r0 = *(0x14 + r1); // lwz @ 0x808C31C8
    r31 = *(0xc + r1); // lwz @ 0x808C31CC
    return;
}