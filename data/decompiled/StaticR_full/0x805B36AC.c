/* Function at 0x805B36AC, size=328 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 4 function(s) */

int FUN_805B36AC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    r0 = *(4 + r5); // lwz @ 0x805B36B8
    /* stmw r27, 0xc(r1) */ // 0x805B36BC
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    if (==) goto 0x0x805b36f0;
    r3 = r0;
    r12 = *(0 + r3); // lwz @ 0x805B36DC
    r12 = *(0x10 + r12); // lwz @ 0x805B36E0
    /* mtctr r12 */ // 0x805B36E4
    /* bctrl  */ // 0x805B36E8
    /* b 0x805b36f4 */ // 0x805B36EC
    /* li r3, -1 */ // 0x805B36F0
    /* li r31, 3 */ // 0x805B36F8
    if (<=) goto 0x0x805b3710;
    if (!=) goto 0x0x805b3714;
    /* li r31, 1 */ // 0x805B3708
    /* b 0x805b3714 */ // 0x805B370C
    /* li r31, 0 */ // 0x805B3710
    r3 = *(8 + r29); // lwz @ 0x805B3714
    if (==) goto 0x0x805b3734;
    r12 = *(0 + r3); // lwz @ 0x805B3720
    r12 = *(0x34 + r12); // lwz @ 0x805B3724
    /* mtctr r12 */ // 0x805B3728
    /* bctrl  */ // 0x805B372C
    /* b 0x805b3738 */ // 0x805B3730
    /* li r3, -1 */ // 0x805B3734
    /* li r5, 0 */ // 0x805B373C
    if (==) goto 0x0x805b3750;
    if (==) goto 0x0x805b3798;
    /* b 0x805b37dc */ // 0x805B374C
    /* clrlwi r0, r3, 0x18 */ // 0x805B3750
    /* mulli r0, r0, 0x920 */ // 0x805B3754
    r3 = r27 + r0; // 0x805B3758
    r0 = *(0x1770 + r3); // lbz @ 0x805B375C
    r4 = r3 + 0x1720; // 0x805B3760
    if (==) goto 0x0x805b37dc;
    if (!=) goto 0x0x805b3780;
    r3 = r28;
    /* li r5, 0 */ // 0x805B3778
    FUN_805B1180(r3, r5); // bl 0x805B1180
    r4 = *(4 + r28); // lwz @ 0x805B3780
    r3 = r28 + 0xc8; // 0x805B3784
    *(0xc + r28) = r4; // stw @ 0x805B3788
    FUN_805B1F90(r5, r3); // bl 0x805B1F90
    /* li r5, 1 */ // 0x805B3790
    /* b 0x805b37dc */ // 0x805B3794
    /* clrlwi r0, r3, 0x18 */ // 0x805B3798
    /* mulli r0, r0, 0xb0 */ // 0x805B379C
    r3 = r27 + r0; // 0x805B37A0
    r0 = *(0x3bf0 + r3); // lbz @ 0x805B37A4
    r4 = r3 + 0x3ba0; // 0x805B37A8
    if (==) goto 0x0x805b37dc;
    if (!=) goto 0x0x805b37c8;
    r3 = r28;
    /* li r5, 0 */ // 0x805B37C0
    FUN_805B1180(r3, r5); // bl 0x805B1180
    r4 = *(4 + r28); // lwz @ 0x805B37C8
    r3 = r28 + 0xc8; // 0x805B37CC
    *(0xc + r28) = r4; // stw @ 0x805B37D0
    FUN_805B1F90(r5, r3); // bl 0x805B1F90
    /* li r5, 1 */ // 0x805B37D8
    r3 = r5;
    r0 = *(0x24 + r1); // lwz @ 0x805B37E4
    return;
}