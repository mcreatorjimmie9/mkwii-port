/* Function at 0x808FF66C, size=368 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808FF66C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x808FF674
    *(0x14 + r1) = r0; // stw @ 0x808FF678
    *(0xc + r1) = r31; // stw @ 0x808FF67C
    r31 = r3;
    r5 = *(0x14c + r3); // lwz @ 0x808FF684
    r0 = *(0 + r4); // lwz @ 0x808FF688
    r4 = r5 + 1; // 0x808FF68C
    /* subfc r0, r0, r4 */ // 0x808FF690
    /* subfe r0, r0, r0 */ // 0x808FF694
    r0 = r4 & r0; // 0x808FF698
    *(0x14c + r3) = r0; // stw @ 0x808FF69C
    FUN_808FC79C(r4); // bl 0x808FC79C
    /* lis r3, 0 */ // 0x808FF6A4
    /* lis r5, 0 */ // 0x808FF6A8
    r4 = *(0 + r3); // lwz @ 0x808FF6AC
    /* lis r6, -0x8000 */ // 0x808FF6B0
    r5 = *(0 + r5); // lwz @ 0x808FF6B4
    r3 = r31;
    r12 = *(0 + r31); // lwz @ 0x808FF6BC
    r0 = *(0x20 + r4); // lwz @ 0x808FF6C0
    r4 = r6 >> r5; // srw
    r12 = *(0x68 + r12); // lwz @ 0x808FF6C8
    r0 = r4 & r0; // 0x808FF6CC
    /* cntlzw r0, r0 */ // 0x808FF6D0
    /* srwi r4, r0, 5 */ // 0x808FF6D4
    /* mtctr r12 */ // 0x808FF6D8
    /* bctrl  */ // 0x808FF6DC
    r4 = *(0x308 + r31); // lwz @ 0x808FF6E0
    /* lis r3, 0 */ // 0x808FF6E4
    r4 = r4 + 1; // 0x808FF6E8
    *(0x308 + r31) = r4; // stw @ 0x808FF6EC
    r0 = *(0 + r3); // lwz @ 0x808FF6F0
    if (>) goto 0x0x808ff7c8;
    r3 = *(0x164 + r31); // lwz @ 0x808FF6FC
    /* li r5, 1 */ // 0x808FF700
    r0 = *(0x168 + r31); // lwz @ 0x808FF704
    /* li r4, 0 */ // 0x808FF708
    *(0x16d + r31) = r5; // stb @ 0x808FF70C
    if (!=) goto 0x0x808ff724;
    if (==) goto 0x0x808ff724;
    r4 = r5;
    if (==) goto 0x0x808ff7c8;
    r5 = *(0x168 + r31); // lwz @ 0x808FF72C
    r3 = *(0x15c + r31); // lwz @ 0x808FF730
    r4 = r5 + 1; // 0x808FF734
    r0 = *(0x164 + r31); // lwz @ 0x808FF738
    /* subfc r3, r3, r4 */ // 0x808FF73C
    /* subfe r3, r3, r3 */ // 0x808FF740
    r4 = r4 & r3; // 0x808FF744
    if (==) goto 0x0x808ff7c8;
    r6 = *(0x160 + r31); // lwz @ 0x808FF750
    /* slwi r0, r5, 4 */ // 0x808FF754
    r3 = *(0x170 + r31); // lwz @ 0x808FF758
    /* lwzx r0, r6, r0 */ // 0x808FF75C
    /* slwi r0, r0, 2 */ // 0x808FF760
    /* lwzx r3, r3, r0 */ // 0x808FF764
    r0 = *(0 + r3); // lbz @ 0x808FF768
    if (==) goto 0x0x808ff7c8;
    *(0x168 + r31) = r4; // stw @ 0x808FF774
    /* slwi r0, r4, 4 */ // 0x808FF778
    /* li r5, 0 */ // 0x808FF77C
    /* li r4, -1 */ // 0x808FF780
    /* stwx r5, r6, r0 */ // 0x808FF784
    r0 = *(0x168 + r31); // lwz @ 0x808FF788
    r3 = *(0x160 + r31); // lwz @ 0x808FF78C
    /* slwi r0, r0, 4 */ // 0x808FF790
    r3 = r3 + r0; // 0x808FF794
    *(4 + r3) = r5; // stw @ 0x808FF798
    r0 = *(0x168 + r31); // lwz @ 0x808FF79C
    r3 = *(0x160 + r31); // lwz @ 0x808FF7A0
    /* slwi r0, r0, 4 */ // 0x808FF7A4
    r3 = r3 + r0; // 0x808FF7A8
    *(8 + r3) = r4; // stw @ 0x808FF7AC
    r0 = *(0x168 + r31); // lwz @ 0x808FF7B0
    r3 = *(0x160 + r31); // lwz @ 0x808FF7B4
    /* slwi r0, r0, 4 */ // 0x808FF7B8
    r4 = *(0x15c + r31); // lwz @ 0x808FF7BC
    r3 = r3 + r0; // 0x808FF7C0
    *(0xc + r3) = r4; // stw @ 0x808FF7C4
    r0 = *(0x14 + r1); // lwz @ 0x808FF7C8
    r31 = *(0xc + r1); // lwz @ 0x808FF7CC
    return;
}