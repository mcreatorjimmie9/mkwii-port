/* Function at 0x80698A98, size=340 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 11 function(s) */

int FUN_80698A98(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    r3 = r3 + 0x34; // 0x80698AAC
    *(8 + r1) = r30; // stw @ 0x80698AB0
    FUN_8067EF84(r3); // bl 0x8067EF84
    r3 = *(0 + r31); // lwz @ 0x80698AB8
    FUN_8068558C(r3); // bl 0x8068558C
    r3 = *(0 + r31); // lwz @ 0x80698AC0
    FUN_806856E4(); // bl 0x806856E4
    r3 = *(0x90 + r31); // lwz @ 0x80698AC8
    FUN_80683D54(); // bl 0x80683D54
    r3 = *(0 + r31); // lwz @ 0x80698AD0
    /* li r0, 0 */ // 0x80698AD4
    *(0x24 + r31) = r0; // stw @ 0x80698AD8
    if (==) goto 0x0x80698aec;
    FUN_806860B4(); // bl 0x806860B4
    *(0x24 + r31) = r3; // stw @ 0x80698AE8
    r3 = *(0x90 + r31); // lwz @ 0x80698AEC
    FUN_80684590(); // bl 0x80684590
    if (==) goto 0x0x80698b08;
    r0 = *(0x24 + r31); // lwz @ 0x80698AFC
    r0 = r0 | 2; // 0x80698B00
    *(0x24 + r31) = r0; // stw @ 0x80698B04
    /* lis r3, 0 */ // 0x80698B08
    r0 = *(0x24 + r31); // lwz @ 0x80698B0C
    r3 = *(0 + r3); // lwz @ 0x80698B10
    /* clrlwi r0, r0, 0x1f */ // 0x80698B14
    r3 = *(0x54 + r3); // lwz @ 0x80698B18
    /* xori r30, r0, 1 */ // 0x80698B1C
    r3 = *(0x24 + r3); // lwz @ 0x80698B20
    r12 = *(0 + r3); // lwz @ 0x80698B24
    r12 = *(0xc + r12); // lwz @ 0x80698B28
    /* mtctr r12 */ // 0x80698B2C
    /* bctrl  */ // 0x80698B30
    /* subfic r4, r3, 1 */ // 0x80698B34
    r0 = r3 + -1; // 0x80698B38
    r3 = r4 | r0; // 0x80698B3C
    r0 = *(0x30 + r31); // lwz @ 0x80698B40
    /* srwi r4, r3, 0x1f */ // 0x80698B44
    /* xori r4, r4, 1 */ // 0x80698B48
    /* lis r3, 0 */ // 0x80698B4C
    r6 = r30 & r4; // 0x80698B50
    /* cntlzw r0, r0 */ // 0x80698B54
    /* neg r5, r6 */ // 0x80698B58
    r3 = *(0 + r3); // lwz @ 0x80698B5C
    r5 = r5 | r6; // 0x80698B60
    /* srwi r4, r0, 5 */ // 0x80698B64
    /* srwi r5, r5, 0x1f */ // 0x80698B68
    r0 = *(0x4d + r3); // lbz @ 0x80698B6C
    r5 = r5 & r4; // 0x80698B70
    /* neg r4, r5 */ // 0x80698B74
    r4 = r4 | r5; // 0x80698B78
    /* srwi r4, r4, 0x1f */ // 0x80698B7C
    if (==) goto 0x0x80698b8c;
    *(0x4d + r3) = r4; // stb @ 0x80698B88
    r0 = *(0x24 + r31); // lwz @ 0x80698B8C
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x80698B90
    if (==) goto 0x0x80698bb0;
    r3 = *(0xc + r31); // lwz @ 0x80698B98
    FUN_80697D6C(); // bl 0x80697D6C
    if (!=) goto 0x0x80698bb0;
    /* li r0, 5 */ // 0x80698BA8
    *(0xc + r31) = r0; // stw @ 0x80698BAC
    r3 = *(0 + r31); // lwz @ 0x80698BB0
    FUN_80686174(); // bl 0x80686174
    r31 = r3;
    if (!=) goto 0x0x80698bf4;
    FUN_805E3430(); // bl 0x805E3430
    if (!=) goto 0x0x80698bf4;
    FUN_805E3430(); // bl 0x805E3430
    FUN_805E3430(); // bl 0x805E3430
    if (==) goto 0x0x80698c1c;
    /* lis r3, 0 */ // 0x80698BE0
    /* li r0, 1 */ // 0x80698BE4
    r3 = *(0 + r3); // lwz @ 0x80698BE8
}