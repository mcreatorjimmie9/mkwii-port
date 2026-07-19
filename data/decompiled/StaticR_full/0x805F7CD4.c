/* Function at 0x805F7CD4, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805F7CD4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r4;
    /* li r4, 2 */ // 0x805F7CE0
    *(0x14 + r1) = r0; // stw @ 0x805F7CE4
    *(0xc + r1) = r31; // stw @ 0x805F7CE8
    r31 = r3;
    FUN_805F7A5C(r5, r4); // bl 0x805F7A5C
    /* lis r4, 0 */ // 0x805F7CF4
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x805F7CFC
    /* li r4, 0xa */ // 0x805F7D00
    /* li r5, 1 */ // 0x805F7D04
    FUN_8061DC98(r4, r3, r4, r5); // bl 0x8061DC98
    r0 = *(0x14 + r1); // lwz @ 0x805F7D0C
    r31 = *(0xc + r1); // lwz @ 0x805F7D10
    return;
}