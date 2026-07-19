/* Function at 0x80772884, size=752 bytes */
/* Stack frame: 304 bytes */
/* Saved registers: r31, r30 */
/* Calls: 14 function(s) */

int FUN_80772884(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -304(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r7, 0 */ // 0x8077288C
    *(0x12c + r1) = r31; // stw @ 0x80772894
    /* lis r31, 0 */ // 0x80772898
    r31 = r31 + 0; // 0x8077289C
    *(0x128 + r1) = r30; // stw @ 0x807728A0
    r30 = r3;
    /* lfs f0, 0(r31) */ // 0x807728A8
    r4 = r30 + 0x4c; // 0x807728AC
    *(0x124 + r1) = r29; // stw @ 0x807728B0
    /* lis r29, 0 */ // 0x807728B4
    *(0x120 + r1) = r28; // stw @ 0x807728B8
    /* lis r28, 0 */ // 0x807728BC
    *(0x58 + r3) = r7; // stb @ 0x807728C0
    r6 = *(0 + r28); // lwzu @ 0x807728C8
    *(0xb4 + r1) = r6; // stw @ 0x807728CC
    r5 = *(4 + r28); // lwz @ 0x807728D0
    r0 = *(8 + r28); // lwz @ 0x807728D4
    /* lfs f1, 0(r29) */ // 0x807728D8
    *(0xb8 + r1) = r5; // stw @ 0x807728DC
    *(0xbc + r1) = r0; // stw @ 0x807728E0
    /* stfs f0, 0xc0(r1) */ // 0x807728E4
    /* stfs f0, 0xc4(r1) */ // 0x807728E8
    /* stfs f0, 0xc8(r1) */ // 0x807728EC
    /* stfs f0, 0xcc(r1) */ // 0x807728F0
    /* stfs f0, 0xd0(r1) */ // 0x807728F4
    /* stfs f0, 0xd4(r1) */ // 0x807728F8
    *(0x118 + r1) = r7; // stw @ 0x807728FC
    *(8 + r1) = r7; // stw @ 0x80772900
    FUN_805A443C(); // bl 0x805A443C
    r4 = r30 + 0x10; // 0x8077290C
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lfs f1, 0x64(r30) */ // 0x80772918
    r4 = r28;
    FUN_805A443C(r5, r4, r3); // bl 0x805A443C
    FUN_805A4464(r3, r3, r4, r5); // bl 0x805A4464
    /* lis r3, 0 */ // 0x80772938
    /* lis r5, 0 */ // 0x8077293C
    /* lis r6, 0x20e8 */ // 0x80772940
    /* lfs f1, 0(r29) */ // 0x80772944
    r3 = *(0 + r3); // lwz @ 0x80772948
    r5 = r5 + 0; // 0x80772950
    r6 = r6 + 0xfff; // 0x80772954
    /* li r9, 0 */ // 0x80772960
    FUN_8081A818(r5, r6, r7, r8, r9); // bl 0x8081A818
    if (==) goto 0x0x80772bac;
    /* li r0, 1 */ // 0x80772970
    *(0x58 + r30) = r0; // stb @ 0x80772974
    /* lfs f0, 0x20(r31) */ // 0x80772978
    r4 = *(0xd8 + r1); // lwz @ 0x8077297C
    r3 = *(0xdc + r1); // lwz @ 0x80772980
    *(0x9c + r1) = r4; // stw @ 0x80772984
    r0 = *(0xe0 + r1); // lwz @ 0x80772988
    *(0xa0 + r1) = r3; // stw @ 0x8077298C
    /* lfs f2, 0x9c(r1) */ // 0x80772990
    /* lfs f1, 0xa0(r1) */ // 0x80772994
    *(0xa4 + r1) = r0; // stw @ 0x80772998
    /* fmuls f2, f2, f2 */ // 0x8077299C
    /* fmuls f1, f1, f1 */ // 0x807729A0
    /* lfs f3, 0xa4(r1) */ // 0x807729A4
    *(0xa8 + r1) = r4; // stw @ 0x807729A8
    /* fmuls f3, f3, f3 */ // 0x807729AC
    /* fadds f1, f2, f1 */ // 0x807729B0
    *(0xac + r1) = r3; // stw @ 0x807729B4
    *(0xb0 + r1) = r0; // stw @ 0x807729B8
    /* fadds f1, f3, f1 */ // 0x807729BC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807729C0
    /* cror cr0eq, cr0lt, cr0eq */ // 0x807729C4
    /* mfcr r0 */ // 0x807729C8
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x807729CC
    if (!=) goto 0x0x807729dc;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lfs f1, 0xa0(r1) */ // 0x807729DC
    /* lfs f0, 0x24(r31) */ // 0x807729E0
    /* fabs f1, f1 */ // 0x807729E4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807729E8
    if (<=) goto 0x0x80772a04;
    /* lfs f1, 0x14(r30) */ // 0x807729F0
    /* lfs f0, 0xdc(r1) */ // 0x807729F4
    /* fadds f0, f1, f0 */ // 0x807729F8
    /* stfs f0, 0x14(r30) */ // 0x807729FC
    /* b 0x80772a34 */ // 0x80772A00
    /* lfs f1, 0x10(r30) */ // 0x80772A04
    /* lfs f0, 0xd8(r1) */ // 0x80772A08
    /* lfs f2, 0x14(r30) */ // 0x80772A0C
    /* fadds f0, f1, f0 */ // 0x80772A10
    /* lfs f1, 0x18(r30) */ // 0x80772A14
    /* stfs f0, 0x10(r30) */ // 0x80772A18
    /* lfs f0, 0xdc(r1) */ // 0x80772A1C
    /* fadds f0, f2, f0 */ // 0x80772A20
    /* stfs f0, 0x14(r30) */ // 0x80772A24
    /* lfs f0, 0xe0(r1) */ // 0x80772A28
    /* fadds f0, f1, f0 */ // 0x80772A2C
    /* stfs f0, 0x18(r30) */ // 0x80772A30
    /* lfs f1, 0x108(r1) */ // 0x80772A34
    /* lfs f0, 0xc(r31) */ // 0x80772A38
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80772A3C
    /* mfcr r0 */ // 0x80772A40
    /* rlwinm. r0, r0, 2, 0x1f, 0x1f */ // 0x80772A44
    if (==) goto 0x0x80772a64;
    /* lfs f2, 0xe4(r1) */ // 0x80772A4C
    /* lfs f1, 0xe8(r1) */ // 0x80772A50
    /* lfs f0, 0xec(r1) */ // 0x80772A54
    /* stfs f2, 0xb4(r1) */ // 0x80772A58
    /* stfs f1, 0xb8(r1) */ // 0x80772A5C
    /* stfs f0, 0xbc(r1) */ // 0x80772A60
    /* lfs f3, 0x28(r30) */ // 0x80772A64
    /* lfs f2, 0x4c(r30) */ // 0x80772A6C
    r4 = r30 + 0x4c; // 0x80772A70
    /* lfs f1, 0x2c(r30) */ // 0x80772A74
    /* lfs f0, 0x50(r30) */ // 0x80772A78
    /* fmuls f2, f3, f2 */ // 0x80772A7C
    /* lfs f3, 0x30(r30) */ // 0x80772A80
    /* fmuls f0, f1, f0 */ // 0x80772A84
    /* lfs f1, 0x54(r30) */ // 0x80772A88
    /* fmuls f1, f3, f1 */ // 0x80772A8C
    /* fadds f0, f2, f0 */ // 0x80772A90
    /* fadds f1, f1, f0 */ // 0x80772A94
    FUN_805A86E4(); // bl 0x805A86E4
    r4 = r30 + 0x28; // 0x80772AA0
    FUN_805A4498(r3, r4, r5); // bl 0x805A4498
    /* lis r4, 0 */ // 0x80772AAC
    /* lfs f1, 0(r4) */ // 0x80772AB4
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    /* lis r4, 0 */ // 0x80772AC0
    /* lfs f1, 0(r4) */ // 0x80772AC8
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    FUN_805A4464(r4, r3, r4, r5); // bl 0x805A4464
    /* lfs f0, 0x24(r1) */ // 0x80772AE4
    /* stfs f0, 0x28(r30) */ // 0x80772AEC
    /* lfs f2, 0x68(r30) */ // 0x80772AF4
    /* lfs f0, 0x28(r1) */ // 0x80772AF8
    /* stfs f0, 0x2c(r30) */ // 0x80772AFC
    /* lfs f1, 0x6c(r30) */ // 0x80772B00
    /* lfs f3, 0x2c(r1) */ // 0x80772B04
    /* lfs f0, 0x70(r30) */ // 0x80772B08
    /* stfs f3, 0x30(r30) */ // 0x80772B0C
    /* stfs f2, 0x40(r30) */ // 0x80772B10
    /* stfs f1, 0x44(r30) */ // 0x80772B14
    /* stfs f0, 0x48(r30) */ // 0x80772B18
    FUN_805A4400(); // bl 0x805A4400
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r4, 0 */ // 0x80772B28
    /* lfs f1, 0(r4) */ // 0x80772B30
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    /* lfs f1, 0x40(r30) */ // 0x80772B3C
    /* lis r3, 0x20e8 */ // 0x80772B40
    /* lfs f0, 0x18(r1) */ // 0x80772B44
    r0 = r3 + 0xfff; // 0x80772B48
    /* lfs f2, 0x44(r30) */ // 0x80772B4C
    /* fadds f0, f1, f0 */ // 0x80772B50
    /* lfs f1, 0x48(r30) */ // 0x80772B54
    /* stfs f0, 0x40(r30) */ // 0x80772B58
    /* lfs f0, 0x1c(r1) */ // 0x80772B5C
    /* fadds f0, f2, f0 */ // 0x80772B60
    /* stfs f0, 0x44(r30) */ // 0x80772B64
    /* lfs f0, 0x20(r1) */ // 0x80772B68
    /* fadds f0, f1, f0 */ // 0x80772B6C
    /* stfs f0, 0x48(r30) */ // 0x80772B70
}