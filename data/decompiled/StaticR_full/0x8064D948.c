/* Function at 0x8064D948, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8064D948(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 1 */ // 0x8064D954
    *(0xc + r1) = r31; // stw @ 0x8064D958
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8064D960
    r30 = r3;
    *(0xa50 + r3) = r0; // stw @ 0x8064D968
    r3 = r31;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r30;
    /* li r4, 1 */ // 0x8064D978
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x824 + r30); // lwz @ 0x8064D980
    if (==) goto 0x0x8064d9ac;
    r3 = r31;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = *(0x824 + r30); // lwz @ 0x8064D994
    r4 = r30;
    r12 = *(0 + r3); // lwz @ 0x8064D99C
    r12 = *(8 + r12); // lwz @ 0x8064D9A0
    /* mtctr r12 */ // 0x8064D9A4
    /* bctrl  */ // 0x8064D9A8
    r0 = *(0x14 + r1); // lwz @ 0x8064D9AC
    r31 = *(0xc + r1); // lwz @ 0x8064D9B0
    r30 = *(8 + r1); // lwz @ 0x8064D9B4
    return;
}