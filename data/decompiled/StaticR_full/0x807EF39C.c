/* Function at 0x807EF39C, size=44 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807EF39C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807EF3A8
    r31 = r3;
    FUN_808A8B3C(); // bl 0x808A8B3C
    /* lis r4, 0 */ // 0x807EF3B4
    /* li r3, 0x7c */ // 0x807EF3B8
    r4 = r4 + 0; // 0x807EF3BC
    *(0 + r31) = r4; // stw @ 0x807EF3C0
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
}