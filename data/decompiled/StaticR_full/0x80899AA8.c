/* Function at 0x80899AA8, size=2048 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80899AA8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* lis r8, 0x4330 */ // 0x80899AB0
    /* lis r6, 0 */ // 0x80899AB4
    *(0x54 + r1) = r0; // stw @ 0x80899AB8
    *(0x4c + r1) = r31; // stw @ 0x80899ABC
    r31 = r3;
    r7 = *(0 + r6); // lwz @ 0x80899AC4
    /* lis r6, 0 */ // 0x80899AC8
    *(0x20 + r1) = r8; // stw @ 0x80899ACC
    r0 = *(0x20 + r7); // lwz @ 0x80899AD0
    /* lfd f1, 0(r6) */ // 0x80899AD4
    /* subf r0, r5, r0 */ // 0x80899AD8
    *(0x24 + r1) = r0; // stw @ 0x80899ADC
    r0 = *(0x130 + r3); // lwz @ 0x80899AE0
    /* lfd f0, 0x20(r1) */ // 0x80899AE4
    *(0x28 + r1) = r8; // stw @ 0x80899AE8
    /* fsubs f2, f0, f1 */ // 0x80899AEC
    /* lfs f0, 0x118(r3) */ // 0x80899AF0
    /* fctiwz f1, f2 */ // 0x80899AF4
    /* stfd f1, 0x30(r1) */ // 0x80899AF8
    r5 = *(0x34 + r1); // lwz @ 0x80899AFC
    if (>=) goto 0x0x80899b10;
    /* li r7, 0 */ // 0x80899B08
    /* b 0x80899b6c */ // 0x80899B0C
    /* stfd f1, 0x30(r1) */ // 0x80899B10
    r5 = *(0x134 + r3); // lwz @ 0x80899B14
    r6 = *(0x34 + r1); // lwz @ 0x80899B18
    if (>=) goto 0x0x80899b2c;
    /* li r7, 1 */ // 0x80899B24
    /* b 0x80899b6c */ // 0x80899B28
    /* stfd f1, 0x30(r1) */ // 0x80899B2C
    r8 = *(0x138 + r3); // lwz @ 0x80899B30
    r5 = *(0x34 + r1); // lwz @ 0x80899B34
    if (>=) goto 0x0x80899b48;
    /* li r7, 2 */ // 0x80899B40
    /* b 0x80899b6c */ // 0x80899B44
    /* stfd f1, 0x30(r1) */ // 0x80899B48
    /* lis r5, 0 */ // 0x80899B4C
    r5 = *(0 + r5); // lwz @ 0x80899B50
    /* li r7, 4 */ // 0x80899B54
    r6 = *(0x34 + r1); // lwz @ 0x80899B58
    r5 = r8 + r5; // 0x80899B5C
    if (>=) goto 0x0x80899b6c;
    /* li r7, 3 */ // 0x80899B68
    if (==) goto 0x0x80899b88;
    if (==) goto 0x0x80899cfc;
    if (==) goto 0x0x80899e4c;
    /* b 0x80899e78 */ // 0x80899B84
    /* fctiwz f1, f2 */ // 0x80899B88
    /* stfd f1, 0x30(r1) */ // 0x80899B8C
    r5 = *(0x34 + r1); // lwz @ 0x80899B90
    if (>=) goto 0x0x80899bc0;
    /* stfd f1, 0x30(r1) */ // 0x80899B9C
    /* lis r5, 0 */ // 0x80899BA0
    /* lfd f3, 0(r5) */ // 0x80899BA4
    r5 = *(0x34 + r1); // lwz @ 0x80899BA8
    /* xoris r5, r5, 0x8000 */ // 0x80899BAC
    *(0x2c + r1) = r5; // stw @ 0x80899BB0
    /* lfd f1, 0x28(r1) */ // 0x80899BB4
    /* fsubs f1, f1, f3 */ // 0x80899BB8
    /* b 0x80899ca4 */ // 0x80899BBC
    /* stfd f1, 0x30(r1) */ // 0x80899BC0
    r6 = *(0x134 + r3); // lwz @ 0x80899BC4
    r5 = *(0x34 + r1); // lwz @ 0x80899BC8
    if (>=) goto 0x0x80899bfc;
    /* stfd f1, 0x30(r1) */ // 0x80899BD4
    /* lis r5, 0 */ // 0x80899BD8
    /* lfd f3, 0(r5) */ // 0x80899BDC
    r5 = *(0x34 + r1); // lwz @ 0x80899BE0
    /* subf r5, r0, r5 */ // 0x80899BE4
    /* xoris r5, r5, 0x8000 */ // 0x80899BE8
    *(0x24 + r1) = r5; // stw @ 0x80899BEC
    /* lfd f1, 0x20(r1) */ // 0x80899BF0
    /* fsubs f1, f1, f3 */ // 0x80899BF4
    /* b 0x80899ca4 */ // 0x80899BF8
    /* stfd f1, 0x30(r1) */ // 0x80899BFC
    r7 = *(0x138 + r3); // lwz @ 0x80899C00
    r5 = *(0x34 + r1); // lwz @ 0x80899C04
    if (>=) goto 0x0x80899c38;
    /* stfd f1, 0x30(r1) */ // 0x80899C10
    /* lis r5, 0 */ // 0x80899C14
    /* lfd f3, 0(r5) */ // 0x80899C18
    r5 = *(0x34 + r1); // lwz @ 0x80899C1C
    /* subf r5, r6, r5 */ // 0x80899C20
    /* xoris r5, r5, 0x8000 */ // 0x80899C24
    *(0x2c + r1) = r5; // stw @ 0x80899C28
    /* lfd f1, 0x28(r1) */ // 0x80899C2C
    /* fsubs f1, f1, f3 */ // 0x80899C30
    /* b 0x80899ca4 */ // 0x80899C34
    /* stfd f1, 0x30(r1) */ // 0x80899C38
    /* lis r5, 0 */ // 0x80899C3C
    r8 = *(0 + r5); // lwz @ 0x80899C40
    r6 = *(0x34 + r1); // lwz @ 0x80899C44
    r5 = r7 + r8; // 0x80899C48
    if (>=) goto 0x0x80899c7c;
    /* stfd f1, 0x38(r1) */ // 0x80899C54
    /* lis r5, 0 */ // 0x80899C58
    /* lfd f3, 0(r5) */ // 0x80899C5C
    r5 = *(0x3c + r1); // lwz @ 0x80899C60
    /* subf r5, r7, r5 */ // 0x80899C64
    /* xoris r5, r5, 0x8000 */ // 0x80899C68
    *(0x24 + r1) = r5; // stw @ 0x80899C6C
    /* lfd f1, 0x20(r1) */ // 0x80899C70
    /* fsubs f1, f1, f3 */ // 0x80899C74
    /* b 0x80899ca4 */ // 0x80899C78
    /* stfd f1, 0x40(r1) */ // 0x80899C7C
    /* lis r5, 0 */ // 0x80899C80
    /* lfd f3, 0(r5) */ // 0x80899C84
    r5 = *(0x44 + r1); // lwz @ 0x80899C88
    /* subf r5, r7, r5 */ // 0x80899C8C
    /* subf r5, r8, r5 */ // 0x80899C90
    /* xoris r5, r5, 0x8000 */ // 0x80899C94
    *(0x2c + r1) = r5; // stw @ 0x80899C98
    /* lfd f1, 0x28(r1) */ // 0x80899C9C
    /* fsubs f1, f1, f3 */ // 0x80899CA0
    /* fctiwz f1, f1 */ // 0x80899CA4
    /* stfd f1, 0x40(r1) */ // 0x80899CA8
    r6 = *(0x44 + r1); // lwz @ 0x80899CAC
    /* slwi r5, r6, 0x1d */ // 0x80899CB0
    /* srwi r6, r6, 0x1f */ // 0x80899CB4
    /* subf r5, r6, r5 */ // 0x80899CB8
    /* rotlwi r5, r5, 3 */ // 0x80899CBC
    r5 = r5 + r6; // 0x80899CC0
    r7 = r5 + 1; // 0x80899CC4
    if (<=) goto 0x0x80899cd4;
    /* subfic r7, r7, 4 */ // 0x80899CD0
    /* slwi r6, r7, 2 */ // 0x80899CD4
    /* lis r5, 0 */ // 0x80899CD8
    r6 = r6 + r7; // 0x80899CDC
    /* lfd f3, 0(r5) */ // 0x80899CE0
    /* xoris r5, r6, 0x8000 */ // 0x80899CE4
    *(0x24 + r1) = r5; // stw @ 0x80899CE8
    /* lfd f1, 0x20(r1) */ // 0x80899CEC
    /* fsubs f1, f1, f3 */ // 0x80899CF0
    /* fadds f0, f0, f1 */ // 0x80899CF4
    /* b 0x80899e78 */ // 0x80899CF8
    /* fctiwz f1, f2 */ // 0x80899CFC
    /* stfd f1, 0x40(r1) */ // 0x80899D00
    r5 = *(0x44 + r1); // lwz @ 0x80899D04
    if (>=) goto 0x0x80899d34;
    /* stfd f1, 0x40(r1) */ // 0x80899D10
    /* lis r5, 0 */ // 0x80899D14
    /* lfd f3, 0(r5) */ // 0x80899D18
    r5 = *(0x44 + r1); // lwz @ 0x80899D1C
    /* xoris r5, r5, 0x8000 */ // 0x80899D20
    *(0x2c + r1) = r5; // stw @ 0x80899D24
    /* lfd f1, 0x28(r1) */ // 0x80899D28
    /* fsubs f1, f1, f3 */ // 0x80899D2C
    /* b 0x80899e18 */ // 0x80899D30
    /* stfd f1, 0x40(r1) */ // 0x80899D34
    r6 = *(0x134 + r3); // lwz @ 0x80899D38
    r5 = *(0x44 + r1); // lwz @ 0x80899D3C
    if (>=) goto 0x0x80899d70;
    /* stfd f1, 0x40(r1) */ // 0x80899D48
    /* lis r5, 0 */ // 0x80899D4C
    /* lfd f3, 0(r5) */ // 0x80899D50
    r5 = *(0x44 + r1); // lwz @ 0x80899D54
    /* subf r5, r0, r5 */ // 0x80899D58
    /* xoris r5, r5, 0x8000 */ // 0x80899D5C
    *(0x24 + r1) = r5; // stw @ 0x80899D60
    /* lfd f1, 0x20(r1) */ // 0x80899D64
    /* fsubs f1, f1, f3 */ // 0x80899D68
    /* b 0x80899e18 */ // 0x80899D6C
    /* stfd f1, 0x40(r1) */ // 0x80899D70
    r7 = *(0x138 + r3); // lwz @ 0x80899D74
    r5 = *(0x44 + r1); // lwz @ 0x80899D78
    if (>=) goto 0x0x80899dac;
    /* stfd f1, 0x40(r1) */ // 0x80899D84
    /* lis r5, 0 */ // 0x80899D88
    /* lfd f3, 0(r5) */ // 0x80899D8C
    r5 = *(0x44 + r1); // lwz @ 0x80899D90
    /* subf r5, r6, r5 */ // 0x80899D94
    /* xoris r5, r5, 0x8000 */ // 0x80899D98
    *(0x2c + r1) = r5; // stw @ 0x80899D9C
    /* lfd f1, 0x28(r1) */ // 0x80899DA0
    /* fsubs f1, f1, f3 */ // 0x80899DA4
    /* b 0x80899e18 */ // 0x80899DA8
    /* stfd f1, 0x40(r1) */ // 0x80899DAC
    /* lis r5, 0 */ // 0x80899DB0
    r8 = *(0 + r5); // lwz @ 0x80899DB4
    r6 = *(0x44 + r1); // lwz @ 0x80899DB8
    r5 = r7 + r8; // 0x80899DBC
    if (>=) goto 0x0x80899df0;
    /* stfd f1, 0x38(r1) */ // 0x80899DC8
    /* lis r5, 0 */ // 0x80899DCC
    /* lfd f3, 0(r5) */ // 0x80899DD0
    r5 = *(0x3c + r1); // lwz @ 0x80899DD4
    /* subf r5, r7, r5 */ // 0x80899DD8
    /* xoris r5, r5, 0x8000 */ // 0x80899DDC
    *(0x24 + r1) = r5; // stw @ 0x80899DE0
    /* lfd f1, 0x20(r1) */ // 0x80899DE4
    /* fsubs f1, f1, f3 */ // 0x80899DE8
    /* b 0x80899e18 */ // 0x80899DEC
    /* stfd f1, 0x30(r1) */ // 0x80899DF0
    /* lis r5, 0 */ // 0x80899DF4
    /* lfd f3, 0(r5) */ // 0x80899DF8
    r5 = *(0x34 + r1); // lwz @ 0x80899DFC
    /* subf r5, r7, r5 */ // 0x80899E00
    /* subf r5, r8, r5 */ // 0x80899E04
    /* xoris r5, r5, 0x8000 */ // 0x80899E08
    *(0x2c + r1) = r5; // stw @ 0x80899E0C
    /* lfd f1, 0x28(r1) */ // 0x80899E10
    /* fsubs f1, f1, f3 */ // 0x80899E14
    /* fctiwz f1, f1 */ // 0x80899E18
    /* lis r5, 0 */ // 0x80899E1C
    /* lfd f4, 0(r5) */ // 0x80899E20
    /* stfd f1, 0x40(r1) */ // 0x80899E24
    /* lfs f1, 0x12c(r3) */ // 0x80899E28
    r5 = *(0x44 + r1); // lwz @ 0x80899E2C
    /* xoris r5, r5, 0x8000 */ // 0x80899E30
    *(0x24 + r1) = r5; // stw @ 0x80899E34
    /* lfd f3, 0x20(r1) */ // 0x80899E38
    /* fsubs f3, f3, f4 */ // 0x80899E3C
    /* fmuls f1, f1, f3 */ // 0x80899E40
    /* fsubs f0, f0, f1 */ // 0x80899E44
    /* b 0x80899e78 */ // 0x80899E48
    /* lis r6, 0 */ // 0x80899E4C
    /* lis r5, 0 */ // 0x80899E50
    r6 = *(0 + r6); // lwz @ 0x80899E54
    /* lfd f4, 0(r5) */ // 0x80899E58
    /* xoris r5, r6, 0x8000 */ // 0x80899E5C
    *(0x2c + r1) = r5; // stw @ 0x80899E60
    /* lfs f1, 0x12c(r3) */ // 0x80899E64
    /* lfd f3, 0x28(r1) */ // 0x80899E68
    /* fsubs f3, f3, f4 */ // 0x80899E6C
    /* fmuls f1, f1, f3 */ // 0x80899E70
    /* fsubs f0, f0, f1 */ // 0x80899E74
    if (==) goto 0x0x8089a244;
    /* lis r5, 0 */ // 0x80899E80
    /* lfs f1, 0x118(r3) */ // 0x80899E84
    /* lfs f3, 0(r5) */ // 0x80899E88
    /* fsubs f3, f2, f3 */ // 0x80899E8C
    /* fctiwz f3, f3 */ // 0x80899E90
    /* stfd f3, 0x40(r1) */ // 0x80899E94
    r5 = *(0x44 + r1); // lwz @ 0x80899E98
    if (>=) goto 0x0x80899eac;
    /* li r7, 0 */ // 0x80899EA4
    /* b 0x80899f08 */ // 0x80899EA8
    /* stfd f3, 0x40(r1) */ // 0x80899EAC
    r5 = *(0x134 + r3); // lwz @ 0x80899EB0
    r6 = *(0x44 + r1); // lwz @ 0x80899EB4
    if (>=) goto 0x0x80899ec8;
    /* li r7, 1 */ // 0x80899EC0
    /* b 0x80899f08 */ // 0x80899EC4
    /* stfd f3, 0x40(r1) */ // 0x80899EC8
    r8 = *(0x138 + r3); // lwz @ 0x80899ECC
    r5 = *(0x44 + r1); // lwz @ 0x80899ED0
    if (>=) goto 0x0x80899ee4;
    /* li r7, 2 */ // 0x80899EDC
    /* b 0x80899f08 */ // 0x80899EE0
    /* stfd f3, 0x40(r1) */ // 0x80899EE4
    /* lis r5, 0 */ // 0x80899EE8
    r5 = *(0 + r5); // lwz @ 0x80899EEC
    /* li r7, 4 */ // 0x80899EF0
    r6 = *(0x44 + r1); // lwz @ 0x80899EF4
    r5 = r8 + r5; // 0x80899EF8
    if (>=) goto 0x0x80899f08;
    /* li r7, 3 */ // 0x80899F04
    if (==) goto 0x0x80899f24;
    if (==) goto 0x0x8089a0a4;
    if (==) goto 0x0x8089a200;
    /* b 0x8089a22c */ // 0x80899F20
    /* lis r5, 0 */ // 0x80899F24
    /* lfs f3, 0(r5) */ // 0x80899F28
    /* fsubs f2, f2, f3 */ // 0x80899F2C
    /* fctiwz f2, f2 */ // 0x80899F30
    /* stfd f2, 0x40(r1) */ // 0x80899F34
    r5 = *(0x44 + r1); // lwz @ 0x80899F38
    if (>=) goto 0x0x80899f68;
    /* stfd f2, 0x40(r1) */ // 0x80899F44
    /* lis r5, 0 */ // 0x80899F48
    /* lfd f3, 0(r5) */ // 0x80899F4C
    r0 = *(0x44 + r1); // lwz @ 0x80899F50
    /* xoris r0, r0, 0x8000 */ // 0x80899F54
    *(0x24 + r1) = r0; // stw @ 0x80899F58
    /* lfd f2, 0x20(r1) */ // 0x80899F5C
    /* fsubs f2, f2, f3 */ // 0x80899F60
    /* b 0x8089a04c */ // 0x80899F64
    /* stfd f2, 0x40(r1) */ // 0x80899F68
    r6 = *(0x134 + r3); // lwz @ 0x80899F6C
    r5 = *(0x44 + r1); // lwz @ 0x80899F70
    if (>=) goto 0x0x80899fa4;
    /* stfd f2, 0x40(r1) */ // 0x80899F7C
    /* lis r5, 0 */ // 0x80899F80
    /* lfd f3, 0(r5) */ // 0x80899F84
    r5 = *(0x44 + r1); // lwz @ 0x80899F88
    /* subf r0, r0, r5 */ // 0x80899F8C
    /* xoris r0, r0, 0x8000 */ // 0x80899F90
    *(0x2c + r1) = r0; // stw @ 0x80899F94
    /* lfd f2, 0x28(r1) */ // 0x80899F98
    /* fsubs f2, f2, f3 */ // 0x80899F9C
    /* b 0x8089a04c */ // 0x80899FA0
    /* stfd f2, 0x40(r1) */ // 0x80899FA4
    r7 = *(0x138 + r3); // lwz @ 0x80899FA8
    r0 = *(0x44 + r1); // lwz @ 0x80899FAC
    if (>=) goto 0x0x80899fe0;
    /* stfd f2, 0x40(r1) */ // 0x80899FB8
    /* lis r5, 0 */ // 0x80899FBC
    /* lfd f3, 0(r5) */ // 0x80899FC0
    r0 = *(0x44 + r1); // lwz @ 0x80899FC4
    /* subf r0, r6, r0 */ // 0x80899FC8
    /* xoris r0, r0, 0x8000 */ // 0x80899FCC
    *(0x24 + r1) = r0; // stw @ 0x80899FD0
    /* lfd f2, 0x20(r1) */ // 0x80899FD4
    /* fsubs f2, f2, f3 */ // 0x80899FD8
    /* b 0x8089a04c */ // 0x80899FDC
    /* lis r5, 0 */ // 0x80899FE0
    /* stfd f2, 0x40(r1) */ // 0x80899FE4
    r6 = *(0 + r5); // lwz @ 0x80899FE8
    r5 = *(0x44 + r1); // lwz @ 0x80899FEC
    r0 = r7 + r6; // 0x80899FF0
    if (>=) goto 0x0x8089a024;
    /* stfd f2, 0x38(r1) */ // 0x80899FFC
    /* lis r5, 0 */ // 0x8089A000
    /* lfd f3, 0(r5) */ // 0x8089A004
    r0 = *(0x3c + r1); // lwz @ 0x8089A008
    /* subf r0, r7, r0 */ // 0x8089A00C
    /* xoris r0, r0, 0x8000 */ // 0x8089A010
    *(0x2c + r1) = r0; // stw @ 0x8089A014
    /* lfd f2, 0x28(r1) */ // 0x8089A018
    /* fsubs f2, f2, f3 */ // 0x8089A01C
    /* b 0x8089a04c */ // 0x8089A020
    /* stfd f2, 0x30(r1) */ // 0x8089A024
    /* lis r5, 0 */ // 0x8089A028
    /* lfd f3, 0(r5) */ // 0x8089A02C
    r0 = *(0x34 + r1); // lwz @ 0x8089A030
    /* subf r0, r7, r0 */ // 0x8089A034
    /* subf r0, r6, r0 */ // 0x8089A038
    /* xoris r0, r0, 0x8000 */ // 0x8089A03C
    *(0x24 + r1) = r0; // stw @ 0x8089A040
    /* lfd f2, 0x20(r1) */ // 0x8089A044
    /* fsubs f2, f2, f3 */ // 0x8089A048
    /* fctiwz f2, f2 */ // 0x8089A04C
    /* stfd f2, 0x40(r1) */ // 0x8089A050
    r5 = *(0x44 + r1); // lwz @ 0x8089A054
    /* slwi r0, r5, 0x1d */ // 0x8089A058
    /* srwi r5, r5, 0x1f */ // 0x8089A05C
    /* subf r0, r5, r0 */ // 0x8089A060
    /* rotlwi r0, r0, 3 */ // 0x8089A064
    r5 = r0 + r5; // 0x8089A068
    r6 = r5 + 1; // 0x8089A06C
    if (<=) goto 0x0x8089a07c;
    /* subfic r6, r6, 4 */ // 0x8089A078
    /* slwi r0, r6, 2 */ // 0x8089A07C
    /* lis r5, 0 */ // 0x8089A080
    r0 = r0 + r6; // 0x8089A084
    /* lfd f3, 0(r5) */ // 0x8089A088
    /* xoris r0, r0, 0x8000 */ // 0x8089A08C
    *(0x2c + r1) = r0; // stw @ 0x8089A090
    /* lfd f2, 0x28(r1) */ // 0x8089A094
    /* fsubs f2, f2, f3 */ // 0x8089A098
    /* fadds f1, f1, f2 */ // 0x8089A09C
    /* b 0x8089a22c */ // 0x8089A0A0
    /* lis r5, 0 */ // 0x8089A0A4
    /* lfs f3, 0(r5) */ // 0x8089A0A8
    /* fsubs f2, f2, f3 */ // 0x8089A0AC
    /* fctiwz f2, f2 */ // 0x8089A0B0
    /* stfd f2, 0x40(r1) */ // 0x8089A0B4
    r5 = *(0x44 + r1); // lwz @ 0x8089A0B8
    if (>=) goto 0x0x8089a0e8;
    /* stfd f2, 0x40(r1) */ // 0x8089A0C4
    /* lis r5, 0 */ // 0x8089A0C8
    /* lfd f3, 0(r5) */ // 0x8089A0CC
    r0 = *(0x44 + r1); // lwz @ 0x8089A0D0
    /* xoris r0, r0, 0x8000 */ // 0x8089A0D4
    *(0x24 + r1) = r0; // stw @ 0x8089A0D8
    /* lfd f2, 0x20(r1) */ // 0x8089A0DC
    /* fsubs f2, f2, f3 */ // 0x8089A0E0
    /* b 0x8089a1cc */ // 0x8089A0E4
    /* stfd f2, 0x40(r1) */ // 0x8089A0E8
    r6 = *(0x134 + r3); // lwz @ 0x8089A0EC
    r5 = *(0x44 + r1); // lwz @ 0x8089A0F0
    if (>=) goto 0x0x8089a124;
    /* stfd f2, 0x40(r1) */ // 0x8089A0FC
    /* lis r5, 0 */ // 0x8089A100
    /* lfd f3, 0(r5) */ // 0x8089A104
    r5 = *(0x44 + r1); // lwz @ 0x8089A108
    /* subf r0, r0, r5 */ // 0x8089A10C
    /* xoris r0, r0, 0x8000 */ // 0x8089A110
    *(0x2c + r1) = r0; // stw @ 0x8089A114
    /* lfd f2, 0x28(r1) */ // 0x8089A118
    /* fsubs f2, f2, f3 */ // 0x8089A11C
    /* b 0x8089a1cc */ // 0x8089A120
    /* stfd f2, 0x40(r1) */ // 0x8089A124
    r7 = *(0x138 + r3); // lwz @ 0x8089A128
    r0 = *(0x44 + r1); // lwz @ 0x8089A12C
    if (>=) goto 0x0x8089a160;
    /* stfd f2, 0x40(r1) */ // 0x8089A138
    /* lis r5, 0 */ // 0x8089A13C
    /* lfd f3, 0(r5) */ // 0x8089A140
    r0 = *(0x44 + r1); // lwz @ 0x8089A144
    /* subf r0, r6, r0 */ // 0x8089A148
    /* xoris r0, r0, 0x8000 */ // 0x8089A14C
    *(0x24 + r1) = r0; // stw @ 0x8089A150
    /* lfd f2, 0x20(r1) */ // 0x8089A154
    /* fsubs f2, f2, f3 */ // 0x8089A158
    /* b 0x8089a1cc */ // 0x8089A15C
    /* lis r5, 0 */ // 0x8089A160
    /* stfd f2, 0x40(r1) */ // 0x8089A164
    r6 = *(0 + r5); // lwz @ 0x8089A168
    r5 = *(0x44 + r1); // lwz @ 0x8089A16C
    r0 = r7 + r6; // 0x8089A170
    if (>=) goto 0x0x8089a1a4;
    /* stfd f2, 0x38(r1) */ // 0x8089A17C
    /* lis r5, 0 */ // 0x8089A180
    /* lfd f3, 0(r5) */ // 0x8089A184
    r0 = *(0x3c + r1); // lwz @ 0x8089A188
    /* subf r0, r7, r0 */ // 0x8089A18C
    /* xoris r0, r0, 0x8000 */ // 0x8089A190
    *(0x2c + r1) = r0; // stw @ 0x8089A194
    /* lfd f2, 0x28(r1) */ // 0x8089A198
    /* fsubs f2, f2, f3 */ // 0x8089A19C
    /* b 0x8089a1cc */ // 0x8089A1A0
    /* stfd f2, 0x30(r1) */ // 0x8089A1A4
    /* lis r5, 0 */ // 0x8089A1A8
    /* lfd f3, 0(r5) */ // 0x8089A1AC
    r0 = *(0x34 + r1); // lwz @ 0x8089A1B0
    /* subf r0, r7, r0 */ // 0x8089A1B4
    /* subf r0, r6, r0 */ // 0x8089A1B8
    /* xoris r0, r0, 0x8000 */ // 0x8089A1BC
    *(0x24 + r1) = r0; // stw @ 0x8089A1C0
    /* lfd f2, 0x20(r1) */ // 0x8089A1C4
    /* fsubs f2, f2, f3 */ // 0x8089A1C8
    /* fctiwz f2, f2 */ // 0x8089A1CC
    /* lis r5, 0 */ // 0x8089A1D0
    /* lfd f4, 0(r5) */ // 0x8089A1D4
    /* stfd f2, 0x40(r1) */ // 0x8089A1D8
    /* lfs f2, 0x12c(r3) */ // 0x8089A1DC
    r0 = *(0x44 + r1); // lwz @ 0x8089A1E0
    /* xoris r0, r0, 0x8000 */ // 0x8089A1E4
    *(0x2c + r1) = r0; // stw @ 0x8089A1E8
    /* lfd f3, 0x28(r1) */ // 0x8089A1EC
    /* fsubs f3, f3, f4 */ // 0x8089A1F0
    /* fmuls f2, f2, f3 */ // 0x8089A1F4
    /* fsubs f1, f1, f2 */ // 0x8089A1F8
    /* b 0x8089a22c */ // 0x8089A1FC
    /* lis r6, 0 */ // 0x8089A200
    /* lis r5, 0 */ // 0x8089A204
    r0 = *(0 + r6); // lwz @ 0x8089A208
    /* lfd f4, 0(r5) */ // 0x8089A20C
    /* xoris r0, r0, 0x8000 */ // 0x8089A210
    *(0x24 + r1) = r0; // stw @ 0x8089A214
    /* lfs f2, 0x12c(r3) */ // 0x8089A218
    /* lfd f3, 0x20(r1) */ // 0x8089A21C
    /* fsubs f3, f3, f4 */ // 0x8089A220
    /* fmuls f2, f2, f3 */ // 0x8089A224
    /* fsubs f1, f1, f2 */ // 0x8089A228
    /* fsubs f1, f0, f1 */ // 0x8089A22C
    /* lis r5, 0 */ // 0x8089A230
    /* lfs f2, 0(r5) */ // 0x8089A234
    /* stfs f2, 0(r4) */ // 0x8089A238
    /* stfs f1, 4(r4) */ // 0x8089A23C
    /* stfs f2, 8(r4) */ // 0x8089A240
    /* lfs f2, 0x11c(r3) */ // 0x8089A244
    /* lfs f1, 0x114(r3) */ // 0x8089A248
    /* stfs f1, 0x14(r1) */ // 0x8089A24C
    /* stfs f0, 0x18(r1) */ // 0x8089A250
    /* stfs f2, 0x1c(r1) */ // 0x8089A254
    r0 = *(0x54 + r3); // lbz @ 0x8089A258
    if (==) goto 0x0x8089a26c;
    r4 = r3 + 0x48; // 0x8089A264
    /* b 0x8089a29c */ // 0x8089A268
    /* li r0, 1 */ // 0x8089A26C
    *(0x54 + r3) = r0; // stb @ 0x8089A270
    r4 = r31 + 0x58; // 0x8089A278
    FUN_8070E704(r3, r4); // bl 0x8070E704
    /* lfs f0, 8(r1) */ // 0x8089A280
    r4 = r31 + 0x48; // 0x8089A284
    /* stfs f0, 0x48(r31) */ // 0x8089A288
    /* lfs f0, 0xc(r1) */ // 0x8089A28C
    /* stfs f0, 0x4c(r31) */ // 0x8089A290
    /* lfs f0, 0x10(r1) */ // 0x8089A294
    /* stfs f0, 0x50(r31) */ // 0x8089A298
    r3 = r31 + 0x13c; // 0x8089A29C
    FUN_805E3430(r3, r5); // bl 0x805E3430
}