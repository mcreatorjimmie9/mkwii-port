/* Function at 0x8065E8F0, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8065E8F0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8065E8FC
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x8065E908
    r3 = r31 + 0x44; // 0x8065E90C
    r4 = r4 + 0; // 0x8065E910
    *(0 + r31) = r4; // stw @ 0x8065E914
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x8065E920
    r0 = *(0x14 + r1); // lwz @ 0x8065E924
    return;
}