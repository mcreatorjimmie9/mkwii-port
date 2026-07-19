/* Function at 0x808EB4A8, size=268 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_808EB4A8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x808EB4BC
    r30 = r4;
    r12 = *(0 + r3); // lwz @ 0x808EB4C4
    r12 = *(0x70 + r12); // lwz @ 0x808EB4C8
    /* mtctr r12 */ // 0x808EB4CC
    /* bctrl  */ // 0x808EB4D0
    /* mulli r0, r30, 0x5c */ // 0x808EB4D4
    r3 = r3 + r0; // 0x808EB4D8
    r0 = *(0xa4 + r3); // lbz @ 0x808EB4DC
    if (!=) goto 0x0x808eb584;
    /* lis r3, 0 */ // 0x808EB4E8
    r3 = *(0 + r3); // lwz @ 0x808EB4EC
    if (==) goto 0x0x808eb524;
    r3 = *(0x14 + r3); // lwz @ 0x808EB4F8
    if (==) goto 0x0x808eb524;
    /* clrlwi r4, r30, 0x18 */ // 0x808EB504
    /* mulli r0, r4, 0xc */ // 0x808EB508
    r3 = r3 + r0; // 0x808EB50C
    r3 = *(0x18 + r3); // lwz @ 0x808EB510
    if (==) goto 0x0x808eb524;
    /* li r5, 0 */ // 0x808EB51C
    FUN_808E08F0(r5); // bl 0x808E08F0
    r12 = *(0 + r31); // lwz @ 0x808EB524
    r3 = r31;
    r12 = *(0x70 + r12); // lwz @ 0x808EB52C
    /* mtctr r12 */ // 0x808EB530
    /* bctrl  */ // 0x808EB534
    r4 = r30;
    /* li r5, 1 */ // 0x808EB53C
    FUN_8066B6CC(r4, r5); // bl 0x8066B6CC
    r3 = *(0x48 + r31); // lwz @ 0x808EB544
    /* slwi r0, r30, 3 */ // 0x808EB548
    /* li r7, 0 */ // 0x808EB54C
    /* slwi r5, r30, 1 */ // 0x808EB550
    /* lwzx r4, r3, r0 */ // 0x808EB554
    r0 = r5 + 1; // 0x808EB558
    /* slwi r0, r0, 2 */ // 0x808EB55C
    r3 = r31;
    *(0x80 + r4) = r7; // stb @ 0x808EB564
    /* li r4, 6 */ // 0x808EB568
    /* li r5, -1 */ // 0x808EB56C
    r6 = *(0x48 + r31); // lwz @ 0x808EB570
    /* lwzx r6, r6, r0 */ // 0x808EB574
    *(0x80 + r6) = r7; // stb @ 0x808EB578
    FUN_806724B8(r4, r5); // bl 0x806724B8
    /* b 0x808eb59c */ // 0x808EB580
    if (!=) goto 0x0x808eb59c;
    /* lis r4, 0 */ // 0x808EB58C
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x808EB594
    FUN_808B3BEC(r4, r3); // bl 0x808B3BEC
    r0 = *(0x14 + r1); // lwz @ 0x808EB59C
    r31 = *(0xc + r1); // lwz @ 0x808EB5A0
    r30 = *(8 + r1); // lwz @ 0x808EB5A4
    return;
}