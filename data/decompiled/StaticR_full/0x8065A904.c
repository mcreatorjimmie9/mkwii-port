/* Function at 0x8065A904, size=476 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 18 function(s) */

int FUN_8065A904(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x8065A90C
    *(0xc + r1) = r31; // stw @ 0x8065A914
    *(8 + r1) = r30; // stw @ 0x8065A918
    r30 = r3;
    *(0x258 + r3) = r4; // stw @ 0x8065A920
    r3 = *(0 + r5); // lwz @ 0x8065A924
    r3 = *(0 + r3); // lwz @ 0x8065A928
    r3 = *(0x404 + r3); // lwz @ 0x8065A92C
    FUN_8065984C(); // bl 0x8065984C
    if (==) goto 0x0x8065aa90;
    if (==) goto 0x0x8065aa00;
    r3 = *(0x254 + r30); // lwz @ 0x8065A944
    r4 = *(0x258 + r30); // lwz @ 0x8065A948
    FUN_8066E138(); // bl 0x8066E138
    if (==) goto 0x0x8065aa00;
    /* lis r31, 0 */ // 0x8065A958
    r5 = *(0x254 + r30); // lwz @ 0x8065A95C
    r31 = r31 + 0; // 0x8065A960
    r6 = *(0x258 + r30); // lwz @ 0x8065A964
    r3 = r30;
    /* li r7, 0 */ // 0x8065A96C
    r4 = r31 + 0x2f; // 0x8065A970
    FUN_806A105C(r3, r7, r4); // bl 0x806A105C
    r5 = *(0x254 + r30); // lwz @ 0x8065A978
    r3 = r30;
    r6 = *(0x258 + r30); // lwz @ 0x8065A980
    r4 = r31 + 0x35; // 0x8065A984
    /* li r7, 0 */ // 0x8065A988
    FUN_806A105C(r3, r4, r7); // bl 0x806A105C
    r5 = *(0x254 + r30); // lwz @ 0x8065A990
    r3 = r30;
    r6 = *(0x258 + r30); // lwz @ 0x8065A998
    r4 = r31 + 0x42; // 0x8065A99C
    /* li r7, 0 */ // 0x8065A9A0
    FUN_806A105C(r3, r4, r7); // bl 0x806A105C
    r5 = *(0x254 + r30); // lwz @ 0x8065A9A8
    r3 = r30;
    r6 = *(0x258 + r30); // lwz @ 0x8065A9B0
    r4 = r31 + 0x4f; // 0x8065A9B4
    /* li r7, 0 */ // 0x8065A9B8
    FUN_806A105C(r3, r4, r7); // bl 0x806A105C
    r5 = *(0x254 + r30); // lwz @ 0x8065A9C0
    r3 = r30;
    r6 = *(0x258 + r30); // lwz @ 0x8065A9C8
    r4 = r31 + 0x5e; // 0x8065A9CC
    /* li r7, 0 */ // 0x8065A9D0
    FUN_806A105C(r3, r4, r7); // bl 0x806A105C
    /* li r0, 2 */ // 0x8065A9D8
    *(0x25c + r30) = r0; // stw @ 0x8065A9DC
    r4 = r31 + 0x6d; // 0x8065A9E0
    r3 = r30 + 0xa8; // 0x8065A9E4
    FUN_80665D1C(r4, r3); // bl 0x80665D1C
    r0 = *(0xbb + r3); // lbz @ 0x8065A9EC
    r0 = r0 rlwinm 0; // rlwinm
    r0 = r0 | 1; // 0x8065A9F4
    *(0xbb + r3) = r0; // stb @ 0x8065A9F8
    /* b 0x8065aa78 */ // 0x8065A9FC
    /* lis r31, 0 */ // 0x8065AA00
    r3 = r30;
    r31 = r31 + 0; // 0x8065AA08
    r4 = r31 + 0x74; // 0x8065AA0C
    r5 = r31 + 0x7a; // 0x8065AA10
    FUN_806A0D70(r3, r4, r5); // bl 0x806A0D70
    r3 = r30;
    r4 = r31 + 0x85; // 0x8065AA1C
    r5 = r31 + 0x92; // 0x8065AA20
    FUN_806A0D70(r5, r3, r4, r5); // bl 0x806A0D70
    r3 = r30;
    r4 = r31 + 0x9d; // 0x8065AA2C
    r5 = r31 + 0xaa; // 0x8065AA30
    FUN_806A0D70(r5, r3, r4, r5); // bl 0x806A0D70
    r3 = r30;
    r4 = r31 + 0xb5; // 0x8065AA3C
    r5 = r31 + 0xc4; // 0x8065AA40
    FUN_806A0D70(r5, r3, r4, r5); // bl 0x806A0D70
    r3 = r30;
    r4 = r31 + 0xcf; // 0x8065AA4C
    r5 = r31 + 0xde; // 0x8065AA50
    FUN_806A0D70(r5, r3, r4, r5); // bl 0x806A0D70
    /* li r0, 1 */ // 0x8065AA58
    *(0x25c + r30) = r0; // stw @ 0x8065AA5C
    r4 = r31 + 0xe9; // 0x8065AA60
    r3 = r30 + 0xa8; // 0x8065AA64
    FUN_80665D1C(r4, r3); // bl 0x80665D1C
    r0 = *(0xbb + r3); // lbz @ 0x8065AA6C
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x8065AA74
    r3 = r30;
    /* li r4, 1 */ // 0x8065AA7C
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    /* li r0, 0 */ // 0x8065AA84
    *(0x80 + r30) = r0; // stb @ 0x8065AA88
    /* b 0x8065aaac */ // 0x8065AA8C
    r3 = r30;
    /* li r4, 0 */ // 0x8065AA94
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    /* li r3, 1 */ // 0x8065AA9C
    /* li r0, 0 */ // 0x8065AAA0
    *(0x80 + r30) = r3; // stb @ 0x8065AAA4
    *(0x25c + r30) = r0; // stw @ 0x8065AAA8
    r3 = r30 + 0x98; // 0x8065AAAC
    /* li r4, 4 */ // 0x8065AAB0
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x8065AAB8
    /* li r4, 0 */ // 0x8065AABC
    /* lfs f1, 0(r5) */ // 0x8065AAC0
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x8065AAC8
    r31 = *(0xc + r1); // lwz @ 0x8065AACC
    r30 = *(8 + r1); // lwz @ 0x8065AAD0
    return;
}