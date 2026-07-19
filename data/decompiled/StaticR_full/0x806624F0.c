/* Function at 0x806624F0, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806624F0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80662500
    r30 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x8066250C
    r3 = r30 + 0x44; // 0x80662510
    r4 = r4 + 0; // 0x80662514
    *(0 + r30) = r4; // stw @ 0x80662518
    FUN_80668134(r4, r3, r4); // bl 0x80668134
    r31 = r30 + 0x54; // 0x80662520
    r3 = r31;
    FUN_806A0418(r4, r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x8066252C
    r3 = r30 + 0x1c8; // 0x80662530
    r4 = r4 + 0; // 0x80662534
    *(0 + r31) = r4; // stw @ 0x80662538
    FUN_806A0418(r4, r3, r4); // bl 0x806A0418
    /* lis r31, 0 */ // 0x80662540
    r3 = r30 + 0x340; // 0x80662544
    r31 = r31 + 0; // 0x80662548
    *(0x340 + r30) = r31; // stw @ 0x8066254C
    /* li r4, 7 */ // 0x80662550
    FUN_805B5BB4(r3, r4); // bl 0x805B5BB4
    *(0x410 + r30) = r31; // stw @ 0x80662558
    r3 = r30 + 0x410; // 0x8066255C
    /* li r4, 7 */ // 0x80662560
    FUN_805B5BB4(r4, r3, r4); // bl 0x805B5BB4
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8066256C
    r30 = *(8 + r1); // lwz @ 0x80662570
    r0 = *(0x14 + r1); // lwz @ 0x80662574
    return;
}