/* Function at 0x807E8898, size=584 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807E8898(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x807E88AC
    /* li r30, 0 */ // 0x807E88B0
    *(0x24 + r1) = r29; // stw @ 0x807E88B4
    /* li r29, 0 */ // 0x807E88B8
    /* li r3, 0 */ // 0x807E88C0
    if (<) goto 0x0x807e88d8;
    r0 = *(0xb4 + r31); // lwz @ 0x807E88C8
    if (>=) goto 0x0x807e88d8;
    /* li r3, 1 */ // 0x807E88D4
    if (!=) goto 0x0x807e88f4;
    r12 = *(0xb0 + r31); // lwz @ 0x807E88E0
    r3 = r31 + 0xb0; // 0x807E88E4
    r12 = *(0x18 + r12); // lwz @ 0x807E88E8
    /* mtctr r12 */ // 0x807E88EC
    /* bctrl  */ // 0x807E88F0
    r3 = *(0xb8 + r31); // lwz @ 0x807E88F4
    /* lwzx r3, r3, r30 */ // 0x807E88F8
    r12 = *(0 + r3); // lwz @ 0x807E88FC
    r12 = *(0xc + r12); // lwz @ 0x807E8900
    /* mtctr r12 */ // 0x807E8904
    /* bctrl  */ // 0x807E8908
    r29 = r29 + 1; // 0x807E890C
    r30 = r30 + 4; // 0x807E8910
    if (<) goto 0x0x807e88bc;
    r0 = *(0x54 + r31); // lbz @ 0x807E891C
    /* lfs f2, 0x30(r31) */ // 0x807E8920
    /* lfs f1, 0x34(r31) */ // 0x807E8924
    /* lfs f0, 0x38(r31) */ // 0x807E892C
    /* stfs f2, 0xc0(r31) */ // 0x807E8930
    /* stfs f1, 0xc4(r31) */ // 0x807E8934
    /* stfs f0, 0xc8(r31) */ // 0x807E8938
    if (==) goto 0x0x807e8948;
    r3 = r31 + 0x48; // 0x807E8940
    /* b 0x807e8978 */ // 0x807E8944
    /* li r0, 1 */ // 0x807E8948
    *(0x54 + r31) = r0; // stb @ 0x807E894C
    r4 = r31 + 0x58; // 0x807E8954
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 0x14(r1) */ // 0x807E895C
    r3 = r31 + 0x48; // 0x807E8960
    /* stfs f0, 0x48(r31) */ // 0x807E8964
    /* lfs f0, 0x18(r1) */ // 0x807E8968
    /* stfs f0, 0x4c(r31) */ // 0x807E896C
    /* lfs f0, 0x1c(r1) */ // 0x807E8970
    /* stfs f0, 0x50(r31) */ // 0x807E8974
    /* lfs f0, 4(r3) */ // 0x807E8978
    /* li r30, 0 */ // 0x807E897C
    /* stfs f0, 0xf8(r31) */ // 0x807E8980
    /* lis r5, 0 */ // 0x807E8984
    r3 = *(0x20 + r31); // lwz @ 0x807E8988
    /* li r4, 0 */ // 0x807E898C
    *(0xbc + r31) = r30; // stw @ 0x807E8990
    /* lfs f1, 0(r5) */ // 0x807E8994
    r12 = *(0 + r3); // lwz @ 0x807E8998
    r12 = *(0x10 + r12); // lwz @ 0x807E899C
    /* mtctr r12 */ // 0x807E89A0
    /* bctrl  */ // 0x807E89A4
    r4 = *(0x20 + r31); // lwz @ 0x807E89A8
    /* lis r3, 0 */ // 0x807E89AC
    r0 = *(0x2c + r31); // lhz @ 0x807E89B0
    /* lfs f2, 0x30(r4) */ // 0x807E89B4
    r4 = *(0x38 + r31); // lwz @ 0x807E89B8
    r6 = r0 | 1; // 0x807E89BC
    *(0x10 + r1) = r4; // stw @ 0x807E89C0
    r0 = *(0xb4 + r31); // lwz @ 0x807E89C4
    /* stfs f2, 0xf4(r31) */ // 0x807E89C8
    /* lfs f1, 0x10(r1) */ // 0x807E89CC
    *(0xd4 + r31) = r30; // stw @ 0x807E89D4
    r5 = *(0x30 + r31); // lwz @ 0x807E89D8
    r0 = *(0x34 + r31); // lwz @ 0x807E89DC
    *(0xd1 + r31) = r30; // stb @ 0x807E89E0
    *(0xd8 + r31) = r30; // stb @ 0x807E89E4
    *(0x2c + r31) = r6; // sth @ 0x807E89E8
    /* lfs f0, 0(r3) */ // 0x807E89EC
    *(8 + r1) = r5; // stw @ 0x807E89F0
    /* fadds f0, f1, f0 */ // 0x807E89F4
    *(0xc + r1) = r0; // stw @ 0x807E89F8
    /* stfs f0, 0x10(r1) */ // 0x807E89FC
    if (>) goto 0x0x807e8a18;
    r12 = *(0xb0 + r31); // lwz @ 0x807E8A04
    r3 = r31 + 0xb0; // 0x807E8A08
    r12 = *(0x18 + r12); // lwz @ 0x807E8A0C
    /* mtctr r12 */ // 0x807E8A10
    /* bctrl  */ // 0x807E8A14
    r4 = *(0xb8 + r31); // lwz @ 0x807E8A18
    /* lis r3, 0 */ // 0x807E8A1C
    /* lfs f0, 8(r1) */ // 0x807E8A20
    r4 = *(0 + r4); // lwz @ 0x807E8A24
    /* lfs f1, 0xc(r1) */ // 0x807E8A28
    r0 = *(0x2c + r4); // lhz @ 0x807E8A2C
    /* lfs f2, 0x10(r1) */ // 0x807E8A30
    r0 = r0 | 1; // 0x807E8A34
    *(0x2c + r4) = r0; // sth @ 0x807E8A38
    /* stfs f0, 0x30(r4) */ // 0x807E8A3C
    /* stfs f1, 0x34(r4) */ // 0x807E8A40
    /* stfs f2, 0x38(r4) */ // 0x807E8A44
    /* lfs f1, 0x38(r31) */ // 0x807E8A48
    /* lfs f0, 0(r3) */ // 0x807E8A4C
    r0 = *(0xb4 + r31); // lwz @ 0x807E8A50
    /* fsubs f0, f1, f0 */ // 0x807E8A54
    /* lfs f2, 0x30(r31) */ // 0x807E8A58
    /* lfs f1, 0x34(r31) */ // 0x807E8A5C
    /* stfs f2, 8(r1) */ // 0x807E8A64
    /* stfs f1, 0xc(r1) */ // 0x807E8A68
    /* stfs f0, 0x10(r1) */ // 0x807E8A6C
    if (>) goto 0x0x807e8a88;
    r12 = *(0xb0 + r31); // lwz @ 0x807E8A74
    r3 = r31 + 0xb0; // 0x807E8A78
    r12 = *(0x18 + r12); // lwz @ 0x807E8A7C
    /* mtctr r12 */ // 0x807E8A80
    /* bctrl  */ // 0x807E8A84
    r3 = *(0xb8 + r31); // lwz @ 0x807E8A88
    /* li r0, 1 */ // 0x807E8A8C
    /* lfs f0, 8(r1) */ // 0x807E8A90
    r4 = *(4 + r3); // lwz @ 0x807E8A94
    /* lfs f1, 0xc(r1) */ // 0x807E8A98
    r3 = *(0x2c + r4); // lhz @ 0x807E8A9C
    /* lfs f2, 0x10(r1) */ // 0x807E8AA0
    r3 = r3 | 1; // 0x807E8AA4
    *(0x2c + r4) = r3; // sth @ 0x807E8AA8
    /* stfs f0, 0x30(r4) */ // 0x807E8AAC
    /* stfs f1, 0x34(r4) */ // 0x807E8AB0
    /* stfs f2, 0x38(r4) */ // 0x807E8AB4
    /* lfs f0, 0x38(r31) */ // 0x807E8AB8
    /* stfs f0, 0xe8(r31) */ // 0x807E8ABC
    *(0xdc + r31) = r0; // stw @ 0x807E8AC0
    r31 = *(0x2c + r1); // lwz @ 0x807E8AC4
    r30 = *(0x28 + r1); // lwz @ 0x807E8AC8
    r29 = *(0x24 + r1); // lwz @ 0x807E8ACC
    r0 = *(0x34 + r1); // lwz @ 0x807E8AD0
    return;
}