/* Function at 0x80796F20, size=180 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80796F20(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80796F2C
    r31 = r3;
    r3 = *(0xdc + r3); // lwz @ 0x80796F34
    FUN_8061E574(); // bl 0x8061E574
    /* fctiwz f0, f1 */ // 0x80796F3C
    r0 = *(0xd6 + r31); // lha @ 0x80796F40
    /* li r4, 0 */ // 0x80796F44
    /* stfd f0, 8(r1) */ // 0x80796F48
    r3 = *(0xc + r1); // lwz @ 0x80796F4C
    r0 = r0 + r3; // 0x80796F50
    *(0xd6 + r31) = r0; // sth @ 0x80796F54
    /* extsh r3, r0 */ // 0x80796F58
    if (<) goto 0x0x80796f74;
    r0 = r3 + -0x1cc; // 0x80796F64
    *(0xd6 + r31) = r0; // sth @ 0x80796F68
    /* li r4, 1 */ // 0x80796F6C
    /* b 0x80796f88 */ // 0x80796F70
    if (>) goto 0x0x80796f88;
    r0 = r3 + 0x1cc; // 0x80796F7C
    *(0xd6 + r31) = r0; // sth @ 0x80796F80
    /* li r4, 1 */ // 0x80796F84
    if (==) goto 0x0x80796fc0;
    r12 = *(0 + r31); // lwz @ 0x80796F90
    r3 = r31;
    r4 = *(0xd5 + r31); // lbz @ 0x80796F98
    r5 = r31 + 0xc8; // 0x80796F9C
    r12 = *(0xf0 + r12); // lwz @ 0x80796FA0
    r4 = r4 + 0x17c; // 0x80796FA4
    /* mtctr r12 */ // 0x80796FA8
    /* bctrl  */ // 0x80796FAC
    r0 = *(0xd5 + r31); // lbz @ 0x80796FB0
    /* cntlzw r0, r0 */ // 0x80796FB4
    r0 = r0 rlwinm 0x1b; // rlwinm
    *(0xd5 + r31) = r0; // stb @ 0x80796FBC
    r0 = *(0x24 + r1); // lwz @ 0x80796FC0
    r31 = *(0x1c + r1); // lwz @ 0x80796FC4
    return;
}