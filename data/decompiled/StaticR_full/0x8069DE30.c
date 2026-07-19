/* Function at 0x8069DE30, size=996 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r19 */
/* Calls: 22 function(s) */

int FUN_8069DE30(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -112(r1) */
    /* saved r19 */
    /* stmw r19, 0x3c(r1) */ // 0x8069DE3C
    /* lis r25, 0 */ // 0x8069DE40
    r3 = *(0 + r25); // lwz @ 0x8069DE44
    FUN_805BD9AC(); // bl 0x805BD9AC
    FUN_805E34E4(r3); // bl 0x805E34E4
    /* lis r4, 0 */ // 0x8069DE54
    r4 = r4 + 0; // 0x8069DE5C
    *(8 + r1) = r4; // stw @ 0x8069DE60
    FUN_805D8434(r4, r3, r4); // bl 0x805D8434
    /* lis r3, 0 */ // 0x8069DE68
    r3 = *(0 + r3); // lwz @ 0x8069DE70
    FUN_805D91BC(r3, r4); // bl 0x805D91BC
    r4 = *(0 + r25); // lwz @ 0x8069DE78
    /* lis r24, 0 */ // 0x8069DE7C
    /* li r0, 2 */ // 0x8069DE80
    r3 = *(0x1780 + r4); // lwz @ 0x8069DE84
    r3 = r3 rlwinm 0; // rlwinm
    *(0x1780 + r4) = r3; // stw @ 0x8069DE8C
    r4 = *(0 + r24); // lwz @ 0x8069DE90
    r3 = *(0 + r25); // lwz @ 0x8069DE94
    r4 = *(0x98 + r4); // lwz @ 0x8069DE98
    r4 = *(0x4d0 + r4); // lwz @ 0x8069DE9C
    *(0x1764 + r3) = r4; // stw @ 0x8069DEA0
    r4 = *(0 + r24); // lwz @ 0x8069DEA4
    r3 = *(0 + r25); // lwz @ 0x8069DEA8
    r4 = *(0x98 + r4); // lwz @ 0x8069DEAC
    r4 = *(0x4d4 + r4); // lwz @ 0x8069DEB0
    *(0x1760 + r3) = r4; // stw @ 0x8069DEB4
    r3 = *(0 + r25); // lwz @ 0x8069DEB8
    *(0x176c + r3) = r0; // stw @ 0x8069DEBC
    r3 = *(0 + r24); // lwz @ 0x8069DEC0
    r3 = *(0x98 + r3); // lwz @ 0x8069DEC4
    r3 = *(0x4d4 + r3); // lwz @ 0x8069DEC8
    if (==) goto 0x0x8069dee0;
    if (==) goto 0x0x8069dfc0;
    /* b 0x8069e038 */ // 0x8069DEDC
    r3 = *(0 + r25); // lwz @ 0x8069DEE0
    *(0x175c + r3) = r0; // stw @ 0x8069DEE4
    r3 = *(0 + r25); // lwz @ 0x8069DEE8
    r0 = *(0x1780 + r3); // lwz @ 0x8069DEEC
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r3) = r0; // stw @ 0x8069DEF4
    /* li r4, 0x20 */ // 0x8069DEFC
    FUN_805E364C(r3, r4); // bl 0x805E364C
    r4 = *(0 + r24); // lwz @ 0x8069DF04
    r19 = r3;
    r4 = *(0x98 + r4); // lwz @ 0x8069DF0C
    r0 = *(0x4e0 + r4); // lwz @ 0x8069DF10
    if (==) goto 0x0x8069def8;
    FUN_806622BC(); // bl 0x806622BC
    r20 = r3;
    /* li r4, 0 */ // 0x8069DF24
    /* li r5, 0 */ // 0x8069DF28
    /* li r6, 1 */ // 0x8069DF2C
    FUN_805E4A80(r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x8069df90;
    r3 = r20;
    /* li r4, 1 */ // 0x8069DF40
    /* li r5, 0 */ // 0x8069DF44
    /* li r6, 1 */ // 0x8069DF48
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x8069df90;
    r3 = r20;
    /* li r4, 2 */ // 0x8069DF5C
    /* li r5, 0 */ // 0x8069DF60
    /* li r6, 1 */ // 0x8069DF64
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x8069df90;
    r3 = r20;
    /* li r4, 2 */ // 0x8069DF78
    /* li r5, 1 */ // 0x8069DF7C
    /* li r6, 1 */ // 0x8069DF80
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (==) goto 0x0x8069def8;
    /* lis r3, 0 */ // 0x8069DF90
    /* lis r5, 0 */ // 0x8069DF94
    r6 = *(0 + r3); // lwz @ 0x8069DF98
    /* lis r3, 0 */ // 0x8069DF9C
    r4 = r19;
    *(0x1758 + r6) = r19; // stw @ 0x8069DFA4
    r5 = *(0 + r5); // lwz @ 0x8069DFA8
    r5 = *(0x98 + r5); // lwz @ 0x8069DFAC
    *(0x4e0 + r5) = r19; // stw @ 0x8069DFB0
    r3 = *(0 + r3); // lwz @ 0x8069DFB4
    FUN_805D0510(); // bl 0x805D0510
    /* b 0x8069e038 */ // 0x8069DFBC
    r3 = *(0 + r25); // lwz @ 0x8069DFC0
    /* li r0, 0 */ // 0x8069DFC4
    *(0x175c + r3) = r0; // stw @ 0x8069DFC8
    r3 = *(0 + r25); // lwz @ 0x8069DFCC
    r0 = *(0x1780 + r3); // lwz @ 0x8069DFD0
    r0 = r0 | 2; // 0x8069DFD4
    *(0x1780 + r3) = r0; // stw @ 0x8069DFD8
    r4 = *(0 + r24); // lwz @ 0x8069DFDC
    r3 = *(0 + r25); // lwz @ 0x8069DFE0
    r4 = *(0x98 + r4); // lwz @ 0x8069DFE4
    r0 = *(0x4d8 + r4); // lwz @ 0x8069DFE8
    *(0x1768 + r3) = r0; // stw @ 0x8069DFEC
    /* li r4, 0xa */ // 0x8069DFF4
    FUN_805E364C(r3, r4); // bl 0x805E364C
    r5 = *(0 + r24); // lwz @ 0x8069DFFC
    r4 = r3 + 0x20; // 0x8069E000
    r3 = *(0x98 + r5); // lwz @ 0x8069E004
    r0 = *(0x4e4 + r3); // lwz @ 0x8069E008
    if (==) goto 0x0x8069dff0;
    /* lis r5, 0 */ // 0x8069E014
    /* lis r3, 0 */ // 0x8069E018
    r5 = *(0 + r5); // lwz @ 0x8069E01C
    *(0x1758 + r5) = r4; // stw @ 0x8069E020
    r5 = *(0 + r24); // lwz @ 0x8069E024
    r5 = *(0x98 + r5); // lwz @ 0x8069E028
    *(0x4e4 + r5) = r4; // stw @ 0x8069E02C
    r3 = *(0 + r3); // lwz @ 0x8069E030
    FUN_805D0510(); // bl 0x805D0510
    /* li r22, 0 */ // 0x8069E038
    /* li r21, 0 */ // 0x8069E03C
    /* li r25, 1 */ // 0x8069E040
    /* lis r24, 0 */ // 0x8069E044
    /* lis r26, 0 */ // 0x8069E048
    /* li r31, 0x14 */ // 0x8069E04C
    /* li r30, 0x13 */ // 0x8069E050
    /* li r29, 0x12 */ // 0x8069E054
    /* li r28, 2 */ // 0x8069E058
    /* li r27, 0 */ // 0x8069E05C
    /* clrlwi r3, r21, 0x18 */ // 0x8069E060
    r0 = *(0 + r24); // lwz @ 0x8069E064
    /* mulli r23, r3, 0xf0 */ // 0x8069E068
    r3 = r0 + r23; // 0x8069E06C
    *(0xc20 + r3) = r25; // stw @ 0x8069E070
    /* li r4, 0x18 */ // 0x8069E078
    FUN_805E364C(r3, r4); // bl 0x805E364C
    r20 = r3;
    /* li r4, 1 */ // 0x8069E084
    FUN_805E4D14(r3, r4, r4); // bl 0x805E4D14
    if (==) goto 0x0x8069e074;
    r3 = r25 << r20; // slw
    /* and. r0, r22, r3 */ // 0x8069E098
    if (!=) goto 0x0x8069e074;
    r0 = *(0 + r24); // lwz @ 0x8069E0A0
    r22 = r22 | r3; // 0x8069E0A4
    r3 = r0 + r23; // 0x8069E0A8
    *(0xc24 + r3) = r20; // stw @ 0x8069E0AC
    r3 = *(0 + r26); // lwz @ 0x8069E0B0
    r3 = *(0x98 + r3); // lwz @ 0x8069E0B4
    r0 = *(0x4d4 + r3); // lwz @ 0x8069E0B8
    if (==) goto 0x0x8069e0d0;
    if (==) goto 0x0x8069e114;
    /* b 0x8069e1dc */ // 0x8069E0CC
    /* li r4, 0xc */ // 0x8069E0D4
    FUN_805E364C(r3, r4); // bl 0x805E364C
    /* slwi r0, r3, 2 */ // 0x8069E0DC
    /* subf r19, r3, r0 */ // 0x8069E0E0
    r3 = r20;
    FUN_8089E030(r4, r3); // bl 0x8089E030
    r19 = r3 + r19; // 0x8069E0EC
    /* li r4, 1 */ // 0x8069E0F0
    r3 = r19;
    FUN_805E4F08(r3, r4, r3); // bl 0x805E4F08
    if (==) goto 0x0x8069e0d0;
    r0 = *(0 + r24); // lwz @ 0x8069E104
    r3 = r0 + r23; // 0x8069E108
    *(0xc20 + r3) = r19; // stw @ 0x8069E10C
    /* b 0x8069e1dc */ // 0x8069E110
    /* li r4, 2 */ // 0x8069E118
    FUN_805E364C(r3, r4); // bl 0x805E364C
    if (!=) goto 0x0x8069e17c;
    r3 = r20;
    FUN_8089E030(r4, r3); // bl 0x8089E030
    if (==) goto 0x0x8069e14c;
    if (==) goto 0x0x8069e15c;
    if (==) goto 0x0x8069e16c;
    /* b 0x8069e1cc */ // 0x8069E148
    r0 = *(0 + r24); // lwz @ 0x8069E14C
    r3 = r0 + r23; // 0x8069E150
    *(0xc20 + r3) = r27; // stw @ 0x8069E154
    /* b 0x8069e1cc */ // 0x8069E158
    r0 = *(0 + r24); // lwz @ 0x8069E15C
    r3 = r0 + r23; // 0x8069E160
    *(0xc20 + r3) = r25; // stw @ 0x8069E164
    /* b 0x8069e1cc */ // 0x8069E168
    r0 = *(0 + r24); // lwz @ 0x8069E16C
    r3 = r0 + r23; // 0x8069E170
    *(0xc20 + r3) = r28; // stw @ 0x8069E174
    /* b 0x8069e1cc */ // 0x8069E178
    r3 = r20;
    FUN_8089E030(r3); // bl 0x8089E030
    if (==) goto 0x0x8069e1a0;
    if (==) goto 0x0x8069e1b0;
    if (==) goto 0x0x8069e1c0;
    /* b 0x8069e1cc */ // 0x8069E19C
    r0 = *(0 + r24); // lwz @ 0x8069E1A0
    r3 = r0 + r23; // 0x8069E1A4
    *(0xc20 + r3) = r29; // stw @ 0x8069E1A8
    /* b 0x8069e1cc */ // 0x8069E1AC
    r0 = *(0 + r24); // lwz @ 0x8069E1B0
    r3 = r0 + r23; // 0x8069E1B4
    *(0xc20 + r3) = r30; // stw @ 0x8069E1B8
    /* b 0x8069e1cc */ // 0x8069E1BC
    r0 = *(0 + r24); // lwz @ 0x8069E1C0
    r3 = r0 + r23; // 0x8069E1C4
    *(0xc20 + r3) = r31; // stw @ 0x8069E1C8
    r3 = *(0 + r24); // lwz @ 0x8069E1CC
    /* clrlwi r0, r21, 0x1f */ // 0x8069E1D0
    r3 = r3 + r23; // 0x8069E1D4
    *(0xce4 + r3) = r0; // stw @ 0x8069E1D8
    r0 = *(0 + r24); // lwz @ 0x8069E1DC
    r21 = r21 + 1; // 0x8069E1E0
    r3 = r0 + r23; // 0x8069E1E8
    *(0xc28 + r3) = r25; // stw @ 0x8069E1EC
    if (<) goto 0x0x8069e060;
    /* li r4, -1 */ // 0x8069E1F8
    FUN_805E35B8(r3, r4); // bl 0x805E35B8
    r0 = *(0x74 + r1); // lwz @ 0x8069E204
    return;
}