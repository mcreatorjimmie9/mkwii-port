/* Function at 0x80857DD8, size=424 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_80857DD8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x80857DEC
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x80857DF4
    r0 = *(0x78 + r4); // lwz @ 0x80857DF8
    r3 = *(0xc + r3); // lwz @ 0x80857DFC
    r29 = r0 rlwinm 7; // rlwinm
    r4 = r29;
    FUN_808F4360(r4); // bl 0x808F4360
    r0 = *(0xa8 + r30); // lbz @ 0x80857E0C
    if (!=) goto 0x0x80857f64;
    r0 = *(0xb4 + r30); // lbz @ 0x80857E18
    if (!=) goto 0x0x80857f64;
    /* li r29, 0x17 */ // 0x80857E28
    if (==) goto 0x0x80857e34;
    /* li r29, 0x15 */ // 0x80857E30
    r3 = *(0xc + r30); // lwz @ 0x80857E34
    r4 = r29;
    FUN_808F5118(r4); // bl 0x808F5118
    r3 = *(0x6c + r30); // lwz @ 0x80857E40
    r4 = r29;
    r3 = *(0x28 + r3); // lwz @ 0x80857E48
    FUN_805E6F54(r4, r4); // bl 0x805E6F54
    r0 = *(4 + r3); // lwz @ 0x80857E50
    if (==) goto 0x0x80857f44;
    /* li r0, 0 */ // 0x80857E60
    if (<=) goto 0x0x80857e78;
    if (<) goto 0x0x80857e7c;
    if (>) goto 0x0x80857e7c;
    /* li r0, 1 */ // 0x80857E78
    if (==) goto 0x0x80857e8c;
    /* li r0, 0 */ // 0x80857E84
    *(0x2d8 + r30) = r0; // stw @ 0x80857E88
    r0 = *(0xfa + r30); // lhz @ 0x80857E8C
    /* lis r3, 0 */ // 0x80857E90
    *(0xfc + r30) = r0; // sth @ 0x80857E94
    /* lis r5, 0 */ // 0x80857E98
    r6 = *(0x6c + r30); // lwz @ 0x80857E9C
    r4 = r29;
    /* lfs f1, 0(r3) */ // 0x80857EA4
    r3 = *(0x28 + r6); // lwz @ 0x80857EA8
    /* lfs f2, 0(r5) */ // 0x80857EAC
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(0x2e4 + r30); // lwz @ 0x80857EB4
    /* li r4, 0xff */ // 0x80857EB8
    /* li r0, 0 */ // 0x80857EBC
    *(0x1c8 + r30) = r4; // sth @ 0x80857EC0
    *(0x1ca + r30) = r4; // sth @ 0x80857EC8
    *(0xf8 + r30) = r0; // stb @ 0x80857ECC
    *(0xfa + r30) = r29; // sth @ 0x80857ED0
    if (==) goto 0x0x80857ee8;
    r12 = *(0xc + r3); // lwz @ 0x80857ED8
    r12 = *(0x30 + r12); // lwz @ 0x80857EDC
    /* mtctr r12 */ // 0x80857EE0
    /* bctrl  */ // 0x80857EE4
    r3 = *(0xfc + r30); // lhz @ 0x80857EE8
    /* li r0, 0 */ // 0x80857EEC
    if (==) goto 0x0x80857f00;
    if (!=) goto 0x0x80857f04;
    /* li r0, 1 */ // 0x80857F00
    if (==) goto 0x0x80857f44;
    r3 = *(0xfa + r30); // lhz @ 0x80857F0C
    /* li r0, 0 */ // 0x80857F10
    if (==) goto 0x0x80857f24;
    if (!=) goto 0x0x80857f28;
    /* li r0, 1 */ // 0x80857F24
    if (!=) goto 0x0x80857f44;
    r3 = r30;
    /* li r4, 1 */ // 0x80857F34
    /* li r5, 0 */ // 0x80857F38
    /* li r6, 1 */ // 0x80857F3C
    FUN_8061E8CC(r3, r4, r5, r6); // bl 0x8061E8CC
    r3 = r30;
    /* li r4, 1 */ // 0x80857F48
    /* li r5, 1 */ // 0x80857F4C
    /* li r6, 1 */ // 0x80857F50
    FUN_8061E8C0(r3, r4, r5, r6); // bl 0x8061E8C0
    /* li r0, 4 */ // 0x80857F58
    *(0x6dc + r30) = r0; // stw @ 0x80857F5C
    *(0x6e0 + r30) = r31; // stw @ 0x80857F60
    r0 = *(0x24 + r1); // lwz @ 0x80857F64
    r31 = *(0x1c + r1); // lwz @ 0x80857F68
    r30 = *(0x18 + r1); // lwz @ 0x80857F6C
    r29 = *(0x14 + r1); // lwz @ 0x80857F70
    return;
}