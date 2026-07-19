/* Function at 0x805D6DC4, size=32 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805D6DC4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 2 */ // 0x805D6DCC
    *(0x14 + r1) = r0; // stw @ 0x805D6DD0
    r4 = r4 + 0x7ffc; // 0x805D6DD4
    *(0xc + r1) = r31; // stw @ 0x805D6DD8
    r31 = r3;
    FUN_805E3430(r4, r4); // bl 0x805E3430
}