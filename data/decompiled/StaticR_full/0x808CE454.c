/* Function at 0x808CE454, size=336 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_808CE454(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x808CE468
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x808CE470
    /* lis r4, 0 */ // 0x808CE474
    r3 = r3 + 0; // 0x808CE478
    *(0 + r31) = r3; // stw @ 0x808CE47C
    /* lis r7, 0 */ // 0x808CE480
    r4 = r4 + 0; // 0x808CE484
    r6 = *(0 + r7); // lwzu @ 0x808CE488
    r3 = r31 + 0x5c; // 0x808CE48C
    *(8 + r1) = r6; // stw @ 0x808CE490
    r5 = *(4 + r7); // lwz @ 0x808CE494
    r0 = *(8 + r7); // lwz @ 0x808CE498
    *(0xc + r1) = r5; // stw @ 0x808CE49C
    *(0x10 + r1) = r0; // stw @ 0x808CE4A0
    *(0x48 + r31) = r4; // stw @ 0x808CE4A4
    *(0x4c + r31) = r31; // stw @ 0x808CE4A8
    *(0x50 + r31) = r6; // stw @ 0x808CE4AC
    *(0x54 + r31) = r5; // stw @ 0x808CE4B0
    *(0x58 + r31) = r0; // stw @ 0x808CE4B4
    FUN_8066880C(); // bl 0x8066880C
    /* lis r30, 0 */ // 0x808CE4BC
    r12 = *(0x5c + r31); // lwz @ 0x808CE4C0
    r6 = *(0 + r30); // lwz @ 0x808CE4C4
    /* li r5, 2 */ // 0x808CE4C8
    r12 = *(0x10 + r12); // lwz @ 0x808CE4CC
    r3 = r31 + 0x5c; // 0x808CE4D0
    r6 = *(0x26 + r6); // lbz @ 0x808CE4D4
    /* li r4, 1 */ // 0x808CE4D8
    r0 = r6 + -2; // 0x808CE4DC
    /* orc r5, r6, r5 */ // 0x808CE4E0
    /* srwi r0, r0, 1 */ // 0x808CE4E4
    /* subf r0, r0, r5 */ // 0x808CE4E8
    /* srwi r5, r0, 0x1f */ // 0x808CE4EC
    /* mtctr r12 */ // 0x808CE4F0
    /* bctrl  */ // 0x808CE4F4
    r3 = r31 + 0x5c; // 0x808CE4F8
    /* li r4, 0 */ // 0x808CE4FC
    FUN_8066821C(r3, r4); // bl 0x8066821C
    r3 = r31 + 0x5c; // 0x808CE504
    r5 = r31 + 0x48; // 0x808CE508
    /* li r4, 2 */ // 0x808CE50C
    /* li r6, 0 */ // 0x808CE510
    FUN_80668D34(r3, r5, r4, r6); // bl 0x80668D34
    r3 = r31 + 0x5c; // 0x808CE518
    r5 = r31 + 0x48; // 0x808CE51C
    /* li r4, 0 */ // 0x808CE520
    /* li r6, 0 */ // 0x808CE524
    FUN_80668D34(r3, r5, r4, r6); // bl 0x80668D34
    r3 = r31 + 0x5c; // 0x808CE52C
    r5 = r31 + 0x48; // 0x808CE530
    /* li r4, 1 */ // 0x808CE534
    /* li r6, 0 */ // 0x808CE538
    FUN_80668D34(r3, r5, r4, r6); // bl 0x80668D34
    r3 = r31;
    r4 = r31 + 0x5c; // 0x808CE544
    FUN_80671C34(r4, r6, r3, r4); // bl 0x80671C34
    r4 = *(0 + r30); // lwz @ 0x808CE54C
    /* li r3, 0 */ // 0x808CE550
    r0 = *(0xb70 + r4); // lwz @ 0x808CE554
    if (<) goto 0x0x808ce56c;
    if (>) goto 0x0x808ce56c;
    /* li r3, 1 */ // 0x808CE568
    if (==) goto 0x0x808ce580;
    /* li r0, 0x12c */ // 0x808CE574
    *(0x44 + r31) = r0; // stw @ 0x808CE578
    /* b 0x808ce588 */ // 0x808CE57C
    /* li r0, 0x258 */ // 0x808CE580
    *(0x44 + r31) = r0; // stw @ 0x808CE584
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x808CE58C
    r30 = *(0x18 + r1); // lwz @ 0x808CE590
    r0 = *(0x24 + r1); // lwz @ 0x808CE594
    return;
}