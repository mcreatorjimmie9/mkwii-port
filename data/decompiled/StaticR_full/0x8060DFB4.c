/* Function at 0x8060DFB4, size=544 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 14 function(s) */

int FUN_8060DFB4(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r7, 1 */ // 0x8060DFBC
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x8060DFCC
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x8060DFD4
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8060DFDC
    r28 = r3;
    r8 = *(0 + r3); // lwz @ 0x8060DFE4
    r9 = *(4 + r8); // lwz @ 0x8060DFE8
    r10 = *(8 + r9); // lwz @ 0x8060DFEC
    /* andi. r0, r10, 0x102 */ // 0x8060DFF0
    if (!=) goto 0x0x8060e010;
    /* lis r3, 0x20c */ // 0x8060DFF8
    r4 = *(0xc + r9); // lwz @ 0x8060DFFC
    r0 = r3 + 0x6000; // 0x8060E000
    /* and. r0, r4, r0 */ // 0x8060E004
    if (!=) goto 0x0x8060e010;
    /* li r7, 0 */ // 0x8060E00C
    if (!=) goto 0x0x8060e030;
    r0 = r10 rlwinm 0; // rlwinm
    /* rlwimi. r0, r10, 0, 0x1b, 0x1c */ // 0x8060E01C
    if (!=) goto 0x0x8060e030;
    r3 = *(0xc + r9); // lwz @ 0x8060E024
    /* rlwinm. r0, r3, 0, 4, 4 */ // 0x8060E028
    if (==) goto 0x0x8060e038;
    /* li r3, 0 */ // 0x8060E030
    /* b 0x8060e1b4 */ // 0x8060E034
    /* rlwinm. r0, r3, 0, 0x10, 0x10 */ // 0x8060E038
    if (==) goto 0x0x8060e0dc;
    r4 = *(4 + r8); // lwz @ 0x8060E040
    r3 = r28;
    r0 = *(0xc + r4); // lwz @ 0x8060E048
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x8060E050
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060E058
    /* clrlwi r0, r3, 0x18 */ // 0x8060E05C
    r3 = *(0 + r4); // lwz @ 0x8060E060
    /* mulli r0, r0, 0x248 */ // 0x8060E064
    r3 = *(0x14 + r3); // lwz @ 0x8060E068
    r3 = r3 + r0; // 0x8060E06C
    FUN_808237A0(); // bl 0x808237A0
    r3 = r28;
    FUN_8061E010(r3); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x8060E07C
    /* lis r4, 0 */ // 0x8060E080
    /* lfs f1, 0(r4) */ // 0x8060E084
    /* li r4, 0x113 */ // 0x8060E088
    r12 = *(0xe0 + r12); // lwz @ 0x8060E08C
    /* mtctr r12 */ // 0x8060E090
    /* bctrl  */ // 0x8060E094
    /* li r0, 0 */ // 0x8060E098
    *(0x194 + r28) = r0; // sth @ 0x8060E09C
    r3 = r28;
    FUN_8061DFE0(r3); // bl 0x8061DFE0
    /* lis r4, 0 */ // 0x8060E0A8
    /* lfs f1, 0(r4) */ // 0x8060E0AC
    FUN_80625BB4(r3, r4); // bl 0x80625BB4
    r0 = *(0x196 + r28); // lbz @ 0x8060E0B4
    if (!=) goto 0x0x8060e0d4;
    r3 = *(0x260 + r28); // lwz @ 0x8060E0C0
    /* li r4, 1 */ // 0x8060E0C4
    FUN_80642784(r4); // bl 0x80642784
    /* li r0, 1 */ // 0x8060E0CC
    *(0x196 + r28) = r0; // stb @ 0x8060E0D0
    /* li r3, 1 */ // 0x8060E0D4
    /* b 0x8060e1b4 */ // 0x8060E0D8
    /* li r4, 0xa */ // 0x8060E0E0
    if (==) goto 0x0x8060e0f0;
    /* li r4, 0xf */ // 0x8060E0E8
    /* b 0x8060e0fc */ // 0x8060E0EC
    if (==) goto 0x0x8060e0fc;
    /* li r4, 0x11 */ // 0x8060E0F8
    r3 = r28;
    FUN_8061E5D8(r4, r3); // bl 0x8061E5D8
    r3 = r28;
    FUN_8061E2D8(r4, r3, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x8060E10C
    /* clrlwi r0, r3, 0x18 */ // 0x8060E110
    r3 = *(0 + r4); // lwz @ 0x8060E114
    /* mulli r0, r0, 0x248 */ // 0x8060E118
    /* li r4, 0xc */ // 0x8060E11C
    r3 = *(0x14 + r3); // lwz @ 0x8060E120
    r3 = r3 + r0; // 0x8060E124
    FUN_80823AC4(r4); // bl 0x80823AC4
    /* lis r4, 0 */ // 0x8060E12C
    r3 = r28;
    /* lfs f1, 0(r4) */ // 0x8060E134
    /* li r4, 0xf */ // 0x8060E138
    /* li r5, 1 */ // 0x8060E13C
    FUN_8061DC98(r4, r3, r4, r5); // bl 0x8061DC98
    r3 = *(0 + r28); // lwz @ 0x8060E144
    r3 = *(4 + r3); // lwz @ 0x8060E148
    r0 = *(0xc + r3); // lwz @ 0x8060E14C
    r0 = r0 | 0x80; // 0x8060E150
    *(0xc + r3) = r0; // stw @ 0x8060E154
    r0 = *(0x18c + r28); // lha @ 0x8060E158
    if (<=) goto 0x0x8060e174;
    *(0x18c + r28) = r29; // sth @ 0x8060E164
    /* li r4, 0 */ // 0x8060E168
    r3 = *(0x260 + r28); // lwz @ 0x8060E16C
    FUN_806425D0(r4); // bl 0x806425D0
    if (==) goto 0x0x8060e18c;
    r3 = r28;
    /* li r4, 0x18 */ // 0x8060E180
    FUN_8061F03C(r3, r4); // bl 0x8061F03C
    /* b 0x8060e1b0 */ // 0x8060E188
    if (==) goto 0x0x8060e1a4;
    r3 = r28;
    /* li r4, 0x17 */ // 0x8060E198
    FUN_8061F03C(r3, r4); // bl 0x8061F03C
    /* b 0x8060e1b0 */ // 0x8060E1A0
    r3 = r28;
    /* li r4, 0x16 */ // 0x8060E1A8
    FUN_8061F03C(r4, r3, r4); // bl 0x8061F03C
    /* li r3, 1 */ // 0x8060E1B0
    r0 = *(0x24 + r1); // lwz @ 0x8060E1B4
    r31 = *(0x1c + r1); // lwz @ 0x8060E1B8
    r30 = *(0x18 + r1); // lwz @ 0x8060E1BC
    r29 = *(0x14 + r1); // lwz @ 0x8060E1C0
    r28 = *(0x10 + r1); // lwz @ 0x8060E1C4
    return;
}