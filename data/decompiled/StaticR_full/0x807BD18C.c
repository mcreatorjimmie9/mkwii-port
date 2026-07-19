/* Function at 0x807BD18C, size=44 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807BD18C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807BD198
    r31 = r3;
    FUN_807BB8AC(); // bl 0x807BB8AC
    /* lis r4, 0 */ // 0x807BD1A4
    /* li r3, 8 */ // 0x807BD1A8
    r4 = r4 + 0; // 0x807BD1AC
    *(0x34 + r31) = r4; // stw @ 0x807BD1B0
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
}