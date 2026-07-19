/* Function at 0x805AECB4, size=292 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805AECB4(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r12, 0 */ // 0x805AECBC
    /* lis r4, 0 */ // 0x805AECC0
    *(0x14 + r1) = r0; // stw @ 0x805AECC4
    /* lis r11, 0 */ // 0x805AECC8
    /* lfs f1, 0(r4) */ // 0x805AECCC
    /* lis r4, 0 */ // 0x805AECD0
    *(0xc + r1) = r31; // stw @ 0x805AECD4
    /* li r10, 0 */ // 0x805AECD8
    /* li r9, 7 */ // 0x805AECDC
    /* lfs f0, 0(r4) */ // 0x805AECE0
    r6 = *(0x4c + r3); // lbz @ 0x805AECE4
    /* li r0, -1 */ // 0x805AECE8
    r5 = *(0x8c + r3); // lbz @ 0x805AECEC
    r8 = *(0x18 + r3); // lbz @ 0x805AECF4
    r6 = r6 rlwinm 0; // rlwinm
    /* lis r7, 0 */ // 0x805AECFC
    /* lis r4, 0 */ // 0x805AED00
    r7 = r7 + 0; // 0x805AED04
    *(0x4c + r3) = r6; // stb @ 0x805AED08
    r8 = r8 rlwinm 0; // rlwinm
    r5 = r5 rlwinm 0; // rlwinm
    r6 = r6 rlwinm 0; // rlwinm
    *(0 + r3) = r12; // stw @ 0x805AED1C
    r4 = r4 + 0; // 0x805AED20
    r31 = r3;
    *(4 + r3) = r11; // stw @ 0x805AED28
    *(8 + r3) = r10; // sth @ 0x805AED2C
    *(0xa + r3) = r10; // sth @ 0x805AED30
    /* stfs f1, 0x10(r3) */ // 0x805AED34
    /* stfs f1, 0xc(r3) */ // 0x805AED38
    *(0x14 + r3) = r9; // stb @ 0x805AED3C
    *(0x15 + r3) = r9; // stb @ 0x805AED40
    *(0x16 + r3) = r10; // stb @ 0x805AED44
    *(0x17 + r3) = r10; // stb @ 0x805AED48
    *(0x18 + r3) = r8; // stb @ 0x805AED4C
    *(0x1c + r3) = r7; // stw @ 0x805AED50
    *(0x20 + r3) = r10; // sth @ 0x805AED54
    *(0x22 + r3) = r10; // sth @ 0x805AED58
    /* stfs f1, 0x28(r3) */ // 0x805AED5C
    /* stfs f1, 0x24(r3) */ // 0x805AED60
    *(0x34 + r3) = r9; // stb @ 0x805AED64
    *(0x35 + r3) = r9; // stb @ 0x805AED68
    /* stfs f0, 0x38(r3) */ // 0x805AED6C
    /* stfs f0, 0x3c(r3) */ // 0x805AED70
    /* stfs f1, 0x44(r3) */ // 0x805AED74
    /* stfs f1, 0x40(r3) */ // 0x805AED78
    /* stfs f1, 0x48(r3) */ // 0x805AED7C
    *(0x4c + r3) = r6; // stb @ 0x805AED80
    *(0x50 + r3) = r10; // stb @ 0x805AED84
    *(0x54 + r3) = r9; // stw @ 0x805AED88
    *(0x58 + r3) = r10; // stb @ 0x805AED8C
    *(0x5c + r3) = r7; // stw @ 0x805AED90
    *(0x60 + r3) = r10; // sth @ 0x805AED94
    *(0x62 + r3) = r10; // sth @ 0x805AED98
    /* stfs f1, 0x68(r3) */ // 0x805AED9C
    /* stfs f1, 0x64(r3) */ // 0x805AEDA0
    *(0x74 + r3) = r9; // stb @ 0x805AEDA4
    *(0x75 + r3) = r9; // stb @ 0x805AEDA8
    /* stfs f0, 0x78(r3) */ // 0x805AEDAC
    /* stfs f0, 0x7c(r3) */ // 0x805AEDB0
    /* stfs f1, 0x84(r3) */ // 0x805AEDB4
    /* stfs f1, 0x80(r3) */ // 0x805AEDB8
    /* stfs f1, 0x88(r3) */ // 0x805AEDBC
    *(0x8c + r3) = r5; // stb @ 0x805AEDC0
    *(0 + r3) = r4; // stw @ 0x805AEDC4
    *(0x8d0 + r3) = r0; // stw @ 0x805AEDC8
    *(0x8d4 + r3) = r0; // stw @ 0x805AEDCC
    /* li r3, 0x94 */ // 0x805AEDD0
    FUN_805E3430(r3); // bl 0x805E3430
}