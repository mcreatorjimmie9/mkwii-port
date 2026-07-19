/* Function at 0x805D35C0, size=48 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805D35C0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x805D35C8
    /* lis r3, 2 */ // 0x805D35CC
    *(0x14 + r1) = r0; // stw @ 0x805D35D0
    *(0xc + r1) = r31; // stw @ 0x805D35D4
    *(8 + r1) = r30; // stw @ 0x805D35D8
    r30 = *(0 + r4); // lwz @ 0x805D35DC
    r4 = r3 + 0x7ffc; // 0x805D35E0
    r31 = *(0x14 + r30); // lwz @ 0x805D35E4
    r3 = r31;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}