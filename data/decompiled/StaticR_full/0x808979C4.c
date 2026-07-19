/* Function at 0x808979C4, size=444 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_808979C4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x808979CC
    *(0x2c + r1) = r31; // stw @ 0x808979D4
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x808979DC
    r30 = r4;
    FUN_8089BC74(); // bl 0x8089BC74
    /* lis r3, 0 */ // 0x808979E8
    /* lis r0, 0x4330 */ // 0x808979EC
    r3 = r3 + 0; // 0x808979F0
    *(0 + r31) = r3; // stw @ 0x808979F4
    /* lis r4, 0 */ // 0x808979F8
    /* lis r5, 0 */ // 0x808979FC
    r6 = *(0 + r30); // lwz @ 0x80897A00
    /* lis r3, 0 */ // 0x80897A04
    *(0x18 + r1) = r0; // stw @ 0x80897A08
    r0 = *(0x2a + r6); // lha @ 0x80897A0C
    *(0 + r5) = r0; // sth @ 0x80897A10
    /* lfd f1, 0(r4) */ // 0x80897A14
    r0 = *(0x2c + r6); // lha @ 0x80897A18
    /* xoris r0, r0, 0x8000 */ // 0x80897A1C
    *(0x1c + r1) = r0; // stw @ 0x80897A20
    /* lfd f0, 0x18(r1) */ // 0x80897A24
    /* fsubs f0, f0, f1 */ // 0x80897A28
    /* stfs f0, 0(r3) */ // 0x80897A2C
    r0 = *(0x54 + r31); // lbz @ 0x80897A30
    r3 = *(0x2e + r6); // lha @ 0x80897A34
    *(0x140 + r31) = r3; // stw @ 0x80897A3C
    if (==) goto 0x0x80897a4c;
    r3 = r31 + 0x48; // 0x80897A44
    /* b 0x80897a7c */ // 0x80897A48
    /* li r0, 1 */ // 0x80897A4C
    *(0x54 + r31) = r0; // stb @ 0x80897A50
    r4 = r31 + 0x58; // 0x80897A58
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x80897A60
    r3 = r31 + 0x48; // 0x80897A64
    /* stfs f0, 0x48(r31) */ // 0x80897A68
    /* lfs f0, 0xc(r1) */ // 0x80897A6C
    /* stfs f0, 0x4c(r31) */ // 0x80897A70
    /* lfs f0, 0x10(r1) */ // 0x80897A74
    /* stfs f0, 0x50(r31) */ // 0x80897A78
    /* lfs f2, 0(r3) */ // 0x80897A7C
    /* li r0, 1 */ // 0x80897A80
    /* lfs f1, 4(r3) */ // 0x80897A84
    /* li r4, 0 */ // 0x80897A88
    /* lfs f0, 8(r3) */ // 0x80897A8C
    /* lis r3, 0 */ // 0x80897A90
    /* stfs f2, 0x134(r31) */ // 0x80897A94
    /* stfs f1, 0x138(r31) */ // 0x80897A98
    /* stfs f0, 0x13c(r31) */ // 0x80897A9C
    *(0x14c + r31) = r0; // stb @ 0x80897AA0
    *(0x14d + r31) = r4; // stb @ 0x80897AA4
    r3 = *(0 + r3); // lwz @ 0x80897AA8
    r0 = *(0x25 + r3); // lbz @ 0x80897AAC
    if (!=) goto 0x0x80897ae0;
    /* li r3, 0x7c */ // 0x80897AB8
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80897ad8;
    /* lis r4, 0 */ // 0x80897AC8
    /* li r5, 0 */ // 0x80897ACC
    r4 = r4 + 0; // 0x80897AD0
    FUN_805E3430(r4, r5, r4); // bl 0x805E3430
    *(0x150 + r31) = r3; // stw @ 0x80897AD8
    /* b 0x80897ae4 */ // 0x80897ADC
    *(0x150 + r31) = r4; // stw @ 0x80897AE0
    /* lis r3, 0 */ // 0x80897AE4
    /* lis r4, 0 */ // 0x80897AE8
    r5 = *(0 + r3); // lwz @ 0x80897AEC
    r3 = *(0 + r4); // lwz @ 0x80897AF0
    r0 = *(0xb70 + r5); // lwz @ 0x80897AF4
    if (!=) goto 0x0x80897b3c;
    r0 = *(0xb78 + r5); // lwz @ 0x80897B00
    if (!=) goto 0x0x80897b20;
    r3 = *(0x10 + r3); // lwz @ 0x80897B0C
    r0 = *(8 + r3); // lwz @ 0x80897B10
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r3) = r0; // stw @ 0x80897B18
    /* b 0x80897b84 */ // 0x80897B1C
    if (!=) goto 0x0x80897b84;
    r3 = *(0x10 + r3); // lwz @ 0x80897B28
    r0 = *(8 + r3); // lwz @ 0x80897B2C
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r3) = r0; // stw @ 0x80897B34
    /* b 0x80897b84 */ // 0x80897B38
    if (==) goto 0x0x80897b4c;
    if (!=) goto 0x0x80897b84;
    r0 = *(0xb78 + r5); // lwz @ 0x80897B4C
    if (!=) goto 0x0x80897b6c;
    r3 = *(0x10 + r3); // lwz @ 0x80897B58
    r0 = *(8 + r3); // lwz @ 0x80897B5C
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r3) = r0; // stw @ 0x80897B64
    /* b 0x80897b84 */ // 0x80897B68
    if (!=) goto 0x0x80897b84;
    r3 = *(0x10 + r3); // lwz @ 0x80897B74
    r0 = *(8 + r3); // lwz @ 0x80897B78
    r0 = r0 rlwinm 0; // rlwinm
}