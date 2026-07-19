/* Function at 0x805BCFA8, size=60 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805BCFA8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x805BCFB8
    *(0x18 + r1) = r30; // stw @ 0x805BCFBC
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805BCFC4
    r29 = r3;
    r3 = r30;
    r5 = *(0 + r31); // lwz @ 0x805BCFD0
    r4 = r29 + 8; // 0x805BCFD4
    r6 = *(0x34 + r5); // lwz @ 0x805BCFD8
    /* li r5, 4 */ // 0x805BCFDC
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}