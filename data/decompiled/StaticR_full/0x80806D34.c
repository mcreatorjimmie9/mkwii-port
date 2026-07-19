/* Function at 0x80806D34, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80806D34(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x80806D3C
    /* li r4, 0 */ // 0x80806D40
    *(0x24 + r1) = r0; // stw @ 0x80806D44
    /* lfs f2, 0(r6) */ // 0x80806D48
    *(0x1c + r1) = r31; // stw @ 0x80806D4C
    /* lis r31, 0 */ // 0x80806D50
    /* lfs f1, 0(r31) */ // 0x80806D54
    *(0x18 + r1) = r30; // stw @ 0x80806D58
    /* li r30, 0 */ // 0x80806D5C
    *(0x14 + r1) = r29; // stw @ 0x80806D60
    r29 = r3;
    *(0xe0 + r3) = r30; // stw @ 0x80806D68
    r5 = *(8 + r3); // lwz @ 0x80806D6C
    r3 = *(0x28 + r5); // lwz @ 0x80806D70
    /* li r5, 1 */ // 0x80806D74
    FUN_805E73A4(r5); // bl 0x805E73A4
    /* lfs f0, 0(r31) */ // 0x80806D7C
    /* li r0, 1 */ // 0x80806D80
    *(0xf0 + r29) = r30; // stb @ 0x80806D84
    *(0xf8 + r29) = r30; // stb @ 0x80806D88
    *(0xf9 + r29) = r0; // stb @ 0x80806D8C
    /* stfs f0, 0xec(r29) */ // 0x80806D90
    r31 = *(0x1c + r1); // lwz @ 0x80806D94
    r30 = *(0x18 + r1); // lwz @ 0x80806D98
    r29 = *(0x14 + r1); // lwz @ 0x80806D9C
    r0 = *(0x24 + r1); // lwz @ 0x80806DA0
    return;
}