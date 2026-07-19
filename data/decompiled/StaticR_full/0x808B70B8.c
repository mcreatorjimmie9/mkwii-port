/* Function at 0x808B70B8, size=828 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 14 function(s) */

int FUN_808B70B8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x808B70C4
    r31 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x808B70CC
    if (!=) goto 0x0x808b71bc;
    /* lis r3, 0 */ // 0x808B70D8
    r3 = *(0 + r3); // lwz @ 0x808B70DC
    r3 = *(0 + r3); // lwz @ 0x808B70E0
    r0 = *(0 + r3); // lwz @ 0x808B70E4
    if (<) goto 0x0x808b70f8;
    if (<=) goto 0x0x808b7100;
    if (!=) goto 0x0x808b71bc;
    /* lis r3, 0 */ // 0x808B7100
    r3 = *(0 + r3); // lwz @ 0x808B7104
    r0 = *(0x1760 + r3); // lwz @ 0x808B7108
    if (==) goto 0x0x808b7130;
    if (==) goto 0x0x808b7154;
    if (==) goto 0x0x808b7178;
    if (==) goto 0x0x808b719c;
    /* b 0x808b71bc */ // 0x808B712C
    /* lis r4, 0 */ // 0x808B7130
    /* li r3, 0x19 */ // 0x808B7134
    r29 = *(0 + r4); // lwz @ 0x808B7138
    FUN_80694E54(r4, r3); // bl 0x80694E54
    r4 = r3;
    r3 = r29;
    /* li r5, 0 */ // 0x808B7148
    FUN_80787EB0(r4, r3, r5); // bl 0x80787EB0
    /* b 0x808b71bc */ // 0x808B7150
    /* lis r4, 0 */ // 0x808B7154
    /* li r3, 0x1f */ // 0x808B7158
    r29 = *(0 + r4); // lwz @ 0x808B715C
    FUN_80694E54(r4, r3); // bl 0x80694E54
    r4 = r3;
    r3 = r29;
    /* li r5, 0 */ // 0x808B716C
    FUN_80787EB0(r4, r3, r5); // bl 0x80787EB0
    /* b 0x808b71bc */ // 0x808B7174
    /* lis r4, 0 */ // 0x808B7178
    /* li r3, 0x1b */ // 0x808B717C
    r29 = *(0 + r4); // lwz @ 0x808B7180
    FUN_80694E54(r4, r3); // bl 0x80694E54
    r4 = r3;
    r3 = r29;
    /* li r5, 0 */ // 0x808B7190
    FUN_80787EB0(r4, r3, r5); // bl 0x80787EB0
    /* b 0x808b71bc */ // 0x808B7198
    /* lis r4, 0 */ // 0x808B719C
    /* li r3, 0x1a */ // 0x808B71A0
    r29 = *(0 + r4); // lwz @ 0x808B71A4
    FUN_80694E54(r4, r3); // bl 0x80694E54
    r4 = r3;
    r3 = r29;
    /* li r5, 0 */ // 0x808B71B4
    FUN_80787EB0(r4, r3, r5); // bl 0x80787EB0
    FUN_808CFA50(r4, r3, r5); // bl 0x808CFA50
    /* clrlwi r3, r3, 0x18 */ // 0x808B71C0
    /* li r0, 0 */ // 0x808B71C4
    *(0x904 + r31) = r3; // stw @ 0x808B71C8
    /* li r5, 0 */ // 0x808B71CC
    /* li r3, 1 */ // 0x808B71D0
    *(0x6bc + r31) = r0; // stw @ 0x808B71D4
    /* b 0x808b71f0 */ // 0x808B71D8
    r4 = *(0x6bc + r31); // lwz @ 0x808B71DC
    r0 = r3 << r5; // slw
    r5 = r5 + 1; // 0x808B71E4
    r0 = r4 | r0; // 0x808B71E8
    *(0x6bc + r31) = r0; // stw @ 0x808B71EC
    r0 = *(0x904 + r31); // lwz @ 0x808B71F0
    if (<) goto 0x0x808b71dc;
    r0 = *(0x6bc + r31); // lwz @ 0x808B71FC
    r3 = r31;
    *(0x6c0 + r31) = r0; // stw @ 0x808B7204
    FUN_808B3318(r3); // bl 0x808B3318
    r12 = *(0 + r31); // lwz @ 0x808B720C
    r3 = r31;
    r12 = *(0x70 + r12); // lwz @ 0x808B7214
    /* mtctr r12 */ // 0x808B7218
    /* bctrl  */ // 0x808B721C
    /* li r4, 0 */ // 0x808B7220
    FUN_8066A380(r3, r4); // bl 0x8066A380
    /* lis r3, 0 */ // 0x808B7228
    r3 = *(0 + r3); // lwz @ 0x808B722C
    r3 = *(0 + r3); // lwz @ 0x808B7230
    r0 = *(0 + r3); // lwz @ 0x808B7234
    if (<) goto 0x0x808b7354;
    if (>) goto 0x0x808b7354;
    /* li r29, 2 */ // 0x808B7248
    /* lis r3, 0 */ // 0x808B724C
    /* mulli r29, r29, 0xf0 */ // 0x808B7250
    r4 = *(0 + r3); // lwz @ 0x808B7254
    /* li r12, 5 */ // 0x808B7258
    /* li r11, 3 */ // 0x808B725C
    r4 = r4 + r29; // 0x808B7260
    /* li r10, 4 */ // 0x808B7264
    *(0xc28 + r4) = r12; // stw @ 0x808B7268
    /* li r5, 6 */ // 0x808B726C
    /* mulli r11, r11, 0xf0 */ // 0x808B7270
    /* li r29, 7 */ // 0x808B7274
    r8 = *(0 + r3); // lwz @ 0x808B7278
    /* li r6, 2 */ // 0x808B727C
    /* li r0, 0 */ // 0x808B7280
    r8 = r8 + r11; // 0x808B7284
    *(0xc28 + r8) = r12; // stw @ 0x808B7288
    /* mulli r9, r10, 0xf0 */ // 0x808B728C
    /* li r11, 8 */ // 0x808B7290
    /* li r8, 0xa */ // 0x808B7294
    /* mulli r4, r5, 0xf0 */ // 0x808B7298
    r5 = *(0 + r3); // lwz @ 0x808B729C
    /* li r10, 9 */ // 0x808B72A0
    r9 = r5 + r9; // 0x808B72A4
    *(0xc28 + r9) = r12; // stw @ 0x808B72A8
    /* mulli r7, r12, 0xf0 */ // 0x808B72AC
    /* li r5, 0xb */ // 0x808B72B0
    r9 = *(0 + r3); // lwz @ 0x808B72B4
    /* mulli r29, r29, 0xf0 */ // 0x808B72B8
    r7 = r9 + r7; // 0x808B72BC
    *(0xc28 + r7) = r12; // stw @ 0x808B72C0
    /* mulli r11, r11, 0xf0 */ // 0x808B72C4
    r7 = *(0 + r3); // lwz @ 0x808B72C8
    r4 = r7 + r4; // 0x808B72CC
    *(0xc28 + r4) = r12; // stw @ 0x808B72D0
    /* mulli r7, r8, 0xf0 */ // 0x808B72D4
    r4 = *(0 + r3); // lwz @ 0x808B72D8
    /* mulli r9, r10, 0xf0 */ // 0x808B72DC
    r4 = r4 + r29; // 0x808B72E0
    *(0xc28 + r4) = r12; // stw @ 0x808B72E4
    /* mulli r4, r5, 0xf0 */ // 0x808B72E8
    r8 = *(0 + r3); // lwz @ 0x808B72EC
    r8 = r8 + r11; // 0x808B72F0
    *(0xc28 + r8) = r12; // stw @ 0x808B72F4
    r5 = *(0 + r3); // lwz @ 0x808B72F8
    r9 = r5 + r9; // 0x808B72FC
    *(0xc28 + r9) = r12; // stw @ 0x808B7300
    r9 = *(0 + r3); // lwz @ 0x808B7304
    r7 = r9 + r7; // 0x808B7308
    *(0xc28 + r7) = r12; // stw @ 0x808B730C
    r7 = *(0 + r3); // lwz @ 0x808B7310
    r4 = r7 + r4; // 0x808B7314
    *(0xc28 + r4) = r12; // stw @ 0x808B7318
    r4 = *(0 + r3); // lwz @ 0x808B731C
    *(0x175c + r4) = r6; // stw @ 0x808B7320
    r5 = *(0 + r3); // lwz @ 0x808B7324
    r4 = *(0x1780 + r5); // lwz @ 0x808B7328
    r4 = r4 rlwinm 0; // rlwinm
    *(0x1780 + r5) = r4; // stw @ 0x808B7330
    r4 = *(0 + r3); // lwz @ 0x808B7334
    *(0x1764 + r4) = r0; // stw @ 0x808B7338
    r4 = *(0 + r3); // lwz @ 0x808B733C
    *(0x1760 + r4) = r6; // stw @ 0x808B7340
    r3 = *(0 + r3); // lwz @ 0x808B7344
    r0 = *(0x1780 + r3); // lwz @ 0x808B7348
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r3) = r0; // stw @ 0x808B7350
    /* li r27, 0 */ // 0x808B7354
    /* li r30, 0 */ // 0x808B7358
    /* lis r29, 0 */ // 0x808B735C
    /* b 0x808b73bc */ // 0x808B7360
    r3 = *(0 + r29); // lwz @ 0x808B7364
    if (==) goto 0x0x808b73b8;
    r0 = *(0x14 + r3); // lwz @ 0x808B7370
    if (==) goto 0x0x808b73b8;
    /* clrlwi r4, r27, 0x18 */ // 0x808B737C
    /* mulli r28, r4, 0xc */ // 0x808B7380
    r3 = r0 + r28; // 0x808B7384
    r3 = *(0x18 + r3); // lwz @ 0x808B7388
    if (==) goto 0x0x808b739c;
    /* li r5, 0 */ // 0x808B7394
    FUN_808E08F0(r5); // bl 0x808E08F0
    r3 = *(0 + r29); // lwz @ 0x808B739C
    r0 = *(0x14 + r3); // lwz @ 0x808B73A0
    r3 = r0 + r28; // 0x808B73A4
    r3 = *(0x18 + r3); // lwz @ 0x808B73A8
    if (==) goto 0x0x808b73b8;
    *(0x10 + r3) = r30; // stw @ 0x808B73B4
    r27 = r27 + 1; // 0x808B73B8
    r0 = *(0x904 + r31); // lwz @ 0x808B73BC
    if (<) goto 0x0x808b7364;
    /* lis r3, 0 */ // 0x808B73C8
    r3 = *(0 + r3); // lwz @ 0x808B73CC
    FUN_808F895C(r3); // bl 0x808F895C
    r3 = r31 + 0x54; // 0x808B73D4
    /* li r4, 1 */ // 0x808B73D8
    FUN_80649FD0(r3, r3, r4); // bl 0x80649FD0
    r0 = *(0x24 + r1); // lwz @ 0x808B73E4
    return;
}