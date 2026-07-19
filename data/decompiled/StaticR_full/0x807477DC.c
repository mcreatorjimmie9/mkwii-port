/* Function at 0x807477DC, size=284 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31 */
/* Calls: 11 function(s) */

int FUN_807477DC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    *(0x9c + r1) = r31; // stw @ 0x807477E8
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x807477F0
    r12 = *(0xb4 + r12); // lwz @ 0x807477F4
    /* mtctr r12 */ // 0x807477F8
    /* bctrl  */ // 0x807477FC
    if (==) goto 0x0x807478e4;
    r3 = r31;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r4 = r31 + 0x58; // 0x80747814
    /* li r5, 2 */ // 0x80747818
    FUN_805C70D8(r3, r3, r4, r5); // bl 0x805C70D8
    /* lis r4, 0 */ // 0x80747820
    r4 = r4 + 0; // 0x80747828
    FUN_80743DF8(r4, r3, r4, r5); // bl 0x80743DF8
    r3 = r31;
    FUN_808A1BCC(r3, r4, r5, r3); // bl 0x808A1BCC
    r4 = r31 + 0x58; // 0x80747840
    /* li r5, 1 */ // 0x80747844
    FUN_805C70D8(r3, r3, r4, r5); // bl 0x805C70D8
    /* lis r4, 0 */ // 0x8074784C
    /* lfs f1, 0(r4) */ // 0x80747854
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    r3 = r31;
    FUN_808A1BCC(r3, r4, r3); // bl 0x808A1BCC
    r4 = r31 + 0x58; // 0x8074786C
    /* li r5, 3 */ // 0x80747870
    FUN_805C70D8(r3, r3, r4, r5); // bl 0x805C70D8
    FUN_805A4464(r5, r3, r4, r5); // bl 0x805A4464
    /* lfs f2, 0x20(r1) */ // 0x80747888
    /* lfs f1, 0x24(r1) */ // 0x80747890
    /* lfs f0, 0x28(r1) */ // 0x80747894
    /* stfs f2, 0x6c(r1) */ // 0x80747898
    /* stfs f1, 0x7c(r1) */ // 0x8074789C
    /* stfs f0, 0x8c(r1) */ // 0x807478A0
    r4 = *(0x20 + r31); // lwz @ 0x807478A4
    r4 = r4 + 0x24; // 0x807478A8
    FUN_805A4400(r4); // bl 0x805A4400
    r5 = *(0x20 + r31); // lwz @ 0x807478B0
    /* lfs f1, 0x30(r5) */ // 0x807478BC
    FUN_805A443C(r3, r4); // bl 0x805A443C
    r3 = *(0xac + r31); // lwz @ 0x807478C4
    r5 = r31 + 0x3c; // 0x807478CC
    r12 = *(0 + r3); // lwz @ 0x807478D4
    r12 = *(0x10 + r12); // lwz @ 0x807478D8
    /* mtctr r12 */ // 0x807478DC
    /* bctrl  */ // 0x807478E0
    r0 = *(0xa4 + r1); // lwz @ 0x807478E4
    r31 = *(0x9c + r1); // lwz @ 0x807478E8
    return;
}