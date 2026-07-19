/* Function at 0x806DACF4, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

void FUN_806DACF4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x806DACFC
    /* li r4, 0x4f */ // 0x806DAD00
    *(0x24 + r1) = r0; // stw @ 0x806DAD04
    /* li r0, 0 */ // 0x806DAD08
    /* li r5, 0 */ // 0x806DAD0C
    /* stfd f31, 0x18(r1) */ // 0x806DAD10
    /* fmr f31, f1 */ // 0x806DAD14
    *(0x14 + r1) = r31; // stw @ 0x806DAD18
    /* lis r31, 0 */ // 0x806DAD1C
    r3 = *(0 + r3); // lwz @ 0x806DAD20
    *(0xc28 + r3) = r0; // stw @ 0x806DAD24
    r3 = *(0 + r31); // lwz @ 0x806DAD28
    FUN_80698C44(); // bl 0x80698C44
    /* fctiwz f0, f31 */ // 0x806DAD30
    r3 = *(0 + r31); // lwz @ 0x806DAD34
    /* li r5, 0xff */ // 0x806DAD38
    /* stfd f0, 8(r1) */ // 0x806DAD3C
    r4 = *(0xc + r1); // lwz @ 0x806DAD40
    FUN_80698CD0(r5); // bl 0x80698CD0
    r0 = *(0x24 + r1); // lwz @ 0x806DAD48
    /* lfd f31, 0x18(r1) */ // 0x806DAD4C
    r31 = *(0x14 + r1); // lwz @ 0x806DAD50
    return;
}