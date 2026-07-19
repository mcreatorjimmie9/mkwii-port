/* Function at 0x807F30DC, size=152 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_807F30DC(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r31, 0 */ // 0x807F30EC
    r31 = r31 + 0; // 0x807F30F0
    *(0x58 + r1) = r30; // stw @ 0x807F30F4
    *(0x54 + r1) = r29; // stw @ 0x807F30F8
    *(0x50 + r1) = r28; // stw @ 0x807F30FC
    r28 = r3;
    r29 = *(0x10 + r3); // lwz @ 0x807F3104
    if (==) goto 0x0x807f31f8;
    r4 = *(0x10 + r29); // lwz @ 0x807F3110
    r0 = *(0x34 + r3); // lwz @ 0x807F3114
    r5 = *(0 + r4); // lwz @ 0x807F3118
    *(0x18 + r1) = r0; // stw @ 0x807F311C
    r4 = *(0x30 + r3); // lwz @ 0x807F3120
    r0 = *(0x38 + r3); // lwz @ 0x807F3128
    /* lfs f0, 0xdc(r3) */ // 0x807F312C
    *(0x14 + r1) = r4; // stw @ 0x807F3130
    *(0x1c + r1) = r0; // stw @ 0x807F3134
    /* stfs f0, 0x18(r1) */ // 0x807F3138
    if (==) goto 0x0x807f3150;
    r3 = r5 + 0xc; // 0x807F3140
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x807f3158 */ // 0x807F314C
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* lfs f2, 0x14(r1) */ // 0x807F3158
    /* li r30, 0 */ // 0x807F315C
    /* lfs f1, 0x18(r1) */ // 0x807F3160
    /* lfs f0, 0x1c(r1) */ // 0x807F3164
    /* stfs f2, 0x2c(r1) */ // 0x807F3168
    /* stfs f1, 0x3c(r1) */ // 0x807F316C
    /* stfs f0, 0x4c(r1) */ // 0x807F3170
}