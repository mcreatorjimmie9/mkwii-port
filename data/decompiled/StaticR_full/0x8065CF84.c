/* Function at 0x8065CF84, size=296 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_8065CF84(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8065CF8C
    *(0x14 + r1) = r0; // stw @ 0x8065CF90
    /* li r0, -1 */ // 0x8065CF94
    *(0xc + r1) = r31; // stw @ 0x8065CF98
    r31 = r3;
    *(0x11a8 + r3) = r0; // stw @ 0x8065CFA0
    r3 = *(0 + r4); // lwz @ 0x8065CFA4
    r4 = *(0x1108 + r31); // lwz @ 0x8065CFA8
    r3 = *(0 + r3); // lwz @ 0x8065CFAC
    r3 = *(0x404 + r3); // lwz @ 0x8065CFB0
    FUN_8065984C(); // bl 0x8065984C
    *(0x11ac + r31) = r3; // stw @ 0x8065CFB8
    r3 = r31 + 0x110c; // 0x8065CFBC
    /* li r4, 1 */ // 0x8065CFC0
    FUN_8066E0EC(r3, r4); // bl 0x8066E0EC
    /* neg r0, r3 */ // 0x8065CFC8
    r0 = r0 | r3; // 0x8065CFCC
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x8065CFD0
    if (!=) goto 0x0x8065cfe0;
    /* li r0, 0 */ // 0x8065CFD8
    *(0x11ac + r31) = r0; // stw @ 0x8065CFDC
    r3 = *(0x11ac + r31); // lwz @ 0x8065CFE0
    if (!=) goto 0x0x8065d008;
    /* li r3, 1 */ // 0x8065CFEC
    /* li r0, 0 */ // 0x8065CFF0
    *(0xbb8 + r31) = r3; // stb @ 0x8065CFF4
    *(0xd2c + r31) = r0; // stb @ 0x8065CFF8
    *(0xea0 + r31) = r3; // stb @ 0x8065CFFC
    *(0x1014 + r31) = r3; // stb @ 0x8065D000
    /* b 0x8065d064 */ // 0x8065D004
    r0 = r3 + -0x15; // 0x8065D008
    if (<=) goto 0x0x8065d01c;
    if (!=) goto 0x0x8065d024;
    /* li r0, 1 */ // 0x8065D01C
    /* b 0x8065d028 */ // 0x8065D020
    /* li r0, 0 */ // 0x8065D024
    if (==) goto 0x0x8065d04c;
    /* li r3, 1 */ // 0x8065D030
    /* li r0, 0 */ // 0x8065D034
    *(0xbb8 + r31) = r3; // stb @ 0x8065D038
    *(0xd2c + r31) = r3; // stb @ 0x8065D03C
    *(0xea0 + r31) = r0; // stb @ 0x8065D040
    *(0x1014 + r31) = r0; // stb @ 0x8065D044
    /* b 0x8065d064 */ // 0x8065D048
    /* li r3, 0 */ // 0x8065D04C
    /* li r0, 1 */ // 0x8065D050
    *(0xbb8 + r31) = r3; // stb @ 0x8065D054
    *(0xd2c + r31) = r0; // stb @ 0x8065D058
    *(0xea0 + r31) = r3; // stb @ 0x8065D05C
    *(0x1014 + r31) = r3; // stb @ 0x8065D060
    r4 = *(0x11ac + r31); // lwz @ 0x8065D064
    r3 = r31 + 0x42c; // 0x8065D068
    FUN_8065C630(r3); // bl 0x8065C630
    r0 = *(0x670 + r31); // lwz @ 0x8065D070
    /* clrlwi. r0, r0, 0x1f */ // 0x8065D074
    if (==) goto 0x0x8065d08c;
    r3 = r31 + 0x42c; // 0x8065D07C
    /* li r4, 0 */ // 0x8065D080
    FUN_80649EEC(r3, r4); // bl 0x80649EEC
    /* b 0x8065d098 */ // 0x8065D088
    r3 = r31 + 0x8d4; // 0x8065D08C
    /* li r4, 0 */ // 0x8065D090
    FUN_80649EEC(r4, r3, r4); // bl 0x80649EEC
    r0 = *(0x14 + r1); // lwz @ 0x8065D098
    r31 = *(0xc + r1); // lwz @ 0x8065D09C
    return;
}