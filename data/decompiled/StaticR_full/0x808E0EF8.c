/* Function at 0x808E0EF8, size=64 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r24 */
/* Calls: 1 function(s) */

int FUN_808E0EF8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r24 */
    /* lis r6, 0 */ // 0x808E0F00
    r5 = r4 rlwinm 1; // rlwinm
    *(0x44 + r1) = r0; // stw @ 0x808E0F08
    r0 = r5 + 0x18; // 0x808E0F0C
    r6 = r6 + 0; // 0x808E0F10
    /* stmw r24, 0x20(r1) */ // 0x808E0F14
    /* clrlwi r26, r0, 0x18 */ // 0x808E0F18
    r27 = r3;
    *(8 + r3) = r4; // stb @ 0x808E0F20
    /* mulli r4, r26, 0x28 */ // 0x808E0F24
    *(0 + r3) = r6; // stw @ 0x808E0F28
    *(9 + r3) = r0; // stb @ 0x808E0F2C
    r3 = r4 + 0x10; // 0x808E0F30
    FUN_805E3430(r3); // bl 0x805E3430
}