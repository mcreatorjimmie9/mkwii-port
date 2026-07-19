/* Function at 0x80779E70, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80779E70(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80779E7C
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80779E84
    r12 = *(0x94 + r12); // lwz @ 0x80779E88
    /* mtctr r12 */ // 0x80779E8C
    /* bctrl  */ // 0x80779E90
    /* lis r4, 0 */ // 0x80779E94
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x80779E9C
    /* li r4, 0x1d9 */ // 0x80779EA0
    FUN_808A0A88(r4, r3, r4); // bl 0x808A0A88
    r0 = *(0x14 + r1); // lwz @ 0x80779EA8
    r31 = *(0xc + r1); // lwz @ 0x80779EAC
    return;
}