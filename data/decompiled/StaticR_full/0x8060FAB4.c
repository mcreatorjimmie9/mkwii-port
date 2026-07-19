/* Function at 0x8060FAB4, size=300 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8060FAB4(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0x80c */ // 0x8060FABC
    /* li r5, 1 */ // 0x8060FAC0
    *(0x14 + r1) = r0; // stw @ 0x8060FAC4
    r0 = r4 + 0x100; // 0x8060FAC8
    /* li r6, 1 */ // 0x8060FACC
    /* li r7, 1 */ // 0x8060FAD0
    *(0xc + r1) = r31; // stw @ 0x8060FAD4
    r31 = r3;
    r8 = *(0 + r3); // lwz @ 0x8060FADC
    r9 = *(4 + r8); // lwz @ 0x8060FAE0
    r4 = *(0xc + r9); // lwz @ 0x8060FAE4
    /* and. r0, r4, r0 */ // 0x8060FAE8
    if (!=) goto 0x0x8060fb00;
    r0 = *(4 + r9); // lwz @ 0x8060FAF0
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x8060FAF4
    if (!=) goto 0x0x8060fb00;
    /* li r7, 0 */ // 0x8060FAFC
    if (!=) goto 0x0x8060fb18;
    r0 = *(0x14 + r9); // lwz @ 0x8060FB08
    /* rlwinm. r0, r0, 0, 0x18, 0x18 */ // 0x8060FB0C
    if (!=) goto 0x0x8060fb18;
    /* li r6, 0 */ // 0x8060FB14
    if (!=) goto 0x0x8060fb30;
    r0 = *(8 + r9); // lwz @ 0x8060FB20
    /* clrlwi. r0, r0, 0x1f */ // 0x8060FB24
    if (!=) goto 0x0x8060fb30;
    /* li r5, 0 */ // 0x8060FB2C
    if (!=) goto 0x0x8060fbcc;
    r8 = *(4 + r8); // lwz @ 0x8060FB38
    /* lis r5, 0 */ // 0x8060FB3C
    /* lfs f1, 0(r5) */ // 0x8060FB40
    /* li r0, 0 */ // 0x8060FB44
    r7 = *(0xc + r8); // lwz @ 0x8060FB48
    /* lis r6, 0 */ // 0x8060FB4C
    /* li r4, 3 */ // 0x8060FB50
    /* li r5, 1 */ // 0x8060FB54
    r7 = r7 rlwinm 0; // rlwinm
    *(0xc + r8) = r7; // stw @ 0x8060FB5C
    r7 = *(0 + r3); // lwz @ 0x8060FB60
    r8 = *(4 + r7); // lwz @ 0x8060FB64
    r7 = *(0xc + r8); // lwz @ 0x8060FB68
    r7 = r7 | 2; // 0x8060FB6C
    *(0xc + r8) = r7; // stw @ 0x8060FB70
    *(0xec + r3) = r0; // stw @ 0x8060FB74
    /* lfs f0, 0(r6) */ // 0x8060FB78
    /* stfs f0, 0xf0(r3) */ // 0x8060FB7C
    r3 = r31;
    FUN_8061DC98(r3); // bl 0x8061DC98
    r3 = r31;
    /* li r4, 6 */ // 0x8060FB8C
    FUN_8061E02C(r3, r3, r4); // bl 0x8061E02C
    /* lis r3, 0 */ // 0x8060FB94
    /* lis r4, 0 */ // 0x8060FB98
    r5 = *(0 + r3); // lwz @ 0x8060FB9C
    r3 = *(0 + r4); // lwz @ 0x8060FBA0
    r0 = *(0xb70 + r5); // lwz @ 0x8060FBA4
    if (!=) goto 0x0x8060fbcc;
    r0 = *(0xb9e + r5); // lhz @ 0x8060FBB0
    if (!=) goto 0x0x8060fbcc;
    r4 = *(0x10 + r3); // lwz @ 0x8060FBBC
    r3 = *(8 + r4); // lwz @ 0x8060FBC0
    r0 = r3 + 1; // 0x8060FBC4
    *(8 + r4) = r0; // stw @ 0x8060FBC8
    r0 = *(0x14 + r1); // lwz @ 0x8060FBCC
    r31 = *(0xc + r1); // lwz @ 0x8060FBD0
    return;
}