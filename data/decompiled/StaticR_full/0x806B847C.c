/* Function at 0x806B847C, size=180 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806B847C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x806B8488
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806B8494
    /* lis r5, 0 */ // 0x806B8498
    r4 = r4 + 0; // 0x806B849C
    *(0 + r31) = r4; // stw @ 0x806B84A0
    /* lis r3, 0 */ // 0x806B84A4
    r5 = r5 + 0; // 0x806B84A8
    r10 = *(0 + r3); // lwzu @ 0x806B84AC
    /* lis r4, 0 */ // 0x806B84B0
    /* lis r7, 0 */ // 0x806B84B4
    *(0x14 + r1) = r10; // stw @ 0x806B84B8
    r9 = *(4 + r3); // lwz @ 0x806B84BC
    r4 = r4 + 0; // 0x806B84C0
    r8 = *(8 + r3); // lwz @ 0x806B84C4
    r3 = r31 + 0x6c; // 0x806B84C8
    *(0x54 + r31) = r8; // stw @ 0x806B84CC
    *(0x44 + r31) = r5; // stw @ 0x806B84D0
    *(0x48 + r31) = r31; // stw @ 0x806B84D4
    *(0x4c + r31) = r10; // stw @ 0x806B84D8
    *(0x50 + r31) = r9; // stw @ 0x806B84DC
    r6 = *(0 + r7); // lwzu @ 0x806B84E0
    *(0x18 + r1) = r9; // stw @ 0x806B84E4
    r5 = *(4 + r7); // lwz @ 0x806B84E8
    r0 = *(8 + r7); // lwz @ 0x806B84EC
    *(0x1c + r1) = r8; // stw @ 0x806B84F0
    *(8 + r1) = r6; // stw @ 0x806B84F4
    *(0xc + r1) = r5; // stw @ 0x806B84F8
    *(0x10 + r1) = r0; // stw @ 0x806B84FC
    *(0x58 + r31) = r4; // stw @ 0x806B8500
    *(0x5c + r31) = r31; // stw @ 0x806B8504
    *(0x60 + r31) = r6; // stw @ 0x806B8508
    *(0x64 + r31) = r5; // stw @ 0x806B850C
    *(0x68 + r31) = r0; // stw @ 0x806B8510
    FUN_80668134(); // bl 0x80668134
    r3 = r31;
    r31 = *(0x2c + r1); // lwz @ 0x806B851C
    r0 = *(0x34 + r1); // lwz @ 0x806B8520
    return;
}