/* Function at 0x808070E0, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808070E0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    r5 = r6;
    *(8 + r1) = r30; // stw @ 0x808070F8
    r30 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x80807104
    *(0xb0 + r30) = r31; // stw @ 0x80807108
    r4 = r4 + 0; // 0x8080710C
    /* li r3, 0x7c */ // 0x80807110
    *(0 + r30) = r4; // stw @ 0x80807114
    FUN_805E3430(r4, r4, r3); // bl 0x805E3430
}