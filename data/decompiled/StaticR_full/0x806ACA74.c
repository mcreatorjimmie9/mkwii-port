/* Function at 0x806ACA74, size=220 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_806ACA74(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x806ACA7C
    *(0x14 + r1) = r29; // stw @ 0x806ACA8C
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806ACA94
    r28 = r3;
    r3 = *(0 + r5); // lwz @ 0x806ACA9C
    r3 = *(0 + r3); // lwz @ 0x806ACAA0
    r30 = *(0x244 + r3); // lwz @ 0x806ACAA4
    if (!=) goto 0x0x806acab8;
    /* li r30, 0 */ // 0x806ACAB0
    /* b 0x806acb0c */ // 0x806ACAB4
    /* lis r31, 0 */ // 0x806ACAB8
    r31 = r31 + 0; // 0x806ACABC
    if (==) goto 0x0x806acb08;
    r12 = *(0 + r30); // lwz @ 0x806ACAC4
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806ACACC
    /* mtctr r12 */ // 0x806ACAD0
    /* bctrl  */ // 0x806ACAD4
    /* b 0x806acaf0 */ // 0x806ACAD8
    if (!=) goto 0x0x806acaec;
    /* li r0, 1 */ // 0x806ACAE4
    /* b 0x806acafc */ // 0x806ACAE8
    r3 = *(0 + r3); // lwz @ 0x806ACAEC
    if (!=) goto 0x0x806acadc;
    /* li r0, 0 */ // 0x806ACAF8
    if (==) goto 0x0x806acb08;
    /* b 0x806acb0c */ // 0x806ACB04
    /* li r30, 0 */ // 0x806ACB08
    /* li r0, 0 */ // 0x806ACB0C
    *(0x1cf4 + r30) = r0; // stw @ 0x806ACB10
    /* li r0, 0x8c */ // 0x806ACB14
    r3 = r29;
    *(0xf30 + r28) = r0; // stw @ 0x806ACB1C
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r28;
    /* li r4, 0 */ // 0x806ACB28
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x806ACB30
    r31 = *(0x1c + r1); // lwz @ 0x806ACB34
    r30 = *(0x18 + r1); // lwz @ 0x806ACB38
    r29 = *(0x14 + r1); // lwz @ 0x806ACB3C
    r28 = *(0x10 + r1); // lwz @ 0x806ACB40
    return;
}