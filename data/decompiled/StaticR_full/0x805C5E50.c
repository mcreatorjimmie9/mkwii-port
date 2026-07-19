/* Function at 0x805C5E50, size=908 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_805C5E50(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x805C5E58
    /* lis r5, 0 */ // 0x805C5E5C
    *(0x3c + r1) = r31; // stw @ 0x805C5E64
    *(0x38 + r1) = r30; // stw @ 0x805C5E68
    /* li r30, 0 */ // 0x805C5E6C
    *(0x34 + r1) = r29; // stw @ 0x805C5E70
    r29 = r3;
    r7 = *(0 + r4); // lwz @ 0x805C5E78
    r4 = *(0 + r5); // lwz @ 0x805C5E7C
    r0 = *(0xb70 + r7); // lwz @ 0x805C5E80
    if (==) goto 0x0x805c5e94;
    /* li r6, 0 */ // 0x805C5E8C
    /* b 0x805c5eb0 */ // 0x805C5E90
    r4 = *(0x10 + r4); // lwz @ 0x805C5E94
    r0 = *(8 + r4); // lwz @ 0x805C5E98
    r6 = r4 + 8; // 0x805C5E9C
    if (==) goto 0x0x805c5eac;
    /* b 0x805c5eb0 */ // 0x805C5EA8
    /* li r6, 0 */ // 0x805C5EAC
    if (==) goto 0x0x805c5ed0;
    r4 = *(8 + r3); // lbz @ 0x805C5EB8
    /* mulli r0, r4, 0xf0 */ // 0x805C5EBC
    r5 = r7 + r0; // 0x805C5EC0
    r0 = *(0x38 + r5); // lwz @ 0x805C5EC4
    if (==) goto 0x0x805c5edc;
    /* li r0, 7 */ // 0x805C5ED0
    *(0x34 + r3) = r0; // stw @ 0x805C5ED4
    /* b 0x805c61c0 */ // 0x805C5ED8
    r7 = *(0 + r6); // lwz @ 0x805C5EDC
    /* lis r5, 0 */ // 0x805C5EE0
    r5 = *(0 + r5); // lwz @ 0x805C5EE4
    r6 = *(0xb6c + r5); // lwz @ 0x805C5EEC
    r0 = *(0xb68 + r5); // lwz @ 0x805C5EF0
    if (==) goto 0x0x805c5f10;
    /* slwi r5, r0, 3 */ // 0x805C5EF8
    /* slwi r0, r6, 1 */ // 0x805C5EFC
    r5 = r7 + r5; // 0x805C5F00
    r5 = r5 + r0; // 0x805C5F04
    r10 = *(0xc + r5); // lhz @ 0x805C5F08
    /* b 0x805c5f14 */ // 0x805C5F0C
    /* li r10, 0 */ // 0x805C5F10
    r0 = *(0x2c + r3); // lwz @ 0x805C5F14
    /* lis r7, 0x4330 */ // 0x805C5F18
    /* lis r9, 0 */ // 0x805C5F1C
    /* xoris r5, r10, 0x8000 */ // 0x805C5F20
    /* subf r0, r0, r10 */ // 0x805C5F24
    /* lis r6, 0 */ // 0x805C5F28
    /* xoris r0, r0, 0x8000 */ // 0x805C5F2C
    *(0x14 + r1) = r0; // stw @ 0x805C5F30
    r0 = *(0x30 + r3); // lwz @ 0x805C5F34
    /* xoris r8, r30, 0x8000 */ // 0x805C5F38
    *(0x10 + r1) = r7; // stw @ 0x805C5F3C
    /* lis r3, 0 */ // 0x805C5F40
    /* lfd f3, 0(r9) */ // 0x805C5F44
    /* mulli r0, r0, 0x96 */ // 0x805C5F48
    /* lfd f0, 0x10(r1) */ // 0x805C5F4C
    *(0x1c + r1) = r5; // stw @ 0x805C5F50
    /* fsubs f2, f0, f3 */ // 0x805C5F54
    /* lfs f1, 0(r6) */ // 0x805C5F58
    *(0x18 + r1) = r7; // stw @ 0x805C5F5C
    r0 = r0 u/ r10; // 0x805C5F60
    r3 = *(0 + r3); // lwz @ 0x805C5F64
    /* lfd f0, 0x18(r1) */ // 0x805C5F68
    /* fmuls f1, f1, f2 */ // 0x805C5F6C
    *(0xc + r1) = r8; // stw @ 0x805C5F70
    /* fsubs f0, f0, f3 */ // 0x805C5F74
    /* fdivs f0, f1, f0 */ // 0x805C5F78
    *(8 + r1) = r7; // stw @ 0x805C5F7C
    /* lfd f1, 8(r1) */ // 0x805C5F80
    /* fsubs f1, f1, f3 */ // 0x805C5F84
    /* fadds f0, f1, f0 */ // 0x805C5F88
    /* fctiwz f0, f0 */ // 0x805C5F8C
    /* stfd f0, 0x20(r1) */ // 0x805C5F90
    r30 = *(0x24 + r1); // lwz @ 0x805C5F94
    r30 = r30 + r0; // 0x805C5F98
    FUN_8061D97C(); // bl 0x8061D97C
    r3 = *(0 + r3); // lwz @ 0x805C5FA0
    r3 = *(0 + r3); // lwz @ 0x805C5FA4
    r3 = *(0x34 + r3); // lwz @ 0x805C5FA8
    r0 = *(0 + r3); // lbz @ 0x805C5FAC
    if (==) goto 0x0x805c5fbc;
    r30 = r30 + 0x19; // 0x805C5FB8
    /* lis r31, 0 */ // 0x805C5FBC
    r4 = *(8 + r29); // lbz @ 0x805C5FC0
    r3 = *(0 + r31); // lwz @ 0x805C5FC4
    FUN_8061D97C(); // bl 0x8061D97C
    r4 = *(0 + r3); // lwz @ 0x805C5FCC
    r3 = *(0 + r31); // lwz @ 0x805C5FD0
    r5 = *(0 + r4); // lwz @ 0x805C5FD4
    r4 = *(8 + r29); // lbz @ 0x805C5FD8
    r5 = *(0x34 + r5); // lwz @ 0x805C5FDC
    r0 = *(4 + r5); // lwz @ 0x805C5FE0
    r0 = r0 rlwinm 1; // rlwinm
    r30 = r30 + r0; // 0x805C5FE8
    FUN_8061D97C(); // bl 0x8061D97C
    r4 = *(0 + r3); // lwz @ 0x805C5FF0
    r3 = *(0 + r31); // lwz @ 0x805C5FF4
    r5 = *(0 + r4); // lwz @ 0x805C5FF8
    r4 = *(8 + r29); // lbz @ 0x805C5FFC
    r5 = *(0x38 + r5); // lwz @ 0x805C6000
    r0 = *(8 + r5); // lwz @ 0x805C6004
    /* clrlwi r5, r0, 0x10 */ // 0x805C6008
    r0 = r0 rlwinm 2; // rlwinm
    r0 = r0 + r5; // 0x805C6010
    r30 = r30 + r0; // 0x805C6014
    FUN_8061D97C(); // bl 0x8061D97C
    r4 = *(0 + r3); // lwz @ 0x805C601C
    /* lis r3, -0x5555 */ // 0x805C6020
    r6 = r3 + -0x5555; // 0x805C6024
    r3 = *(0 + r31); // lwz @ 0x805C6028
    r5 = *(0 + r4); // lwz @ 0x805C602C
    r4 = *(8 + r29); // lbz @ 0x805C6030
    r5 = *(0x34 + r5); // lwz @ 0x805C6034
    r0 = *(8 + r5); // lwz @ 0x805C6038
    r0 = r6 * r0; // 0x805C603C
    /* srwi r0, r0, 1 */ // 0x805C6040
    /* subf r30, r0, r30 */ // 0x805C6044
    FUN_8061D97C(); // bl 0x8061D97C
    r4 = *(0 + r3); // lwz @ 0x805C604C
    r3 = *(0 + r31); // lwz @ 0x805C6050
    r5 = *(0 + r4); // lwz @ 0x805C6054
    r4 = *(8 + r29); // lbz @ 0x805C6058
    r5 = *(0x34 + r5); // lwz @ 0x805C605C
    r0 = *(0xc + r5); // lwz @ 0x805C6060
    /* clrlwi r0, r0, 0x10 */ // 0x805C6064
    /* mulli r0, r0, 0x14 */ // 0x805C6068
    /* subf r30, r0, r30 */ // 0x805C606C
    FUN_8061D97C(); // bl 0x8061D97C
    r4 = *(0 + r3); // lwz @ 0x805C6074
    r3 = *(0 + r31); // lwz @ 0x805C6078
    r5 = *(0 + r4); // lwz @ 0x805C607C
    r4 = *(8 + r29); // lbz @ 0x805C6080
    r5 = *(0x34 + r5); // lwz @ 0x805C6084
    r0 = *(0x10 + r5); // lwz @ 0x805C6088
    /* clrlwi r0, r0, 0x10 */ // 0x805C608C
    /* mulli r0, r0, 0x1e */ // 0x805C6090
    /* subf r30, r0, r30 */ // 0x805C6094
    FUN_8061D97C(); // bl 0x8061D97C
    r4 = *(0 + r3); // lwz @ 0x805C609C
    /* lis r3, 0 */ // 0x805C60A0
    r0 = *(8 + r29); // lbz @ 0x805C60A4
    r4 = *(0 + r4); // lwz @ 0x805C60A8
    /* mulli r0, r0, 0xf0 */ // 0x805C60AC
    r3 = *(0 + r3); // lwz @ 0x805C60B0
    r4 = *(0x34 + r4); // lwz @ 0x805C60B4
    r3 = r3 + r0; // 0x805C60B8
    r4 = *(0x14 + r4); // lwz @ 0x805C60BC
    r0 = *(0x2e + r3); // lbz @ 0x805C60C0
    /* clrlwi r3, r4, 0x10 */ // 0x805C60C4
    /* mulli r3, r3, 0x46 */ // 0x805C60C8
    /* extsb r31, r0 */ // 0x805C60CC
    /* subf r30, r3, r30 */ // 0x805C60D4
    if (==) goto 0x0x805c6120;
    /* clrlwi r0, r31, 0x18 */ // 0x805C60DC
    /* lis r3, 0 */ // 0x805C60E0
    /* mulli r0, r0, 0xec */ // 0x805C60E4
    r3 = *(0 + r3); // lwz @ 0x805C60E8
    r3 = r3 + r0; // 0x805C60EC
    r3 = *(8 + r3); // lwz @ 0x805C60F0
    if (==) goto 0x0x805c6110;
    r12 = *(0 + r3); // lwz @ 0x805C60FC
    r12 = *(0x10 + r12); // lwz @ 0x805C6100
    /* mtctr r12 */ // 0x805C6104
    /* bctrl  */ // 0x805C6108
    /* b 0x805c6114 */ // 0x805C610C
    /* li r3, -1 */ // 0x805C6110
    if (!=) goto 0x0x805c6120;
    r30 = r30 + 0xa; // 0x805C611C
    if (==) goto 0x0x805c6160;
    /* clrlwi r0, r31, 0x18 */ // 0x805C6128
    /* lis r3, 0 */ // 0x805C612C
    /* mulli r0, r0, 0xec */ // 0x805C6130
    r3 = *(0 + r3); // lwz @ 0x805C6134
    r3 = r3 + r0; // 0x805C6138
    r3 = *(8 + r3); // lwz @ 0x805C613C
    if (==) goto 0x0x805c6150;
    r0 = *(0x51 + r3); // lbz @ 0x805C6148
    /* b 0x805c6154 */ // 0x805C614C
    /* li r0, 0 */ // 0x805C6150
    if (==) goto 0x0x805c6160;
    r30 = r30 + 0x19; // 0x805C615C
    /* lis r3, 0 */ // 0x805C6160
    r4 = *(8 + r29); // lbz @ 0x805C6164
    r3 = *(0 + r3); // lwz @ 0x805C6168
    FUN_8061D97C(r3); // bl 0x8061D97C
    r3 = *(0 + r3); // lwz @ 0x805C6170
    r3 = *(0 + r3); // lwz @ 0x805C6174
    r3 = *(0x34 + r3); // lwz @ 0x805C6178
    r0 = *(0x18 + r3); // lhz @ 0x805C617C
    r30 = r30 + r0; // 0x805C6180
    if (>=) goto 0x0x805c6190;
    /* li r30, -0x32 */ // 0x805C618C
    if (<=) goto 0x0x805c619c;
    /* li r30, 0xfa */ // 0x805C6198
    r3 = *(8 + r29); // lbz @ 0x805C619C
    /* lis r4, 0 */ // 0x805C61A0
    r4 = *(0 + r4); // lwz @ 0x805C61A4
    /* extsh r0, r30 */ // 0x805C61A8
    /* mulli r3, r3, 0xf0 */ // 0x805C61AC
    r4 = r4 + r3; // 0x805C61B0
    r3 = *(0xcf6 + r4); // lha @ 0x805C61B4
    r0 = r3 + r0; // 0x805C61B8
    *(0xcf6 + r4) = r0; // sth @ 0x805C61BC
    r0 = *(0x44 + r1); // lwz @ 0x805C61C0
    r31 = *(0x3c + r1); // lwz @ 0x805C61C4
    r30 = *(0x38 + r1); // lwz @ 0x805C61C8
    r29 = *(0x34 + r1); // lwz @ 0x805C61CC
    return;
}