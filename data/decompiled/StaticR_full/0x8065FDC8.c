/* Function at 0x8065FDC8, size=592 bytes */
/* Stack frame: 464 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 16 function(s) */

int FUN_8065FDC8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -464(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0x1c8 + r1) = r30; // stw @ 0x8065FDE0
    r30 = r3;
    *(0x1c4 + r1) = r29; // stw @ 0x8065FDE8
    r29 = r5;
    if (==) goto 0x0x8065fe88;
    r3 = *(0x308 + r3); // lwz @ 0x8065FDF4
    r4 = r30 + 0x30c; // 0x8065FDF8
    FUN_805ACDE0(r4); // bl 0x805ACDE0
    r4 = r30 + 0x30c; // 0x8065FE04
    FUN_805ABFC4(r4, r3, r4); // bl 0x805ABFC4
    /* lis r5, 0 */ // 0x8065FE0C
    /* li r0, 3 */ // 0x8065FE10
    r3 = *(0 + r5); // lwz @ 0x8065FE14
    r4 = r30 + 0x30c; // 0x8065FE18
    *(0xd18 + r3) = r0; // stw @ 0x8065FE1C
    r3 = *(0 + r5); // lwz @ 0x8065FE20
    FUN_805C1484(r4); // bl 0x805C1484
    if (==) goto 0x0x8065fe50;
    /* lis r3, 0 */ // 0x8065FE30
    /* li r4, 0 */ // 0x8065FE34
    r3 = *(0 + r3); // lwz @ 0x8065FE38
    /* li r5, 1 */ // 0x8065FE3C
    r3 = *(0x98 + r3); // lwz @ 0x8065FE40
    r3 = r3 + 0x188; // 0x8065FE44
    FUN_8066E3B0(r4, r5, r3); // bl 0x8066E3B0
    /* b 0x8065fe6c */ // 0x8065FE4C
    /* lis r3, 0 */ // 0x8065FE50
    r3 = *(0 + r3); // lwz @ 0x8065FE58
    /* li r4, 1 */ // 0x8065FE5C
    r3 = *(0x98 + r3); // lwz @ 0x8065FE60
    r3 = r3 + 0x188; // 0x8065FE64
    FUN_8066DDCC(r5, r4, r3); // bl 0x8066DDCC
    /* lis r4, 0 */ // 0x8065FE6C
    r4 = r4 + 0; // 0x8065FE74
    /* li r5, 0xc */ // 0x8065FE78
    /* li r6, 5 */ // 0x8065FE7C
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* b 0x8065ff78 */ // 0x8065FE84
    /* lis r30, 0 */ // 0x8065FE88
    r3 = *(0 + r30); // lwz @ 0x8065FE8C
    r3 = *(0x18 + r3); // lwz @ 0x8065FE90
    FUN_805ABD4C(); // bl 0x805ABD4C
    if (==) goto 0x0x8065ff68;
    /* lis r3, 0 */ // 0x8065FEA0
    /* li r0, 3 */ // 0x8065FEA4
    r3 = *(0 + r3); // lwz @ 0x8065FEA8
    *(0xd18 + r3) = r0; // stw @ 0x8065FEAC
    r30 = *(0 + r30); // lwz @ 0x8065FEB0
    r3 = *(0x18 + r30); // lwz @ 0x8065FEB4
    FUN_805ABD4C(); // bl 0x805ABD4C
    if (==) goto 0x0x8065fecc;
    r4 = *(0x18 + r30); // lwz @ 0x8065FEC4
    /* b 0x8065fed0 */ // 0x8065FEC8
    /* li r4, 0 */ // 0x8065FECC
    /* lis r3, 0 */ // 0x8065FED0
    r3 = *(0 + r3); // lwz @ 0x8065FED4
    FUN_805C1484(r4, r3); // bl 0x805C1484
    /* lis r3, 0 */ // 0x8065FEDC
    r30 = *(0 + r3); // lwz @ 0x8065FEE0
    r3 = *(0x18 + r30); // lwz @ 0x8065FEE4
    FUN_805ABD4C(r3); // bl 0x805ABD4C
    if (==) goto 0x0x8065fefc;
    r4 = *(0x18 + r30); // lwz @ 0x8065FEF4
    /* b 0x8065ff00 */ // 0x8065FEF8
    /* li r4, 0 */ // 0x8065FEFC
    FUN_805ABFC4(r4, r3); // bl 0x805ABFC4
    if (==) goto 0x0x8065ff30;
    /* lis r3, 0 */ // 0x8065FF10
    /* li r4, 0 */ // 0x8065FF14
    r3 = *(0 + r3); // lwz @ 0x8065FF18
    /* li r5, 1 */ // 0x8065FF1C
    r3 = *(0x98 + r3); // lwz @ 0x8065FF20
    r3 = r3 + 0x188; // 0x8065FF24
    FUN_8066E3B0(r4, r5, r3); // bl 0x8066E3B0
    /* b 0x8065ff4c */ // 0x8065FF2C
    /* lis r3, 0 */ // 0x8065FF30
    r3 = *(0 + r3); // lwz @ 0x8065FF38
    /* li r4, 1 */ // 0x8065FF3C
    r3 = *(0x98 + r3); // lwz @ 0x8065FF40
    r3 = r3 + 0x188; // 0x8065FF44
    FUN_8066DDCC(r5, r4, r3); // bl 0x8066DDCC
    /* lis r4, 0 */ // 0x8065FF4C
    r4 = r4 + 0; // 0x8065FF54
    /* li r5, 0xc */ // 0x8065FF58
    /* li r6, 5 */ // 0x8065FF5C
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* b 0x8065ff78 */ // 0x8065FF64
    /* lis r3, 0 */ // 0x8065FF68
    /* li r0, 5 */ // 0x8065FF6C
    r3 = *(0 + r3); // lwz @ 0x8065FF70
    *(0xd18 + r3) = r0; // stw @ 0x8065FF74
    if (==) goto 0x0x8065ff9c;
    /* lis r3, 0 */ // 0x8065FF80
    /* li r4, 2 */ // 0x8065FF84
    r3 = *(0 + r3); // lwz @ 0x8065FF88
    /* li r5, 0 */ // 0x8065FF8C
    r3 = *(0x98 + r3); // lwz @ 0x8065FF90
    r3 = r3 + 0x188; // 0x8065FF94
    FUN_8066E3B0(r4, r5, r3); // bl 0x8066E3B0
    /* lis r5, 0 */ // 0x8065FF9C
    /* lis r31, 0 */ // 0x8065FFA0
    r4 = *(0 + r5); // lwz @ 0x8065FFA4
    r3 = *(0 + r31); // lwz @ 0x8065FFA8
    r4 = *(0x98 + r4); // lwz @ 0x8065FFAC
    r0 = *(0x3c8 + r4); // lwz @ 0x8065FFB0
    *(0x1758 + r3) = r0; // stw @ 0x8065FFB4
    r3 = *(0 + r5); // lwz @ 0x8065FFB8
    r3 = *(0x98 + r3); // lwz @ 0x8065FFBC
    FUN_80661C9C(); // bl 0x80661C9C
    r3 = *(0 + r31); // lwz @ 0x8065FFC4
    /* li r5, 2 */ // 0x8065FFC8
    /* li r0, 0 */ // 0x8065FFCC
    *(0x175c + r3) = r5; // stw @ 0x8065FFD0
    r4 = *(0 + r31); // lwz @ 0x8065FFD4
    r3 = *(0x1780 + r4); // lwz @ 0x8065FFD8
    r3 = r3 rlwinm 0; // rlwinm
    *(0x1780 + r4) = r3; // stw @ 0x8065FFE0
    r3 = *(0 + r31); // lwz @ 0x8065FFE4
    *(0x1764 + r3) = r0; // stw @ 0x8065FFE8
    r3 = *(0 + r31); // lwz @ 0x8065FFEC
    *(0x1760 + r3) = r5; // stw @ 0x8065FFF0
    r3 = *(0 + r31); // lwz @ 0x8065FFF4
    r0 = *(0x1780 + r3); // lwz @ 0x8065FFF8
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r3) = r0; // stw @ 0x80660000
    r31 = *(0x1cc + r1); // lwz @ 0x80660004
    r30 = *(0x1c8 + r1); // lwz @ 0x80660008
    r29 = *(0x1c4 + r1); // lwz @ 0x8066000C
    r0 = *(0x1d4 + r1); // lwz @ 0x80660010
}