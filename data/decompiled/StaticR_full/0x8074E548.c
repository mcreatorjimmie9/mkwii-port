/* Function at 0x8074E548, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8074E548(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x8074E550
    /* lis r5, 0 */ // 0x8074E554
    *(0x24 + r1) = r0; // stw @ 0x8074E558
    /* li r0, 0 */ // 0x8074E55C
    *(0x1c + r1) = r31; // stw @ 0x8074E560
    /* lis r31, 0 */ // 0x8074E564
    *(0x18 + r1) = r30; // stw @ 0x8074E568
    /* lis r30, 0 */ // 0x8074E56C
    r30 = r30 + 0; // 0x8074E570
    *(0x14 + r1) = r29; // stw @ 0x8074E574
    r29 = r3;
    *(0x17c + r3) = r0; // stb @ 0x8074E57C
    /* lfs f1, 0(r4) */ // 0x8074E580
    /* lfs f0, 0(r31) */ // 0x8074E584
    r4 = *(0 + r5); // lwz @ 0x8074E588
    /* fsubs f1, f1, f0 */ // 0x8074E58C
    r3 = *(4 + r4); // lwz @ 0x8074E590
    FUN_805E3728(); // bl 0x805E3728
    /* lfs f2, 0(r31) */ // 0x8074E598
    /* li r4, 1 */ // 0x8074E59C
    /* lfs f0, 0xa4(r30) */ // 0x8074E5A0
    /* li r5, 1 */ // 0x8074E5A4
    /* fadds f1, f2, f1 */ // 0x8074E5A8
    /* stfs f0, 0x11c(r29) */ // 0x8074E5AC
    r3 = *(8 + r29); // lwz @ 0x8074E5B0
    /* stfs f1, 0x15c(r29) */ // 0x8074E5B4
    /* lfs f1, 0(r30) */ // 0x8074E5B8
    r3 = *(0x28 + r3); // lwz @ 0x8074E5BC
    /* lfs f2, 0x60(r30) */ // 0x8074E5C0
    FUN_805E73A4(); // bl 0x805E73A4
    r0 = *(0x24 + r1); // lwz @ 0x8074E5C8
    r31 = *(0x1c + r1); // lwz @ 0x8074E5CC
    r30 = *(0x18 + r1); // lwz @ 0x8074E5D0
    r29 = *(0x14 + r1); // lwz @ 0x8074E5D4
    return;
}