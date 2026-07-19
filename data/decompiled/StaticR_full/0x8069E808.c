/* Function at 0x8069E808, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8069E808(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8069E818
    r30 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x8069E824
    r31 = r30 + 0x44; // 0x8069E828
    r3 = r3 + 0; // 0x8069E82C
    *(0 + r30) = r3; // stw @ 0x8069E830
    r3 = r31;
    FUN_806A0418(r3, r3, r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x8069E83C
    r3 = r30 + 0x1b8; // 0x8069E840
    r4 = r4 + 0; // 0x8069E844
    *(0 + r31) = r4; // stw @ 0x8069E848
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8069E854
    r30 = *(8 + r1); // lwz @ 0x8069E858
    r0 = *(0x14 + r1); // lwz @ 0x8069E85C
    return;
}