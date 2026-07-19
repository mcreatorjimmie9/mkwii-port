/* Function at 0x80796D0C, size=532 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80796D0C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80796D18
    r31 = r3;
    r0 = *(0xe8 + r3); // lbz @ 0x80796D20
    if (==) goto 0x0x80796f0c;
    r0 = *(0xe9 + r3); // lbz @ 0x80796D2C
    if (!=) goto 0x0x80796f0c;
    r0 = *(0xb4 + r3); // lbz @ 0x80796D38
    if (!=) goto 0x0x80796f0c;
    r4 = *(0xb8 + r3); // lwz @ 0x80796D44
    r0 = *(4 + r4); // lwz @ 0x80796D48
    if (==) goto 0x0x80796f0c;
    /* li r0, 0xd */ // 0x80796D54
    /* li r6, 0x166 */ // 0x80796D58
    /* mtctr r0 */ // 0x80796D5C
    r5 = *(0x80 + r3); // lwz @ 0x80796D60
    /* li r4, 0 */ // 0x80796D64
    if (==) goto 0x0x80796d90;
    if (==) goto 0x0x80796d7c;
    r0 = *(0x90 + r5); // lwz @ 0x80796D74
    /* b 0x80796d80 */ // 0x80796D78
    /* li r0, -1 */ // 0x80796D7C
    if (!=) goto 0x0x80796d90;
    r4 = r3 + 0x80; // 0x80796D88
    /* b 0x80796e10 */ // 0x80796D8C
    r5 = *(0x84 + r3); // lwz @ 0x80796D90
    if (==) goto 0x0x80796dbc;
    if (==) goto 0x0x80796da8;
    r0 = *(0x90 + r5); // lwz @ 0x80796DA0
    /* b 0x80796dac */ // 0x80796DA4
    /* li r0, -1 */ // 0x80796DA8
    if (!=) goto 0x0x80796dbc;
    r4 = r3 + 0x84; // 0x80796DB4
    /* b 0x80796e10 */ // 0x80796DB8
    r5 = *(0x88 + r3); // lwz @ 0x80796DBC
    if (==) goto 0x0x80796de8;
    if (==) goto 0x0x80796dd4;
    r0 = *(0x90 + r5); // lwz @ 0x80796DCC
    /* b 0x80796dd8 */ // 0x80796DD0
    /* li r0, -1 */ // 0x80796DD4
    if (!=) goto 0x0x80796de8;
    r4 = r3 + 0x88; // 0x80796DE0
    /* b 0x80796e10 */ // 0x80796DE4
    r5 = *(0x8c + r3); // lwz @ 0x80796DE8
    if (==) goto 0x0x80796e10;
    if (==) goto 0x0x80796e00;
    r0 = *(0x90 + r5); // lwz @ 0x80796DF8
    /* b 0x80796e04 */ // 0x80796DFC
    /* li r0, -1 */ // 0x80796E00
    if (!=) goto 0x0x80796e10;
    r4 = r3 + 0x8c; // 0x80796E0C
    if (!=) goto 0x0x80796f0c;
    r6 = r6 + 1; // 0x80796E18
    if (counter-- != 0) goto 0x0x80796d60;
    r3 = *(0xdc + r3); // lwz @ 0x80796E20
    FUN_8061E574(r6); // bl 0x8061E574
    /* lis r3, 0 */ // 0x80796E28
    /* fabs f1, f1 */ // 0x80796E2C
    /* lfs f0, 0(r3) */ // 0x80796E30
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80796E34
    if (<) goto 0x0x80796f0c;
    r12 = *(0 + r31); // lwz @ 0x80796E3C
    r3 = r31;
    r12 = *(0x12c + r12); // lwz @ 0x80796E44
    /* mtctr r12 */ // 0x80796E48
    /* bctrl  */ // 0x80796E4C
    r4 = r3;
    if (==) goto 0x0x80796f0c;
    if (!=) goto 0x0x80796ef4;
    r3 = *(0xdc + r31); // lwz @ 0x80796E64
    FUN_8061E574(r4); // bl 0x8061E574
    /* fctiwz f0, f1 */ // 0x80796E6C
    r0 = *(0xd6 + r31); // lha @ 0x80796E70
    /* li r4, 0 */ // 0x80796E74
    /* stfd f0, 8(r1) */ // 0x80796E78
    r3 = *(0xc + r1); // lwz @ 0x80796E7C
    r0 = r0 + r3; // 0x80796E80
    *(0xd6 + r31) = r0; // sth @ 0x80796E84
    /* extsh r3, r0 */ // 0x80796E88
    if (<) goto 0x0x80796ea4;
    r0 = r3 + -0x1cc; // 0x80796E94
    *(0xd6 + r31) = r0; // sth @ 0x80796E98
    /* li r4, 1 */ // 0x80796E9C
    /* b 0x80796eb8 */ // 0x80796EA0
    if (>) goto 0x0x80796eb8;
    r0 = r3 + 0x1cc; // 0x80796EAC
    *(0xd6 + r31) = r0; // sth @ 0x80796EB0
    /* li r4, 1 */ // 0x80796EB4
    if (==) goto 0x0x80796f0c;
    r12 = *(0 + r31); // lwz @ 0x80796EC0
    r3 = r31;
    r4 = *(0xd5 + r31); // lbz @ 0x80796EC8
    r5 = r31 + 0xc8; // 0x80796ECC
    r12 = *(0xf0 + r12); // lwz @ 0x80796ED0
    r4 = r4 + 0x17c; // 0x80796ED4
    /* mtctr r12 */ // 0x80796ED8
    /* bctrl  */ // 0x80796EDC
    r0 = *(0xd5 + r31); // lbz @ 0x80796EE0
    /* cntlzw r0, r0 */ // 0x80796EE4
    r0 = r0 rlwinm 0x1b; // rlwinm
    *(0xd5 + r31) = r0; // stb @ 0x80796EEC
    /* b 0x80796f0c */ // 0x80796EF0
    r12 = *(0 + r31); // lwz @ 0x80796EF4
    r3 = r31;
    r5 = r31 + 0xc8; // 0x80796EFC
    r12 = *(0xf8 + r12); // lwz @ 0x80796F00
    /* mtctr r12 */ // 0x80796F04
    /* bctrl  */ // 0x80796F08
    r0 = *(0x24 + r1); // lwz @ 0x80796F0C
    r31 = *(0x1c + r1); // lwz @ 0x80796F10
    return;
}