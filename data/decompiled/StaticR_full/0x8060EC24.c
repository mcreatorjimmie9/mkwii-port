/* Function at 0x8060EC24, size=548 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_8060EC24(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x8060EC38
    /* lis r30, 0 */ // 0x8060EC3C
    r30 = r30 + 0; // 0x8060EC40
    r4 = *(0 + r3); // lwz @ 0x8060EC44
    r4 = *(4 + r4); // lwz @ 0x8060EC48
    r0 = *(0xc + r4); // lwz @ 0x8060EC4C
    /* rlwinm. r0, r0, 0, 0xd, 0xd */ // 0x8060EC50
    if (==) goto 0x0x8060ed18;
    /* lfs f1, 0x160(r3) */ // 0x8060EC58
    /* lfs f0, 4(r30) */ // 0x8060EC5C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8060EC60
    /* cror cr0eq, cr0gt, cr0eq */ // 0x8060EC64
    if (!=) goto 0x0x8060ec88;
    FUN_8061E010(); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x8060EC70
    /* li r4, 0x1aa */ // 0x8060EC74
    /* lfs f1, 0(r30) */ // 0x8060EC78
    r12 = *(0xe4 + r12); // lwz @ 0x8060EC7C
    /* mtctr r12 */ // 0x8060EC80
    /* bctrl  */ // 0x8060EC84
    /* lfs f2, 0x160(r31) */ // 0x8060EC88
    /* lfs f1, 0x48(r30) */ // 0x8060EC8C
    /* lfs f0, 0xc8(r30) */ // 0x8060EC90
    /* fsubs f1, f2, f1 */ // 0x8060EC94
    /* stfs f1, 0x160(r31) */ // 0x8060EC98
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x8060EC9C
    if (<=) goto 0x0x8060ecb0;
    /* stfs f0, 0x160(r31) */ // 0x8060ECA4
    /* li r0, 1 */ // 0x8060ECA8
    /* b 0x8060ecb4 */ // 0x8060ECAC
    /* li r0, 0 */ // 0x8060ECB0
    if (==) goto 0x0x8060ed18;
    r5 = *(0 + r31); // lwz @ 0x8060ECBC
    r3 = r31;
    /* li r4, 0 */ // 0x8060ECC4
    r5 = *(4 + r5); // lwz @ 0x8060ECC8
    r0 = *(0xc + r5); // lwz @ 0x8060ECCC
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r5) = r0; // stw @ 0x8060ECD4
    FUN_8061E308(r4); // bl 0x8061E308
    r4 = *(0 + r31); // lwz @ 0x8060ECDC
    r3 = r31;
    r4 = *(4 + r4); // lwz @ 0x8060ECE4
    r0 = *(0xc + r4); // lwz @ 0x8060ECE8
    r0 = r0 | 8; // 0x8060ECEC
    *(0xc + r4) = r0; // stw @ 0x8060ECF0
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060ECF8
    /* clrlwi r0, r3, 0x18 */ // 0x8060ECFC
    r3 = *(0 + r4); // lwz @ 0x8060ED00
    /* mulli r0, r0, 0x248 */ // 0x8060ED04
    /* li r4, 0 */ // 0x8060ED08
    r3 = *(0x14 + r3); // lwz @ 0x8060ED0C
    r3 = r3 + r0; // 0x8060ED10
    FUN_808238DC(r4); // bl 0x808238DC
    r3 = *(0 + r31); // lwz @ 0x8060ED18
    r3 = *(4 + r3); // lwz @ 0x8060ED1C
    r4 = *(0x14 + r3); // lwz @ 0x8060ED20
    /* rlwinm. r0, r4, 0, 0xe, 0xe */ // 0x8060ED24
    if (==) goto 0x0x8060ee30;
    r0 = *(4 + r3); // lwz @ 0x8060ED2C
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x8060ED30
    if (!=) goto 0x0x8060ee30;
    r0 = *(0xc + r3); // lwz @ 0x8060ED38
    /* rlwinm. r0, r0, 0, 0x11, 0x12 */ // 0x8060ED3C
    if (!=) goto 0x0x8060ee30;
    /* rlwinm. r0, r4, 0, 0x1c, 0x1c */ // 0x8060ED44
    if (!=) goto 0x0x8060ee30;
    /* lis r3, 0 */ // 0x8060ED4C
    r4 = *(0x21c + r31); // lha @ 0x8060ED50
    r3 = *(0 + r3); // lha @ 0x8060ED54
    r0 = r3 + -0x5a; // 0x8060ED58
    if (!=) goto 0x0x8060ed70;
    r3 = r31;
    /* li r4, 0 */ // 0x8060ED68
    FUN_8061F000(r3, r4); // bl 0x8061F000
    r4 = *(0x21c + r31); // lha @ 0x8060ED70
    /* lis r3, 0 */ // 0x8060ED74
    r0 = r4 + 1; // 0x8060ED78
    *(0x21c + r31) = r0; // sth @ 0x8060ED7C
    /* extsh r4, r0 */ // 0x8060ED80
    r0 = *(0 + r3); // lha @ 0x8060ED84
    if (<) goto 0x0x8060ee30;
    r5 = *(0 + r31); // lwz @ 0x8060ED90
    /* lis r3, -3 */ // 0x8060ED94
    r0 = r3 + -0x201; // 0x8060ED98
    /* li r4, 0 */ // 0x8060ED9C
    r5 = *(4 + r5); // lwz @ 0x8060EDA0
    r3 = *(0x14 + r5); // lwz @ 0x8060EDA4
    r0 = r3 & r0; // 0x8060EDA8
    *(0x14 + r5) = r0; // stw @ 0x8060EDAC
    *(0x21c + r31) = r4; // sth @ 0x8060EDB0
    r3 = *(0 + r31); // lwz @ 0x8060EDB4
    r3 = *(4 + r3); // lwz @ 0x8060EDB8
    r0 = *(0x14 + r3); // lwz @ 0x8060EDBC
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x8060EDC0
    if (!=) goto 0x0x8060ee30;
    *(0x234 + r31) = r4; // sth @ 0x8060EDC8
    r3 = r31;
    r5 = *(0 + r31); // lwz @ 0x8060EDD0
    /* li r4, 0x1a */ // 0x8060EDD4
    r5 = *(4 + r5); // lwz @ 0x8060EDD8
    r0 = *(8 + r5); // lwz @ 0x8060EDDC
    r0 = r0 | 2; // 0x8060EDE0
    *(8 + r5) = r0; // stw @ 0x8060EDE4
    r5 = *(0 + r31); // lwz @ 0x8060EDE8
    r5 = *(4 + r5); // lwz @ 0x8060EDEC
    r0 = *(0x14 + r5); // lwz @ 0x8060EDF0
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x8060EDF4
    if (==) goto 0x0x8060ee00;
    /* li r4, 0x1b */ // 0x8060EDFC
    FUN_8061E02C(r4); // bl 0x8061E02C
    r3 = *(0 + r31); // lwz @ 0x8060EE04
    r3 = *(4 + r3); // lwz @ 0x8060EE08
    FUN_80623530(r4); // bl 0x80623530
    r3 = *(0 + r31); // lwz @ 0x8060EE10
    r3 = *(0 + r3); // lwz @ 0x8060EE14
    r4 = *(0x34 + r3); // lwz @ 0x8060EE18
    if (==) goto 0x0x8060ee30;
    r3 = *(0x14 + r4); // lwz @ 0x8060EE24
    r0 = r3 + 1; // 0x8060EE28
    *(0x14 + r4) = r0; // stw @ 0x8060EE2C
    r0 = *(0x14 + r1); // lwz @ 0x8060EE30
    r31 = *(0xc + r1); // lwz @ 0x8060EE34
    r30 = *(8 + r1); // lwz @ 0x8060EE38
    return;
}