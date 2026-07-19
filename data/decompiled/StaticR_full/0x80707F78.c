/* Function at 0x80707F78, size=384 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_80707F78(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x48 + r1) = r30; // stw @ 0x80707F8C
    *(0x44 + r1) = r29; // stw @ 0x80707F90
    /* lis r29, 0 */ // 0x80707F94
    r3 = *(0 + r29); // lwz @ 0x80707F98
    FUN_806F58E8(); // bl 0x806F58E8
    if (!=) goto 0x0x80707fe0;
    /* li r30, 0 */ // 0x80707FA8
    *(0x24 + r1) = r30; // stb @ 0x80707FAC
    r3 = *(0 + r29); // lwz @ 0x80707FB0
    *(0x28 + r1) = r30; // stw @ 0x80707FB8
    FUN_806F9214(r4); // bl 0x806F9214
    r0 = *(0x3c + r1); // lbz @ 0x80707FC0
    if (!=) goto 0x0x80707fd8;
    /* li r0, 1 */ // 0x80707FCC
    *(0x64c + r31) = r0; // stb @ 0x80707FD0
    /* b 0x80707fe8 */ // 0x80707FD4
    *(0x64c + r31) = r30; // stb @ 0x80707FD8
    /* b 0x80707fe8 */ // 0x80707FDC
    /* li r0, 0 */ // 0x80707FE0
    *(0x64c + r31) = r0; // stb @ 0x80707FE4
    r0 = *(0x64c + r31); // lbz @ 0x80707FE8
    if (!=) goto 0x0x80708000;
    /* lis r3, 0 */ // 0x80707FF4
    r3 = *(0 + r3); // lwz @ 0x80707FF8
    FUN_806E5DC0(r3); // bl 0x806E5DC0
    /* lis r3, 0 */ // 0x80708000
    r5 = *(0 + r3); // lwz @ 0x80708004
    r0 = *(0x36 + r5); // lha @ 0x80708008
    if (<) goto 0x0x80708030;
    /* lis r3, 1 */ // 0x80708014
    /* clrlwi r4, r0, 0x18 */ // 0x80708018
    r0 = r3 + -0x6c10; // 0x8070801C
    r0 = r0 * r4; // 0x80708020
    r3 = r5 + r0; // 0x80708024
    r29 = r3 + 0x38; // 0x80708028
    /* b 0x80708034 */ // 0x8070802C
    /* li r29, 0 */ // 0x80708030
    /* lis r3, 0 */ // 0x80708034
    /* li r0, 0 */ // 0x80708038
    *(8 + r1) = r0; // stb @ 0x8070803C
    r3 = *(0 + r3); // lwz @ 0x80708044
    *(0xc + r1) = r0; // stw @ 0x80708048
    FUN_806F9214(r4); // bl 0x806F9214
    r3 = *(0x18 + r1); // lwz @ 0x80708050
    /* li r0, 0x63 */ // 0x80708054
    *(0x6ec + r31) = r3; // stw @ 0x80708058
    r3 = *(0x5924 + r29); // lhz @ 0x8070805C
    if (>) goto 0x0x8070806c;
    r0 = r3;
    /* clrlwi r0, r0, 0x18 */ // 0x8070806C
    *(0x650 + r31) = r0; // stw @ 0x80708070
    r0 = *(0x5924 + r29); // lhz @ 0x80708074
    if (<=) goto 0x0x80708088;
    /* li r0, 0x3b */ // 0x80708080
    /* b 0x8070808c */ // 0x80708084
    r0 = *(0x5926 + r29); // lbz @ 0x80708088
    *(0x654 + r31) = r0; // stw @ 0x8070808C
    r0 = *(0x5924 + r29); // lhz @ 0x80708090
    if (<=) goto 0x0x807080a4;
    /* li r0, 0x3e7 */ // 0x8070809C
    /* b 0x807080a8 */ // 0x807080A0
    r0 = *(0x5928 + r29); // lhz @ 0x807080A4
    *(0x658 + r31) = r0; // stw @ 0x807080A8
    r3 = r31 + 0x1f0; // 0x807080AC
    /* li r4, 0x19cd */ // 0x807080B0
    /* li r5, 0 */ // 0x807080B4
    FUN_806A0A34(r3, r4, r5); // bl 0x806A0A34
    r3 = r31 + 0x4d8; // 0x807080BC
    /* li r4, 0x19ce */ // 0x807080C0
    /* li r5, 0 */ // 0x807080C4
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    r3 = r31 + 0x364; // 0x807080CC
    r5 = r31 + 0x650; // 0x807080D0
    /* li r4, 0x19cf */ // 0x807080D4
    FUN_806A0A34(r5, r3, r5, r4); // bl 0x806A0A34
    r0 = *(0x54 + r1); // lwz @ 0x807080DC
    r31 = *(0x4c + r1); // lwz @ 0x807080E0
    r30 = *(0x48 + r1); // lwz @ 0x807080E4
    r29 = *(0x44 + r1); // lwz @ 0x807080E8
    return;
}