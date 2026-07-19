/* Function at 0x808CB2B4, size=188 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808CB2B4(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x808CB2C0
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x808CB2CC
    /* li r0, -1 */ // 0x808CB2D0
    r3 = r3 + 0; // 0x808CB2D4
    *(0 + r31) = r3; // stw @ 0x808CB2D8
    /* lis r5, 0 */ // 0x808CB2DC
    /* lis r4, 0 */ // 0x808CB2E0
    *(0xf0 + r31) = r0; // stw @ 0x808CB2E4
    /* lis r6, 0 */ // 0x808CB2E8
    r5 = r5 + 0; // 0x808CB2EC
    /* lis r7, 0 */ // 0x808CB2F0
    r10 = *(0 + r6); // lwzu @ 0x808CB2F4
    r4 = r4 + 0; // 0x808CB2F8
    *(0x14 + r1) = r10; // stw @ 0x808CB2FC
    r3 = r31 + 0x11c; // 0x808CB300
    r9 = *(4 + r6); // lwz @ 0x808CB304
    r8 = *(8 + r6); // lwz @ 0x808CB308
    *(0x104 + r31) = r8; // stw @ 0x808CB30C
    *(0xf4 + r31) = r5; // stw @ 0x808CB310
    *(0xf8 + r31) = r31; // stw @ 0x808CB314
    *(0xfc + r31) = r10; // stw @ 0x808CB318
    *(0x100 + r31) = r9; // stw @ 0x808CB31C
    r6 = *(0 + r7); // lwzu @ 0x808CB320
    *(0x18 + r1) = r9; // stw @ 0x808CB324
    r5 = *(4 + r7); // lwz @ 0x808CB328
    r0 = *(8 + r7); // lwz @ 0x808CB32C
    *(0x1c + r1) = r8; // stw @ 0x808CB330
    *(8 + r1) = r6; // stw @ 0x808CB334
    *(0xc + r1) = r5; // stw @ 0x808CB338
    *(0x10 + r1) = r0; // stw @ 0x808CB33C
    *(0x108 + r31) = r4; // stw @ 0x808CB340
    *(0x10c + r31) = r31; // stw @ 0x808CB344
    *(0x110 + r31) = r6; // stw @ 0x808CB348
    *(0x114 + r31) = r5; // stw @ 0x808CB34C
    *(0x118 + r31) = r0; // stw @ 0x808CB350
    FUN_80669F74(); // bl 0x80669F74
    r3 = r31;
    r31 = *(0x2c + r1); // lwz @ 0x808CB35C
    r0 = *(0x34 + r1); // lwz @ 0x808CB360
    return;
}