/* Function at 0x8072399C, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_8072399C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x807239AC
    *(8 + r1) = r30; // stw @ 0x807239B0
    r30 = r3;
    r5 = *(0x130 + r3); // lwz @ 0x807239B8
    r4 = *(0x118 + r3); // lwz @ 0x807239BC
    r0 = r5 + 1; // 0x807239C0
    *(0x130 + r3) = r0; // stw @ 0x807239C4
    r4 = *(0 + r4); // lwz @ 0x807239C8
    r4 = *(4 + r4); // lwz @ 0x807239CC
    r0 = *(0xc + r4); // lwz @ 0x807239D0
    /* rlwinm. r0, r0, 0xd, 0x1f, 0x1f */ // 0x807239D4
    *(0xf5 + r3) = r0; // stb @ 0x807239D8
    if (==) goto 0x0x807239f4;
    /* li r31, 1 */ // 0x807239E0
    /* li r4, 1 */ // 0x807239E4
    FUN_8072550C(r4); // bl 0x8072550C
    /* li r0, 1 */ // 0x807239EC
    *(4 + r30) = r0; // stb @ 0x807239F0
    if (!=) goto 0x0x80723a94;
    r3 = r30;
    FUN_80723AAC(r3); // bl 0x80723AAC
    r0 = *(0x12b + r30); // lbz @ 0x80723A04
    if (!=) goto 0x0x80723a28;
    r3 = r30;
    FUN_8072CD38(r3); // bl 0x8072CD38
    if (!=) goto 0x0x80723a94;
    r3 = r30;
    FUN_80724924(r3, r3); // bl 0x80724924
    r0 = *(7 + r30); // lbz @ 0x80723A28
    if (==) goto 0x0x80723a60;
    /* li r3, 0 */ // 0x80723A34
    if (==) goto 0x0x80723a4c;
    r0 = *(8 + r30); // lbz @ 0x80723A3C
    if (!=) goto 0x0x80723a4c;
    /* li r3, 1 */ // 0x80723A48
    if (==) goto 0x0x80723a60;
    r3 = r30;
    /* li r4, 0 */ // 0x80723A58
    FUN_8072550C(r3, r3, r4); // bl 0x8072550C
    r0 = *(7 + r30); // lbz @ 0x80723A60
    *(8 + r30) = r0; // stb @ 0x80723A64
    if (==) goto 0x0x80723a7c;
    r0 = *(0x13b + r30); // lbz @ 0x80723A70
    if (==) goto 0x0x80723a94;
    r3 = r30;
    FUN_807242D4(r3); // bl 0x807242D4
    r3 = r30;
    FUN_807257C0(r3, r3); // bl 0x807257C0
    r3 = r30;
    FUN_80726908(r3, r3, r3); // bl 0x80726908
    r0 = *(0x14 + r1); // lwz @ 0x80723A94
    r31 = *(0xc + r1); // lwz @ 0x80723A98
    r30 = *(8 + r1); // lwz @ 0x80723A9C
    return;
}