/* Function at 0x808EB5B4, size=236 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 3 function(s) */

int FUN_808EB5B4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x808EB5C0
    r31 = r3;
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r27, r3, 0x18 */ // 0x808EB5CC
    /* li r26, 0 */ // 0x808EB5D0
    /* li r28, 2 */ // 0x808EB5D4
    /* lis r29, 0 */ // 0x808EB5D8
    /* lis r30, 0 */ // 0x808EB5DC
    /* b 0x808eb650 */ // 0x808EB5E0
    r12 = *(0 + r31); // lwz @ 0x808EB5E4
    r3 = r31;
    r12 = *(0x70 + r12); // lwz @ 0x808EB5EC
    /* mtctr r12 */ // 0x808EB5F0
    /* bctrl  */ // 0x808EB5F4
    /* clrlwi r4, r26, 0x18 */ // 0x808EB5F8
    /* li r5, 1 */ // 0x808EB5FC
    FUN_8066B6CC(r5); // bl 0x8066B6CC
    /* clrlwi r4, r26, 0x18 */ // 0x808EB604
    r3 = *(0 + r29); // lwz @ 0x808EB608
    /* mulli r0, r4, 0xf0 */ // 0x808EB60C
    r3 = r3 + r0; // 0x808EB610
    *(0xce4 + r3) = r28; // stw @ 0x808EB614
    r3 = *(0 + r30); // lwz @ 0x808EB618
    if (==) goto 0x0x808eb64c;
    r3 = *(0x14 + r3); // lwz @ 0x808EB624
    if (==) goto 0x0x808eb64c;
    /* mulli r0, r4, 0xc */ // 0x808EB630
    r3 = r3 + r0; // 0x808EB634
    r3 = *(0x18 + r3); // lwz @ 0x808EB638
    if (==) goto 0x0x808eb64c;
    /* li r5, 0 */ // 0x808EB644
    FUN_808E08F0(r5); // bl 0x808E08F0
    r26 = r26 + 1; // 0x808EB64C
    /* clrlwi r0, r26, 0x18 */ // 0x808EB650
    if (<) goto 0x0x808eb5e4;
    /* li r6, 0 */ // 0x808EB65C
    /* li r5, 0 */ // 0x808EB660
    /* li r4, 0 */ // 0x808EB664
    /* b 0x808eb680 */ // 0x808EB668
    r3 = *(0x48 + r31); // lwz @ 0x808EB66C
    r6 = r6 + 1; // 0x808EB670
    /* lwzx r3, r3, r5 */ // 0x808EB674
    r5 = r5 + 4; // 0x808EB678
    *(0x80 + r3) = r4; // stb @ 0x808EB67C
    r0 = *(0x4c + r31); // lwz @ 0x808EB680
    if (<) goto 0x0x808eb66c;
    r0 = *(0x24 + r1); // lwz @ 0x808EB690
    return;
}