/* Function at 0x80881170, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80881170(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80881184
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8088118C
    r29 = r3;
    FUN_806A0418(); // bl 0x806A0418
    r0 = r30 rlwinm 2; // rlwinm
    /* li r6, 0 */ // 0x8088119C
    /* subf r3, r30, r0 */ // 0x808811A0
    /* lis r7, 0 */ // 0x808811A4
    r4 = r3 + 1; // 0x808811A8
    /* lis r5, 0 */ // 0x808811AC
    /* li r0, 1 */ // 0x808811B0
    r7 = r7 + 0; // 0x808811B4
    r5 = r5 + 0; // 0x808811B8
    *(0 + r29) = r7; // stw @ 0x808811BC
    r3 = r29;
    *(0x198 + r29) = r6; // stw @ 0x808811C4
    *(0x19c + r29) = r5; // stw @ 0x808811C8
    *(0x1a6 + r29) = r6; // stb @ 0x808811CC
    *(0x1a0 + r29) = r6; // sth @ 0x808811D0
    *(0x1a2 + r29) = r6; // stb @ 0x808811D4
    *(0x1a4 + r29) = r6; // sth @ 0x808811D8
    *(0x1ac + r29) = r4; // stw @ 0x808811DC
    *(0x1b4 + r29) = r6; // stb @ 0x808811E0
    *(0x1b5 + r29) = r6; // stb @ 0x808811E4
    *(0x1b6 + r29) = r0; // stb @ 0x808811E8
    *(0x1b8 + r29) = r31; // stw @ 0x808811EC
    r31 = *(0x1c + r1); // lwz @ 0x808811F0
    r30 = *(0x18 + r1); // lwz @ 0x808811F4
    r29 = *(0x14 + r1); // lwz @ 0x808811F8
    r0 = *(0x24 + r1); // lwz @ 0x808811FC
    return;
}