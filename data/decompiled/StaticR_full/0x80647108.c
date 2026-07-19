/* Function at 0x80647108, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80647108(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80647110
    *(0x14 + r1) = r0; // stw @ 0x80647114
    r4 = r4 + 0; // 0x80647118
    *(0xc + r1) = r31; // stw @ 0x8064711C
    r31 = r3;
    *(0x10 + r3) = r4; // stw @ 0x80647124
    FUN_805E3430(r4); // bl 0x805E3430
}