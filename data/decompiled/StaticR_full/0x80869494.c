/* Function at 0x80869494, size=196 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_80869494(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* li r4, 0xc */ // 0x8086949C
    *(0x24 + r1) = r0; // stw @ 0x808694A0
    /* li r0, 0 */ // 0x808694A4
    /* stmw r27, 0xc(r1) */ // 0x808694A8
    r27 = r3;
    r29 = r27;
    /* li r28, 0 */ // 0x808694B4
    /* li r31, 3 */ // 0x808694B8
    *(4 + r3) = r4; // sth @ 0x808694BC
    *(8 + r3) = r0; // stw @ 0x808694C0
    *(0xc + r3) = r0; // stw @ 0x808694C4
    /* b 0x80869504 */ // 0x808694C8
    r30 = *(0x44 + r29); // lwz @ 0x808694CC
    *(0 + r30) = r31; // stw @ 0x808694D0
    r3 = *(4 + r30); // lwz @ 0x808694D4
    r4 = *(8 + r30); // lwz @ 0x808694D8
    FUN_805ECA18(); // bl 0x805ECA18
    r12 = *(0x20 + r30); // lwz @ 0x808694E0
    r3 = r30 + 0x20; // 0x808694E4
    r4 = r30;
    /* li r5, 0x271a */ // 0x808694EC
    r12 = *(0x118 + r12); // lwz @ 0x808694F0
    /* mtctr r12 */ // 0x808694F4
    /* bctrl  */ // 0x808694F8
    r29 = r29 + 4; // 0x808694FC
    r28 = r28 + 1; // 0x80869500
    r0 = *(0 + r27); // lwz @ 0x80869504
    if (<) goto 0x0x808694cc;
    /* li r0, 0 */ // 0x80869510
    *(0x10 + r27) = r0; // stw @ 0x80869514
    *(0x14 + r27) = r0; // stw @ 0x80869518
    *(0x18 + r27) = r0; // stw @ 0x8086951C
    *(0x1c + r27) = r0; // stw @ 0x80869520
    *(0x20 + r27) = r0; // stw @ 0x80869524
    *(0x24 + r27) = r0; // stw @ 0x80869528
    *(0x28 + r27) = r0; // stw @ 0x8086952C
    *(0x2c + r27) = r0; // stw @ 0x80869530
    *(0x30 + r27) = r0; // stw @ 0x80869534
    *(0x34 + r27) = r0; // stw @ 0x80869538
    *(0x38 + r27) = r0; // stw @ 0x8086953C
    *(0x3c + r27) = r0; // stw @ 0x80869540
    r0 = *(0x24 + r1); // lwz @ 0x80869548
    return;
}