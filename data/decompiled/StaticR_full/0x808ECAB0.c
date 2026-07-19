/* Function at 0x808ECAB0, size=580 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 14 function(s) */

int FUN_808ECAB0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x44 + r1) = r0; // stw @ 0x808ECABC
    *(0x3c + r1) = r31; // stw @ 0x808ECAC0
    r31 = r3;
    if (==) goto 0x0x808ecad8;
    if (==) goto 0x0x808ecbc4;
    /* b 0x808eccdc */ // 0x808ECAD4
    r4 = *(0x654 + r3); // lwz @ 0x808ECAD8
    r5 = r3 + 0x6c4; // 0x808ECADC
    /* li r6, 0 */ // 0x808ECAE0
    r0 = r4 + 1; // 0x808ECAE4
    *(0x654 + r3) = r0; // stw @ 0x808ECAE8
    FUN_80671C2C(r5, r6); // bl 0x80671C2C
    /* lis r3, 0 */ // 0x808ECAF0
    r3 = *(0 + r3); // lwz @ 0x808ECAF4
    r3 = *(0 + r3); // lwz @ 0x808ECAF8
    r0 = *(0 + r3); // lwz @ 0x808ECAFC
    if (==) goto 0x0x808ecb24;
    if (==) goto 0x0x808ecb44;
    if (==) goto 0x0x808ecb64;
    if (==) goto 0x0x808ecb84;
    /* b 0x808ecba0 */ // 0x808ECB20
    /* lis r6, 0 */ // 0x808ECB24
    r3 = r31 + 0x6c4; // 0x808ECB28
    r6 = r6 + 0; // 0x808ECB2C
    r4 = r6 + 0x17; // 0x808ECB30
    r5 = r6 + 0x1f; // 0x808ECB34
    r6 = r6 + 0x38; // 0x808ECB38
    FUN_8066CF50(r3, r6, r4, r5, r6); // bl 0x8066CF50
    /* b 0x808ecba0 */ // 0x808ECB40
    /* lis r6, 0 */ // 0x808ECB44
    r3 = r31 + 0x6c4; // 0x808ECB48
    r6 = r6 + 0; // 0x808ECB4C
    r4 = r6 + 0x4a; // 0x808ECB50
    r5 = r6 + 0x52; // 0x808ECB54
    r6 = r6 + 0x6b; // 0x808ECB58
    FUN_8066CF50(r3, r6, r4, r5, r6); // bl 0x8066CF50
    /* b 0x808ecba0 */ // 0x808ECB60
    /* lis r6, 0 */ // 0x808ECB64
    r3 = r31 + 0x6c4; // 0x808ECB68
    r6 = r6 + 0; // 0x808ECB6C
    r4 = r6 + 0x7d; // 0x808ECB70
    r5 = r6 + 0x85; // 0x808ECB74
    r6 = r6 + 0x9b; // 0x808ECB78
    FUN_8066CF50(r3, r6, r4, r5, r6); // bl 0x8066CF50
    /* b 0x808ecba0 */ // 0x808ECB80
    /* lis r6, 0 */ // 0x808ECB84
    r3 = r31 + 0x6c4; // 0x808ECB88
    r6 = r6 + 0; // 0x808ECB8C
    r4 = r6 + 0xad; // 0x808ECB90
    r5 = r6 + 0xb5; // 0x808ECB94
    r6 = r6 + 0xcf; // 0x808ECB98
    FUN_8066CF50(r3, r6, r4, r5, r6); // bl 0x8066CF50
    r3 = r31 + 0x6c4; // 0x808ECBA0
    /* li r4, 0 */ // 0x808ECBA4
    /* li r5, 0 */ // 0x808ECBA8
    FUN_806A0A34(r6, r3, r4, r5); // bl 0x806A0A34
    /* lis r4, 0 */ // 0x808ECBB0
    r3 = r31 + 0x6c4; // 0x808ECBB4
    /* lfs f0, 0(r4) */ // 0x808ECBB8
    /* stfs f0, 0x740(r31) */ // 0x808ECBBC
    /* b 0x808ecce0 */ // 0x808ECBC0
    /* lis r4, 0 */ // 0x808ECBC4
    r4 = *(0 + r4); // lwz @ 0x808ECBC8
    r4 = *(0 + r4); // lwz @ 0x808ECBCC
    r0 = *(0 + r4); // lwz @ 0x808ECBD0
    if (==) goto 0x0x808ecbf8;
    if (==) goto 0x0x808ecbf8;
    if (==) goto 0x0x808ecc3c;
    if (==) goto 0x0x808ecc7c;
    /* b 0x808eccdc */ // 0x808ECBF4
    r4 = *(0x654 + r31); // lwz @ 0x808ECBF8
    r3 = r31;
    r5 = r31 + 0x838; // 0x808ECC00
    /* li r6, 0 */ // 0x808ECC04
    r0 = r4 + 1; // 0x808ECC08
    *(0x654 + r31) = r0; // stw @ 0x808ECC0C
    FUN_80671C2C(r3, r5, r6); // bl 0x80671C2C
    /* lis r4, 0 */ // 0x808ECC14
    r3 = r31 + 0x838; // 0x808ECC18
    r4 = r4 + 0; // 0x808ECC1C
    /* li r5, 0 */ // 0x808ECC20
    r4 = r4 + 0xe1; // 0x808ECC24
    FUN_806CA498(r4, r3, r4, r5, r4); // bl 0x806CA498
    /* li r0, 1 */ // 0x808ECC2C
    *(0x8b8 + r31) = r0; // stb @ 0x808ECC30
    r3 = r31 + 0x838; // 0x808ECC34
    /* b 0x808ecce0 */ // 0x808ECC38
    r4 = *(0x654 + r3); // lwz @ 0x808ECC3C
    r5 = r3 + 0x9c0; // 0x808ECC40
    /* li r6, 0 */ // 0x808ECC44
    r0 = r4 + 1; // 0x808ECC48
    *(0x654 + r3) = r0; // stw @ 0x808ECC4C
    FUN_80671C2C(r5, r6); // bl 0x80671C2C
    /* lis r4, 0 */ // 0x808ECC54
    r3 = r31 + 0x9c0; // 0x808ECC58
    r4 = r4 + 0; // 0x808ECC5C
    /* li r5, 0 */ // 0x808ECC60
    r4 = r4 + 0xf6; // 0x808ECC64
    FUN_806CAC0C(r4, r3, r4, r5, r4); // bl 0x806CAC0C
    /* li r0, 1 */ // 0x808ECC6C
    *(0xa40 + r31) = r0; // stb @ 0x808ECC70
    r3 = r31 + 0x9c0; // 0x808ECC74
    /* b 0x808ecce0 */ // 0x808ECC78
    r4 = *(0x654 + r3); // lwz @ 0x808ECC7C
    r5 = r3 + 0xb4c; // 0x808ECC80
    /* li r6, 0 */ // 0x808ECC84
    r0 = r4 + 1; // 0x808ECC88
    *(0x654 + r3) = r0; // stw @ 0x808ECC8C
    FUN_80671C2C(r5, r6); // bl 0x80671C2C
    r4 = r31 + 0xb4c; // 0x808ECC98
    FUN_8064E324(r3, r4); // bl 0x8064E324
    /* lis r6, 0 */ // 0x808ECCA0
    r6 = r6 + 0; // 0x808ECCA8
    /* li r7, 0 */ // 0x808ECCAC
    r4 = r6 + 0x109; // 0x808ECCB0
    r5 = r6 + 0x111; // 0x808ECCB4
    r6 = r6 + 0x119; // 0x808ECCB8
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* li r0, 1 */ // 0x808ECCC0
    *(0xbcc + r31) = r0; // stb @ 0x808ECCC4
    /* li r4, -1 */ // 0x808ECCCC
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r3 = r31 + 0xb4c; // 0x808ECCD4
    /* b 0x808ecce0 */ // 0x808ECCD8
    /* li r3, 0 */ // 0x808ECCDC
    r0 = *(0x44 + r1); // lwz @ 0x808ECCE0
    r31 = *(0x3c + r1); // lwz @ 0x808ECCE4
    return;
}