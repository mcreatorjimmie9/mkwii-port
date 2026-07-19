/* Function at 0x807F69A0, size=196 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_807F69A0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 1 */ // 0x807F69A8
    *(0x1c + r1) = r31; // stw @ 0x807F69B0
    /* lis r31, 0 */ // 0x807F69B4
    /* lfs f2, 0(r31) */ // 0x807F69B8
    *(0x18 + r1) = r30; // stw @ 0x807F69BC
    /* lis r30, 0 */ // 0x807F69C0
    /* lfs f1, 0(r30) */ // 0x807F69C4
    *(0x14 + r1) = r29; // stw @ 0x807F69C8
    r29 = r3;
    r4 = *(8 + r3); // lwz @ 0x807F69D0
    r3 = *(0x28 + r4); // lwz @ 0x807F69D4
    /* li r4, 1 */ // 0x807F69D8
    FUN_805E73A4(r4); // bl 0x805E73A4
    r3 = *(0xe8 + r29); // lwz @ 0x807F69E0
    /* li r4, 1 */ // 0x807F69E4
    /* lfs f1, 0(r30) */ // 0x807F69E8
    /* li r5, 1 */ // 0x807F69EC
    r3 = *(8 + r3); // lwz @ 0x807F69F0
    /* lfs f2, 0(r31) */ // 0x807F69F4
    r3 = *(0x28 + r3); // lwz @ 0x807F69F8
    FUN_805E73A4(r5); // bl 0x805E73A4
    r3 = *(8 + r29); // lwz @ 0x807F6A00
    /* li r4, 0 */ // 0x807F6A04
    r3 = *(0x28 + r3); // lwz @ 0x807F6A08
    FUN_805E7060(r4); // bl 0x805E7060
    r12 = *(0 + r3); // lwz @ 0x807F6A10
    r12 = *(8 + r12); // lwz @ 0x807F6A14
    /* mtctr r12 */ // 0x807F6A18
    /* bctrl  */ // 0x807F6A1C
    /* fctiwz f0, f1 */ // 0x807F6A20
    /* li r0, 2 */ // 0x807F6A24
    *(0xb0 + r29) = r0; // stw @ 0x807F6A28
    r3 = r29;
    /* lfs f1, 0(r30) */ // 0x807F6A30
    /* li r4, 0x348 */ // 0x807F6A34
    /* stfd f0, 8(r1) */ // 0x807F6A38
    r0 = *(0xc + r1); // lwz @ 0x807F6A3C
    *(0xdc + r29) = r0; // stw @ 0x807F6A40
    FUN_808A0A88(r4); // bl 0x808A0A88
    r0 = *(0x24 + r1); // lwz @ 0x807F6A48
    r31 = *(0x1c + r1); // lwz @ 0x807F6A4C
    r30 = *(0x18 + r1); // lwz @ 0x807F6A50
    r29 = *(0x14 + r1); // lwz @ 0x807F6A54
    return;
}