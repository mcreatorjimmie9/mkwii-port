/* Function at 0x805F6E90, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805F6E90(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805F6E9C
    r31 = r3;
    FUN_80629024(); // bl 0x80629024
    /* lis r4, 0 */ // 0x805F6EA8
    r3 = r31;
    r4 = r4 + 0; // 0x805F6EB0
    *(0 + r31) = r4; // stw @ 0x805F6EB4
    r31 = *(0xc + r1); // lwz @ 0x805F6EB8
    r0 = *(0x14 + r1); // lwz @ 0x805F6EBC
    return;
}