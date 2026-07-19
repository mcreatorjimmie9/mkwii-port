/* Function at 0x80641AFC, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80641AFC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r7 = r5;
    r5 = r4;
    *(0x14 + r1) = r0; // stw @ 0x80641B0C
    /* neg r0, r7 */ // 0x80641B10
    r0 = r0 | r7; // 0x80641B14
    /* li r4, 0 */ // 0x80641B18
    r0 = r0 >> 0x1f; // srawi
    *(0xc + r1) = r31; // stw @ 0x80641B20
    r0 = r0 rlwinm 0; // rlwinm
    r31 = r3;
    r0 = r0 | 4; // 0x80641B2C
    r6 = r6 | r0; // 0x80641B30
    FUN_805EAFB8(); // bl 0x805EAFB8
    /* lis r4, 0 */ // 0x80641B38
    /* li r0, 0 */ // 0x80641B3C
    r4 = r4 + 0; // 0x80641B40
    *(0x50 + r31) = r0; // stw @ 0x80641B44
    r3 = r31;
    *(0x4c + r31) = r0; // stw @ 0x80641B4C
    *(0x54 + r31) = r0; // stb @ 0x80641B50
    *(0 + r31) = r4; // stw @ 0x80641B54
    r31 = *(0xc + r1); // lwz @ 0x80641B58
    r0 = *(0x14 + r1); // lwz @ 0x80641B5C
    return;
}