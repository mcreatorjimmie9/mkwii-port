/* Function at 0x805DF4C0, size=416 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 5 function(s) */

int FUN_805DF4C0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* stmw r27, 0x1c(r1) */ // 0x805DF4CC
    /* lis r30, 0 */ // 0x805DF4D0
    r30 = r30 + 0; // 0x805DF4D4
    r27 = r3;
    r31 = r30 + 0; // 0x805DF4DC
    r28 = r4;
    r29 = r5;
    r0 = *(0xa0 + r31); // lwz @ 0x805DF4E8
    if (==) goto 0x0x805df728;
    r0 = *(0xa4 + r31); // lbz @ 0x805DF4F4
    if (!=) goto 0x0x805df728;
    if (<=) goto 0x0x805df588;
    r5 = *(0x60 + r31); // lwz @ 0x805DF508
    if (!=) goto 0x0x805df51c;
    /* li r3, 0 */ // 0x805DF514
    /* b 0x805df72c */ // 0x805DF518
    r0 = *(0x50 + r31); // lwz @ 0x805DF51C
    if (<=) goto 0x0x805df580;
    r0 = r3 + -1; // 0x805DF528
    r3 = r31;
    /* slwi r0, r0, 2 */ // 0x805DF530
    r4 = r30 + 0x200; // 0x805DF534
    r6 = r5 + r0; // 0x805DF538
    /* li r5, 0x20 */ // 0x805DF53C
    /* li r7, 2 */ // 0x805DF540
    FUN_805E3430(r4, r5, r7); // bl 0x805E3430
    if (>=) goto 0x0x805df558;
    /* li r3, 0 */ // 0x805DF550
    /* b 0x805df72c */ // 0x805DF554
    r3 = r30 + 0x200; // 0x805DF558
    r5 = *(0x64 + r31); // lwz @ 0x805DF55C
    r4 = *(0x200 + r30); // lwz @ 0x805DF560
    r0 = *(4 + r3); // lwz @ 0x805DF564
    r3 = r5 + r4; // 0x805DF568
    *(0xb8 + r31) = r3; // stw @ 0x805DF56C
    /* subf r0, r4, r0 */ // 0x805DF570
    *(0xc0 + r31) = r27; // stw @ 0x805DF574
    *(0xbc + r31) = r0; // stw @ 0x805DF578
    /* b 0x805df59c */ // 0x805DF57C
    /* li r3, 0 */ // 0x805DF580
    /* b 0x805df72c */ // 0x805DF584
    r4 = *(0x64 + r31); // lwz @ 0x805DF588
    r0 = *(0x54 + r31); // lwz @ 0x805DF58C
    *(0xb8 + r31) = r4; // stw @ 0x805DF590
    *(0xbc + r31) = r0; // stw @ 0x805DF594
    *(0xc0 + r31) = r3; // stw @ 0x805DF598
    r3 = r30 + 0; // 0x805DF59C
    r0 = *(0xa7 + r3); // lbz @ 0x805DF5A0
    if (==) goto 0x0x805df5cc;
    if (<) goto 0x0x805df5c0;
    r0 = *(0x98 + r3); // lwz @ 0x805DF5B4
    if (<) goto 0x0x805df5c8;
    /* li r3, 0 */ // 0x805DF5C0
    /* b 0x805df72c */ // 0x805DF5C4
    *(0xec + r3) = r29; // stw @ 0x805DF5C8
    r29 = r30 + 0; // 0x805DF5CC
    /* clrlwi r28, r28, 0x1f */ // 0x805DF5D0
    r0 = *(0xb0 + r29); // lwz @ 0x805DF5D4
    /* li r3, 0 */ // 0x805DF5D8
    *(0xa6 + r29) = r28; // stb @ 0x805DF5DC
    *(0xd8 + r29) = r3; // stw @ 0x805DF5E4
    if (==) goto 0x0x805df650;
    r4 = *(0xb4 + r29); // lwz @ 0x805DF5EC
    r3 = r29;
    r5 = *(0x58 + r29); // lwz @ 0x805DF5F4
    /* li r7, 2 */ // 0x805DF5F8
    r6 = *(0x64 + r29); // lwz @ 0x805DF5FC
    FUN_805E3430(r3, r7); // bl 0x805E3430
    if (>=) goto 0x0x805df614;
    /* li r3, 0 */ // 0x805DF60C
    /* b 0x805df72c */ // 0x805DF610
    r4 = *(0xb4 + r29); // lwz @ 0x805DF614
    /* li r3, 0x14 */ // 0x805DF618
    r0 = *(0xb8 + r29); // lwz @ 0x805DF61C
    r5 = *(0x64 + r29); // lwz @ 0x805DF620
    r0 = r4 + r0; // 0x805DF624
    /* subf r28, r5, r0 */ // 0x805DF628
    r4 = r28;
    FUN_805E09B4(r4); // bl 0x805E09B4
    r0 = *(0xa7 + r29); // lbz @ 0x805DF634
    if (==) goto 0x0x805df67c;
    r4 = r28;
    /* li r3, 0xc */ // 0x805DF644
    FUN_805DE8F8(r4, r3); // bl 0x805DE8F8
    /* b 0x805df67c */ // 0x805DF64C
    /* li r3, 0x14 */ // 0x805DF650
    /* li r4, 0 */ // 0x805DF654
    FUN_805E09B4(r3, r3, r4); // bl 0x805E09B4
    r0 = *(0xa7 + r29); // lbz @ 0x805DF65C
}