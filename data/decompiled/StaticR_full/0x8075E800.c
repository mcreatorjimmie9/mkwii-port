/* Function at 0x8075E800, size=320 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8075E800(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8075E80C
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x8075E814
    r12 = *(0 + r3); // lwz @ 0x8075E818
    r12 = *(0x14 + r12); // lwz @ 0x8075E81C
    /* mtctr r12 */ // 0x8075E820
    /* bctrl  */ // 0x8075E824
    if (!=) goto 0x0x8075e924;
    r3 = r31;
    FUN_8075E690(r3); // bl 0x8075E690
    r5 = *(0x20 + r31); // lwz @ 0x8075E838
    r0 = *(0x46 + r5); // lha @ 0x8075E83C
    r4 = *(8 + r5); // lwz @ 0x8075E840
    /* slwi r0, r0, 4 */ // 0x8075E844
    r3 = r4 + r0; // 0x8075E848
    r0 = *(0xe + r3); // lhz @ 0x8075E84C
    if (!=) goto 0x0x8075e880;
    r0 = *(0x48 + r5); // lha @ 0x8075E858
    /* slwi r0, r0, 4 */ // 0x8075E85C
    r3 = r4 + r0; // 0x8075E860
    r0 = *(0xe + r3); // lhz @ 0x8075E864
    if (!=) goto 0x0x8075e880;
    /* li r0, 1 */ // 0x8075E870
    *(0xb8 + r31) = r0; // stw @ 0x8075E874
    *(0x1b0 + r31) = r0; // stb @ 0x8075E878
    /* b 0x8075e8d0 */ // 0x8075E87C
    r0 = *(0x46 + r5); // lha @ 0x8075E880
    r4 = *(8 + r5); // lwz @ 0x8075E884
    /* slwi r0, r0, 4 */ // 0x8075E888
    r3 = r4 + r0; // 0x8075E88C
    r0 = *(0xe + r3); // lhz @ 0x8075E890
    if (!=) goto 0x0x8075e8c8;
    r0 = *(0x48 + r5); // lha @ 0x8075E89C
    /* slwi r0, r0, 4 */ // 0x8075E8A0
    r3 = r4 + r0; // 0x8075E8A4
    r0 = *(0xe + r3); // lhz @ 0x8075E8A8
    if (!=) goto 0x0x8075e8c8;
    /* li r3, 2 */ // 0x8075E8B4
    /* li r0, 1 */ // 0x8075E8B8
    *(0xb8 + r31) = r3; // stw @ 0x8075E8BC
    *(0x1b0 + r31) = r0; // stb @ 0x8075E8C0
    /* b 0x8075e8d0 */ // 0x8075E8C4
    /* li r0, 0 */ // 0x8075E8C8
    *(0x1b0 + r31) = r0; // stb @ 0x8075E8CC
    r3 = *(0x20 + r31); // lwz @ 0x8075E8D0
    r0 = *(0x46 + r3); // lha @ 0x8075E8D4
    r3 = *(8 + r3); // lwz @ 0x8075E8D8
    /* slwi r0, r0, 4 */ // 0x8075E8DC
    r3 = r3 + r0; // 0x8075E8E0
    r0 = *(0xc + r3); // lhz @ 0x8075E8E4
    if (!=) goto 0x0x8075e8fc;
    /* li r0, 0 */ // 0x8075E8F0
    *(0x1ac + r31) = r0; // stw @ 0x8075E8F4
    /* b 0x8075e92c */ // 0x8075E8F8
    if (!=) goto 0x0x8075e910;
    /* li r0, 1 */ // 0x8075E904
    *(0x1ac + r31) = r0; // stw @ 0x8075E908
    /* b 0x8075e92c */ // 0x8075E90C
    if (!=) goto 0x0x8075e92c;
    /* li r0, 2 */ // 0x8075E918
    *(0x1ac + r31) = r0; // stw @ 0x8075E91C
    /* b 0x8075e92c */ // 0x8075E920
    /* li r0, 3 */ // 0x8075E924
    *(0x1ac + r31) = r0; // stw @ 0x8075E928
    r0 = *(0x14 + r1); // lwz @ 0x8075E92C
    r31 = *(0xc + r1); // lwz @ 0x8075E930
    return;
}