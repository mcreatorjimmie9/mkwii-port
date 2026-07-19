/* Function at 0x808D7750, size=156 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808D7750(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x808D7758
    *(0xc + r1) = r31; // stw @ 0x808D7760
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808D7768
    r30 = r3;
    FUN_8089B9C4(); // bl 0x8089B9C4
    /* lis r3, 0 */ // 0x808D7774
    /* li r0, 0 */ // 0x808D7778
    r3 = r3 + 0; // 0x808D777C
    /* li r6, 0xd */ // 0x808D7780
    /* li r4, 0x14 */ // 0x808D7784
    *(0 + r30) = r3; // stw @ 0x808D7788
    /* lis r5, 0 */ // 0x808D778C
    r3 = r30;
    *(0xb4 + r30) = r6; // stw @ 0x808D7794
    *(0xb8 + r30) = r4; // stw @ 0x808D7798
    *(0xbc + r30) = r0; // stw @ 0x808D779C
    *(0xc0 + r30) = r0; // stw @ 0x808D77A0
    r4 = *(0 + r31); // lwz @ 0x808D77A4
    r4 = *(0x2a + r4); // lha @ 0x808D77A8
    r0 = r4 + -1; // 0x808D77AC
    /* cntlzw r0, r0 */ // 0x808D77B0
    /* srwi r0, r0, 5 */ // 0x808D77B4
    *(0xc4 + r30) = r0; // stb @ 0x808D77B8
    r4 = *(0 + r5); // lwzu @ 0x808D77BC
    r0 = *(4 + r5); // lwz @ 0x808D77C0
    *(0xcc + r30) = r0; // stw @ 0x808D77C4
    *(0xc8 + r30) = r4; // stw @ 0x808D77C8
    r0 = *(8 + r5); // lwz @ 0x808D77CC
    *(0xd0 + r30) = r0; // stw @ 0x808D77D0
    r31 = *(0xc + r1); // lwz @ 0x808D77D4
    r30 = *(8 + r1); // lwz @ 0x808D77D8
    r0 = *(0x14 + r1); // lwz @ 0x808D77DC
    return;
}