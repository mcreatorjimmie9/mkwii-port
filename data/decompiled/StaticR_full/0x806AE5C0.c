/* Function at 0x806AE5C0, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_806AE5C0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806AE5CC
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806AE5D8
    r3 = r31 + 0x44; // 0x806AE5DC
    r4 = r4 + 0; // 0x806AE5E0
    *(0 + r31) = r4; // stw @ 0x806AE5E4
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    r3 = r31 + 0x54; // 0x806AE5EC
    FUN_8064EE0C(r3, r4, r3); // bl 0x8064EE0C
    r3 = r31 + 0x1d0; // 0x806AE5F4
    FUN_8064ED04(r3, r3); // bl 0x8064ED04
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806AE600
    r0 = *(0x14 + r1); // lwz @ 0x806AE604
    return;
}