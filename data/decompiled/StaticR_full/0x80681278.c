/* Function at 0x80681278, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_80681278(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80681288
    r30 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x80681294
    r31 = r30 + 0x44; // 0x80681298
    r3 = r3 + 0; // 0x8068129C
    *(0 + r30) = r3; // stw @ 0x806812A0
    r3 = r31;
    FUN_806A0418(r3, r3, r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806812AC
    r3 = r30 + 0x1bc; // 0x806812B0
    r4 = r4 + 0; // 0x806812B4
    *(0 + r31) = r4; // stw @ 0x806812B8
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    r3 = r30 + 0x1cc; // 0x806812C0
    FUN_80654ECC(r3, r4, r3); // bl 0x80654ECC
    r3 = r30 + 0x290; // 0x806812C8
    FUN_80654ECC(r3, r3); // bl 0x80654ECC
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806812D4
    r30 = *(8 + r1); // lwz @ 0x806812D8
    r0 = *(0x14 + r1); // lwz @ 0x806812DC
    return;
}