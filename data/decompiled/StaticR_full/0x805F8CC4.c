/* Function at 0x805F8CC4, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_805F8CC4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x805F8CCC
    *(0x14 + r1) = r0; // stw @ 0x805F8CD0
    r5 = r5 + 0; // 0x805F8CD4
    /* lfs f1, 0xa4(r5) */ // 0x805F8CD8
    *(0xc + r1) = r31; // stw @ 0x805F8CDC
    r31 = r4;
    /* lfs f2, 0xa8(r5) */ // 0x805F8CE4
    /* li r4, 2 */ // 0x805F8CE8
    *(8 + r1) = r30; // stw @ 0x805F8CEC
    r30 = r3;
    /* lfs f3, 0xac(r5) */ // 0x805F8CF4
    /* lfs f4, 4(r5) */ // 0x805F8CF8
    FUN_805F84B4(r4); // bl 0x805F84B4
    r3 = r30;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x805F8D08
    /* clrlwi r0, r3, 0x18 */ // 0x805F8D0C
    r3 = *(0 + r4); // lwz @ 0x805F8D10
    /* mulli r0, r0, 0x248 */ // 0x805F8D14
    r5 = r31;
    r3 = *(0x14 + r3); // lwz @ 0x805F8D1C
    /* li r4, 0 */ // 0x805F8D20
    r3 = r3 + r0; // 0x805F8D24
    FUN_80823BBC(r5, r4); // bl 0x80823BBC
    r0 = *(0x14 + r1); // lwz @ 0x805F8D2C
    r31 = *(0xc + r1); // lwz @ 0x805F8D30
    r30 = *(8 + r1); // lwz @ 0x805F8D34
    return;
}