/* Function at 0x80647A14, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80647A14(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 1 */ // 0x80647A1C
    /* li r6, 0 */ // 0x80647A20
    *(0x14 + r1) = r0; // stw @ 0x80647A24
    *(0xc + r1) = r31; // stw @ 0x80647A28
    r31 = r4;
    /* li r4, 0 */ // 0x80647A30
    *(8 + r1) = r30; // stw @ 0x80647A34
    r30 = r3;
    FUN_805F1C60(r4); // bl 0x805F1C60
    /* lis r4, 0 */ // 0x80647A40
    *(0x98 + r30) = r31; // stb @ 0x80647A44
    r4 = r4 + 0; // 0x80647A48
    r3 = r30;
    *(0 + r30) = r4; // stw @ 0x80647A50
    r31 = *(0xc + r1); // lwz @ 0x80647A54
    r30 = *(8 + r1); // lwz @ 0x80647A58
    r0 = *(0x14 + r1); // lwz @ 0x80647A5C
    return;
}