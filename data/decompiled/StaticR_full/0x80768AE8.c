/* Function at 0x80768AE8, size=248 bytes */
/* Stack frame: 208 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80768AE8(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -208(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 0 */ // 0x80768AF4
    *(0xcc + r1) = r31; // stw @ 0x80768AFC
    /* lis r31, 0 */ // 0x80768B00
    r31 = r31 + 0; // 0x80768B04
    *(0xc8 + r1) = r30; // stw @ 0x80768B08
    r30 = r3;
    /* lfs f0, 0x54(r31) */ // 0x80768B10
    r4 = r30 + 0x30; // 0x80768B14
    *(0xc4 + r1) = r29; // stw @ 0x80768B18
    /* lis r29, 0 */ // 0x80768B1C
    /* lfs f2, 4(r31) */ // 0x80768B20
    *(0x48c + r3) = r0; // stb @ 0x80768B24
    /* lfs f1, 0(r29) */ // 0x80768B2C
    /* stfs f2, 0x58(r1) */ // 0x80768B30
    /* fsubs f0, f1, f0 */ // 0x80768B34
    /* stfs f2, 0x5c(r1) */ // 0x80768B38
    /* stfs f2, 0x60(r1) */ // 0x80768B3C
    /* stfs f2, 0x64(r1) */ // 0x80768B40
    /* stfs f2, 0x68(r1) */ // 0x80768B44
    /* stfs f2, 0x6c(r1) */ // 0x80768B48
    *(0xb0 + r1) = r0; // stw @ 0x80768B4C
    *(0xc + r1) = r0; // stw @ 0x80768B50
    /* stfs f2, 0x40(r1) */ // 0x80768B54
    /* stfs f0, 0x44(r1) */ // 0x80768B58
    /* stfs f2, 0x48(r1) */ // 0x80768B5C
    FUN_805A4464(); // bl 0x805A4464
    /* lis r3, 0 */ // 0x80768B64
    /* lis r5, 0 */ // 0x80768B68
    /* lis r6, 0x20e8 */ // 0x80768B6C
    /* lfs f1, 0(r29) */ // 0x80768B70
    r3 = *(0 + r3); // lwz @ 0x80768B74
    r5 = r5 + 0; // 0x80768B7C
    r6 = r6 + 0xfff; // 0x80768B80
    /* li r9, 0 */ // 0x80768B8C
    FUN_8081A818(r5, r6, r7, r8, r9); // bl 0x8081A818
    if (==) goto 0x0x80768db0;
    /* li r0, 1 */ // 0x80768B9C
    *(0x48c + r30) = r0; // stb @ 0x80768BA0
    r5 = *(0x70 + r1); // lwz @ 0x80768BA8
    r4 = *(0x74 + r1); // lwz @ 0x80768BAC
    r0 = *(0x78 + r1); // lwz @ 0x80768BB0
    *(0x4c + r1) = r5; // stw @ 0x80768BB4
    *(0x50 + r1) = r4; // stw @ 0x80768BB8
    *(0x54 + r1) = r0; // stw @ 0x80768BBC
    FUN_805E3430(); // bl 0x805E3430
    /* lis r4, 0 */ // 0x80768BC4
    r4 = r4 + 0; // 0x80768BCC
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    r4 = r30 + 0x30; // 0x80768BD8
}