/* Function at 0x808E0180, size=48 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_808E0180(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x808E0188
    r4 = r4 + 0; // 0x808E0190
    *(0x1c + r1) = r31; // stw @ 0x808E0194
    *(0x18 + r1) = r30; // stw @ 0x808E0198
    *(0x14 + r1) = r29; // stw @ 0x808E019C
    r29 = r3;
    *(0 + r3) = r4; // stw @ 0x808E01A4
    /* li r3, 0x10 */ // 0x808E01A8
    FUN_805E3430(r3); // bl 0x805E3430
}