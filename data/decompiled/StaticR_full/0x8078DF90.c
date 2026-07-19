/* Function at 0x8078DF90, size=48 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8078DF90(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8078DFA4
    /* lis r30, 0 */ // 0x8078DFA8
    *(0x14 + r1) = r29; // stw @ 0x8078DFAC
    r5 = *(0 + r30); // lwz @ 0x8078DFB0
    r4 = *(0x5bc + r5); // lwz @ 0x8078DFB4
    r5 = r5 + 0x6bc; // 0x8078DFB8
    FUN_805E3430(r5); // bl 0x805E3430
}