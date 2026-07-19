/* Function at 0x80802108, size=216 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80802108(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x80802118
    *(8 + r1) = r30; // stw @ 0x8080211C
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x80802124
    r12 = *(0x30 + r12); // lwz @ 0x80802128
    /* mtctr r12 */ // 0x8080212C
    /* bctrl  */ // 0x80802130
    /* lis r4, 0x101 */ // 0x80802134
    r0 = *(0x20 + r3); // lwz @ 0x80802138
    r3 = r4 + 0x101; // 0x8080213C
    /* andc. r0, r3, r0 */ // 0x80802140
    if (!=) goto 0x0x80802160;
    /* lis r3, 0 */ // 0x80802148
    r3 = *(0 + r3); // lwz @ 0x8080214C
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x80802160;
    /* li r31, 1 */ // 0x8080215C
    if (!=) goto 0x0x808021b4;
    r3 = *(0xb4 + r30); // lwz @ 0x80802168
    r12 = *(0 + r3); // lwz @ 0x8080216C
    r12 = *(0xc + r12); // lwz @ 0x80802170
    /* mtctr r12 */ // 0x80802174
    /* bctrl  */ // 0x80802178
    r3 = r30;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = *(0xb4 + r30); // lwz @ 0x80802184
    r4 = r30 + 0x58; // 0x80802188
    r12 = *(0 + r3); // lwz @ 0x8080218C
    r12 = *(0x78 + r12); // lwz @ 0x80802190
    /* mtctr r12 */ // 0x80802194
    /* bctrl  */ // 0x80802198
    r3 = *(0xb4 + r30); // lwz @ 0x8080219C
    r12 = *(0 + r3); // lwz @ 0x808021A0
    r12 = *(0x80 + r12); // lwz @ 0x808021A4
    /* mtctr r12 */ // 0x808021A8
    /* bctrl  */ // 0x808021AC
    /* b 0x808021c8 */ // 0x808021B0
    r3 = *(0xb4 + r30); // lwz @ 0x808021B4
    r12 = *(0 + r3); // lwz @ 0x808021B8
    r12 = *(0x10 + r12); // lwz @ 0x808021BC
    /* mtctr r12 */ // 0x808021C0
    /* bctrl  */ // 0x808021C4
    r0 = *(0x14 + r1); // lwz @ 0x808021C8
    r31 = *(0xc + r1); // lwz @ 0x808021CC
    r30 = *(8 + r1); // lwz @ 0x808021D0
    return;
}