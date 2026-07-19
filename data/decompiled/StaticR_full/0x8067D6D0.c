/* Function at 0x8067D6D0, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8067D6D0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8067D6E0
    r30 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x8067D6EC
    r3 = r30 + 0x44; // 0x8067D6F0
    r4 = r4 + 0; // 0x8067D6F4
    *(0 + r30) = r4; // stw @ 0x8067D6F8
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    r31 = r30 + 0x54; // 0x8067D700
    r3 = r31;
    FUN_806A0418(r4, r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x8067D70C
    r3 = r30 + 0x1c8; // 0x8067D710
    r4 = r4 + 0; // 0x8067D714
    *(0 + r31) = r4; // stw @ 0x8067D718
    FUN_806A0418(r4, r3, r4); // bl 0x806A0418
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8067D724
    r30 = *(8 + r1); // lwz @ 0x8067D728
    r0 = *(0x14 + r1); // lwz @ 0x8067D72C
    return;
}