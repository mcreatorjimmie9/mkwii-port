/* Function at 0x806DB030, size=476 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 6 function(s) */

int FUN_806DB030(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x806DB03C
    r31 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r7 = *(0x64 + r3); // lwz @ 0x806DB050
    r29 = *(8 + r7); // lwz @ 0x806DB054
    if (!=) goto 0x0x806db068;
    /* li r29, 0 */ // 0x806DB060
    /* b 0x806db0bc */ // 0x806DB064
    /* lis r30, 0 */ // 0x806DB068
    r30 = r30 + 0; // 0x806DB06C
    if (==) goto 0x0x806db0b8;
    r12 = *(0 + r29); // lwz @ 0x806DB074
    r3 = r29;
    r12 = *(0x28 + r12); // lwz @ 0x806DB07C
    /* mtctr r12 */ // 0x806DB080
    /* bctrl  */ // 0x806DB084
    /* b 0x806db0a0 */ // 0x806DB088
    if (!=) goto 0x0x806db09c;
    /* li r0, 1 */ // 0x806DB094
    /* b 0x806db0ac */ // 0x806DB098
    r3 = *(0 + r3); // lwz @ 0x806DB09C
    if (!=) goto 0x0x806db08c;
    /* li r0, 0 */ // 0x806DB0A8
    if (==) goto 0x0x806db0b8;
    /* b 0x806db0bc */ // 0x806DB0B4
    /* li r29, 0 */ // 0x806DB0B8
    if (!=) goto 0x0x806db0cc;
    /* li r29, 0 */ // 0x806DB0C4
    /* b 0x806db120 */ // 0x806DB0C8
    /* lis r30, 0 */ // 0x806DB0CC
    r30 = r30 + 0; // 0x806DB0D0
    if (==) goto 0x0x806db11c;
    r12 = *(0 + r29); // lwz @ 0x806DB0D8
    r3 = r29;
    r12 = *(0x28 + r12); // lwz @ 0x806DB0E0
    /* mtctr r12 */ // 0x806DB0E4
    /* bctrl  */ // 0x806DB0E8
    /* b 0x806db104 */ // 0x806DB0EC
    if (!=) goto 0x0x806db100;
    /* li r0, 1 */ // 0x806DB0F8
    /* b 0x806db110 */ // 0x806DB0FC
    r3 = *(0 + r3); // lwz @ 0x806DB100
    if (!=) goto 0x0x806db0f0;
    /* li r0, 0 */ // 0x806DB10C
    if (==) goto 0x0x806db11c;
    /* b 0x806db120 */ // 0x806DB118
    /* li r29, 0 */ // 0x806DB11C
    /* lis r30, 0 */ // 0x806DB120
    *(0x188 + r31) = r29; // stw @ 0x806DB124
    r30 = r30 + 0; // 0x806DB128
    r3 = r31 + 0xa8; // 0x806DB12C
    r4 = r30 + 0xc; // 0x806DB130
    FUN_80665D1C(r3, r4); // bl 0x80665D1C
    *(0x18c + r31) = r3; // stw @ 0x806DB138
    /* cmpwi cr1, r28, 0 */
    r0 = *(0xbb + r3); // lbz @ 0x806DB140
    /* andi. r0, r0, 0xfd */ // 0x806DB144
    r0 = r0 | 2; // 0x806DB148
    *(0xbb + r3) = r0; // stb @ 0x806DB14C
    *(0x174 + r31) = r26; // stw @ 0x806DB150
    *(0x178 + r31) = r27; // stw @ 0x806DB154
    *(0x17c + r31) = r28; // stw @ 0x806DB158
    if (<) goto 0x0x806db1e4;
    r5 = *(0x188 + r31); // lwz @ 0x806DB160
    r3 = r31;
    r6 = r28;
    r4 = r30 + 0x15; // 0x806DB16C
    r5 = r5 + 0x174; // 0x806DB170
    /* li r7, 6 */ // 0x806DB174
    FUN_806A105C(r3, r6, r4, r5, r7); // bl 0x806A105C
    r4 = r30 + 0x19; // 0x806DB17C
    r3 = r31 + 0xa8; // 0x806DB180
    FUN_80665D1C(r5, r7, r4, r3); // bl 0x80665D1C
    if (==) goto 0x0x806db1ac;
    r5 = *(0x188 + r31); // lwz @ 0x806DB190
    r3 = r31;
    r6 = *(0x17c + r31); // lwz @ 0x806DB198
    r4 = r30 + 0x23; // 0x806DB19C
    r5 = r5 + 0x174; // 0x806DB1A0
    /* li r7, 6 */ // 0x806DB1A4
    FUN_806A105C(r3, r4, r5, r7); // bl 0x806A105C
    /* lis r30, 0 */ // 0x806DB1AC
    r3 = r31 + 0xa8; // 0x806DB1B0
    r30 = r30 + 0; // 0x806DB1B4
    r4 = r30 + 0x2d; // 0x806DB1B8
    FUN_80665D1C(r3, r4); // bl 0x80665D1C
    if (==) goto 0x0x806db1e4;
    r5 = *(0x188 + r31); // lwz @ 0x806DB1C8
    r3 = r31;
    r6 = *(0x17c + r31); // lwz @ 0x806DB1D0
    r4 = r30 + 0x38; // 0x806DB1D4
    r5 = r5 + 0x174; // 0x806DB1D8
    /* li r7, 6 */ // 0x806DB1DC
    FUN_806A105C(r3, r4, r5, r7); // bl 0x806A105C
    r12 = *(0 + r31); // lwz @ 0x806DB1E4
    r3 = r31;
    r12 = *(0x3c + r12); // lwz @ 0x806DB1EC
    /* mtctr r12 */ // 0x806DB1F0
    /* bctrl  */ // 0x806DB1F4
    r0 = *(0x24 + r1); // lwz @ 0x806DB1FC
    return;
}