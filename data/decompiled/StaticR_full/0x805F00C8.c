/* Function at 0x805F00C8, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805F00C8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r7, 0 */ // 0x805F00D0
    *(0x24 + r1) = r0; // stw @ 0x805F00D4
    /* lfs f1, 0(r7) */ // 0x805F00D8
    /* lis r7, 0 */ // 0x805F00DC
    *(0x1c + r1) = r31; // stw @ 0x805F00E0
    /* lis r31, 0 */ // 0x805F00E4
    /* lfs f0, 0(r31) */ // 0x805F00E8
    r7 = r7 + 0; // 0x805F00EC
    *(0x18 + r1) = r30; // stw @ 0x805F00F0
    /* li r30, 0 */ // 0x805F00F4
    *(0x14 + r1) = r29; // stw @ 0x805F00F8
    r29 = r3;
    r3 = r4;
    /* clrlwi r4, r6, 0x18 */ // 0x805F0104
    *(0x14 + r29) = r5; // stw @ 0x805F0108
    r5 = r29 + 0x18; // 0x805F010C
    /* extsb r4, r4 */ // 0x805F0110
    *(0x10 + r29) = r6; // stb @ 0x805F0114
    r6 = r29 + 0x1c; // 0x805F0118
    *(4 + r29) = r30; // stw @ 0x805F011C
    *(0 + r29) = r30; // stw @ 0x805F0120
    *(8 + r29) = r30; // stb @ 0x805F0124
    *(0xc + r29) = r7; // stw @ 0x805F0128
    *(0x20 + r29) = r30; // stb @ 0x805F012C
    *(0x21 + r29) = r30; // stb @ 0x805F0130
    /* stfs f1, 0x24(r29) */ // 0x805F0134
    /* stfs f0, 0x50(r29) */ // 0x805F0138
    *(0x54 + r29) = r30; // stb @ 0x805F013C
    FUN_805E3430(); // bl 0x805E3430
}