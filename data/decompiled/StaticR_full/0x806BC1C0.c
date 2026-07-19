/* Function at 0x806BC1C0, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806BC1C0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x806BC1D0
    r30 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806BC1DC
    r3 = r30 + 0x44; // 0x806BC1E0
    r4 = r4 + 0; // 0x806BC1E4
    *(0 + r30) = r4; // stw @ 0x806BC1E8
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    r3 = r30 + 0x54; // 0x806BC1F0
    FUN_806A0418(r3, r4, r3); // bl 0x806A0418
    r31 = r30 + 0x1c8; // 0x806BC1F8
    r3 = r31;
    FUN_806A0418(r3, r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806BC204
    r3 = r30;
    r4 = r4 + 0; // 0x806BC20C
    *(0 + r31) = r4; // stw @ 0x806BC210
    r31 = *(0xc + r1); // lwz @ 0x806BC214
    r30 = *(8 + r1); // lwz @ 0x806BC218
    r0 = *(0x14 + r1); // lwz @ 0x806BC21C
    return;
}