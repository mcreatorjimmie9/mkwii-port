/* Function at 0x805F89D8, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_805F89D8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x805F89E0
    r5 = r5 + 0; // 0x805F89E4
    *(0x14 + r1) = r0; // stw @ 0x805F89E8
    /* lfs f2, 0x94(r5) */ // 0x805F89EC
    *(0xc + r1) = r31; // stw @ 0x805F89F0
    r31 = r4;
    /* fmr f3, f2 */ // 0x805F89F8
    /* lfs f1, 0x98(r5) */ // 0x805F89FC
    *(8 + r1) = r30; // stw @ 0x805F8A00
    r30 = r3;
    /* lfs f4, 0xa0(r5) */ // 0x805F8A08
    /* li r4, 1 */ // 0x805F8A0C
    FUN_805F84B4(r4); // bl 0x805F84B4
    r3 = r30;
    FUN_8061E2D8(r4, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x805F8A1C
    /* clrlwi r0, r3, 0x18 */ // 0x805F8A20
    r3 = *(0 + r4); // lwz @ 0x805F8A24
    /* mulli r0, r0, 0x248 */ // 0x805F8A28
    r4 = r31;
    r3 = *(0x14 + r3); // lwz @ 0x805F8A30
    r3 = r3 + r0; // 0x805F8A34
    FUN_80823AC4(r4); // bl 0x80823AC4
    r0 = *(0x14 + r1); // lwz @ 0x805F8A3C
    r31 = *(0xc + r1); // lwz @ 0x805F8A40
    r30 = *(8 + r1); // lwz @ 0x805F8A44
    return;
}