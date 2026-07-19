/* Function at 0x807EFAAC, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807EFAAC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x807EFABC
    r31 = r31 + 0; // 0x807EFAC0
    *(8 + r1) = r30; // stw @ 0x807EFAC4
    r30 = r3;
    r5 = r31 + 0x45; // 0x807EFACC
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x807EFAD4
    /* li r3, 0x7c */ // 0x807EFAD8
    r4 = r4 + 0; // 0x807EFADC
    *(0 + r30) = r4; // stw @ 0x807EFAE0
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
}