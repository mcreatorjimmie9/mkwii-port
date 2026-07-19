/* Function at 0x805D1828, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805D1828(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 6 */ // 0x805D1830
    *(0x14 + r1) = r0; // stw @ 0x805D1834
    *(0xc + r1) = r31; // stw @ 0x805D1838
    r31 = r3;
    r3 = r3 + 0x30; // 0x805D1840
    FUN_805E3430(r4, r3); // bl 0x805E3430
}