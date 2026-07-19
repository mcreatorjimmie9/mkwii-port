/* Function at 0x8072A80C, size=252 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8072A80C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x8072A820
    r4 = *(0x996 + r3); // lha @ 0x8072A824
    if (<=) goto 0x0x8072a848;
    r0 = *(0x99a + r3); // lha @ 0x8072A830
    if (>=) goto 0x0x8072a848;
    /* li r4, 0 */ // 0x8072A83C
    FUN_80735618(r4); // bl 0x80735618
    /* b 0x8072a8bc */ // 0x8072A844
    r0 = *(0x99a + r3); // lha @ 0x8072A848
    if (>=) goto 0x0x8072a860;
    r0 = *(0x994 + r3); // lha @ 0x8072A854
    if (!=) goto 0x0x8072a8bc;
    r3 = *(0x2a4 + r3); // lwz @ 0x8072A860
    r3 = r3 + 0x74; // 0x8072A864
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8072a87c;
    /* li r3, 0 */ // 0x8072A874
    /* b 0x8072a880 */ // 0x8072A878
    r3 = *(0xc + r3); // lwz @ 0x8072A87C
    /* li r0, 0 */ // 0x8072A884
    if (==) goto 0x0x8072a894;
    if (!=) goto 0x0x8072a898;
    /* li r0, 1 */ // 0x8072A894
    if (==) goto 0x0x8072a8bc;
    r3 = *(0x2a4 + r31); // lwz @ 0x8072A8A0
    r12 = *(0 + r3); // lwz @ 0x8072A8A4
    r12 = *(0x18 + r12); // lwz @ 0x8072A8A8
    /* mtctr r12 */ // 0x8072A8AC
    /* bctrl  */ // 0x8072A8B0
    /* li r0, 0 */ // 0x8072A8B4
    *(0xc2 + r31) = r0; // stb @ 0x8072A8B8
    r3 = *(0x996 + r31); // lha @ 0x8072A8BC
    r0 = r3 + 1; // 0x8072A8C0
    *(0x996 + r31) = r0; // sth @ 0x8072A8C4
    /* extsh r0, r0 */ // 0x8072A8C8
    if (<=) goto 0x0x8072a8dc;
    /* li r0, 0x64 */ // 0x8072A8D4
    *(0x996 + r31) = r0; // sth @ 0x8072A8D8
    r0 = *(0x46 + r31); // lbz @ 0x8072A8DC
    /* li r30, 0 */ // 0x8072A8E0
    if (!=) goto 0x0x8072a904;
    r0 = *(0x47 + r31); // lbz @ 0x8072A8EC
    if (!=) goto 0x0x8072a904;
    r0 = *(0x48 + r31); // lbz @ 0x8072A8F8
    if (==) goto 0x0x8072a924;
    r3 = *(0x118 + r31); // lwz @ 0x8072A904
}