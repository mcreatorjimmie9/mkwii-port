/* Function at 0x805AFBFC, size=328 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_805AFBFC(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x805AFC04
    /* lis r4, 0 */ // 0x805AFC08
    *(0x14 + r1) = r0; // stw @ 0x805AFC0C
    /* lis r8, 0 */ // 0x805AFC10
    /* lfs f1, 0(r4) */ // 0x805AFC14
    /* lis r4, 0 */ // 0x805AFC18
    *(0xc + r1) = r31; // stw @ 0x805AFC1C
    /* lis r31, 0 */ // 0x805AFC20
    /* lfs f0, 0(r4) */ // 0x805AFC24
    /* lis r12, 0 */ // 0x805AFC28
    *(8 + r1) = r30; // stw @ 0x805AFC2C
    /* li r11, 0 */ // 0x805AFC30
    /* li r10, 7 */ // 0x805AFC34
    r8 = r8 + 0; // 0x805AFC38
    r7 = *(0x4c + r3); // lbz @ 0x805AFC3C
    r6 = r6 + 0; // 0x805AFC40
    r0 = *(0x8c + r3); // lbz @ 0x805AFC44
    r31 = r31 + 0; // 0x805AFC48
    r7 = r7 rlwinm 0; // rlwinm
    r9 = *(0x18 + r3); // lbz @ 0x805AFC50
    *(0 + r3) = r6; // stw @ 0x805AFC54
    r5 = r0 rlwinm 0; // rlwinm
    r9 = r9 rlwinm 0; // rlwinm
    /* li r0, -1 */ // 0x805AFC64
    *(0x4c + r3) = r7; // stb @ 0x805AFC68
    r6 = r7 rlwinm 0; // rlwinm
    r30 = r3;
    *(4 + r3) = r31; // stw @ 0x805AFC74
    /* li r4, 0 */ // 0x805AFC78
    *(8 + r3) = r11; // sth @ 0x805AFC7C
    *(0xa + r3) = r11; // sth @ 0x805AFC80
    /* stfs f1, 0x10(r3) */ // 0x805AFC84
    /* stfs f1, 0xc(r3) */ // 0x805AFC88
    *(0x14 + r3) = r10; // stb @ 0x805AFC8C
    *(0x15 + r3) = r10; // stb @ 0x805AFC90
    *(0x16 + r3) = r11; // stb @ 0x805AFC94
    *(0x17 + r3) = r11; // stb @ 0x805AFC98
    *(0x18 + r3) = r9; // stb @ 0x805AFC9C
    *(0x1c + r3) = r8; // stw @ 0x805AFCA0
    *(0x20 + r3) = r11; // sth @ 0x805AFCA4
    *(0x22 + r3) = r11; // sth @ 0x805AFCA8
    /* stfs f1, 0x28(r3) */ // 0x805AFCAC
    /* stfs f1, 0x24(r3) */ // 0x805AFCB0
    *(0x34 + r3) = r10; // stb @ 0x805AFCB4
    *(0x35 + r3) = r10; // stb @ 0x805AFCB8
    /* stfs f0, 0x38(r3) */ // 0x805AFCBC
    /* stfs f0, 0x3c(r3) */ // 0x805AFCC0
    /* stfs f1, 0x44(r3) */ // 0x805AFCC4
    /* stfs f1, 0x40(r3) */ // 0x805AFCC8
    /* stfs f1, 0x48(r3) */ // 0x805AFCCC
    *(0x4c + r3) = r6; // stb @ 0x805AFCD0
    *(0x50 + r3) = r11; // stb @ 0x805AFCD4
    *(0x54 + r3) = r10; // stw @ 0x805AFCD8
    *(0x58 + r3) = r11; // stb @ 0x805AFCDC
    *(0x5c + r3) = r8; // stw @ 0x805AFCE0
    *(0x60 + r3) = r11; // sth @ 0x805AFCE4
    *(0x62 + r3) = r11; // sth @ 0x805AFCE8
    /* stfs f1, 0x68(r3) */ // 0x805AFCEC
    /* stfs f1, 0x64(r3) */ // 0x805AFCF0
    *(0x74 + r3) = r10; // stb @ 0x805AFCF4
    *(0x75 + r3) = r10; // stb @ 0x805AFCF8
    /* stfs f0, 0x78(r3) */ // 0x805AFCFC
    /* stfs f0, 0x7c(r3) */ // 0x805AFD00
    /* stfs f1, 0x84(r3) */ // 0x805AFD04
    /* stfs f1, 0x80(r3) */ // 0x805AFD08
    /* stfs f1, 0x88(r3) */ // 0x805AFD0C
    *(0x8c + r3) = r5; // stb @ 0x805AFD10
    *(0 + r3) = r12; // stw @ 0x805AFD14
    *(0x9c + r3) = r0; // stw @ 0x805AFD18
    r12 = *(0x44 + r12); // lwz @ 0x805AFD1C
    /* mtctr r12 */ // 0x805AFD20
    /* bctrl  */ // 0x805AFD24
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805AFD2C
    r30 = *(8 + r1); // lwz @ 0x805AFD30
    r0 = *(0x14 + r1); // lwz @ 0x805AFD34
    return;
}