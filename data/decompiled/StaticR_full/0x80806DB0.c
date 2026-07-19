/* Function at 0x80806DB0, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80806DB0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80806DBC
    r31 = r3;
    r0 = *(0xe0 + r3); // lwz @ 0x80806DC4
    if (==) goto 0x0x80806e08;
    r4 = *(8 + r3); // lwz @ 0x80806DD0
    /* lis r3, 0 */ // 0x80806DD4
    /* lis r5, 0 */ // 0x80806DD8
    /* lfs f1, 0(r3) */ // 0x80806DDC
    r3 = *(0x28 + r4); // lwz @ 0x80806DE0
    /* li r4, 1 */ // 0x80806DE4
    /* lfs f2, 0(r5) */ // 0x80806DE8
    /* li r5, 1 */ // 0x80806DEC
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    /* lis r3, 0 */ // 0x80806DF4
    /* li r0, 1 */ // 0x80806DF8
    r3 = *(0 + r3); // lwz @ 0x80806DFC
    *(0xf4 + r31) = r3; // stw @ 0x80806E00
    *(0xf0 + r31) = r0; // stb @ 0x80806E04
    r0 = *(0x14 + r1); // lwz @ 0x80806E08
    r31 = *(0xc + r1); // lwz @ 0x80806E0C
    return;
}