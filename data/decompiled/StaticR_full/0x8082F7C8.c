/* Function at 0x8082F7C8, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_8082F7C8(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8082F7D8
    r31 = r31 + 0; // 0x8082F7DC
    *(0x18 + r1) = r30; // stw @ 0x8082F7E0
    *(0x14 + r1) = r29; // stw @ 0x8082F7E4
    r29 = r3;
    r0 = *(0x7c + r3); // lwz @ 0x8082F7EC
    r30 = *(0x1b0 + r3); // lwz @ 0x8082F7F0
    /* rlwinm. r0, r0, 0, 0x19, 0x19 */ // 0x8082F7F4
    if (==) goto 0x0x8082f804;
    /* lfs f2, 0xa8(r31) */ // 0x8082F7FC
    /* b 0x8082f80c */ // 0x8082F800
    /* lis r3, 0 */ // 0x8082F804
    /* lfs f2, 0(r3) */ // 0x8082F808
    if (==) goto 0x0x8082f81c;
    /* lfs f1, 0xa4(r31) */ // 0x8082F814
    /* b 0x8082f824 */ // 0x8082F818
    /* lis r3, 0 */ // 0x8082F81C
    /* lfs f1, 0(r3) */ // 0x8082F820
    r3 = r29;
    FUN_80829DB0(r3, r3); // bl 0x80829DB0
    if (==) goto 0x0x8082f83c;
    r3 = r29;
    FUN_80829DE0(r3, r3); // bl 0x80829DE0
    if (!=) goto 0x0x8082f86c;
    /* lis r3, 0 */ // 0x8082F844
    r4 = r29 + 0x44; // 0x8082F848
    r3 = *(0 + r3); // lwz @ 0x8082F84C
    r5 = r4;
    /* lfs f1, 0xac(r31) */ // 0x8082F854
    /* li r6, 0x28 */ // 0x8082F858
    /* li r7, 0xa */ // 0x8082F85C
    /* li r8, 0 */ // 0x8082F860
    /* li r9, 0x1e */ // 0x8082F864
    FUN_80818BA4(r6, r7, r8, r9); // bl 0x80818BA4
    if (<) goto 0x0x8082f8c8;
    if (!=) goto 0x0x8082f884;
    /* li r0, 1 */ // 0x8082F878
    *(0x1d8 + r29) = r0; // stb @ 0x8082F87C
    /* b 0x8082f8a0 */ // 0x8082F880
    if (!=) goto 0x0x8082f8a0;
    r3 = r29;
    FUN_80829F60(r3); // bl 0x80829F60
    r0 = *(0x7c + r29); // lwz @ 0x8082F894
    r0 = r0 | 8; // 0x8082F898
    *(0x7c + r29) = r0; // stw @ 0x8082F89C
    if (<=) goto 0x0x8082f8c8;
    r0 = *(4 + r29); // lwz @ 0x8082F8A8
    /* lis r3, 0 */ // 0x8082F8AC
    r3 = *(0 + r3); // lwz @ 0x8082F8B0
    r4 = r29;
    /* mulli r0, r0, 0x24 */ // 0x8082F8B8
    r3 = r3 + r0; // 0x8082F8BC
    r3 = r3 + 0x48; // 0x8082F8C0
    FUN_80820FFC(r4, r3); // bl 0x80820FFC
    r0 = *(0x24 + r1); // lwz @ 0x8082F8C8
    r31 = *(0x1c + r1); // lwz @ 0x8082F8CC
    r30 = *(0x18 + r1); // lwz @ 0x8082F8D0
    r29 = *(0x14 + r1); // lwz @ 0x8082F8D4
    return;
}