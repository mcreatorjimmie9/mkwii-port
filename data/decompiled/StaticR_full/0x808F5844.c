/* Function at 0x808F5844, size=532 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808F5844(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r5 = r4;
    *(0x14 + r1) = r0; // stw @ 0x808F5854
    *(0xc + r1) = r31; // stw @ 0x808F5858
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x808F5860
    if (<) goto 0x0x808f587c;
    r0 = *(0x6fa + r3); // lbz @ 0x808F5868
    if (!=) goto 0x0x808f587c;
    /* li r3, 0 */ // 0x808F5874
    /* b 0x808f5a40 */ // 0x808F5878
    /* lis r6, 0 */ // 0x808F587C
    r0 = *(0x6ec + r3); // lbz @ 0x808F5880
    r6 = *(0 + r6); // lwz @ 0x808F5884
    /* li r8, 1 */ // 0x808F5888
    /* slwi r0, r0, 2 */ // 0x808F588C
    r6 = *(0xc + r6); // lwz @ 0x808F5890
    /* lwzx r6, r6, r0 */ // 0x808F5894
    r0 = *(0x38 + r6); // lwz @ 0x808F5898
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x808F589C
    if (==) goto 0x0x808f59d8;
    r0 = *(0x6fa + r3); // lbz @ 0x808F58A4
    if (!=) goto 0x0x808f58b8;
    /* li r3, 0 */ // 0x808F58B0
    /* b 0x808f5a40 */ // 0x808F58B4
    r7 = *(0xf8 + r3); // lwz @ 0x808F58B8
    if (==) goto 0x0x808f5938;
    r6 = *(0x6c8 + r3); // lwz @ 0x808F58C4
    r0 = r6 + -0x1d; // 0x808F58C8
    if (>) goto 0x0x808f5938;
    r0 = r4 + -0x12; // 0x808F58D4
    if (>) goto 0x0x808f59a0;
    r12 = *(0 + r31); // lwz @ 0x808F58E0
    r3 = r31;
    /* li r4, 2 */ // 0x808F58E8
    r12 = *(0x134 + r12); // lwz @ 0x808F58EC
    /* mtctr r12 */ // 0x808F58F0
    /* bctrl  */ // 0x808F58F4
    r3 = *(0x104 + r31); // lwz @ 0x808F58F8
    if (==) goto 0x0x808f590c;
    /* li r4, 2 */ // 0x808F5904
    FUN_805E3430(r4); // bl 0x805E3430
    /* lis r3, 0 */ // 0x808F590C
    /* li r0, 0 */ // 0x808F5910
    /* lfs f0, 0(r3) */ // 0x808F5914
    /* li r3, -1 */ // 0x808F5918
    *(0x108 + r31) = r3; // stw @ 0x808F591C
    /* li r3, 2 */ // 0x808F5920
    *(0x10c + r31) = r0; // stw @ 0x808F5924
    /* stfs f0, 0x110(r31) */ // 0x808F5928
    *(0x118 + r31) = r0; // stb @ 0x808F592C
    *(0x114 + r31) = r0; // stw @ 0x808F5930
    /* b 0x808f5a40 */ // 0x808F5934
    r0 = r4 + -0x12; // 0x808F5938
    if (<=) goto 0x0x808f5988;
    r0 = r4 + -0x1a; // 0x808F5944
    if (>) goto 0x0x808f59a0;
    if (==) goto 0x0x808f59a0;
    r6 = *(0x6c8 + r3); // lwz @ 0x808F5958
    r0 = r6 + -0x16; // 0x808F595C
    if (>) goto 0x0x808f59a0;
    r12 = *(0 + r31); // lwz @ 0x808F5968
    r3 = r31;
    /* li r4, 2 */ // 0x808F5970
    r12 = *(0x134 + r12); // lwz @ 0x808F5974
    /* mtctr r12 */ // 0x808F5978
    /* bctrl  */ // 0x808F597C
    /* li r3, 2 */ // 0x808F5980
    /* b 0x808f5a40 */ // 0x808F5984
    r0 = *(0x6f9 + r3); // lbz @ 0x808F5988
    if (==) goto 0x0x808f599c;
    /* li r3, 0 */ // 0x808F5994
    /* b 0x808f5a40 */ // 0x808F5998
    /* li r8, 2 */ // 0x808F599C
    r0 = *(0x6f9 + r3); // lbz @ 0x808F59A0
    if (!=) goto 0x0x808f59c4;
    r0 = r4 + -0x16; // 0x808F59AC
    if (>) goto 0x0x808f59c4;
    /* li r0, 1 */ // 0x808F59B8
    *(0x6f9 + r3) = r0; // stb @ 0x808F59BC
    /* b 0x808f59d8 */ // 0x808F59C0
    r0 = r4 + -0x12; // 0x808F59C4
    if (<=) goto 0x0x808f59d8;
    /* li r3, 0 */ // 0x808F59D0
    /* b 0x808f5a40 */ // 0x808F59D4
    r0 = *(0xf8 + r3); // lwz @ 0x808F59D8
    if (==) goto 0x0x808f5a08;
    r4 = *(0x6c8 + r31); // lwz @ 0x808F59E4
    r30 = r8;
    r3 = r31;
    FUN_808F5A58(r3); // bl 0x808F5A58
    r8 = r3;
    if (!=) goto 0x0x808f5a3c;
    r8 = r30;
    /* b 0x808f5a3c */ // 0x808F5A04
    r0 = *(0xfc + r3); // lwz @ 0x808F5A08
    if (==) goto 0x0x808f5a3c;
    if (==) goto 0x0x808f5a3c;
    r30 = r8;
    r3 = r31;
    r4 = r0;
    FUN_808F5A58(r3, r4); // bl 0x808F5A58
    r8 = r3;
    if (!=) goto 0x0x808f5a3c;
    r8 = r30;
    r3 = r8;
    r0 = *(0x14 + r1); // lwz @ 0x808F5A40
    r31 = *(0xc + r1); // lwz @ 0x808F5A44
    r30 = *(8 + r1); // lwz @ 0x808F5A48
    return;
}