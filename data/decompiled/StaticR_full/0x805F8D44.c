/* Function at 0x805F8D44, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_805F8D44(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x805F8D4C
    r5 = r5 + 0; // 0x805F8D50
    *(0x14 + r1) = r0; // stw @ 0x805F8D54
    /* lfs f2, 0x94(r5) */ // 0x805F8D58
    *(0xc + r1) = r31; // stw @ 0x805F8D5C
    r31 = r4;
    /* fmr f3, f2 */ // 0x805F8D64
    /* lfs f1, 0x98(r5) */ // 0x805F8D68
    *(8 + r1) = r30; // stw @ 0x805F8D6C
    r30 = r3;
    /* lfs f4, 0xa0(r5) */ // 0x805F8D74
    /* li r4, 2 */ // 0x805F8D78
    FUN_805F84B4(r4); // bl 0x805F84B4
    r3 = r30;
    FUN_8061E2D8(r4, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x805F8D88
    /* clrlwi r0, r3, 0x18 */ // 0x805F8D8C
    r3 = *(0 + r4); // lwz @ 0x805F8D90
    /* mulli r0, r0, 0x248 */ // 0x805F8D94
    r4 = r31;
    r3 = *(0x14 + r3); // lwz @ 0x805F8D9C
    r3 = r3 + r0; // 0x805F8DA0
    FUN_80823AC4(r4); // bl 0x80823AC4
    r0 = *(0x14 + r1); // lwz @ 0x805F8DA8
    r31 = *(0xc + r1); // lwz @ 0x805F8DAC
    r30 = *(8 + r1); // lwz @ 0x805F8DB0
    return;
}