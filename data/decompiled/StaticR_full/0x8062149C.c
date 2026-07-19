/* Function at 0x8062149C, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8062149C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806214B0
    r30 = r3;
    FUN_8061DA08(); // bl 0x8061DA08
    /* lis r4, 0 */ // 0x806214BC
    *(0x30 + r30) = r31; // stb @ 0x806214C0
    r4 = r4 + 0; // 0x806214C4
    r3 = r31 rlwinm 2; // rlwinm
    *(0xc + r30) = r4; // stw @ 0x806214CC
    FUN_805E3430(r4, r4); // bl 0x805E3430
}