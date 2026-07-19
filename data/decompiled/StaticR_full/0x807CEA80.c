/* Function at 0x807CEA80, size=512 bytes */
/* Stack frame: 304 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 12 function(s) */

int FUN_807CEA80(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -304(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r4 = r3 + 0xe8; // 0x807CEA88
    r31 = r3;
    *(0x128 + r1) = r30; // stw @ 0x807CEA98
    /* lis r30, 0 */ // 0x807CEA9C
    r30 = r30 + 0; // 0x807CEAA0
    *(0x124 + r1) = r29; // stw @ 0x807CEAA4
    /* lis r29, 0 */ // 0x807CEAA8
    r29 = r29 + 0; // 0x807CEAAC
    FUN_807CCF6C(); // bl 0x807CCF6C
    r3 = r31;
    FUN_807CB8AC(r3); // bl 0x807CB8AC
    r3 = r31;
    FUN_807CB7B0(r3, r3); // bl 0x807CB7B0
    r5 = *(0x340 + r31); // lwz @ 0x807CEAC4
    r4 = r31;
    r0 = r5 + 1; // 0x807CEAD0
    *(0x340 + r31) = r0; // stw @ 0x807CEAD4
    FUN_807CB4DC(r4, r3); // bl 0x807CB4DC
    r4 = r31;
    FUN_807CB4F8(r4, r3); // bl 0x807CB4F8
    r0 = *(0x34c + r31); // lwz @ 0x807CEAE8
    if (==) goto 0x0x807ceb00;
    if (==) goto 0x0x807cec34;
    /* b 0x807ced8c */ // 0x807CEAFC
    /* lfs f1, 0x84(r30) */ // 0x807CEB00
    r4 = r31 + 0x328; // 0x807CEB08
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r4 = r31 + 0x358; // 0x807CEB10
    r5 = r4;
    FUN_805E3430(r4, r4, r3, r5); // bl 0x805E3430
    r4 = r31 + 0x364; // 0x807CEB20
    r5 = r4;
    FUN_805E3430(r5, r4, r3, r5); // bl 0x805E3430
    r4 = r31;
    FUN_807CEF10(r3, r5, r4, r3); // bl 0x807CEF10
    /* lfs f2, 0x350(r31) */ // 0x807CEB3C
    /* lis r3, 0 */ // 0x807CEB40
    /* lfs f0, 0x3c(r1) */ // 0x807CEB44
    /* lis r5, 0 */ // 0x807CEB48
    /* lis r6, 0x64ec */ // 0x807CEB4C
    /* lfs f1, 0x354(r31) */ // 0x807CEB50
    /* fadds f2, f2, f0 */ // 0x807CEB54
    /* lfs f0, 0(r29) */ // 0x807CEB58
    /* li r30, 0 */ // 0x807CEB5C
    /* lis r10, 0 */ // 0x807CEB60
    /* stfs f2, 0x350(r31) */ // 0x807CEB64
    /* fadds f3, f1, f2 */ // 0x807CEB6C
    r8 = *(0 + r3); // lwz @ 0x807CEB70
    r5 = r5 + 0; // 0x807CEB74
    r6 = r6 + -0x2001; // 0x807CEB78
    /* stfs f3, 0x354(r31) */ // 0x807CEB7C
    /* lfs f2, 0x54(r1) */ // 0x807CEB84
    /* li r9, 0 */ // 0x807CEB88
    /* lfs f1, 0x48(r1) */ // 0x807CEB8C
    /* fadds f2, f2, f3 */ // 0x807CEB90
    /* stfs f0, 0xc0(r1) */ // 0x807CEB94
    /* fadds f1, f1, f3 */ // 0x807CEB98
    r3 = *(0 + r10); // lwz @ 0x807CEB9C
    /* stfs f2, 0x54(r1) */ // 0x807CEBA0
    /* stfs f1, 0x48(r1) */ // 0x807CEBA4
    /* stfs f0, 0xc4(r1) */ // 0x807CEBA8
    /* stfs f0, 0xc8(r1) */ // 0x807CEBAC
    /* stfs f0, 0xcc(r1) */ // 0x807CEBB0
    /* stfs f0, 0xd0(r1) */ // 0x807CEBB4
    /* stfs f0, 0xd4(r1) */ // 0x807CEBB8
    *(0x118 + r1) = r30; // stw @ 0x807CEBBC
    /* lfs f1, 0x16c(r31) */ // 0x807CEBC0
    FUN_8081A594(); // bl 0x8081A594
    if (==) goto 0x0x807ced8c;
    /* lfs f1, 0x50(r1) */ // 0x807CEBD0
    /* li r4, 1 */ // 0x807CEBD4
    /* lfs f0, 0xd8(r1) */ // 0x807CEBD8
    /* li r5, 1 */ // 0x807CEBDC
    /* lfs f3, 0x54(r1) */ // 0x807CEBE0
    /* fadds f4, f1, f0 */ // 0x807CEBE4
    /* lfs f2, 0xdc(r1) */ // 0x807CEBE8
    /* lfs f1, 0x58(r1) */ // 0x807CEBEC
    /* lfs f0, 0xe0(r1) */ // 0x807CEBF0
    /* fadds f2, f3, f2 */ // 0x807CEBF4
    /* stfs f4, 0x50(r1) */ // 0x807CEBF8
    /* fadds f0, f1, f0 */ // 0x807CEBFC
    /* lfs f1, 0(r29) */ // 0x807CEC00
    /* stfs f2, 0x54(r1) */ // 0x807CEC04
    /* lfs f2, 4(r29) */ // 0x807CEC08
    /* stfs f0, 0x58(r1) */ // 0x807CEC0C
    r3 = *(0x34c + r31); // lwz @ 0x807CEC10
    *(0x340 + r31) = r30; // stw @ 0x807CEC14
    r0 = r3 + 1; // 0x807CEC18
    r3 = *(8 + r31); // lwz @ 0x807CEC1C
    *(0x34c + r31) = r0; // stw @ 0x807CEC20
    r3 = *(0x28 + r3); // lwz @ 0x807CEC24
    FUN_805E73A4(); // bl 0x805E73A4
    *(0x349 + r31) = r30; // stb @ 0x807CEC2C
    /* b 0x807ced8c */ // 0x807CEC30
    /* lfs f1, 0x88(r30) */ // 0x807CEC34
    r4 = r31 + 0x364; // 0x807CEC3C
    r5 = r31 + 0xf0; // 0x807CEC40
    FUN_807AECB4(r3, r4, r5); // bl 0x807AECB4
    /* lfs f0, 0x14(r1) */ // 0x807CEC48
    /* stfs f0, 0x364(r31) */ // 0x807CEC4C
    /* fmuls f2, f0, f0 */ // 0x807CEC50
    /* lfs f0, 0x78(r29) */ // 0x807CEC54
    /* lfs f1, 0x18(r1) */ // 0x807CEC58
    /* stfs f1, 0x368(r31) */ // 0x807CEC5C
    /* fmuls f1, f1, f1 */ // 0x807CEC60
    /* lfs f3, 0x1c(r1) */ // 0x807CEC64
    /* stfs f3, 0x36c(r31) */ // 0x807CEC68
    /* fmuls f3, f3, f3 */ // 0x807CEC6C
    /* fadds f1, f2, f1 */ // 0x807CEC70
    /* fadds f1, f3, f1 */ // 0x807CEC74
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807CEC78
    /* cror cr0eq, cr0lt, cr0eq */ // 0x807CEC7C
}