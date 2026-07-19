/* Function at 0x805A04F0, size=52 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_805A04F0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r3, 0 */ // 0x805A04F8
    *(0x24 + r1) = r0; // stw @ 0x805A04FC
    /* slwi r0, r4, 1 */ // 0x805A0500
    r3 = r3 + 0; // 0x805A0504
    /* stmw r26, 8(r1) */ // 0x805A0508
    r27 = r4;
    /* lhzx r0, r3, r0 */ // 0x805A0510
    /* li r3, 1 */ // 0x805A0514
    /* slwi r26, r0, 0x10 */ // 0x805A0518
    r26 = r5 rlwimi 0; // rlwimi
    FUN_805E3430(r3); // bl 0x805E3430
}