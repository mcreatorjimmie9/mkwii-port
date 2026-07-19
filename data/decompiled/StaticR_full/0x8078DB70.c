/* Function at 0x8078DB70, size=48 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8078DB70(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8078DB80
    *(0x18 + r1) = r30; // stw @ 0x8078DB84
    *(0x14 + r1) = r29; // stw @ 0x8078DB88
    r29 = r3;
    r5 = *(0 + r31); // lwz @ 0x8078DB90
    r4 = *(0x5bc + r5); // lwz @ 0x8078DB94
    r5 = r5 + 0x6bc; // 0x8078DB98
    FUN_805E3430(r5); // bl 0x805E3430
}