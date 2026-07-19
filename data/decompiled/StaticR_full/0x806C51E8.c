/* Function at 0x806C51E8, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806C51E8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806C51F4
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806C5200
    r3 = r31 + 0x44; // 0x806C5204
    r4 = r4 + 0; // 0x806C5208
    *(0 + r31) = r4; // stw @ 0x806C520C
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    r3 = r31 + 0x1f4; // 0x806C5214
    FUN_805ABCB4(r3, r4, r3); // bl 0x805ABCB4
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806C5220
    r0 = *(0x14 + r1); // lwz @ 0x806C5224
    return;
}