/* Function at 0x805BD9AC, size=492 bytes */
/* Stack frame: 0 bytes */

int FUN_805BD9AC(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    r4 = *(0x1780 + r3); // lwz @ 0x805BD9AC
    /* li r6, 1 */ // 0x805BD9B0
    /* li r0, 2 */ // 0x805BD9B4
    /* li r11, 0 */ // 0x805BD9B8
    r4 = r4 rlwinm 0; // rlwinm
    /* li r5, 3 */ // 0x805BD9C0
    *(0x1770 + r3) = r11; // stw @ 0x805BD9C4
    /* li r12, 0 */ // 0x805BD9C8
    *(0x176c + r3) = r6; // stw @ 0x805BD9CC
    *(0x177d + r3) = r5; // stb @ 0x805BD9D0
    *(0x175c + r3) = r6; // stw @ 0x805BD9D4
    *(0x1780 + r3) = r4; // stw @ 0x805BD9D8
    /* mtctr r0 */ // 0x805BD9DC
    /* clrlwi r10, r12, 0x18 */ // 0x805BD9E0
    /* mulli r5, r10, 0xf0 */ // 0x805BD9E8
    /* clrlwi r7, r0, 0x18 */ // 0x805BD9F0
    r9 = r3 + r5; // 0x805BD9F8
    /* clrlwi r8, r4, 0x18 */ // 0x805BD9FC
    *(0xcf0 + r9) = r11; // sth @ 0x805BDA00
    /* clrlwi r6, r0, 0x18 */ // 0x805BDA04
    *(0xcf6 + r9) = r11; // sth @ 0x805BDA10
    /* clrlwi r5, r4, 0x18 */ // 0x805BDA14
    /* clrlwi r4, r0, 0x18 */ // 0x805BDA1C
    *(0xcf9 + r9) = r10; // stb @ 0x805BDA20
    r0 = r8 + 1; // 0x805BDA24
    r7 = r7 + 1; // 0x805BDA28
    r6 = r6 + 1; // 0x805BDA2C
    *(0xcf8 + r9) = r10; // stb @ 0x805BDA30
    r5 = r5 + 1; // 0x805BDA34
    r4 = r4 + 1; // 0x805BDA38
    *(0xde0 + r9) = r11; // sth @ 0x805BDA40
    *(0xde6 + r9) = r11; // sth @ 0x805BDA44
    *(0xde9 + r9) = r0; // stb @ 0x805BDA48
    *(0xde8 + r9) = r0; // stb @ 0x805BDA4C
    *(0xed0 + r9) = r11; // sth @ 0x805BDA50
    *(0xed6 + r9) = r11; // sth @ 0x805BDA54
    *(0xed9 + r9) = r7; // stb @ 0x805BDA58
    *(0xed8 + r9) = r7; // stb @ 0x805BDA5C
    *(0xfc0 + r9) = r11; // sth @ 0x805BDA60
    *(0xfc6 + r9) = r11; // sth @ 0x805BDA64
    *(0xfc9 + r9) = r6; // stb @ 0x805BDA68
    *(0xfc8 + r9) = r6; // stb @ 0x805BDA6C
    *(0x10b0 + r9) = r11; // sth @ 0x805BDA70
    *(0x10b6 + r9) = r11; // sth @ 0x805BDA74
    *(0x10b9 + r9) = r5; // stb @ 0x805BDA78
    *(0x10b8 + r9) = r5; // stb @ 0x805BDA7C
    *(0x11a0 + r9) = r11; // sth @ 0x805BDA80
    *(0x11a6 + r9) = r11; // sth @ 0x805BDA84
    *(0x11a9 + r9) = r4; // stb @ 0x805BDA88
    *(0x11a8 + r9) = r4; // stb @ 0x805BDA8C
    if (counter-- != 0) goto 0x0x805bd9e0;
    r4 = *(0x2370 + r3); // lwz @ 0x805BDA94
    /* li r11, 0 */ // 0x805BDA98
    /* li r0, 2 */ // 0x805BDA9C
    /* li r6, 3 */ // 0x805BDAA0
    /* li r5, 1 */ // 0x805BDAA4
    r4 = r4 rlwinm 0; // rlwinm
    *(0x177c + r3) = r11; // stb @ 0x805BDAAC
    /* li r12, 0 */ // 0x805BDAB0
    *(0x177d + r3) = r6; // stb @ 0x805BDAB4
    *(0x2360 + r3) = r11; // stw @ 0x805BDAB8
    *(0x235c + r3) = r5; // stw @ 0x805BDABC
    *(0x236d + r3) = r6; // stb @ 0x805BDAC0
    *(0x234c + r3) = r5; // stw @ 0x805BDAC4
    *(0x2370 + r3) = r4; // stw @ 0x805BDAC8
    /* mtctr r0 */ // 0x805BDACC
    /* clrlwi r10, r12, 0x18 */ // 0x805BDAD0
    /* mulli r5, r10, 0xf0 */ // 0x805BDAD8
    /* clrlwi r7, r0, 0x18 */ // 0x805BDAE0
    r9 = r3 + r5; // 0x805BDAE8
    /* clrlwi r8, r4, 0x18 */ // 0x805BDAEC
    *(0x18e0 + r9) = r11; // sth @ 0x805BDAF0
    /* clrlwi r6, r0, 0x18 */ // 0x805BDAF4
    *(0x18e6 + r9) = r11; // sth @ 0x805BDB00
    /* clrlwi r5, r4, 0x18 */ // 0x805BDB04
    /* clrlwi r4, r0, 0x18 */ // 0x805BDB0C
    *(0x18e9 + r9) = r10; // stb @ 0x805BDB10
    r0 = r8 + 1; // 0x805BDB14
    r7 = r7 + 1; // 0x805BDB18
    r6 = r6 + 1; // 0x805BDB1C
    *(0x18e8 + r9) = r10; // stb @ 0x805BDB20
    r5 = r5 + 1; // 0x805BDB24
    r4 = r4 + 1; // 0x805BDB28
    *(0x19d0 + r9) = r11; // sth @ 0x805BDB30
    *(0x19d6 + r9) = r11; // sth @ 0x805BDB34
    *(0x19d9 + r9) = r0; // stb @ 0x805BDB38
    *(0x19d8 + r9) = r0; // stb @ 0x805BDB3C
    *(0x1ac0 + r9) = r11; // sth @ 0x805BDB40
    *(0x1ac6 + r9) = r11; // sth @ 0x805BDB44
    *(0x1ac9 + r9) = r7; // stb @ 0x805BDB48
    *(0x1ac8 + r9) = r7; // stb @ 0x805BDB4C
    *(0x1bb0 + r9) = r11; // sth @ 0x805BDB50
    *(0x1bb6 + r9) = r11; // sth @ 0x805BDB54
    *(0x1bb9 + r9) = r6; // stb @ 0x805BDB58
    *(0x1bb8 + r9) = r6; // stb @ 0x805BDB5C
    *(0x1ca0 + r9) = r11; // sth @ 0x805BDB60
    *(0x1ca6 + r9) = r11; // sth @ 0x805BDB64
    *(0x1ca9 + r9) = r5; // stb @ 0x805BDB68
    *(0x1ca8 + r9) = r5; // stb @ 0x805BDB6C
    *(0x1d90 + r9) = r11; // sth @ 0x805BDB70
    *(0x1d96 + r9) = r11; // sth @ 0x805BDB74
    *(0x1d99 + r9) = r4; // stb @ 0x805BDB78
    *(0x1d98 + r9) = r4; // stb @ 0x805BDB7C
    if (counter-- != 0) goto 0x0x805bdad0;
    /* li r4, 0 */ // 0x805BDB84
    /* li r0, 3 */ // 0x805BDB88
    *(0x236c + r3) = r4; // stb @ 0x805BDB8C
    *(0x236d + r3) = r0; // stb @ 0x805BDB90
    return;
}