/* Function at 0x80822774, size=172 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_80822774(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r3;
    *(0x10 + r1) = r28; // stw @ 0x80822790
    r28 = r4;
    FUN_8061DA4C(); // bl 0x8061DA4C
    /* li r30, 0 */ // 0x8082279C
    *(0xc + r29) = r30; // sth @ 0x808227A0
    r3 = r28;
    *(0x18 + r29) = r28; // stb @ 0x808227A8
    FUN_80842BFC(r3); // bl 0x80842BFC
    *(0x19 + r29) = r3; // stb @ 0x808227B0
    /* lis r31, 0 */ // 0x808227B4
    /* mulli r0, r28, 0xf0 */ // 0x808227B8
    /* lis r3, 0 */ // 0x808227BC
    r5 = *(0 + r31); // lwz @ 0x808227C0
    r4 = r28;
    r5 = r5 + r0; // 0x808227C8
    r5 = *(0x38 + r5); // lwz @ 0x808227CC
    r0 = r5 + -4; // 0x808227D0
    /* cntlzw r0, r0 */ // 0x808227D4
    /* srwi r0, r0, 5 */ // 0x808227D8
    *(0x1a + r29) = r0; // stb @ 0x808227DC
    r3 = *(0 + r3); // lwz @ 0x808227E0
    FUN_8061D97C(); // bl 0x8061D97C
    *(0x1c + r29) = r3; // stw @ 0x808227E8
    /* lis r3, 0 */ // 0x808227EC
    r0 = r28 rlwinm 2; // rlwinm
    r3 = *(0 + r3); // lwz @ 0x808227F4
    r3 = r3 + r0; // 0x808227F8
    r3 = *(0x10 + r3); // lwz @ 0x808227FC
    *(0x20 + r29) = r3; // stw @ 0x80822800
    FUN_8061E2E8(); // bl 0x8061E2E8
    r0 = r3 + -1; // 0x80822808
    r3 = r29;
    /* cntlzw r0, r0 */ // 0x80822810
    /* srwi r0, r0, 5 */ // 0x80822814
    *(0x1b + r29) = r0; // stb @ 0x80822818
    FUN_8061DA88(r3); // bl 0x8061DA88
}