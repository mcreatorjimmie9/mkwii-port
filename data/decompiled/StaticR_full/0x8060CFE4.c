/* Function at 0x8060CFE4, size=452 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 13 function(s) */

int FUN_8060CFE4(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0x80c */ // 0x8060CFEC
    /* li r6, 1 */ // 0x8060CFF0
    *(0x14 + r1) = r0; // stw @ 0x8060CFF4
    r0 = r4 + 0x100; // 0x8060CFF8
    /* li r7, 1 */ // 0x8060CFFC
    *(0xc + r1) = r31; // stw @ 0x8060D000
    *(8 + r1) = r30; // stw @ 0x8060D004
    r30 = r3;
    r5 = *(0 + r3); // lwz @ 0x8060D00C
    r8 = *(4 + r5); // lwz @ 0x8060D010
    /* li r5, 1 */ // 0x8060D014
    r4 = *(0xc + r8); // lwz @ 0x8060D018
    /* and. r0, r4, r0 */ // 0x8060D01C
    if (!=) goto 0x0x8060d034;
    r0 = *(4 + r8); // lwz @ 0x8060D024
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x8060D028
    if (!=) goto 0x0x8060d034;
    /* li r7, 0 */ // 0x8060D030
    if (!=) goto 0x0x8060d04c;
    r0 = *(0x14 + r8); // lwz @ 0x8060D03C
    /* rlwinm. r0, r0, 0, 0x18, 0x18 */ // 0x8060D040
    if (!=) goto 0x0x8060d04c;
    /* li r6, 0 */ // 0x8060D048
    if (!=) goto 0x0x8060d064;
    r0 = *(8 + r8); // lwz @ 0x8060D054
    /* clrlwi. r0, r0, 0x1f */ // 0x8060D058
    if (!=) goto 0x0x8060d064;
    /* li r5, 0 */ // 0x8060D060
    if (!=) goto 0x0x8060d190;
    r4 = *(0x258 + r3); // lwz @ 0x8060D06C
    r3 = r30;
    r31 = *(0x14 + r4); // lwz @ 0x8060D074
    FUN_8061E2E8(r3); // bl 0x8061E2E8
    /* mulli r0, r3, 6 */ // 0x8060D07C
    /* lis r3, 0 */ // 0x8060D080
    /* slwi r4, r31, 1 */ // 0x8060D084
    r3 = r3 + 0; // 0x8060D088
    r0 = r3 + r0; // 0x8060D08C
    /* lhax r31, r4, r0 */ // 0x8060D090
    r3 = r30;
    FUN_8061E2D8(r3, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060D09C
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060D0A4
    r3 = *(0x68 + r3); // lwz @ 0x8060D0A8
    /* lwzx r3, r3, r0 */ // 0x8060D0AC
    FUN_80733560(r4); // bl 0x80733560
    r3 = r30;
    FUN_8061E010(r3); // bl 0x8061E010
    FUN_807962A8(r3); // bl 0x807962A8
    r0 = *(0x118 + r30); // lhz @ 0x8060D0C0
    /* li r4, 0 */ // 0x8060D0C4
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x8060D0C8
    if (==) goto 0x0x8060d0dc;
    r0 = *(0x114 + r30); // lha @ 0x8060D0D0
    if (<=) goto 0x0x8060d100;
    r0 = *(0x118 + r30); // lhz @ 0x8060D0DC
    /* lis r3, 0 */ // 0x8060D0E0
    *(0x114 + r30) = r31; // sth @ 0x8060D0E4
    r3 = r3 + 0; // 0x8060D0E8
    r0 = r0 | 0x10; // 0x8060D0EC
    /* li r4, 1 */ // 0x8060D0F0
    *(0x118 + r30) = r0; // sth @ 0x8060D0F4
    /* lfs f0, 0x10(r3) */ // 0x8060D0F8
    /* stfs f0, 0x124(r30) */ // 0x8060D0FC
    if (==) goto 0x0x8060d178;
    r4 = *(0 + r30); // lwz @ 0x8060D108
    r3 = r30;
    r4 = *(4 + r4); // lwz @ 0x8060D110
    r0 = *(4 + r4); // lwz @ 0x8060D114
    r0 = r0 | 0x10; // 0x8060D118
    *(4 + r4) = r0; // stw @ 0x8060D11C
    /* lfs f1, 0x124(r30) */ // 0x8060D120
    FUN_8061E6BC(); // bl 0x8061E6BC
    r3 = r30;
    /* li r4, 6 */ // 0x8060D12C
    FUN_8061E02C(r3, r4); // bl 0x8061E02C
    r3 = r30;
    FUN_8061E2D8(r3, r4, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060D13C
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x8060D144
    /* clrlwi r4, r31, 0x10 */ // 0x8060D148
    r3 = *(0x68 + r3); // lwz @ 0x8060D14C
    /* lwzx r3, r3, r0 */ // 0x8060D150
    FUN_807336DC(); // bl 0x807336DC
    r3 = r30;
    FUN_8061E2BC(r3); // bl 0x8061E2BC
    FUN_80859398(r3); // bl 0x80859398
    r3 = r30;
    /* li r4, 4 */ // 0x8060D168
    /* li r5, 0 */ // 0x8060D16C
    /* li r6, 1 */ // 0x8060D170
    FUN_8061E8C0(r3, r4, r5, r6); // bl 0x8061E8C0
    /* lis r4, 0 */ // 0x8060D178
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x8060D180
    /* li r4, 3 */ // 0x8060D184
    /* li r5, 1 */ // 0x8060D188
    FUN_8061DC98(r4, r3, r4, r5); // bl 0x8061DC98
    r0 = *(0x14 + r1); // lwz @ 0x8060D190
    r31 = *(0xc + r1); // lwz @ 0x8060D194
    r30 = *(8 + r1); // lwz @ 0x8060D198
    return;
}