/* Function at 0x806C3780, size=248 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806C3780(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -240(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, -1 */ // 0x806C3788
    *(0xe8 + r1) = r30; // stw @ 0x806C3794
    *(0xe4 + r1) = r29; // stw @ 0x806C3798
    r29 = r3;
    r0 = *(0x6c + r3); // lbz @ 0x806C37A0
    *(0x2870 + r3) = r4; // stw @ 0x806C37A4
    if (==) goto 0x0x806c3880;
    /* lis r3, 0 */ // 0x806C37B0
    r3 = *(0 + r3); // lwz @ 0x806C37B4
    r3 = *(0 + r3); // lwz @ 0x806C37B8
    r30 = *(0x28c + r3); // lwz @ 0x806C37BC
    if (!=) goto 0x0x806c37d0;
    /* li r30, 0 */ // 0x806C37C8
    /* b 0x806c3824 */ // 0x806C37CC
    /* lis r31, 0 */ // 0x806C37D0
    r31 = r31 + 0; // 0x806C37D4
    if (==) goto 0x0x806c3820;
    r12 = *(0 + r30); // lwz @ 0x806C37DC
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806C37E4
    /* mtctr r12 */ // 0x806C37E8
    /* bctrl  */ // 0x806C37EC
    /* b 0x806c3808 */ // 0x806C37F0
    if (!=) goto 0x0x806c3804;
    /* li r0, 1 */ // 0x806C37FC
    /* b 0x806c3814 */ // 0x806C3800
    r3 = *(0 + r3); // lwz @ 0x806C3804
    if (!=) goto 0x0x806c37f4;
    /* li r0, 0 */ // 0x806C3810
    if (==) goto 0x0x806c3820;
    /* b 0x806c3824 */ // 0x806C381C
    /* li r30, 0 */ // 0x806C3820
    r4 = r29 + 0x70; // 0x806C3828
    FUN_805ABFC4(r3, r4); // bl 0x805ABFC4
    r3 = r30 + 0x404; // 0x806C3830
    /* li r5, 0 */ // 0x806C3838
    FUN_80660C30(r4, r3, r4, r5); // bl 0x80660C30
    /* lis r4, 0 */ // 0x806C3840
    r4 = r4 + 0; // 0x806C3848
    /* li r5, 0xc */ // 0x806C384C
    /* li r6, 5 */ // 0x806C3850
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r12 = *(0 + r29); // lwz @ 0x806C3858
    r3 = r29;
    /* li r4, 0xa1 */ // 0x806C3860
    /* li r5, 0 */ // 0x806C3864
    r12 = *(0x24 + r12); // lwz @ 0x806C3868
    /* mtctr r12 */ // 0x806C386C
    /* bctrl  */ // 0x806C3870
    /* li r0, 6 */ // 0x806C3874
}