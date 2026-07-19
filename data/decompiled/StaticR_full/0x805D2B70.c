/* Function at 0x805D2B70, size=52 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805D2B70(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x805D2B78
    /* lis r5, 0 */ // 0x805D2B7C
    *(0x14 + r1) = r0; // stw @ 0x805D2B80
    r4 = r4 + 0; // 0x805D2B84
    r5 = r5 + 0; // 0x805D2B88
    /* li r6, 0x70 */ // 0x805D2B8C
    *(0xc + r1) = r31; // stw @ 0x805D2B90
    r31 = r3;
    /* li r7, 0x20 */ // 0x805D2B98
    r3 = r3 + 0x20; // 0x805D2B9C
    FUN_805E3430(r6, r7, r3); // bl 0x805E3430
}