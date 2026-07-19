/* Function at 0x808B3ADC, size=272 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808B3ADC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* stfd f31, 0x18(r1) */ // 0x808B3AE8
    *(0x10 + r1) = r30; // stw @ 0x808B3AF0
    r30 = r4;
    *(0xc + r1) = r29; // stw @ 0x808B3AF8
    r29 = r3;
    r3 = r5;
    FUN_8064A384(r3); // bl 0x8064A384
    *(0x3e8 + r29) = r30; // stw @ 0x808B3B08
    /* lis r3, 0 */ // 0x808B3B0C
    /* slwi r0, r30, 2 */ // 0x808B3B10
    /* fmr f31, f1 */ // 0x808B3B14
    r3 = *(0 + r3); // lwz @ 0x808B3B18
    r3 = *(0 + r3); // lwz @ 0x808B3B1C
    r3 = r3 + r0; // 0x808B3B20
    r30 = *(8 + r3); // lwz @ 0x808B3B24
    if (!=) goto 0x0x808b3b38;
    /* li r30, 0 */ // 0x808B3B30
    /* b 0x808b3b8c */ // 0x808B3B34
    /* lis r31, 0 */ // 0x808B3B38
    r31 = r31 + 0; // 0x808B3B3C
    if (==) goto 0x0x808b3b88;
    r12 = *(0 + r30); // lwz @ 0x808B3B44
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808B3B4C
    /* mtctr r12 */ // 0x808B3B50
    /* bctrl  */ // 0x808B3B54
    /* b 0x808b3b70 */ // 0x808B3B58
    if (!=) goto 0x0x808b3b6c;
    /* li r0, 1 */ // 0x808B3B64
    /* b 0x808b3b7c */ // 0x808B3B68
    r3 = *(0 + r3); // lwz @ 0x808B3B6C
    if (!=) goto 0x0x808b3b5c;
    /* li r0, 0 */ // 0x808B3B78
    if (==) goto 0x0x808b3b88;
    /* b 0x808b3b8c */ // 0x808B3B84
    /* li r30, 0 */ // 0x808B3B88
    if (==) goto 0x0x808b3b9c;
    r0 = *(4 + r29); // lwz @ 0x808B3B94
    *(0x3e8 + r30) = r0; // stw @ 0x808B3B98
    r0 = *(0x42c + r29); // lbz @ 0x808B3B9C
    if (!=) goto 0x0x808b3bcc;
    r0 = *(8 + r29); // lwz @ 0x808B3BA8
    if (!=) goto 0x0x808b3bcc;
    /* fmr f1, f31 */ // 0x808B3BB4
    r3 = r29;
    /* li r4, 1 */ // 0x808B3BBC
    FUN_80671C48(r3, r4); // bl 0x80671C48
    /* li r0, 1 */ // 0x808B3BC4
    *(0x42c + r29) = r0; // stb @ 0x808B3BC8
    r0 = *(0x24 + r1); // lwz @ 0x808B3BCC
    /* lfd f31, 0x18(r1) */ // 0x808B3BD0
    r31 = *(0x14 + r1); // lwz @ 0x808B3BD4
    r30 = *(0x10 + r1); // lwz @ 0x808B3BD8
    r29 = *(0xc + r1); // lwz @ 0x808B3BDC
    return;
}