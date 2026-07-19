/* Function at 0x808BEEEC, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808BEEEC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808BEEF4
    /* slwi r0, r3, 2 */ // 0x808BEEFC
    *(0xc + r1) = r31; // stw @ 0x808BEF00
    *(8 + r1) = r30; // stw @ 0x808BEF04
    r3 = *(0 + r4); // lwz @ 0x808BEF08
    r3 = *(0 + r3); // lwz @ 0x808BEF0C
    r3 = r3 + r0; // 0x808BEF10
    r30 = *(8 + r3); // lwz @ 0x808BEF14
    if (!=) goto 0x0x808bef28;
    /* li r30, 0 */ // 0x808BEF20
    /* b 0x808bef7c */ // 0x808BEF24
    /* lis r31, 0 */ // 0x808BEF28
    r31 = r31 + 0; // 0x808BEF2C
    if (==) goto 0x0x808bef78;
    r12 = *(0 + r30); // lwz @ 0x808BEF34
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808BEF3C
    /* mtctr r12 */ // 0x808BEF40
    /* bctrl  */ // 0x808BEF44
    /* b 0x808bef60 */ // 0x808BEF48
    if (!=) goto 0x0x808bef5c;
    /* li r0, 1 */ // 0x808BEF54
    /* b 0x808bef6c */ // 0x808BEF58
    r3 = *(0 + r3); // lwz @ 0x808BEF5C
    if (!=) goto 0x0x808bef4c;
    /* li r0, 0 */ // 0x808BEF68
    if (==) goto 0x0x808bef78;
    /* b 0x808bef7c */ // 0x808BEF74
    /* li r30, 0 */ // 0x808BEF78
    if (!=) goto 0x0x808bef8c;
    /* li r30, 0 */ // 0x808BEF84
    /* b 0x808befe0 */ // 0x808BEF88
    /* lis r31, 0 */ // 0x808BEF8C
    r31 = r31 + 0; // 0x808BEF90
    if (==) goto 0x0x808befdc;
    r12 = *(0 + r30); // lwz @ 0x808BEF98
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808BEFA0
    /* mtctr r12 */ // 0x808BEFA4
    /* bctrl  */ // 0x808BEFA8
    /* b 0x808befc4 */ // 0x808BEFAC
    if (!=) goto 0x0x808befc0;
    /* li r0, 1 */ // 0x808BEFB8
    /* b 0x808befd0 */ // 0x808BEFBC
    r3 = *(0 + r3); // lwz @ 0x808BEFC0
    if (!=) goto 0x0x808befb0;
    /* li r0, 0 */ // 0x808BEFCC
    if (==) goto 0x0x808befdc;
    /* b 0x808befe0 */ // 0x808BEFD8
    /* li r30, 0 */ // 0x808BEFDC
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808BEFE4
    r30 = *(8 + r1); // lwz @ 0x808BEFE8
    r0 = *(0x14 + r1); // lwz @ 0x808BEFEC
    return;
}