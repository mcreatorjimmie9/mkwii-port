/* Function at 0x8083F918, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8083F918(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8083F920
    *(0x14 + r1) = r0; // stw @ 0x8083F924
    *(0xc + r1) = r31; // stw @ 0x8083F928
    r31 = r3;
    r0 = *(0 + r4); // lbz @ 0x8083F930
    if (==) goto 0x0x8083f954;
    r4 = *(0 + r31); // lwz @ 0x8083F93C
    /* lis r3, 0 */ // 0x8083F940
    r3 = *(0 + r3); // lwz @ 0x8083F944
    r4 = *(0x18 + r4); // lbz @ 0x8083F948
    r5 = *(0x20 + r31); // lwz @ 0x8083F94C
    FUN_806F1508(r3); // bl 0x806F1508
    /* li r3, 0 */ // 0x8083F954
    /* li r0, 0x14 */ // 0x8083F958
    *(4 + r31) = r3; // stw @ 0x8083F95C
    *(8 + r31) = r3; // stw @ 0x8083F960
    *(0x18 + r31) = r0; // stw @ 0x8083F964
    *(0x1c + r31) = r0; // stw @ 0x8083F968
    *(0x20 + r31) = r0; // stw @ 0x8083F96C
    *(0x24 + r31) = r0; // stw @ 0x8083F970
    *(0x2d + r31) = r3; // stb @ 0x8083F974
    *(0x2e + r31) = r3; // stb @ 0x8083F978
    r31 = *(0xc + r1); // lwz @ 0x8083F97C
    r0 = *(0x14 + r1); // lwz @ 0x8083F980
    return;
}