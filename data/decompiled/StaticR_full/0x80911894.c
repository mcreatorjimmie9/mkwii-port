/* Function at 0x80911894, size=520 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80911894(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x809118A8
    r0 = *(0x17c + r3); // lwz @ 0x809118AC
    r4 = *(0x178 + r3); // lwz @ 0x809118B0
    /* slwi r0, r0, 4 */ // 0x809118B4
    r4 = r4 + r0; // 0x809118B8
    r30 = *(4 + r4); // lwz @ 0x809118BC
    r0 = *(2 + r30); // lbz @ 0x809118C0
    if (==) goto 0x0x809118d8;
    /* lis r4, 0 */ // 0x809118CC
    /* lfs f0, 0(r4) */ // 0x809118D0
    /* b 0x809118e0 */ // 0x809118D4
    /* lis r4, 0 */ // 0x809118D8
    /* lfs f0, 0(r4) */ // 0x809118DC
    /* stfs f0, 0xb4(r3) */ // 0x809118E0
    r3 = r31;
    r4 = *(0 + r30); // lbz @ 0x809118E8
    r5 = *(1 + r30); // lbz @ 0x809118EC
    FUN_8090FB24(r3); // bl 0x8090FB24
    r12 = *(0 + r31); // lwz @ 0x809118F4
    r3 = r31;
    /* li r4, 1 */ // 0x809118FC
    r12 = *(0x68 + r12); // lwz @ 0x80911900
    /* mtctr r12 */ // 0x80911904
    /* bctrl  */ // 0x80911908
    r0 = *(2 + r30); // lbz @ 0x8091190C
    if (==) goto 0x0x80911958;
    /* lis r3, 0 */ // 0x80911918
    r4 = *(0 + r30); // lbz @ 0x8091191C
    r3 = *(0 + r3); // lwz @ 0x80911920
    FUN_8061D97C(r3); // bl 0x8061D97C
    FUN_8061E010(r3); // bl 0x8061E010
    r0 = *(0xe0 + r3); // lbz @ 0x8091192C
    if (==) goto 0x0x80911958;
    r12 = *(0 + r31); // lwz @ 0x80911938
    /* lis r5, 0 */ // 0x8091193C
    r3 = r31;
    /* li r4, 0x1f5 */ // 0x80911944
    r12 = *(0xf0 + r12); // lwz @ 0x80911948
    /* lfs f1, 0(r5) */ // 0x8091194C
    /* mtctr r12 */ // 0x80911950
    /* bctrl  */ // 0x80911954
    /* li r5, 0 */ // 0x80911958
    *(0x1d0 + r31) = r5; // stw @ 0x8091195C
    r0 = *(2 + r30); // lbz @ 0x80911960
    if (!=) goto 0x0x80911a84;
    r3 = *(0x17c + r31); // lwz @ 0x8091196C
    /* li r4, 1 */ // 0x80911970
    r0 = *(0x180 + r31); // lwz @ 0x80911974
    *(0x185 + r31) = r4; // stb @ 0x80911978
    if (!=) goto 0x0x80911990;
    if (==) goto 0x0x80911990;
    r5 = r4;
    if (==) goto 0x0x80911a84;
    r3 = *(0x1cc + r31); // lwz @ 0x80911998
    r5 = *(1 + r30); // lbz @ 0x8091199C
    r0 = r3 + 1; // 0x809119A0
    r4 = *(0 + r30); // lbz @ 0x809119A4
    /* clrlwi r3, r0, 0x1c */ // 0x809119A8
    r0 = r0 rlwinm 2; // rlwinm
    *(0x1cc + r31) = r3; // stw @ 0x809119B0
    /* subf r0, r3, r0 */ // 0x809119B4
    r3 = r31 + r0; // 0x809119B8
    *(0x19c + r3) = r4; // stb @ 0x809119BC
    r3 = *(0x1cc + r31); // lwz @ 0x809119C0
    /* slwi r0, r3, 2 */ // 0x809119C4
    /* subf r0, r3, r0 */ // 0x809119C8
    r3 = r31 + r0; // 0x809119CC
    *(0x19d + r3) = r5; // stb @ 0x809119D0
    r8 = *(0x180 + r31); // lwz @ 0x809119D4
    r0 = *(0x174 + r31); // lwz @ 0x809119D8
    r6 = r8 + 1; // 0x809119DC
    r5 = *(0x1cc + r31); // lwz @ 0x809119E0
    /* subfc r3, r0, r6 */ // 0x809119E4
    r0 = *(0x17c + r31); // lwz @ 0x809119E8
    /* subfe r3, r3, r3 */ // 0x809119EC
    /* slwi r4, r5, 2 */ // 0x809119F0
    r7 = r6 & r3; // 0x809119F4
    /* subf r3, r5, r4 */ // 0x809119F8
    r3 = r31 + r3; // 0x809119FC
    r6 = r3 + 0x19c; // 0x80911A04
    if (==) goto 0x0x80911a84;
    r5 = *(0x178 + r31); // lwz @ 0x80911A0C
    /* slwi r0, r8, 4 */ // 0x80911A10
    r3 = *(0x188 + r31); // lwz @ 0x80911A14
    /* lwzx r0, r5, r0 */ // 0x80911A18
    /* slwi r0, r0, 2 */ // 0x80911A1C
    /* lwzx r3, r3, r0 */ // 0x80911A20
    r0 = *(2 + r3); // lbz @ 0x80911A24
    if (==) goto 0x0x80911a84;
    *(0x180 + r31) = r7; // stw @ 0x80911A30
    /* slwi r0, r7, 4 */ // 0x80911A34
    /* li r3, 2 */ // 0x80911A38
    /* li r4, -1 */ // 0x80911A3C
    /* stwx r3, r5, r0 */ // 0x80911A40
    r0 = *(0x180 + r31); // lwz @ 0x80911A44
    r3 = *(0x178 + r31); // lwz @ 0x80911A48
    /* slwi r0, r0, 4 */ // 0x80911A4C
    r3 = r3 + r0; // 0x80911A50
    *(4 + r3) = r6; // stw @ 0x80911A54
    r0 = *(0x180 + r31); // lwz @ 0x80911A58
    r3 = *(0x178 + r31); // lwz @ 0x80911A5C
    /* slwi r0, r0, 4 */ // 0x80911A60
    r3 = r3 + r0; // 0x80911A64
    *(8 + r3) = r4; // stw @ 0x80911A68
    r0 = *(0x180 + r31); // lwz @ 0x80911A6C
    r3 = *(0x178 + r31); // lwz @ 0x80911A70
    /* slwi r0, r0, 4 */ // 0x80911A74
    r4 = *(0x174 + r31); // lwz @ 0x80911A78
    r3 = r3 + r0; // 0x80911A7C
    *(0xc + r3) = r4; // stw @ 0x80911A80
    r0 = *(0x14 + r1); // lwz @ 0x80911A84
    r31 = *(0xc + r1); // lwz @ 0x80911A88
    r30 = *(8 + r1); // lwz @ 0x80911A8C
    return;
}