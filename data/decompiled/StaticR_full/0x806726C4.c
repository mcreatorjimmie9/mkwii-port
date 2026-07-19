/* Function at 0x806726C4, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806726C4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806726D0
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x806726DC
    /* lis r4, 0 */ // 0x806726E0
    r3 = r3 + 0; // 0x806726E4
    /* lis r5, 0 */ // 0x806726E8
    *(0 + r31) = r3; // stw @ 0x806726EC
    r3 = r31 + 0x44; // 0x806726F0
    r4 = r4 + 0; // 0x806726F4
    r5 = r5 + 0; // 0x806726F8
    /* li r6, 0x184 */ // 0x806726FC
    /* li r7, 4 */ // 0x80672700
    FUN_805E3430(r3, r4, r5, r6, r7); // bl 0x805E3430
}