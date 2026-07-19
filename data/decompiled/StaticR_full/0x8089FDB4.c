/* Function at 0x8089FDB4, size=116 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8089FDB4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x8089FDBC
    /* li r6, 0 */ // 0x8089FDC0
    *(0x64 + r1) = r0; // stw @ 0x8089FDC4
    r5 = r5 + 0; // 0x8089FDC8
    /* li r0, -1 */ // 0x8089FDCC
    *(0x5c + r1) = r31; // stw @ 0x8089FDD0
    /* li r31, 1 */ // 0x8089FDD4
    *(0x58 + r1) = r30; // stw @ 0x8089FDD8
    r30 = r4;
    *(0x54 + r1) = r29; // stw @ 0x8089FDE0
    r29 = r3;
    *(0 + r3) = r5; // stw @ 0x8089FDE8
    *(4 + r3) = r6; // stw @ 0x8089FDEC
    *(0x14 + r3) = r6; // stw @ 0x8089FDF0
    r5 = *(0 + r4); // lwz @ 0x8089FDF4
    r5 = *(0 + r5); // lhz @ 0x8089FDF8
    *(0x88 + r3) = r5; // sth @ 0x8089FDFC
    *(0x99 + r3) = r6; // stb @ 0x8089FE00
    *(0x9a + r3) = r6; // stb @ 0x8089FE04
    *(0x9b + r3) = r6; // stb @ 0x8089FE08
    *(0x9c + r3) = r6; // stb @ 0x8089FE0C
    *(0x9d + r3) = r31; // stb @ 0x8089FE10
    *(0xa0 + r3) = r4; // stw @ 0x8089FE14
    *(0xa4 + r3) = r0; // stw @ 0x8089FE18
    *(0xa8 + r3) = r31; // stb @ 0x8089FE1C
    r3 = r3 + 0x58; // 0x8089FE20
    FUN_805E3430(r3); // bl 0x805E3430
}