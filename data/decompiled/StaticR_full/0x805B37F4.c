/* Function at 0x805B37F4, size=328 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_805B37F4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x805B3804
    *(8 + r1) = r30; // stw @ 0x805B3808
    r30 = r3;
    r0 = *(0x15b8 + r3); // lwz @ 0x805B3810
    if (==) goto 0x0x805b3834;
    r3 = r0;
    r12 = *(0 + r3); // lwz @ 0x805B3820
    r12 = *(0x10 + r12); // lwz @ 0x805B3824
    /* mtctr r12 */ // 0x805B3828
    /* bctrl  */ // 0x805B382C
    /* b 0x805b3838 */ // 0x805B3830
    /* li r3, -1 */ // 0x805B3834
    if (!=) goto 0x0x805b391c;
    /* li r0, 4 */ // 0x805B3840
    /* li r5, 0 */ // 0x805B3844
    /* mtctr r0 */ // 0x805B3848
    /* clrlwi r0, r5, 0x18 */ // 0x805B384C
    /* mulli r0, r0, 0x920 */ // 0x805B3850
    r3 = r30 + r0; // 0x805B3854
    r4 = r3 + 0x1720; // 0x805B3858
    r3 = *(0x1740 + r3); // lhz @ 0x805B385C
    r0 = *(0x60 + r4); // lhz @ 0x805B3860
    /* andc r0, r3, r0 */ // 0x805B3864
    /* clrlwi. r0, r0, 0x1f */ // 0x805B3868
    if (==) goto 0x0x805b38a0;
    r0 = *(0x50 + r4); // lbz @ 0x805B3870
    /* li r31, 1 */ // 0x805B3874
    if (==) goto 0x0x805b38a8;
    r3 = r30 + 0x15b4; // 0x805B3880
    /* li r5, 0 */ // 0x805B3884
    FUN_805B1180(r3, r5); // bl 0x805B1180
    r4 = *(0x15b8 + r30); // lwz @ 0x805B388C
    r3 = r30 + 0x167c; // 0x805B3890
    *(0x15c0 + r30) = r4; // stw @ 0x805B3894
    FUN_805B1F90(r5, r3); // bl 0x805B1F90
    /* b 0x805b38a8 */ // 0x805B389C
    r5 = r5 + 1; // 0x805B38A0
    if (counter-- != 0) goto 0x0x805b384c;
    if (!=) goto 0x0x805b3920;
    /* li r0, 4 */ // 0x805B38B0
    /* li r5, 0 */ // 0x805B38B4
    /* mtctr r0 */ // 0x805B38B8
    /* clrlwi r0, r5, 0x18 */ // 0x805B38BC
    /* mulli r0, r0, 0xb0 */ // 0x805B38C0
    r3 = r30 + r0; // 0x805B38C4
    r4 = r3 + 0x3ba0; // 0x805B38C8
    r3 = *(0x3bc0 + r3); // lhz @ 0x805B38CC
    r0 = *(0x60 + r4); // lhz @ 0x805B38D0
    /* andc r0, r3, r0 */ // 0x805B38D4
    /* clrlwi. r0, r0, 0x1f */ // 0x805B38D8
    if (==) goto 0x0x805b3910;
    r0 = *(0x50 + r4); // lbz @ 0x805B38E0
    /* li r31, 1 */ // 0x805B38E4
    if (==) goto 0x0x805b3920;
    r3 = r30 + 0x15b4; // 0x805B38F0
    /* li r5, 0 */ // 0x805B38F4
    FUN_805B1180(r3, r5); // bl 0x805B1180
    r4 = *(0x15b8 + r30); // lwz @ 0x805B38FC
    r3 = r30 + 0x167c; // 0x805B3900
    *(0x15c0 + r30) = r4; // stw @ 0x805B3904
    FUN_805B1F90(r5, r3); // bl 0x805B1F90
    /* b 0x805b3920 */ // 0x805B390C
    r5 = r5 + 1; // 0x805B3910
    if (counter-- != 0) goto 0x0x805b38bc;
    /* b 0x805b3920 */ // 0x805B3918
    /* li r31, 1 */ // 0x805B391C
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x805B3924
    r30 = *(8 + r1); // lwz @ 0x805B3928
    r0 = *(0x14 + r1); // lwz @ 0x805B392C
    return;
}