/* Function at 0x8081255C, size=228 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8081255C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8081256C
    r30 = r3;
    r0 = *(0xb8 + r3); // lbz @ 0x80812574
    if (==) goto 0x0x80812628;
    r12 = *(0 + r3); // lwz @ 0x80812580
    /* li r31, 0 */ // 0x80812584
    r12 = *(0x30 + r12); // lwz @ 0x80812588
    /* mtctr r12 */ // 0x8081258C
    /* bctrl  */ // 0x80812590
    /* lis r4, 0x101 */ // 0x80812594
    r0 = *(0x20 + r3); // lwz @ 0x80812598
    r3 = r4 + 0x101; // 0x8081259C
    /* andc. r0, r3, r0 */ // 0x808125A0
    if (!=) goto 0x0x808125c0;
    /* lis r3, 0 */ // 0x808125A8
    r3 = *(0 + r3); // lwz @ 0x808125AC
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x808125c0;
    /* li r31, 1 */ // 0x808125BC
    if (!=) goto 0x0x80812614;
    r3 = *(0xb4 + r30); // lwz @ 0x808125C8
    r12 = *(0 + r3); // lwz @ 0x808125CC
    r12 = *(0xc + r12); // lwz @ 0x808125D0
    /* mtctr r12 */ // 0x808125D4
    /* bctrl  */ // 0x808125D8
    r3 = r30;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = *(0xb4 + r30); // lwz @ 0x808125E4
    r4 = r30 + 0x58; // 0x808125E8
    r12 = *(0 + r3); // lwz @ 0x808125EC
    r12 = *(0x78 + r12); // lwz @ 0x808125F0
    /* mtctr r12 */ // 0x808125F4
    /* bctrl  */ // 0x808125F8
    r3 = *(0xb4 + r30); // lwz @ 0x808125FC
    r12 = *(0 + r3); // lwz @ 0x80812600
    r12 = *(0x80 + r12); // lwz @ 0x80812604
    /* mtctr r12 */ // 0x80812608
    /* bctrl  */ // 0x8081260C
    /* b 0x80812628 */ // 0x80812610
    r3 = *(0xb4 + r30); // lwz @ 0x80812614
    r12 = *(0 + r3); // lwz @ 0x80812618
    r12 = *(0x10 + r12); // lwz @ 0x8081261C
    /* mtctr r12 */ // 0x80812620
    /* bctrl  */ // 0x80812624
    r0 = *(0x14 + r1); // lwz @ 0x80812628
    r31 = *(0xc + r1); // lwz @ 0x8081262C
    r30 = *(8 + r1); // lwz @ 0x80812630
    return;
}