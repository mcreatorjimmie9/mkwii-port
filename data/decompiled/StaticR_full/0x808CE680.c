/* Function at 0x808CE680, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808CE680(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808CE68C
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x808CE694
    r12 = *(0x64 + r12); // lwz @ 0x808CE698
    /* mtctr r12 */ // 0x808CE69C
    /* bctrl  */ // 0x808CE6A0
    if (!=) goto 0x0x808ce6c0;
    /* lis r4, 0 */ // 0x808CE6AC
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x808CE6B4
    /* li r4, -1 */ // 0x808CE6B8
    FUN_80671C48(r4, r3, r4); // bl 0x80671C48
    r0 = *(0x14 + r1); // lwz @ 0x808CE6C0
    r31 = *(0xc + r1); // lwz @ 0x808CE6C4
    return;
}