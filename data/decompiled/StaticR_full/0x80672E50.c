/* Function at 0x80672E50, size=212 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 9 function(s) */

int FUN_80672E50(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 1 */ // 0x80672E58
    *(0x14 + r1) = r0; // stw @ 0x80672E5C
    *(0xc + r1) = r31; // stw @ 0x80672E60
    r31 = r3;
    r3 = r3 + 0x98; // 0x80672E68
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x80672E70
    if (!=) goto 0x0x80672ec8;
    /* lis r3, 0 */ // 0x80672E7C
    r4 = *(0x174 + r31); // lwz @ 0x80672E80
    r3 = *(0 + r3); // lwz @ 0x80672E84
    r3 = r3 + 0x34; // 0x80672E88
    FUN_8067FAE4(r3, r3); // bl 0x8067FAE4
    if (!=) goto 0x0x80672f10;
    r3 = r31 + 0x98; // 0x80672E98
    /* li r4, 1 */ // 0x80672E9C
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80672EA4
    /* li r4, 1 */ // 0x80672EA8
    /* lfs f1, 0(r5) */ // 0x80672EAC
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r3 = r31;
    /* li r4, 0x4a */ // 0x80672EB8
    /* li r5, -1 */ // 0x80672EBC
    FUN_806A03CC(r3, r4, r5); // bl 0x806A03CC
    /* b 0x80672f10 */ // 0x80672EC4
    /* lis r3, 0 */ // 0x80672EC8
    r4 = *(0x174 + r31); // lwz @ 0x80672ECC
    r3 = *(0 + r3); // lwz @ 0x80672ED0
    r3 = r3 + 0x34; // 0x80672ED4
    FUN_8067FAE4(r3, r3); // bl 0x8067FAE4
    if (!=) goto 0x0x80672f10;
    r3 = r31 + 0x98; // 0x80672EE4
    /* li r4, 1 */ // 0x80672EE8
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80672EF0
    /* li r4, 0 */ // 0x80672EF4
    /* lfs f1, 0(r5) */ // 0x80672EF8
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r3 = r31;
    /* li r4, 0x4b */ // 0x80672F04
    /* li r5, -1 */ // 0x80672F08
    FUN_806A03CC(r3, r4, r5); // bl 0x806A03CC
    r0 = *(0x14 + r1); // lwz @ 0x80672F10
    r31 = *(0xc + r1); // lwz @ 0x80672F14
    return;
}