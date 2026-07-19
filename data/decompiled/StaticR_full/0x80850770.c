/* Function at 0x80850770, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80850770(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x80850778
    *(0x14 + r1) = r0; // stw @ 0x8085077C
    *(0xc + r1) = r31; // stw @ 0x80850780
    r31 = r3;
    r4 = r31;
    r3 = *(0xc + r3); // lwz @ 0x8085078C
    r12 = *(0 + r3); // lwz @ 0x80850790
    r12 = *(0x138 + r12); // lwz @ 0x80850794
    /* mtctr r12 */ // 0x80850798
    /* bctrl  */ // 0x8085079C
    r0 = *(0xa8 + r31); // lbz @ 0x808507A0
    /* li r3, 0 */ // 0x808507A4
    *(0xd4 + r31) = r3; // stb @ 0x808507A8
    *(0xd5 + r31) = r3; // stb @ 0x808507B0
    *(0xd6 + r31) = r3; // stb @ 0x808507B4
    if (!=) goto 0x0x808507c4;
    r3 = r31;
    FUN_8084EC6C(r3); // bl 0x8084EC6C
    r0 = *(0x14 + r1); // lwz @ 0x808507C4
    r31 = *(0xc + r1); // lwz @ 0x808507C8
    return;
}