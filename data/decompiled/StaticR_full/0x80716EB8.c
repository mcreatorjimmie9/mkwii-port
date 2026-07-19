/* Function at 0x80716EB8, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80716EB8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80716EC0
    /* lis r5, 0 */ // 0x80716EC4
    *(0x24 + r1) = r0; // stw @ 0x80716EC8
    /* li r0, 0 */ // 0x80716ECC
    /* lfs f2, 0(r4) */ // 0x80716ED0
    /* li r4, 0 */ // 0x80716ED4
    *(0x1c + r1) = r31; // stw @ 0x80716ED8
    r31 = r3;
    /* lfs f1, 0x12c(r3) */ // 0x80716EE0
    /* lfs f0, 0x128(r3) */ // 0x80716EE4
    *(0x10c + r3) = r0; // stw @ 0x80716EE8
    /* fdivs f0, f1, f0 */ // 0x80716EEC
    /* lfs f1, 0(r5) */ // 0x80716EF0
    /* fctiwz f0, f0 */ // 0x80716EF4
    /* stfd f0, 8(r1) */ // 0x80716EF8
    r0 = *(0xc + r1); // lwz @ 0x80716EFC
    *(0x134 + r3) = r0; // sth @ 0x80716F00
    /* lfs f0, 0x138(r3) */ // 0x80716F04
    /* stfs f0, 0x168(r3) */ // 0x80716F08
    /* lfs f0, 0x13c(r3) */ // 0x80716F0C
    /* stfs f0, 0x16c(r3) */ // 0x80716F10
    /* lfs f0, 0x140(r3) */ // 0x80716F14
    /* stfs f0, 0x170(r3) */ // 0x80716F18
    /* lfs f0, 0x144(r3) */ // 0x80716F1C
    /* stfs f0, 0x174(r3) */ // 0x80716F20
    /* lfs f0, 0x148(r3) */ // 0x80716F24
    /* stfs f0, 0x178(r3) */ // 0x80716F28
    /* lfs f0, 0x14c(r3) */ // 0x80716F2C
    /* stfs f0, 0x17c(r3) */ // 0x80716F30
    /* lfs f0, 0x150(r3) */ // 0x80716F34
    /* stfs f0, 0x180(r3) */ // 0x80716F38
    /* lfs f0, 0x154(r3) */ // 0x80716F3C
    /* stfs f0, 0x184(r3) */ // 0x80716F40
    /* lfs f0, 0x158(r3) */ // 0x80716F44
    /* stfs f0, 0x188(r3) */ // 0x80716F48
    /* lfs f0, 0x15c(r3) */ // 0x80716F4C
    /* stfs f0, 0x18c(r3) */ // 0x80716F50
    /* lfs f0, 0x160(r3) */ // 0x80716F54
    /* stfs f0, 0x190(r3) */ // 0x80716F58
    /* lfs f0, 0x164(r3) */ // 0x80716F5C
    /* stfs f0, 0x194(r3) */ // 0x80716F60
    r3 = *(8 + r3); // lwz @ 0x80716F64
    r3 = *(0x28 + r3); // lwz @ 0x80716F68
    FUN_805E70EC(); // bl 0x805E70EC
    r0 = *(0x132 + r31); // lbz @ 0x80716F70
    if (!=) goto 0x0x80716f98;
    /* lis r3, 0 */ // 0x80716F7C
    r3 = *(0 + r3); // lwz @ 0x80716F80
    r12 = *(0 + r3); // lwz @ 0x80716F84
    r12 = *(0xc + r12); // lwz @ 0x80716F88
    /* mtctr r12 */ // 0x80716F8C
    /* bctrl  */ // 0x80716F90
    /* b 0x80716fac */ // 0x80716F94
    r3 = *(0x124 + r31); // lwz @ 0x80716F98
    r12 = *(0 + r3); // lwz @ 0x80716F9C
    r12 = *(0xc + r12); // lwz @ 0x80716FA0
    /* mtctr r12 */ // 0x80716FA4
    /* bctrl  */ // 0x80716FA8
    r3 = r31;
    /* li r4, 0 */ // 0x80716FB0
    FUN_808A0A44(r3, r4); // bl 0x808A0A44
    /* li r0, 0 */ // 0x80716FB8
    *(0x1a4 + r31) = r0; // stb @ 0x80716FBC
    r31 = *(0x1c + r1); // lwz @ 0x80716FC0
    r0 = *(0x24 + r1); // lwz @ 0x80716FC4
    return;
}