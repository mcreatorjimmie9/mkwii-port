/* Function at 0x805F5008, size=56 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805F5008(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x805F5018
    r31 = r31 + 0; // 0x805F501C
    *(0x18 + r1) = r30; // stw @ 0x805F5020
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805F5028
    r29 = r3;
    r4 = r29;
    *(0x28 + r31) = r3; // stw @ 0x805F5034
    r3 = r31 + 0; // 0x805F5038
    FUN_805E3430(r4, r3); // bl 0x805E3430
}