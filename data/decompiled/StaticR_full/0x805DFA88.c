/* Function at 0x805DFA88, size=672 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_805DFA88(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x805DFA98
    r31 = r31 + 0; // 0x805DFA9C
    *(0x18 + r1) = r30; // stw @ 0x805DFAA0
    *(0x14 + r1) = r29; // stw @ 0x805DFAA4
    r12 = *(0x290 + r31); // lwz @ 0x805DFAA8
    if (==) goto 0x0x805dfabc;
    /* mtctr r12 */ // 0x805DFAB4
    /* bctrl  */ // 0x805DFAB8
    r6 = r31 + 0; // 0x805DFABC
    /* li r30, -1 */ // 0x805DFAC0
    r0 = *(0xa0 + r6); // lwz @ 0x805DFAC4
    if (==) goto 0x0x805dfd30;
    r0 = *(0xa4 + r6); // lbz @ 0x805DFAD0
    if (!=) goto 0x0x805dfd30;
    r0 = *(0xa8 + r6); // lwz @ 0x805DFADC
    if (!=) goto 0x0x805dfaf4;
    r0 = *(0xac + r6); // lwz @ 0x805DFAE8
    if (==) goto 0x0x805dfb08;
    r3 = r31 + 0; // 0x805DFAF4
    /* li r0, 5 */ // 0x805DFAF8
    *(0xa5 + r3) = r0; // stb @ 0x805DFAFC
    *(0xa4 + r3) = r0; // stb @ 0x805DFB00
    /* b 0x805dfd30 */ // 0x805DFB04
    r4 = *(0xcc + r6); // lwz @ 0x805DFB08
    /* li r3, 1 */ // 0x805DFB0C
    r5 = *(0xc8 + r6); // lwz @ 0x805DFB10
    /* li r0, 0 */ // 0x805DFB14
    /* addc r4, r4, r3 */ // 0x805DFB18
    *(0xcc + r6) = r4; // stw @ 0x805DFB1C
    /* adde r3, r5, r0 */ // 0x805DFB20
    /* or. r0, r4, r3 */ // 0x805DFB24
    *(0xc8 + r6) = r3; // stw @ 0x805DFB28
    if (!=) goto 0x0x805dfbf0;
    r3 = *(0x88 + r6); // lwz @ 0x805DFB30
    /* clrlwi. r0, r3, 0x1f */ // 0x805DFB34
    if (==) goto 0x0x805dfb50;
    FUN_805E3430(); // bl 0x805E3430
    if (!=) goto 0x0x805dfb74;
    /* li r0, 1 */ // 0x805DFB48
    /* b 0x805dfb78 */ // 0x805DFB4C
    /* rlwinm. r0, r3, 0, 0x1e, 0x1e */ // 0x805DFB50
    if (==) goto 0x0x805dfb6c;
    FUN_805E3430(); // bl 0x805E3430
    if (!=) goto 0x0x805dfb74;
    /* li r0, 1 */ // 0x805DFB64
    /* b 0x805dfb78 */ // 0x805DFB68
    /* li r0, 1 */ // 0x805DFB6C
    /* b 0x805dfb78 */ // 0x805DFB70
    /* li r0, 0 */ // 0x805DFB74
    if (==) goto 0x0x805dfbdc;
    r29 = r31 + 0; // 0x805DFB80
    r0 = *(0xa7 + r29); // lbz @ 0x805DFB84
    if (==) goto 0x0x805dfbcc;
    r3 = *(0xf4 + r29); // lwz @ 0x805DFB90
    r0 = *(0xf0 + r29); // lwz @ 0x805DFB94
    /* subf r0, r3, r0 */ // 0x805DFB98
    if (>) goto 0x0x805dfbc0;
    /* li r3, 0 */ // 0x805DFBA4
    FUN_805E0E80(r3); // bl 0x805E0E80
    r4 = *(0xf0 + r29); // lwz @ 0x805DFBAC
    r30 = r3;
    r0 = r4 + 1; // 0x805DFBB4
    *(0xf0 + r29) = r0; // stw @ 0x805DFBB8
    /* b 0x805dfc5c */ // 0x805DFBBC
    /* li r0, 2 */ // 0x805DFBC0
    *(0xa5 + r29) = r0; // stb @ 0x805DFBC4
    /* b 0x805dfc5c */ // 0x805DFBC8
    /* li r3, 0 */ // 0x805DFBCC
    FUN_805E0E80(r3); // bl 0x805E0E80
    r30 = r3;
    /* b 0x805dfc5c */ // 0x805DFBD8
    r3 = r31 + 0; // 0x805DFBDC
    /* li r0, -1 */ // 0x805DFBE0
    *(0xcc + r3) = r0; // stw @ 0x805DFBE4
    *(0xc8 + r3) = r0; // stw @ 0x805DFBE8
    /* b 0x805dfc5c */ // 0x805DFBEC
    /* xori r0, r4, 1 */ // 0x805DFBF0
    /* or. r0, r0, r3 */ // 0x805DFBF4
    if (!=) goto 0x0x805dfc04;
    /* li r0, 2 */ // 0x805DFBFC
    *(0xa5 + r6) = r0; // stb @ 0x805DFC00
    FUN_805DFD4C(); // bl 0x805DFD4C
    if (==) goto 0x0x805dfc5c;
    r29 = r31 + 0; // 0x805DFC10
    r0 = *(0xa7 + r29); // lbz @ 0x805DFC14
    if (==) goto 0x0x805dfc50;
    r3 = *(0xf4 + r29); // lwz @ 0x805DFC20
    r0 = *(0xf0 + r29); // lwz @ 0x805DFC24
    /* subf r0, r3, r0 */ // 0x805DFC28
    if (>) goto 0x0x805dfc5c;
    /* li r3, 0 */ // 0x805DFC34
    FUN_805E0E80(r3); // bl 0x805E0E80
    r4 = *(0xf0 + r29); // lwz @ 0x805DFC3C
    r30 = r3;
    r0 = r4 + 1; // 0x805DFC44
    *(0xf0 + r29) = r0; // stw @ 0x805DFC48
    /* b 0x805dfc5c */ // 0x805DFC4C
    /* li r3, 0 */ // 0x805DFC50
    FUN_805E0E80(r3); // bl 0x805E0E80
    r30 = r3;
    if (==) goto 0x0x805dfc94;
    /* addis r0, r30, 1 */ // 0x805DFC64
    if (==) goto 0x0x805dfc94;
    r3 = r31 + 0; // 0x805DFC70
    r4 = *(0xf8 + r3); // lwz @ 0x805DFC74
    if (==) goto 0x0x805dfc8c;
    r3 = r31 + 0x260; // 0x805DFC80
    /* li r5, 0 */ // 0x805DFC84
    FUN_805E3430(r3, r5); // bl 0x805E3430
    r3 = r31 + 0; // 0x805DFC8C
    *(0xf8 + r3) = r30; // stw @ 0x805DFC90
    r5 = r31 + 0; // 0x805DFC94
    r0 = *(0xa6 + r5); // lbz @ 0x805DFC98
    /* clrlwi. r0, r0, 0x1f */ // 0x805DFC9C
    if (!=) goto 0x0x805dfd30;
    r0 = *(0xa7 + r5); // lbz @ 0x805DFCA4
    if (==) goto 0x0x805dfce4;
    r4 = *(0xf4 + r5); // lwz @ 0x805DFCB0
    r3 = *(0xc0 + r5); // lwz @ 0x805DFCB4
    r0 = *(0x50 + r5); // lwz @ 0x805DFCB8
    r3 = r4 + r3; // 0x805DFCBC
    if (!=) goto 0x0x805dfd30;
    r0 = *(0xfc + r5); // lwz @ 0x805DFCC8
    if (!=) goto 0x0x805dfd30;
    /* li r0, 3 */ // 0x805DFCD4
    *(0xa5 + r5) = r0; // stb @ 0x805DFCD8
    *(0xa4 + r5) = r0; // stb @ 0x805DFCDC
    /* b 0x805dfd30 */ // 0x805DFCE0
    r3 = *(0xf8 + r5); // lwz @ 0x805DFCE4
    if (==) goto 0x0x805dfd00;
    r3 = *(0xc + r3); // lwz @ 0x805DFCF0
    r0 = *(0xc0 + r5); // lwz @ 0x805DFCF4
    r5 = r3 + r0; // 0x805DFCF8
    /* b 0x805dfd08 */ // 0x805DFCFC
    r3 = *(0xc0 + r5); // lwz @ 0x805DFD00
    r5 = r3 + -1; // 0x805DFD04
    r4 = r31 + 0; // 0x805DFD08
    r3 = *(0x50 + r4); // lwz @ 0x805DFD0C
    r0 = r3 + -1; // 0x805DFD10
    if (!=) goto 0x0x805dfd30;
    if (!=) goto 0x0x805dfd30;
    /* li r0, 3 */ // 0x805DFD24
}