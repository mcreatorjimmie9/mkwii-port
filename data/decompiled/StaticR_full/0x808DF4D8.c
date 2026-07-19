/* Function at 0x808DF4D8, size=244 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_808DF4D8(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x808DF4E0
    /* lis r6, 0 */ // 0x808DF4E4
    *(0x34 + r1) = r0; // stw @ 0x808DF4E8
    r0 = r4 rlwinm 2; // rlwinm
    r5 = r5 + 0; // 0x808DF4F4
    *(0x2c + r1) = r31; // stw @ 0x808DF4F8
    *(0x28 + r1) = r30; // stw @ 0x808DF4FC
    /* li r30, 0 */ // 0x808DF500
    *(0x24 + r1) = r29; // stw @ 0x808DF504
    *(0x20 + r1) = r28; // stw @ 0x808DF508
    r28 = r3;
    r3 = r5 + 0x4b; // 0x808DF510
    r9 = *(0 + r6); // lwzu @ 0x808DF514
    *(8 + r1) = r9; // stw @ 0x808DF518
    r8 = *(4 + r6); // lwz @ 0x808DF51C
    r7 = *(8 + r6); // lwz @ 0x808DF520
    r6 = *(0xc + r6); // lwz @ 0x808DF524
    *(0xc + r1) = r8; // stw @ 0x808DF528
    *(0x10 + r1) = r7; // stw @ 0x808DF52C
    *(0x14 + r1) = r6; // stw @ 0x808DF530
    /* lwzx r4, r4, r0 */ // 0x808DF534
    /* crclr cr1eq */ // 0x808DF538
    FUN_8063803C(); // bl 0x8063803C
    /* lis r4, 0 */ // 0x808DF540
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x808DF548
    r5 = r29;
    /* li r4, 8 */ // 0x808DF550
    /* li r6, 0 */ // 0x808DF554
    FUN_805CFD60(r5, r4, r6); // bl 0x805CFD60
    r31 = r3;
    if (==) goto 0x0x808df5a8;
    /* clrlwi. r0, r3, 0x1b */ // 0x808DF568
    if (==) goto 0x0x808df58c;
    /* lis r3, 0 */ // 0x808DF570
    /* lis r5, 0 */ // 0x808DF574
    r3 = r3 + 0; // 0x808DF578
    /* li r4, 0x3c */ // 0x808DF57C
    r5 = r5 + 0; // 0x808DF580
    /* crclr cr1eq */ // 0x808DF584
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    *(4 + r28) = r31; // stw @ 0x808DF58C
    r4 = r29;
    r3 = r28 + 4; // 0x808DF594
    /* li r5, 0 */ // 0x808DF598
    /* li r6, 0 */ // 0x808DF59C
    FUN_805EB518(r4, r3, r5, r6); // bl 0x805EB518
    /* li r30, 1 */ // 0x808DF5A4
    r3 = r30;
    r31 = *(0x2c + r1); // lwz @ 0x808DF5AC
    r30 = *(0x28 + r1); // lwz @ 0x808DF5B0
    r29 = *(0x24 + r1); // lwz @ 0x808DF5B4
    r28 = *(0x20 + r1); // lwz @ 0x808DF5B8
    r0 = *(0x34 + r1); // lwz @ 0x808DF5BC
    return;
}