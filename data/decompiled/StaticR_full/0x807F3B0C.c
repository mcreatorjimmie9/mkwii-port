/* Function at 0x807F3B0C, size=412 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31 */
/* Calls: 16 function(s) */

int FUN_807F3B0C(int r3, int r4, int r5)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    *(0x6c + r1) = r31; // stw @ 0x807F3B18
    r31 = r3;
    r0 = *(0xb4 + r3); // lwz @ 0x807F3B20
    if (!=) goto 0x0x807f3d90;
    r0 = *(0xb0 + r3); // lwz @ 0x807F3B2C
    if (==) goto 0x0x807f3b4c;
    if (==) goto 0x0x807f3bd0;
    if (==) goto 0x0x807f3cc8;
    /* b 0x807f3d90 */ // 0x807F3B48
    /* lfs f1, 0xbc(r3) */ // 0x807F3B4C
    r3 = r3 + 0x30; // 0x807F3B50
    FUN_80812778(r3); // bl 0x80812778
    if (<) goto 0x0x807f3b7c;
    /* lis r5, 0 */ // 0x807F3B60
    r4 = r3;
    r3 = *(0 + r5); // lwz @ 0x807F3B68
    FUN_8061D97C(r5, r4); // bl 0x8061D97C
    /* li r0, 1 */ // 0x807F3B70
    *(0xb8 + r31) = r3; // stw @ 0x807F3B74
    *(0xb0 + r31) = r0; // stw @ 0x807F3B78
    /* lis r4, 0 */ // 0x807F3B7C
    /* lfs f1, 0(r4) */ // 0x807F3B84
    r4 = r31 + 0xd0; // 0x807F3B88
    FUN_80735EBC(r4, r3, r4); // bl 0x80735EBC
    r4 = r31 + 0xc4; // 0x807F3B94
    FUN_805A4464(r4, r3, r4, r5); // bl 0x805A4464
    /* lfs f0, 0x5c(r1) */ // 0x807F3BA0
    r3 = r31 + 0xc4; // 0x807F3BA4
    /* stfs f0, 0xc4(r31) */ // 0x807F3BA8
    /* lfs f0, 0x60(r1) */ // 0x807F3BAC
    /* stfs f0, 0xc8(r31) */ // 0x807F3BB0
    /* lfs f0, 0x64(r1) */ // 0x807F3BB4
    /* stfs f0, 0xcc(r31) */ // 0x807F3BB8
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31;
    r4 = r31 + 0xc4; // 0x807F3BC4
    FUN_808A1E3C(r3, r4); // bl 0x808A1E3C
    /* b 0x807f3d90 */ // 0x807F3BCC
    r3 = *(0xb8 + r3); // lwz @ 0x807F3BD0
    FUN_8061E2D8(r3, r4); // bl 0x8061E2D8
    /* lfs f1, 0xc0(r31) */ // 0x807F3BD8
    /* clrlwi r3, r3, 0x18 */ // 0x807F3BDC
    r4 = r31 + 0x30; // 0x807F3BE0
    FUN_80812948(r4); // bl 0x80812948
    if (==) goto 0x0x807f3c20;
    /* li r0, 2 */ // 0x807F3BF0
    *(0xb0 + r31) = r0; // stw @ 0x807F3BF4
    /* lis r3, 0 */ // 0x807F3BF8
    /* lis r5, 0 */ // 0x807F3BFC
    /* lfs f2, 0(r5) */ // 0x807F3C00
    /* li r5, 1 */ // 0x807F3C04
    r4 = *(8 + r31); // lwz @ 0x807F3C08
    /* lfs f1, 0(r3) */ // 0x807F3C0C
    r3 = *(0x28 + r4); // lwz @ 0x807F3C10
    /* li r4, 1 */ // 0x807F3C14
    FUN_805E73A4(r5, r4); // bl 0x805E73A4
    /* b 0x807f3c48 */ // 0x807F3C1C
    r3 = *(0xb8 + r31); // lwz @ 0x807F3C20
    FUN_8061E2D8(r4); // bl 0x8061E2D8
    /* lfs f1, 0xbc(r31) */ // 0x807F3C28
    /* clrlwi r3, r3, 0x18 */ // 0x807F3C2C
    r4 = r31 + 0x30; // 0x807F3C30
    FUN_80812948(r4); // bl 0x80812948
    if (!=) goto 0x0x807f3c48;
    /* li r0, 0 */ // 0x807F3C40
    *(0xb0 + r31) = r0; // stw @ 0x807F3C44
    r3 = *(0xb8 + r31); // lwz @ 0x807F3C48
    FUN_8061DA88(); // bl 0x8061DA88
    r4 = r3;
    r5 = r31 + 0x30; // 0x807F3C58
    FUN_805A4498(r4, r3, r5); // bl 0x805A4498
    /* lis r4, 0 */ // 0x807F3C60
    /* lfs f0, 0(r4) */ // 0x807F3C68
    /* stfs f0, 0x48(r1) */ // 0x807F3C6C
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* lis r4, 0 */ // 0x807F3C74
    /* lfs f1, 0(r4) */ // 0x807F3C7C
    FUN_80735EBC(r4, r3, r4); // bl 0x80735EBC
    r4 = r31 + 0xc4; // 0x807F3C8C
    FUN_805A4464(r4, r3, r4, r5); // bl 0x805A4464
    /* lfs f0, 0x2c(r1) */ // 0x807F3C98
    r3 = r31 + 0xc4; // 0x807F3C9C
    /* stfs f0, 0xc4(r31) */ // 0x807F3CA0
    /* lfs f0, 0x30(r1) */ // 0x807F3CA4
}