/* Function at 0x8074C7BC, size=284 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_8074C7BC(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x8074C7C4
    /* lis r4, 0 */ // 0x8074C7C8
    *(0x4c + r1) = r31; // stw @ 0x8074C7D0
    *(0x48 + r1) = r30; // stw @ 0x8074C7D4
    *(0x44 + r1) = r29; // stw @ 0x8074C7D8
    r29 = r3;
    /* lfs f1, 0(r5) */ // 0x8074C7E0
    r3 = *(0x120 + r3); // lwz @ 0x8074C7E4
    /* lfs f2, 0(r4) */ // 0x8074C7E8
    FUN_807455C0(); // bl 0x807455C0
    /* stfs f1, 0x124(r29) */ // 0x8074C7F0
    /* lis r3, 0 */ // 0x8074C7F4
    /* lfs f2, 0(r3) */ // 0x8074C7F8
    /* lis r31, 0 */ // 0x8074C7FC
    /* lfs f0, 0(r31) */ // 0x8074C800
    /* lis r4, 0 */ // 0x8074C804
    /* frsp f1, f1 */ // 0x8074C808
    /* stfs f2, 0x2c(r1) */ // 0x8074C80C
    r4 = r4 + 0; // 0x8074C814
    /* stfs f0, 0x30(r1) */ // 0x8074C818
    /* stfs f2, 0x34(r1) */ // 0x8074C81C
    FUN_805A443C(r3, r4); // bl 0x805A443C
    r4 = r29 + 0x30; // 0x8074C828
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    r0 = *(0x120 + r29); // lwz @ 0x8074C834
    /* li r30, 0 */ // 0x8074C838
    if (<=) goto 0x0x8074c898;
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lis r3, 0 */ // 0x8074C854
    /* lis r7, 0 */ // 0x8074C858
    /* lis r6, 0 */ // 0x8074C85C
    /* lis r5, 0 */ // 0x8074C860
    /* lis r9, 0x64ec */ // 0x8074C864
    r8 = *(0 + r6); // lwz @ 0x8074C868
    r6 = r9 + -0x2001; // 0x8074C86C
    r3 = *(0 + r3); // lwz @ 0x8074C870
    /* lfs f1, 0(r31) */ // 0x8074C874
    r7 = *(0 + r7); // lwz @ 0x8074C87C
    r5 = r5 + 0; // 0x8074C880
    /* li r9, 0 */ // 0x8074C884
    FUN_8081A1D4(r4, r5, r9); // bl 0x8081A1D4
    if (==) goto 0x0x8074c898;
    /* li r30, 1 */ // 0x8074C894
    if (==) goto 0x0x8074c8bc;
    /* li r0, -1 */ // 0x8074C8A0
    *(0x120 + r29) = r0; // stw @ 0x8074C8A4
    r3 = r29;
    r12 = *(0 + r29); // lwz @ 0x8074C8AC
    r12 = *(0x94 + r12); // lwz @ 0x8074C8B0
    /* mtctr r12 */ // 0x8074C8B4
    /* bctrl  */ // 0x8074C8B8
    r0 = *(0x54 + r1); // lwz @ 0x8074C8BC
    r31 = *(0x4c + r1); // lwz @ 0x8074C8C0
    r30 = *(0x48 + r1); // lwz @ 0x8074C8C4
    r29 = *(0x44 + r1); // lwz @ 0x8074C8C8
    return;
}