/* Function at 0x80766D10, size=324 bytes */
/* Stack frame: 32 bytes */

void FUN_80766D10(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    r0 = *(0xd4 + r3); // lbz @ 0x80766D14
    if (!=) goto 0x0x80766d9c;
    /* lis r4, 0 */ // 0x80766D20
    /* lis r0, 0x4330 */ // 0x80766D24
    r5 = *(0 + r4); // lwz @ 0x80766D28
    /* lis r4, 0 */ // 0x80766D2C
    *(8 + r1) = r0; // stw @ 0x80766D30
    r5 = *(0x20 + r5); // lwz @ 0x80766D34
    /* lfd f2, 0(r4) */ // 0x80766D38
    /* xoris r0, r5, 0x8000 */ // 0x80766D3C
    *(0xc + r1) = r0; // stw @ 0x80766D40
    /* lfs f0, 0xb4(r3) */ // 0x80766D44
    /* lfd f1, 8(r1) */ // 0x80766D48
    *(0xc0 + r3) = r5; // stw @ 0x80766D4C
    /* fsubs f1, f1, f2 */ // 0x80766D50
    /* fcmpu cr0, f1, f0 */ // 0x80766D54
    if (!=) goto 0x0x80766e4c;
    r0 = *(0xc4 + r3); // lwz @ 0x80766D5C
    /* li r5, 1 */ // 0x80766D60
    r4 = *(0xb0 + r3); // lwz @ 0x80766D64
    /* slwi r0, r0, 2 */ // 0x80766D68
    /* lwzx r4, r4, r0 */ // 0x80766D6C
    *(0xb8 + r4) = r5; // stw @ 0x80766D70
    r4 = *(0xc4 + r3); // lwz @ 0x80766D74
    r0 = *(0xbc + r3); // lwz @ 0x80766D78
    r4 = r4 + 1; // 0x80766D7C
    *(0xc4 + r3) = r4; // stw @ 0x80766D80
    *(0xd4 + r3) = r5; // stb @ 0x80766D88
    if (!=) goto 0x0x80766e4c;
    /* li r0, 0 */ // 0x80766D90
    *(0xc4 + r3) = r0; // stw @ 0x80766D94
    /* b 0x80766e4c */ // 0x80766D98
    /* lfs f0, 0xb4(r3) */ // 0x80766D9C
    /* lis r4, 0 */ // 0x80766DA0
    /* lfs f1, 0xb8(r3) */ // 0x80766DA4
    /* lis r0, 0x4330 */ // 0x80766DA8
    /* fctiwz f2, f0 */ // 0x80766DAC
    r6 = *(0 + r4); // lwz @ 0x80766DB0
    /* fctiwz f0, f1 */ // 0x80766DB4
    /* lis r4, 0 */ // 0x80766DB8
    /* stfd f2, 8(r1) */ // 0x80766DBC
    /* lis r5, 0 */ // 0x80766DC0
    /* stfd f0, 0x10(r1) */ // 0x80766DC4
    r7 = *(0x20 + r6); // lwz @ 0x80766DC8
    r8 = *(0xc + r1); // lwz @ 0x80766DCC
    /* lfs f0, 0(r4) */ // 0x80766DD0
    r6 = *(0x14 + r1); // lwz @ 0x80766DD4
    /* subf r7, r8, r7 */ // 0x80766DD8
    *(0x18 + r1) = r0; // stw @ 0x80766DDC
    /* fsubs f0, f1, f0 */ // 0x80766DE0
    r4 = r7 / r6; // 0x80766DE4
    /* lfd f2, 0(r5) */ // 0x80766DE8
    r0 = r4 * r6; // 0x80766DEC
    /* subf r0, r0, r7 */ // 0x80766DF0
    *(0xc0 + r3) = r0; // stw @ 0x80766DF4
    /* xoris r0, r0, 0x8000 */ // 0x80766DF8
    *(0x1c + r1) = r0; // stw @ 0x80766DFC
    /* lfd f1, 0x18(r1) */ // 0x80766E00
    /* fsubs f1, f1, f2 */ // 0x80766E04
    /* fcmpu cr0, f1, f0 */ // 0x80766E08
    if (!=) goto 0x0x80766e34;
    r0 = *(0xc4 + r3); // lwz @ 0x80766E10
    /* li r5, 1 */ // 0x80766E14
    r4 = *(0xb0 + r3); // lwz @ 0x80766E18
    /* slwi r0, r0, 2 */ // 0x80766E1C
    /* lwzx r4, r4, r0 */ // 0x80766E20
    *(0xb8 + r4) = r5; // stw @ 0x80766E24
    r4 = *(0xc4 + r3); // lwz @ 0x80766E28
    r0 = r4 + 1; // 0x80766E2C
    *(0xc4 + r3) = r0; // stw @ 0x80766E30
    r4 = *(0xc4 + r3); // lwz @ 0x80766E34
    r0 = *(0xbc + r3); // lwz @ 0x80766E38
    if (!=) goto 0x0x80766e4c;
    /* li r0, 0 */ // 0x80766E44
    *(0xc4 + r3) = r0; // stw @ 0x80766E48
    return;
}