/* Function at 0x80812478, size=228 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80812478(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80812488
    r30 = r3;
    r0 = *(0xb8 + r3); // lbz @ 0x80812490
    if (==) goto 0x0x80812544;
    r12 = *(0 + r3); // lwz @ 0x8081249C
    /* li r31, 0 */ // 0x808124A0
    r12 = *(0x30 + r12); // lwz @ 0x808124A4
    /* mtctr r12 */ // 0x808124A8
    /* bctrl  */ // 0x808124AC
    /* lis r4, 0x101 */ // 0x808124B0
    r0 = *(0x20 + r3); // lwz @ 0x808124B4
    r3 = r4 + 0x101; // 0x808124B8
    /* andc. r0, r3, r0 */ // 0x808124BC
    if (!=) goto 0x0x808124dc;
    /* lis r3, 0 */ // 0x808124C4
    r3 = *(0 + r3); // lwz @ 0x808124C8
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x808124dc;
    /* li r31, 1 */ // 0x808124D8
    if (!=) goto 0x0x80812530;
    r3 = *(0xb4 + r30); // lwz @ 0x808124E4
    r12 = *(0 + r3); // lwz @ 0x808124E8
    r12 = *(0xc + r12); // lwz @ 0x808124EC
    /* mtctr r12 */ // 0x808124F0
    /* bctrl  */ // 0x808124F4
    r3 = r30;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = *(0xb4 + r30); // lwz @ 0x80812500
    r4 = r30 + 0x58; // 0x80812504
    r12 = *(0 + r3); // lwz @ 0x80812508
    r12 = *(0x78 + r12); // lwz @ 0x8081250C
    /* mtctr r12 */ // 0x80812510
    /* bctrl  */ // 0x80812514
    r3 = *(0xb4 + r30); // lwz @ 0x80812518
    r12 = *(0 + r3); // lwz @ 0x8081251C
    r12 = *(0x80 + r12); // lwz @ 0x80812520
    /* mtctr r12 */ // 0x80812524
    /* bctrl  */ // 0x80812528
    /* b 0x80812544 */ // 0x8081252C
    r3 = *(0xb4 + r30); // lwz @ 0x80812530
    r12 = *(0 + r3); // lwz @ 0x80812534
    r12 = *(0x10 + r12); // lwz @ 0x80812538
    /* mtctr r12 */ // 0x8081253C
    /* bctrl  */ // 0x80812540
    r0 = *(0x14 + r1); // lwz @ 0x80812544
    r31 = *(0xc + r1); // lwz @ 0x80812548
    r30 = *(8 + r1); // lwz @ 0x8081254C
    return;
}