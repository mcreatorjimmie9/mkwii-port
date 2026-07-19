/* Function at 0x80850708, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80850708(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x80850710
    *(0x14 + r1) = r0; // stw @ 0x80850714
    *(0xc + r1) = r31; // stw @ 0x80850718
    r31 = r3;
    r4 = r31;
    r3 = *(0xc + r3); // lwz @ 0x80850724
    r12 = *(0 + r3); // lwz @ 0x80850728
    r12 = *(0x138 + r12); // lwz @ 0x8085072C
    /* mtctr r12 */ // 0x80850730
    /* bctrl  */ // 0x80850734
    r0 = *(0xa8 + r31); // lbz @ 0x80850738
    /* li r3, 0 */ // 0x8085073C
    *(0xd4 + r31) = r3; // stb @ 0x80850740
    *(0xd5 + r31) = r3; // stb @ 0x80850748
    *(0xd6 + r31) = r3; // stb @ 0x8085074C
    if (!=) goto 0x0x8085075c;
    r3 = r31;
    FUN_8084EC6C(r3); // bl 0x8084EC6C
    r0 = *(0x14 + r1); // lwz @ 0x8085075C
    r31 = *(0xc + r1); // lwz @ 0x80850760
    return;
}