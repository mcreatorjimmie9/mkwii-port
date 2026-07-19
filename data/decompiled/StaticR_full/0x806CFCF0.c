/* Function at 0x806CFCF0, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_806CFCF0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806CFCFC
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806CFD08
    r3 = r31 + 0x44; // 0x806CFD0C
    r4 = r4 + 0; // 0x806CFD10
    *(0 + r31) = r4; // stw @ 0x806CFD14
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    r3 = r31 + 0x54; // 0x806CFD1C
    FUN_806A0418(r3, r4, r3); // bl 0x806A0418
    r3 = r31 + 0x1c8; // 0x806CFD24
    FUN_806C9EEC(r3, r3); // bl 0x806C9EEC
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806CFD30
    r0 = *(0x14 + r1); // lwz @ 0x806CFD34
    return;
}