/* Function at 0x8061D75C, size=264 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8061D75C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x8061D770
    r29 = r3;
    FUN_805F7298(); // bl 0x805F7298
    /* li r30, 0 */ // 0x8061D77C
    /* b 0x8061d7dc */ // 0x8061D780
    r3 = *(0x20 + r29); // lwz @ 0x8061D784
    r31 = r30 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r31 */ // 0x8061D78C
    r12 = *(0xc + r3); // lwz @ 0x8061D790
    r12 = *(0xc + r12); // lwz @ 0x8061D794
    /* mtctr r12 */ // 0x8061D798
    /* bctrl  */ // 0x8061D79C
    r3 = *(0x20 + r29); // lwz @ 0x8061D7A0
    /* lwzx r3, r3, r31 */ // 0x8061D7A4
    FUN_8061C6C4(); // bl 0x8061C6C4
    r0 = *(0x34 + r29); // lwz @ 0x8061D7AC
    if (!=) goto 0x0x8061d7d8;
    r3 = *(0x20 + r29); // lwz @ 0x8061D7B8
    /* lwzx r4, r3, r31 */ // 0x8061D7BC
    r3 = *(0 + r4); // lwz @ 0x8061D7C0
    r3 = *(4 + r3); // lwz @ 0x8061D7C4
    r0 = *(0x14 + r3); // lwz @ 0x8061D7C8
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x8061D7CC
    if (==) goto 0x0x8061d7d8;
    *(0x34 + r29) = r4; // stw @ 0x8061D7D4
    r30 = r30 + 1; // 0x8061D7D8
    r0 = *(0x24 + r29); // lbz @ 0x8061D7DC
    /* clrlwi r3, r30, 0x18 */ // 0x8061D7E0
    if (<) goto 0x0x8061d784;
    r0 = *(0x28 + r29); // lwz @ 0x8061D7EC
    /* lis r3, 0 */ // 0x8061D7F0
    r0 = r0 | 1; // 0x8061D7F4
    *(0x28 + r29) = r0; // stw @ 0x8061D7F8
    r3 = *(0 + r3); // lwz @ 0x8061D7FC
    r0 = *(0xb70 + r3); // lwz @ 0x8061D800
    if (!=) goto 0x0x8061d848;
    r3 = *(0xb74 + r3); // lwz @ 0x8061D80C
    r0 = r3 + -8; // 0x8061D810
    if (>) goto 0x0x8061d848;
    /* lis r3, 0 */ // 0x8061D81C
    /* lis r4, 0 */ // 0x8061D820
    r3 = *(0 + r3); // lwz @ 0x8061D824
    /* li r5, 0 */ // 0x8061D828
    /* lfs f0, 0(r4) */ // 0x8061D82C
    *(0x28 + r3) = r5; // stw @ 0x8061D830
    r0 = r3 + 0x10; // 0x8061D834
    *(0x1c + r3) = r0; // stw @ 0x8061D838
    /* stfs f0, 0x20(r3) */ // 0x8061D83C
    *(0x24 + r3) = r5; // stb @ 0x8061D840
    FUN_8064889C(); // bl 0x8064889C
    r0 = *(0x24 + r1); // lwz @ 0x8061D848
    r31 = *(0x1c + r1); // lwz @ 0x8061D84C
    r30 = *(0x18 + r1); // lwz @ 0x8061D850
    r29 = *(0x14 + r1); // lwz @ 0x8061D854
    return;
}