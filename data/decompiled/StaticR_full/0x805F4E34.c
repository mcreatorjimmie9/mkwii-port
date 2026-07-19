/* Function at 0x805F4E34, size=52 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805F4E34(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x805F4E3C
    /* mulli r0, r4, 0xc */ // 0x805F4E44
    r5 = r5 + 0; // 0x805F4E48
    *(0xc + r1) = r31; // stw @ 0x805F4E4C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805F4E54
    r30 = r3;
    r4 = r30;
    r3 = r5 + r0; // 0x805F4E60
    FUN_805E3430(r4); // bl 0x805E3430
}