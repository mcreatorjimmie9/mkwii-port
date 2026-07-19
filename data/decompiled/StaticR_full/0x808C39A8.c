/* Function at 0x808C39A8, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808C39A8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 1 */ // 0x808C39B4
    *(0xc + r1) = r31; // stw @ 0x808C39B8
    *(8 + r1) = r30; // stw @ 0x808C39BC
    r30 = r3;
    *(0x3dc + r3) = r0; // stb @ 0x808C39C4
    FUN_808B2D44(); // bl 0x808B2D44
    /* lis r31, 0 */ // 0x808C39CC
    r3 = *(0 + r31); // lwz @ 0x808C39D0
    r3 = *(0 + r3); // lwz @ 0x808C39D4
    FUN_80685E54(); // bl 0x80685E54
    r12 = *(0 + r30); // lwz @ 0x808C39DC
    r3 = r30;
    r12 = *(0x70 + r12); // lwz @ 0x808C39E4
    /* mtctr r12 */ // 0x808C39E8
    /* bctrl  */ // 0x808C39EC
    /* li r4, 1 */ // 0x808C39F0
    FUN_8066A380(r3, r4); // bl 0x8066A380
    r3 = *(0 + r31); // lwz @ 0x808C39F8
    r3 = *(0 + r3); // lwz @ 0x808C39FC
    r0 = *(0 + r3); // lwz @ 0x808C3A00
    if (==) goto 0x0x808c3a14;
    if (!=) goto 0x0x808c3a30;
    r12 = *(0 + r30); // lwz @ 0x808C3A14
    r3 = r30;
    r4 = *(0x48 + r30); // lwz @ 0x808C3A1C
    r12 = *(0x78 + r12); // lwz @ 0x808C3A20
    r4 = *(4 + r4); // lwz @ 0x808C3A24
    /* mtctr r12 */ // 0x808C3A28
    /* bctrl  */ // 0x808C3A2C
    r0 = *(0x14 + r1); // lwz @ 0x808C3A30
    r31 = *(0xc + r1); // lwz @ 0x808C3A34
    r30 = *(8 + r1); // lwz @ 0x808C3A38
    return;
}