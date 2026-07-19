/* Function at 0x805D0FF0, size=40 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805D0FF0(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x805D0FF8
    *(0x44 + r1) = r0; // stw @ 0x805D0FFC
    r4 = r4 + 0; // 0x805D1000
    *(0x3c + r1) = r31; // stw @ 0x805D1004
    r31 = r3;
    /* li r3, 3 */ // 0x805D100C
    *(0x10 + r1) = r4; // stw @ 0x805D1010
    FUN_805E3430(r4, r3); // bl 0x805E3430
}