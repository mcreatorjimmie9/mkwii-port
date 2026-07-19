/* Function at 0x80756CAC, size=524 bytes */
/* Stack frame: 32 bytes */

int FUN_80756CAC(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* lis r0, 0x4330 */ // 0x80756CB0
    *(8 + r1) = r0; // stw @ 0x80756CB8
    *(0x10 + r1) = r0; // stw @ 0x80756CBC
    if (==) goto 0x0x80756ce0;
    if (==) goto 0x0x80756d54;
    if (==) goto 0x0x80756dc8;
    if (==) goto 0x0x80756e3c;
    /* b 0x80756eac */ // 0x80756CDC
    r0 = *(0x152 + r3); // lbz @ 0x80756CE0
    if (!=) goto 0x0x80756eac;
    /* lfs f1, 0x10c(r3) */ // 0x80756CEC
    /* li r4, 1 */ // 0x80756CF0
    /* lfs f3, 0x110(r3) */ // 0x80756CF4
    /* li r0, 0 */ // 0x80756CF8
    /* lfs f0, 0x114(r3) */ // 0x80756CFC
    /* lis r6, 0 */ // 0x80756D00
    *(0x152 + r3) = r4; // stb @ 0x80756D04
    /* lis r8, 0 */ // 0x80756D08
    /* lis r7, 0 */ // 0x80756D0C
    /* lfs f2, 0(r8) */ // 0x80756D10
    *(0x154 + r3) = r0; // sth @ 0x80756D14
    /* lis r4, 0 */ // 0x80756D18
    /* stfs f1, 0x158(r3) */ // 0x80756D1C
    /* lfd f1, 0(r4) */ // 0x80756D20
    /* stfs f3, 0x15c(r3) */ // 0x80756D24
    /* stfs f0, 0x160(r3) */ // 0x80756D28
    r0 = *(0 + r6); // lwz @ 0x80756D2C
    /* lfs f0, 0(r7) */ // 0x80756D30
    /* xoris r0, r0, 0x8000 */ // 0x80756D34
    *(0xc + r1) = r0; // stw @ 0x80756D38
    /* fmuls f2, f2, f0 */ // 0x80756D3C
    /* lfd f0, 8(r1) */ // 0x80756D40
    /* fsubs f0, f0, f1 */ // 0x80756D44
    /* fdivs f0, f2, f0 */ // 0x80756D48
    /* stfs f0, 0x168(r3) */ // 0x80756D4C
    /* b 0x80756eac */ // 0x80756D50
    r0 = *(0x152 + r3); // lbz @ 0x80756D54
    if (!=) goto 0x0x80756eac;
    /* lfs f1, 0x10c(r3) */ // 0x80756D60
    /* li r4, 1 */ // 0x80756D64
    /* lfs f3, 0x110(r3) */ // 0x80756D68
    /* li r0, 0 */ // 0x80756D6C
    /* lfs f0, 0x114(r3) */ // 0x80756D70
    /* lis r6, 0 */ // 0x80756D74
    *(0x152 + r3) = r4; // stb @ 0x80756D78
    /* lis r8, 0 */ // 0x80756D7C
    /* lis r7, 0 */ // 0x80756D80
    /* lfs f2, 0(r8) */ // 0x80756D84
    *(0x154 + r3) = r0; // sth @ 0x80756D88
    /* lis r4, 0 */ // 0x80756D8C
    /* stfs f1, 0x158(r3) */ // 0x80756D90
    /* lfd f1, 0(r4) */ // 0x80756D94
    /* stfs f3, 0x15c(r3) */ // 0x80756D98
    /* stfs f0, 0x160(r3) */ // 0x80756D9C
    r0 = *(0 + r6); // lwz @ 0x80756DA0
    /* lfs f0, 0(r7) */ // 0x80756DA4
    /* xoris r0, r0, 0x8000 */ // 0x80756DA8
    *(0x14 + r1) = r0; // stw @ 0x80756DAC
    /* fmuls f2, f2, f0 */ // 0x80756DB0
    /* lfd f0, 0x10(r1) */ // 0x80756DB4
    /* fsubs f0, f0, f1 */ // 0x80756DB8
    /* fdivs f0, f2, f0 */ // 0x80756DBC
    /* stfs f0, 0x168(r3) */ // 0x80756DC0
    /* b 0x80756eac */ // 0x80756DC4
    r0 = *(0x152 + r3); // lbz @ 0x80756DC8
    if (!=) goto 0x0x80756eac;
    /* lfs f1, 0x10c(r3) */ // 0x80756DD4
    /* li r4, 1 */ // 0x80756DD8
    /* lfs f3, 0x110(r3) */ // 0x80756DDC
    /* li r0, 0 */ // 0x80756DE0
    /* lfs f0, 0x114(r3) */ // 0x80756DE4
    /* lis r6, 0 */ // 0x80756DE8
    *(0x152 + r3) = r4; // stb @ 0x80756DEC
    /* lis r8, 0 */ // 0x80756DF0
    /* lis r7, 0 */ // 0x80756DF4
    /* lfs f2, 0(r8) */ // 0x80756DF8
    *(0x154 + r3) = r0; // sth @ 0x80756DFC
    /* lis r4, 0 */ // 0x80756E00
    /* stfs f1, 0x158(r3) */ // 0x80756E04
    /* lfd f1, 0(r4) */ // 0x80756E08
    /* stfs f3, 0x15c(r3) */ // 0x80756E0C
    /* stfs f0, 0x160(r3) */ // 0x80756E10
    r0 = *(0 + r6); // lwz @ 0x80756E14
    /* lfs f0, 0(r7) */ // 0x80756E18
    /* xoris r0, r0, 0x8000 */ // 0x80756E1C
    *(0xc + r1) = r0; // stw @ 0x80756E20
    /* fmuls f2, f2, f0 */ // 0x80756E24
    /* lfd f0, 8(r1) */ // 0x80756E28
    /* fsubs f0, f0, f1 */ // 0x80756E2C
    /* fdivs f0, f2, f0 */ // 0x80756E30
    /* stfs f0, 0x168(r3) */ // 0x80756E34
    /* b 0x80756eac */ // 0x80756E38
    r0 = *(0x152 + r3); // lbz @ 0x80756E3C
    if (!=) goto 0x0x80756eac;
    /* lfs f1, 0x10c(r3) */ // 0x80756E48
    /* li r4, 1 */ // 0x80756E4C
    /* lfs f3, 0x110(r3) */ // 0x80756E50
    /* li r0, 0 */ // 0x80756E54
    /* lfs f0, 0x114(r3) */ // 0x80756E58
    /* lis r6, 0 */ // 0x80756E5C
    *(0x152 + r3) = r4; // stb @ 0x80756E60
    /* lis r8, 0 */ // 0x80756E64
    /* lis r7, 0 */ // 0x80756E68
    /* lfs f2, 0(r8) */ // 0x80756E6C
    *(0x154 + r3) = r0; // sth @ 0x80756E70
    /* lis r4, 0 */ // 0x80756E74
    /* stfs f1, 0x158(r3) */ // 0x80756E78
    /* lfd f1, 0(r4) */ // 0x80756E7C
    /* stfs f3, 0x15c(r3) */ // 0x80756E80
    /* stfs f0, 0x160(r3) */ // 0x80756E84
    r0 = *(0 + r6); // lwz @ 0x80756E88
    /* lfs f0, 0(r7) */ // 0x80756E8C
    /* xoris r0, r0, 0x8000 */ // 0x80756E90
    *(0x14 + r1) = r0; // stw @ 0x80756E94
    /* fmuls f2, f2, f0 */ // 0x80756E98
    /* lfd f0, 0x10(r1) */ // 0x80756E9C
    /* fsubs f0, f0, f1 */ // 0x80756EA0
    /* fdivs f0, f2, f0 */ // 0x80756EA4
    /* stfs f0, 0x168(r3) */ // 0x80756EA8
    r3 = r5;
    return;
}