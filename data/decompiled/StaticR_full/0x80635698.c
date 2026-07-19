/* Function at 0x80635698, size=268 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80635698(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806356AC
    *(0x14 + r1) = r29; // stw @ 0x806356B0
    FUN_80633A6C(); // bl 0x80633A6C
    r12 = *(0 + r31); // lwz @ 0x806356B8
    r3 = r31;
    r12 = *(0x14 + r12); // lwz @ 0x806356C0
    /* mtctr r12 */ // 0x806356C4
    /* bctrl  */ // 0x806356C8
    r4 = *(0 + r3); // lwz @ 0x806356CC
    /* li r30, 0 */ // 0x806356D0
    r3 = *(4 + r31); // lwz @ 0x806356D4
    /* lfs f2, 0x14(r4) */ // 0x806356D8
    r3 = *(0x90 + r3); // lwz @ 0x806356DC
    /* lfs f1, 0x10(r4) */ // 0x806356E0
    /* lfs f0, 0xc(r4) */ // 0x806356E4
    /* stfs f0, 0x64(r3) */ // 0x806356E8
    /* stfs f1, 0x68(r3) */ // 0x806356EC
    /* stfs f2, 0x6c(r3) */ // 0x806356F0
    r0 = r30 rlwinm 1; // rlwinm
    r4 = r31 + r0; // 0x806356F8
    r3 = *(0x1b8 + r4); // lha @ 0x806356FC
    if (<=) goto 0x0x8063572c;
    r0 = r3 + -1; // 0x80635708
    *(0x1b8 + r4) = r0; // sth @ 0x8063570C
    /* extsh. r0, r0 */ // 0x80635710
    if (>) goto 0x0x8063572c;
    r0 = r30 rlwinm 2; // rlwinm
    r3 = *(4 + r31); // lwz @ 0x8063571C
    r4 = r31 + r0; // 0x80635720
    /* lfs f1, 0x1d0(r4) */ // 0x80635724
    FUN_8062FC00(); // bl 0x8062FC00
    r30 = r30 + 1; // 0x8063572C
    if (<) goto 0x0x806356f4;
    /* li r29, 0 */ // 0x80635738
    /* lis r30, 0 */ // 0x8063573C
    /* b 0x80635774 */ // 0x80635740
    r0 = r29 rlwinm 1; // rlwinm
    r3 = r31 + r0; // 0x80635748
    r0 = *(0x1b8 + r3); // lha @ 0x8063574C
    if (>) goto 0x0x80635770;
    r3 = *(0 + r30); // lwz @ 0x80635758
    /* clrlwi r4, r29, 0x18 */ // 0x8063575C
    FUN_8061D97C(); // bl 0x8061D97C
    r4 = r3;
    r3 = r31;
    FUN_80636094(r4, r3); // bl 0x80636094
    r29 = r29 + 1; // 0x80635770
    r3 = *(0 + r30); // lwz @ 0x80635774
    /* clrlwi r4, r29, 0x18 */ // 0x80635778
    r0 = *(0x24 + r3); // lbz @ 0x8063577C
    if (<) goto 0x0x80635744;
    r0 = *(0x24 + r1); // lwz @ 0x80635788
    r31 = *(0x1c + r1); // lwz @ 0x8063578C
    r30 = *(0x18 + r1); // lwz @ 0x80635790
    r29 = *(0x14 + r1); // lwz @ 0x80635794
    return;
}