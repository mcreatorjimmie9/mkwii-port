/* Function at 0x807CD54C, size=240 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_807CD54C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x28 + r1) = r30; // stw @ 0x807CD564
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x807CD56C
    r29 = r3;
    if (==) goto 0x0x807cd594;
    if (==) goto 0x0x807cd594;
    if (==) goto 0x0x807cd630;
    if (==) goto 0x0x807cd630;
    /* b 0x807cd6b8 */ // 0x807CD590
    r0 = *(0x34a + r3); // lbz @ 0x807CD594
    if (!=) goto 0x0x807cd5ac;
    r0 = *(0x349 + r3); // lbz @ 0x807CD5A0
    if (==) goto 0x0x807cd5b4;
    /* li r31, 8 */ // 0x807CD5AC
    /* b 0x807cd6b8 */ // 0x807CD5B0
    r3 = r30;
    FUN_8061DEF4(r3); // bl 0x8061DEF4
    if (==) goto 0x0x807cd5d8;
    /* lis r3, 0 */ // 0x807CD5C4
    r3 = *(0 + r3); // lwz @ 0x807CD5C8
    FUN_805C1588(r3); // bl 0x805C1588
    if (==) goto 0x0x807cd6b8;
    r0 = *(0x348 + r29); // lbz @ 0x807CD5D8
    if (!=) goto 0x0x807cd6b8;
    /* li r0, 1 */ // 0x807CD5E4
    *(0x348 + r29) = r0; // stb @ 0x807CD5E8
    r3 = r30;
    FUN_8061DA88(r3); // bl 0x8061DA88
    /* lfs f0, 0(r3) */ // 0x807CD5F4
    /* stfs f0, 0x31c(r29) */ // 0x807CD5F8
    /* lfs f0, 4(r3) */ // 0x807CD5FC
    /* stfs f0, 0x320(r29) */ // 0x807CD600
    /* lfs f0, 8(r3) */ // 0x807CD604
    r3 = r30;
    /* stfs f0, 0x324(r29) */ // 0x807CD60C
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807CD614
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x807CD61C
    r3 = *(0x68 + r3); // lwz @ 0x807CD620
    /* lwzx r3, r3, r0 */ // 0x807CD624
    FUN_807372FC(r4); // bl 0x807372FC
    /* b 0x807cd6b8 */ // 0x807CD62C
    r0 = *(0x349 + r3); // lbz @ 0x807CD630
    if (!=) goto 0x0x807cd6b8;
}