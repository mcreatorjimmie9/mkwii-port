/* Function at 0x80629024, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80629024(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80629038
    r30 = r3;
    FUN_805F4338(); // bl 0x805F4338
    /* lis r4, 0 */ // 0x80629044
    *(0x28 + r30) = r31; // stw @ 0x80629048
    r4 = r4 + 0; // 0x8062904C
    /* li r3, 0x10c */ // 0x80629050
    *(0 + r30) = r4; // stw @ 0x80629054
    FUN_805E3430(r4, r4, r3); // bl 0x805E3430
}