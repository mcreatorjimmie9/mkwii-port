/* Function at 0x806B7850, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806B7850(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x806B7858
    *(0x14 + r1) = r0; // stw @ 0x806B785C
    *(0xc + r1) = r31; // stw @ 0x806B7860
    r31 = r3;
    r3 = *(0 + r5); // lwz @ 0x806B7868
    r3 = *(0 + r3); // lwz @ 0x806B786C
    r0 = *(0 + r3); // lwz @ 0x806B7870
    if (!=) goto 0x0x806b78a4;
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r31); // lwz @ 0x806B7884
    r3 = r31;
    /* li r4, 0x8c */ // 0x806B788C
    /* li r5, 0 */ // 0x806B7890
    r12 = *(0x1c + r12); // lwz @ 0x806B7894
    /* mtctr r12 */ // 0x806B7898
    /* bctrl  */ // 0x806B789C
    /* b 0x806b78c8 */ // 0x806B78A0
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r31); // lwz @ 0x806B78AC
    r3 = r31;
    /* li r4, 0x7a */ // 0x806B78B4
    /* li r5, 0 */ // 0x806B78B8
    r12 = *(0x1c + r12); // lwz @ 0x806B78BC
    /* mtctr r12 */ // 0x806B78C0
    /* bctrl  */ // 0x806B78C4
    r0 = *(0x14 + r1); // lwz @ 0x806B78C8
    r31 = *(0xc + r1); // lwz @ 0x806B78CC
    return;
}