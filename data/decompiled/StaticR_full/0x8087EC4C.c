/* Function at 0x8087EC4C, size=288 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_8087EC4C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x8087EC54
    *(0x14 + r1) = r0; // stw @ 0x8087EC58
    *(0xc + r1) = r31; // stw @ 0x8087EC5C
    r31 = r3;
    /* li r3, 0 */ // 0x8087EC64
    r5 = *(0 + r5); // lwz @ 0x8087EC68
    r0 = *(0xb70 + r5); // lwz @ 0x8087EC6C
    if (<) goto 0x0x8087ec84;
    if (>) goto 0x0x8087ec84;
    /* li r3, 1 */ // 0x8087EC80
    if (==) goto 0x0x8087ecc0;
    /* lis r3, 0 */ // 0x8087EC8C
    /* lis r6, 0 */ // 0x8087EC90
    r5 = *(0 + r3); // lwz @ 0x8087EC94
    r0 = r4 rlwinm 2; // rlwinm
    r6 = r6 + 0; // 0x8087EC9C
    r3 = r31;
    r5 = *(0x98 + r5); // lwz @ 0x8087ECA4
    r4 = r6 + 0x6b; // 0x8087ECA8
    /* li r6, 0 */ // 0x8087ECAC
    r5 = r5 + r0; // 0x8087ECB0
    r5 = *(0x35c + r5); // lwz @ 0x8087ECB4
    FUN_806A093C(r4, r6); // bl 0x806A093C
    /* b 0x8087ed58 */ // 0x8087ECBC
    /* mulli r0, r4, 0xf0 */ // 0x8087ECC0
    r3 = r5 + r0; // 0x8087ECC4
    r5 = *(0x38 + r3); // lwz @ 0x8087ECC8
    if (!=) goto 0x0x8087ed00;
    r0 = *(0xf8 + r3); // lwz @ 0x8087ECD4
    if (!=) goto 0x0x8087ed00;
    /* lis r4, 0 */ // 0x8087ECE0
    r3 = r31;
    r4 = r4 + 0; // 0x8087ECE8
    /* li r5, 0x25f2 */ // 0x8087ECEC
    r4 = r4 + 0x77; // 0x8087ECF0
    /* li r6, 0 */ // 0x8087ECF4
    FUN_806A093C(r3, r4, r5, r4, r6); // bl 0x806A093C
    /* b 0x8087ed58 */ // 0x8087ECFC
    if (!=) goto 0x0x8087ed44;
    /* lis r3, 0 */ // 0x8087ED08
    r3 = *(0 + r3); // lwz @ 0x8087ED0C
    r3 = r3 + 0x34; // 0x8087ED10
    FUN_8067F3BC(r3, r3); // bl 0x8067F3BC
    FUN_80680010(r3, r3); // bl 0x80680010
    if (!=) goto 0x0x8087ed44;
    /* lis r4, 0 */ // 0x8087ED24
    r3 = r31;
    r4 = r4 + 0; // 0x8087ED2C
    /* li r5, 0x25f2 */ // 0x8087ED30
    r4 = r4 + 0x83; // 0x8087ED34
    /* li r6, 0 */ // 0x8087ED38
    FUN_806A093C(r3, r4, r5, r4, r6); // bl 0x806A093C
    /* b 0x8087ed58 */ // 0x8087ED40
    /* lis r4, 0 */ // 0x8087ED44
    r3 = r31;
    r4 = r4 + 0; // 0x8087ED4C
    r4 = r4 + 0x8f; // 0x8087ED50
    FUN_806A0B6C(r4, r3, r4, r4); // bl 0x806A0B6C
    r0 = *(0x14 + r1); // lwz @ 0x8087ED58
    r31 = *(0xc + r1); // lwz @ 0x8087ED5C
    return;
}