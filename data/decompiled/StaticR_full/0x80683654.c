/* Function at 0x80683654, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80683654(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80683660
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x8068366C
    r3 = r31 + 0x44; // 0x80683670
    r4 = r4 + 0; // 0x80683674
    *(0 + r31) = r4; // stw @ 0x80683678
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    r3 = r31 + 0x54; // 0x80683680
    FUN_8066CEBC(r3, r4, r3); // bl 0x8066CEBC
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x8068368C
    r0 = *(0x14 + r1); // lwz @ 0x80683690
    return;
}