/* Function at 0x8064D8CC, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8064D8CC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 0 */ // 0x8064D8D8
    *(0xc + r1) = r31; // stw @ 0x8064D8DC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8064D8E4
    r30 = r3;
    *(0xa50 + r3) = r0; // stw @ 0x8064D8EC
    r3 = r31;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r30;
    /* li r4, 0 */ // 0x8064D8FC
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x820 + r30); // lwz @ 0x8064D904
    if (==) goto 0x0x8064d930;
    r3 = r31;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = *(0x820 + r30); // lwz @ 0x8064D918
    r4 = r30;
    r12 = *(0 + r3); // lwz @ 0x8064D920
    r12 = *(8 + r12); // lwz @ 0x8064D924
    /* mtctr r12 */ // 0x8064D928
    /* bctrl  */ // 0x8064D92C
    r0 = *(0x14 + r1); // lwz @ 0x8064D930
    r31 = *(0xc + r1); // lwz @ 0x8064D934
    r30 = *(8 + r1); // lwz @ 0x8064D938
    return;
}