/* Function at 0x805F7C88, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805F7C88(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r4;
    /* li r4, 1 */ // 0x805F7C94
    *(0x14 + r1) = r0; // stw @ 0x805F7C98
    *(0xc + r1) = r31; // stw @ 0x805F7C9C
    r31 = r3;
    FUN_805F7A5C(r5, r4); // bl 0x805F7A5C
    /* lis r4, 0 */ // 0x805F7CA8
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x805F7CB0
    /* li r4, 9 */ // 0x805F7CB4
    /* li r5, 1 */ // 0x805F7CB8
    FUN_8061DC98(r4, r3, r4, r5); // bl 0x8061DC98
    r0 = *(0x14 + r1); // lwz @ 0x805F7CC0
    r31 = *(0xc + r1); // lwz @ 0x805F7CC4
    return;
}