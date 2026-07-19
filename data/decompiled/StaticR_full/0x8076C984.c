/* Function at 0x8076C984, size=84 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8076C984(int r3, int r4, int r5, int r6, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r9, 0 */ // 0x8076C98C
    r9 = r9 + 0; // 0x8076C994
    *(0x1c + r1) = r31; // stw @ 0x8076C998
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x8076C9A0
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8076C9A8
    /* clrlwi r29, r6, 0x10 */ // 0x8076C9AC
    *(4 + r3) = r4; // sth @ 0x8076C9B0
    r4 = r6 rlwinm 4; // rlwinm
    *(0 + r3) = r9; // stw @ 0x8076C9B8
    *(6 + r3) = r6; // sth @ 0x8076C9BC
    *(8 + r3) = r6; // sth @ 0x8076C9C0
    *(0xa + r3) = r8; // stb @ 0x8076C9C4
    /* stfs f1, 0x20(r3) */ // 0x8076C9C8
    *(0x24 + r3) = r7; // stw @ 0x8076C9CC
    r3 = r4 + 0x10; // 0x8076C9D0
    FUN_805E3430(r3); // bl 0x805E3430
}