/* Function at 0x80796AC0, size=588 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_80796AC0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80796ACC
    r31 = r3;
    r0 = *(0xe8 + r3); // lbz @ 0x80796AD4
    if (==) goto 0x0x80796cf8;
    r4 = *(0xdc + r3); // lwz @ 0x80796AE0
    r4 = *(0 + r4); // lwz @ 0x80796AE4
    r4 = *(4 + r4); // lwz @ 0x80796AE8
    r0 = *(4 + r4); // lwz @ 0x80796AEC
    /* rlwinm. r0, r0, 0, 3, 3 */ // 0x80796AF0
    if (==) goto 0x0x80796b00;
    /* li r0, 1 */ // 0x80796AF8
    *(0xe9 + r3) = r0; // stb @ 0x80796AFC
    r3 = *(0xdc + r3); // lwz @ 0x80796B00
    FUN_8061DFF8(); // bl 0x8061DFF8
    r0 = *(0x254 + r3); // lhz @ 0x80796B08
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x80796B0C
    if (==) goto 0x0x80796b70;
    r12 = *(0 + r31); // lwz @ 0x80796B14
    r3 = r31;
    r12 = *(0x134 + r12); // lwz @ 0x80796B1C
    /* mtctr r12 */ // 0x80796B20
    /* bctrl  */ // 0x80796B24
    r4 = r3;
    if (!=) goto 0x0x80796b38;
    /* li r4, 0x159 */ // 0x80796B34
    r12 = *(0 + r31); // lwz @ 0x80796B38
    r3 = r31;
    r5 = r31 + 0xc0; // 0x80796B40
    r12 = *(0xf8 + r12); // lwz @ 0x80796B44
    /* mtctr r12 */ // 0x80796B48
    /* bctrl  */ // 0x80796B4C
    r12 = *(0 + r31); // lwz @ 0x80796B50
    r3 = r31;
    r5 = r31 + 0xc4; // 0x80796B58
    /* li r4, 0x19a */ // 0x80796B5C
    r12 = *(0xf8 + r12); // lwz @ 0x80796B60
    /* mtctr r12 */ // 0x80796B64
    /* bctrl  */ // 0x80796B68
    /* b 0x80796cf8 */ // 0x80796B6C
    r3 = *(0xe9 + r31); // lbz @ 0x80796B70
    if (==) goto 0x0x80796cf8;
    r0 = r3 + -1; // 0x80796B7C
    if (>) goto 0x0x80796bc4;
    r0 = *(0xe9 + r31); // lbz @ 0x80796B88
    if (==) goto 0x0x80796ba0;
    if (==) goto 0x0x80796bb4;
    /* b 0x80796bc4 */ // 0x80796B9C
    r3 = *(0xdc + r31); // lwz @ 0x80796BA0
    FUN_8061EA64(); // bl 0x8061EA64
    r3 = *(0xdc + r31); // lwz @ 0x80796BA8
    FUN_8061EA84(); // bl 0x8061EA84
    /* b 0x80796bc4 */ // 0x80796BB0
    r3 = *(0xdc + r31); // lwz @ 0x80796BB4
    FUN_8061EA74(); // bl 0x8061EA74
    r3 = *(0xdc + r31); // lwz @ 0x80796BBC
    FUN_8061EA90(); // bl 0x8061EA90
    r0 = *(0xe9 + r31); // lbz @ 0x80796BC4
    if (==) goto 0x0x80796ca4;
    r0 = *(0xb4 + r31); // lbz @ 0x80796BD0
    if (!=) goto 0x0x80796ca4;
    r12 = *(0 + r31); // lwz @ 0x80796BDC
    r3 = r31;
    r12 = *(0x134 + r12); // lwz @ 0x80796BE4
    /* mtctr r12 */ // 0x80796BE8
    /* bctrl  */ // 0x80796BEC
    r4 = r3;
    if (!=) goto 0x0x80796c8c;
    r3 = *(0xdc + r31); // lwz @ 0x80796BFC
    FUN_8061E574(r4); // bl 0x8061E574
    /* fctiwz f0, f1 */ // 0x80796C04
    r0 = *(0xd6 + r31); // lha @ 0x80796C08
    /* li r4, 0 */ // 0x80796C0C
    /* stfd f0, 8(r1) */ // 0x80796C10
    r3 = *(0xc + r1); // lwz @ 0x80796C14
    r0 = r0 + r3; // 0x80796C18
    *(0xd6 + r31) = r0; // sth @ 0x80796C1C
    /* extsh r3, r0 */ // 0x80796C20
    if (<) goto 0x0x80796c3c;
    r0 = r3 + -0x1cc; // 0x80796C2C
    *(0xd6 + r31) = r0; // sth @ 0x80796C30
    /* li r4, 1 */ // 0x80796C34
    /* b 0x80796c50 */ // 0x80796C38
    if (>) goto 0x0x80796c50;
    r0 = r3 + 0x1cc; // 0x80796C44
    *(0xd6 + r31) = r0; // sth @ 0x80796C48
    /* li r4, 1 */ // 0x80796C4C
    if (==) goto 0x0x80796ca4;
    r12 = *(0 + r31); // lwz @ 0x80796C58
    r3 = r31;
    r4 = *(0xd5 + r31); // lbz @ 0x80796C60
    r5 = r31 + 0xc8; // 0x80796C64
    r12 = *(0xf0 + r12); // lwz @ 0x80796C68
    r4 = r4 + 0x17c; // 0x80796C6C
    /* mtctr r12 */ // 0x80796C70
    /* bctrl  */ // 0x80796C74
    r0 = *(0xd5 + r31); // lbz @ 0x80796C78
    /* cntlzw r0, r0 */ // 0x80796C7C
    r0 = r0 rlwinm 0x1b; // rlwinm
    *(0xd5 + r31) = r0; // stb @ 0x80796C84
    /* b 0x80796ca4 */ // 0x80796C88
    r12 = *(0 + r31); // lwz @ 0x80796C8C
    r3 = r31;
    r5 = r31 + 0xc0; // 0x80796C94
    r12 = *(0xf8 + r12); // lwz @ 0x80796C98
    /* mtctr r12 */ // 0x80796C9C
    /* bctrl  */ // 0x80796CA0
    r0 = *(0xe9 + r31); // lbz @ 0x80796CA4
    if (==) goto 0x0x80796cbc;
    if (==) goto 0x0x80796cdc;
    /* b 0x80796cf8 */ // 0x80796CB8
    r12 = *(0 + r31); // lwz @ 0x80796CBC
    r3 = r31;
    r5 = r31 + 0xc4; // 0x80796CC4
    /* li r4, 0x19a */ // 0x80796CC8
    r12 = *(0xf8 + r12); // lwz @ 0x80796CCC
    /* mtctr r12 */ // 0x80796CD0
    /* bctrl  */ // 0x80796CD4
    /* b 0x80796cf8 */ // 0x80796CD8
    r12 = *(0 + r31); // lwz @ 0x80796CDC
    r3 = r31;
    r5 = r31 + 0xc4; // 0x80796CE4
    /* li r4, 0x19b */ // 0x80796CE8
    r12 = *(0xf8 + r12); // lwz @ 0x80796CEC
    /* mtctr r12 */ // 0x80796CF0
    /* bctrl  */ // 0x80796CF4
    r0 = *(0x24 + r1); // lwz @ 0x80796CF8
    r31 = *(0x1c + r1); // lwz @ 0x80796CFC
    return;
}