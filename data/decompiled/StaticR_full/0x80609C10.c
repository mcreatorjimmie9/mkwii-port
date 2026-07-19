/* Function at 0x80609C10, size=532 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 8 function(s) */

int FUN_80609C10(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r6, 1 */ // 0x80609C18
    *(0x24 + r1) = r0; // stw @ 0x80609C1C
    *(0x1c + r1) = r31; // stw @ 0x80609C20
    r31 = r3;
    r4 = *(0 + r3); // lwz @ 0x80609C28
    r7 = *(4 + r4); // lwz @ 0x80609C2C
    r0 = *(8 + r7); // lwz @ 0x80609C30
    /* rlwinm. r0, r0, 0, 0x18, 0x18 */ // 0x80609C34
    if (!=) goto 0x0x80609c54;
    /* lis r4, 0x2801 */ // 0x80609C3C
    r5 = *(0xc + r7); // lwz @ 0x80609C40
    r0 = r4 + -0x8000; // 0x80609C44
    /* and. r0, r5, r0 */ // 0x80609C48
    if (!=) goto 0x0x80609c54;
    /* li r6, 0 */ // 0x80609C50
    if (!=) goto 0x0x80609d60;
    r0 = *(4 + r7); // lwz @ 0x80609C5C
    /* rlwinm. r0, r0, 0, 0x14, 0x14 */ // 0x80609C60
    if (==) goto 0x0x80609cb0;
    r0 = *(0xc8 + r3); // lhz @ 0x80609C68
    /* lfs f0, 0xc0(r3) */ // 0x80609C6C
    /* stfs f0, 0xb8(r3) */ // 0x80609C74
    if (!=) goto 0x0x80609c84;
    /* li r0, 1 */ // 0x80609C7C
    *(0xc8 + r3) = r0; // sth @ 0x80609C80
    r4 = *(0xc8 + r3); // lhz @ 0x80609C84
    /* lis r0, 0x4330 */ // 0x80609C88
    *(0xc + r1) = r4; // stw @ 0x80609C8C
    /* lis r4, 0 */ // 0x80609C90
    /* lfd f2, 0(r4) */ // 0x80609C94
    *(8 + r1) = r0; // stw @ 0x80609C98
    /* lfs f0, 0xc4(r3) */ // 0x80609C9C
    /* lfd f1, 8(r1) */ // 0x80609CA0
    /* fsubs f1, f1, f2 */ // 0x80609CA4
    /* fdivs f0, f0, f1 */ // 0x80609CA8
    /* stfs f0, 0xbc(r3) */ // 0x80609CAC
    r3 = *(0 + r3); // lwz @ 0x80609CB0
    r3 = *(4 + r3); // lwz @ 0x80609CB4
    r3 = *(4 + r3); // lwz @ 0x80609CB8
    /* rlwinm. r0, r3, 0, 0x15, 0x15 */ // 0x80609CBC
    if (==) goto 0x0x80609d7c;
    /* rlwinm. r0, r3, 0, 0x14, 0x14 */ // 0x80609CC4
    if (==) goto 0x0x80609d3c;
    r3 = r31;
    FUN_8061E098(r3); // bl 0x8061E098
    /* lfs f1, 0x64(r3) */ // 0x80609CD4
    /* lfs f0, 0xc0(r31) */ // 0x80609CD8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80609CDC
    if (>=) goto 0x0x80609cf4;
    r3 = r31;
    FUN_8061E098(r3); // bl 0x8061E098
    /* lfs f0, 0x64(r3) */ // 0x80609CEC
    /* stfs f0, 0xb8(r31) */ // 0x80609CF0
    r3 = r31;
    FUN_8061E098(r3, r3); // bl 0x8061E098
    r5 = *(0xc8 + r31); // lhz @ 0x80609CFC
    /* lis r0, 0x4330 */ // 0x80609D00
    *(8 + r1) = r0; // stw @ 0x80609D04
    /* lis r4, 0 */ // 0x80609D08
    r0 = r5 + 1; // 0x80609D0C
    /* lfs f3, 0x68(r3) */ // 0x80609D10
    /* xoris r0, r0, 0x8000 */ // 0x80609D14
    *(0xc + r1) = r0; // stw @ 0x80609D18
    /* lfs f2, 0xc4(r31) */ // 0x80609D1C
    /* lfd f1, 0(r4) */ // 0x80609D20
    /* lfd f0, 8(r1) */ // 0x80609D24
    /* fadds f2, f2, f3 */ // 0x80609D28
    /* fsubs f0, f0, f1 */ // 0x80609D2C
    /* fdivs f0, f2, f0 */ // 0x80609D30
    /* stfs f0, 0xbc(r31) */ // 0x80609D34
    /* b 0x80609d7c */ // 0x80609D38
    r3 = r31;
    FUN_8061E098(r3); // bl 0x8061E098
    /* lfs f0, 0x64(r3) */ // 0x80609D44
    r3 = r31;
    /* stfs f0, 0xb8(r31) */ // 0x80609D4C
    FUN_8061E098(r3, r3); // bl 0x8061E098
    /* lfs f0, 0x68(r3) */ // 0x80609D54
    /* stfs f0, 0xbc(r31) */ // 0x80609D58
    /* b 0x80609d7c */ // 0x80609D5C
    /* lis r4, 0 */ // 0x80609D60
    /* lfs f0, 0(r4) */ // 0x80609D64
    /* stfs f0, 0xb8(r3) */ // 0x80609D68
    r3 = r31;
    FUN_8061E0F0(r4, r3); // bl 0x8061E0F0
    /* lfs f0, 0xf0(r3) */ // 0x80609D74
    /* stfs f0, 0xbc(r31) */ // 0x80609D78
    r3 = r31;
    FUN_80613FF8(r3, r3); // bl 0x80613FF8
    r4 = *(0 + r31); // lwz @ 0x80609D84
    r3 = *(0 + r4); // lwz @ 0x80609D88
    r0 = *(0x34 + r3); // lwz @ 0x80609D8C
    if (==) goto 0x0x80609e10;
    r3 = *(4 + r4); // lwz @ 0x80609D98
    r3 = *(4 + r3); // lwz @ 0x80609D9C
    /* rlwinm. r0, r3, 0, 0xd, 0xd */ // 0x80609DA0
    if (==) goto 0x0x80609e10;
    /* rlwinm. r0, r3, 0, 0x1b, 0x1b */ // 0x80609DA8
    if (!=) goto 0x0x80609e10;
    r3 = r31;
    FUN_8061E0C8(r3); // bl 0x8061E0C8
    r0 = *(0x2c + r3); // lwz @ 0x80609DB8
    /* rlwinm. r0, r0, 0, 0x19, 0x19 */ // 0x80609DBC
    if (==) goto 0x0x80609e10;
    r6 = *(0 + r31); // lwz @ 0x80609DC4
    /* li r5, 1 */ // 0x80609DC8
    r4 = *(4 + r6); // lwz @ 0x80609DCC
    r0 = *(8 + r4); // lwz @ 0x80609DD0
    /* rlwinm. r0, r0, 0, 0x18, 0x18 */ // 0x80609DD4
    if (!=) goto 0x0x80609df4;
    /* lis r3, 0x2801 */ // 0x80609DDC
    r4 = *(0xc + r4); // lwz @ 0x80609DE0
    r0 = r3 + -0x8000; // 0x80609DE4
    /* and. r0, r4, r0 */ // 0x80609DE8
    if (!=) goto 0x0x80609df4;
    /* li r5, 0 */ // 0x80609DF0
    if (!=) goto 0x0x80609e10;
    r3 = *(0 + r6); // lwz @ 0x80609DFC
    r4 = *(0x34 + r3); // lwz @ 0x80609E00
    r3 = *(8 + r4); // lwz @ 0x80609E04
    r0 = r3 + 1; // 0x80609E08
    *(8 + r4) = r0; // stw @ 0x80609E0C
    r0 = *(0x24 + r1); // lwz @ 0x80609E10
    r31 = *(0x1c + r1); // lwz @ 0x80609E14
    return;
}