/* Function at 0x80673A68, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 13 function(s) */

int FUN_80673A68(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80673A70
    *(0xc + r1) = r31; // stw @ 0x80673A78
    *(8 + r1) = r30; // stw @ 0x80673A7C
    r30 = r3;
    r3 = *(0 + r4); // lwz @ 0x80673A84
    r4 = *(0x174 + r30); // lwz @ 0x80673A88
    r3 = r3 + 0x34; // 0x80673A8C
    FUN_8067FAE4(r3); // bl 0x8067FAE4
    if (!=) goto 0x0x80673af4;
    r3 = r30 + 0x98; // 0x80673A9C
    /* li r4, 1 */ // 0x80673AA0
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x80673AA8
    /* li r4, 1 */ // 0x80673AAC
    /* lfs f1, 0(r31) */ // 0x80673AB0
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x80673AB8
    /* li r4, 0 */ // 0x80673ABC
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80673AC4
    /* li r4, 0 */ // 0x80673AC8
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r5 = *(0x178 + r30); // lbz @ 0x80673AD0
    /* lis r4, 0 */ // 0x80673AD4
    r4 = r4 + 0; // 0x80673AD8
    r3 = r30;
    r4 = r4 + 0xd6; // 0x80673AE0
    r5 = r5 + 0x9f7; // 0x80673AE4
    /* li r6, 0 */ // 0x80673AE8
    FUN_806A093C(r4, r3, r4, r5, r6); // bl 0x806A093C
    /* b 0x80673b44 */ // 0x80673AF0
    r3 = r30 + 0x98; // 0x80673AF4
    /* li r4, 1 */ // 0x80673AF8
    FUN_8069F4A0(r6, r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x80673B00
    /* li r4, 0 */ // 0x80673B04
    /* lfs f1, 0(r31) */ // 0x80673B08
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x80673B10
    /* li r4, 0 */ // 0x80673B14
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80673B1C
    /* li r4, 1 */ // 0x80673B20
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    /* lis r4, 0 */ // 0x80673B28
    r3 = r30;
    r4 = r4 + 0; // 0x80673B30
    /* li r5, 0x9f6 */ // 0x80673B34
    r4 = r4 + 0xe6; // 0x80673B38
    /* li r6, 0 */ // 0x80673B3C
    FUN_806A093C(r3, r4, r5, r4, r6); // bl 0x806A093C
    r3 = r30 + 0x98; // 0x80673B44
    /* li r4, 2 */ // 0x80673B48
    FUN_8069F4A0(r4, r6, r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80673B50
    /* li r4, 0 */ // 0x80673B54
    /* lfs f1, 0(r5) */ // 0x80673B58
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x80673B60
    r31 = *(0xc + r1); // lwz @ 0x80673B64
    r30 = *(8 + r1); // lwz @ 0x80673B68
    return;
}