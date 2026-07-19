/* Function at 0x806AFEF4, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806AFEF4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806AFF00
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806AFF0C
    r3 = r31 + 0x44; // 0x806AFF10
    r4 = r4 + 0; // 0x806AFF14
    *(0 + r31) = r4; // stw @ 0x806AFF18
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    r3 = r31 + 0x54; // 0x806AFF20
    FUN_8066D0BC(r3, r4, r3); // bl 0x8066D0BC
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806AFF2C
    r0 = *(0x14 + r1); // lwz @ 0x806AFF30
    return;
}