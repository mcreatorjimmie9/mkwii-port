/* Function at 0x8066C604, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8066C604(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 1 */ // 0x8066C60C
    /* li r5, 0 */ // 0x8066C610
    *(0x14 + r1) = r0; // stw @ 0x8066C614
    /* li r0, 0 */ // 0x8066C618
    *(0xc + r1) = r31; // stw @ 0x8066C61C
    r31 = r3;
    *(0x1a0 + r3) = r4; // stw @ 0x8066C624
    /* li r4, 1 */ // 0x8066C628
    *(0x1a4 + r3) = r0; // stb @ 0x8066C62C
    r12 = *(0x44 + r3); // lwzu @ 0x8066C630
    r12 = *(0x10 + r12); // lwz @ 0x8066C634
    /* mtctr r12 */ // 0x8066C638
    /* bctrl  */ // 0x8066C63C
    r3 = r31;
    r4 = r31 + 0x44; // 0x8066C644
    FUN_80671C34(r3, r4); // bl 0x80671C34
    r3 = r31 + 0x44; // 0x8066C64C
    r5 = r31 + 0x18c; // 0x8066C650
    /* li r4, 0 */ // 0x8066C654
    /* li r6, 0 */ // 0x8066C658
    FUN_80668D34(r3, r5, r4, r6); // bl 0x80668D34
    r0 = *(0x14 + r1); // lwz @ 0x8066C660
    r31 = *(0xc + r1); // lwz @ 0x8066C664
    return;
}