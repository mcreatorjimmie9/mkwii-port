/* Function at 0x806E2074, size=620 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 5 function(s) */

int FUN_806E2074(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* lis r4, 0 */ // 0x806E207C
    *(0x34 + r1) = r0; // stw @ 0x806E2080
    /* stmw r23, 0xc(r1) */ // 0x806E2084
    r24 = r3;
    r3 = *(0 + r4); // lwz @ 0x806E208C
    r3 = *(0 + r3); // lwz @ 0x806E2090
    r31 = *(0x248 + r3); // lwz @ 0x806E2094
    if (!=) goto 0x0x806e20a8;
    /* li r31, 0 */ // 0x806E20A0
    /* b 0x806e20fc */ // 0x806E20A4
    /* lis r23, 0 */ // 0x806E20A8
    r23 = r23 + 0; // 0x806E20AC
    if (==) goto 0x0x806e20f8;
    r12 = *(0 + r31); // lwz @ 0x806E20B4
    r3 = r31;
    r12 = *(0x60 + r12); // lwz @ 0x806E20BC
    /* mtctr r12 */ // 0x806E20C0
    /* bctrl  */ // 0x806E20C4
    /* b 0x806e20e0 */ // 0x806E20C8
    if (!=) goto 0x0x806e20dc;
    /* li r0, 1 */ // 0x806E20D4
    /* b 0x806e20ec */ // 0x806E20D8
    r3 = *(0 + r3); // lwz @ 0x806E20DC
    if (!=) goto 0x0x806e20cc;
    /* li r0, 0 */ // 0x806E20E8
    if (==) goto 0x0x806e20f8;
    /* b 0x806e20fc */ // 0x806E20F4
    /* li r31, 0 */ // 0x806E20F8
    /* lis r3, 0 */ // 0x806E20FC
    /* li r29, 0 */ // 0x806E2100
    r3 = *(0 + r3); // lwz @ 0x806E2104
    r3 = *(0 + r3); // lwz @ 0x806E2108
    r3 = *(0 + r3); // lwz @ 0x806E210C
    r0 = r3 + -0x58; // 0x806E2110
    if (>) goto 0x0x806e2140;
    /* lis r3, 0 */ // 0x806E211C
    /* slwi r0, r0, 2 */ // 0x806E2120
    r3 = r3 + 0; // 0x806E2124
    /* lwzx r3, r3, r0 */ // 0x806E2128
    /* mtctr r3 */ // 0x806E212C
    /* bctr  */ // 0x806E2130
    /* li r29, 1 */ // 0x806E2134
    /* b 0x806e2140 */ // 0x806E2138
    /* li r29, 2 */ // 0x806E213C
    r3 = r31;
    FUN_806B1880(r3); // bl 0x806B1880
    if (==) goto 0x0x806e2230;
    /* li r27, 1 */ // 0x806E2150
    *(0x838 + r24) = r27; // stb @ 0x806E2154
    r30 = r31;
    /* li r28, 0 */ // 0x806E215C
    *(0x9ac + r24) = r27; // stb @ 0x806E2160
    /* li r26, 0 */ // 0x806E2164
    /* lis r23, 0 */ // 0x806E2168
    *(0xb20 + r24) = r27; // stb @ 0x806E216C
    *(0xc94 + r24) = r27; // stb @ 0x806E2170
    *(0xe08 + r24) = r27; // stb @ 0x806E2174
    *(0xf7c + r24) = r27; // stb @ 0x806E2178
    *(0x10f0 + r24) = r27; // stb @ 0x806E217C
    *(0x1264 + r24) = r27; // stb @ 0x806E2180
    *(0x13d8 + r24) = r27; // stb @ 0x806E2184
    *(0x154c + r24) = r27; // stb @ 0x806E2188
    *(0x16c0 + r24) = r27; // stb @ 0x806E218C
    *(0x1834 + r24) = r27; // stb @ 0x806E2190
    /* li r3, 0 */ // 0x806E2198
    if (<) goto 0x0x806e21b0;
    r0 = *(0x284 + r31); // lwz @ 0x806E21A0
    if (>=) goto 0x0x806e21b0;
    /* li r3, 1 */ // 0x806E21AC
    if (==) goto 0x0x806e221c;
    r6 = *(0x1f8 + r30); // lwz @ 0x806E21B8
    if (==) goto 0x0x806e21d0;
    if (==) goto 0x0x806e21dc;
    /* b 0x806e21e4 */ // 0x806E21CC
    r25 = r28;
    r28 = r28 + 2; // 0x806E21D4
    /* b 0x806e21e4 */ // 0x806E21D8
    r25 = r27;
    r27 = r27 + 2; // 0x806E21E0
    r8 = *(0 + r23); // lwz @ 0x806E21E4
    r3 = r24;
    r9 = *(0x1f4 + r30); // lbz @ 0x806E21EC
    r4 = r25;
    r0 = *(0x291c + r8); // lwz @ 0x806E21F4
    r5 = r26;
    r7 = r29;
    /* mulli r0, r0, 0x58 */ // 0x806E2200
    r8 = r8 + r0; // 0x806E2204
    r0 = *(0x59 + r8); // lbz @ 0x806E2208
    /* subf r0, r9, r0 */ // 0x806E220C
    /* cntlzw r0, r0 */ // 0x806E2210
    /* srwi r8, r0, 5 */ // 0x806E2214
    FUN_806E2330(); // bl 0x806E2330
    r26 = r26 + 1; // 0x806E221C
    r30 = r30 + 0xc; // 0x806E2220
    if (<) goto 0x0x806e2194;
    /* b 0x806e22c0 */ // 0x806E222C
    r23 = r31;
    r28 = r24;
    /* li r25, 0 */ // 0x806E2238
    /* lis r27, 0 */ // 0x806E223C
    /* li r26, 1 */ // 0x806E2240
    /* li r3, 0 */ // 0x806E2248
    if (<) goto 0x0x806e2260;
    r0 = *(0x284 + r31); // lwz @ 0x806E2250
    if (>=) goto 0x0x806e2260;
    /* li r3, 1 */ // 0x806E225C
    if (==) goto 0x0x806e22a8;
    r8 = *(0 + r27); // lwz @ 0x806E2268
    r3 = r24;
    r9 = *(0x1f4 + r23); // lbz @ 0x806E2270
    r4 = r25;
    r0 = *(0x291c + r8); // lwz @ 0x806E2278
    r5 = r25;
    r7 = r29;
    /* li r6, 2 */ // 0x806E2284
    /* mulli r0, r0, 0x58 */ // 0x806E2288
    r8 = r8 + r0; // 0x806E228C
    r0 = *(0x59 + r8); // lbz @ 0x806E2290
    /* subf r0, r9, r0 */ // 0x806E2294
    /* cntlzw r0, r0 */ // 0x806E2298
    /* srwi r8, r0, 5 */ // 0x806E229C
    FUN_806E2330(); // bl 0x806E2330
    /* b 0x806e22ac */ // 0x806E22A4
    *(0x838 + r28) = r26; // stb @ 0x806E22A8
    r25 = r25 + 1; // 0x806E22AC
    r28 = r28 + 0x174; // 0x806E22B0
    r23 = r23 + 0xc; // 0x806E22B8
    if (<) goto 0x0x806e2244;
    r3 = r31;
    FUN_806B196C(r3); // bl 0x806B196C
    r4 = r3;
    r3 = r24 + 0x3f0; // 0x806E22CC
    /* li r5, 0 */ // 0x806E22D0
    FUN_808D5A00(r3, r4, r3, r5); // bl 0x808D5A00
    r0 = *(0x34 + r1); // lwz @ 0x806E22DC
}