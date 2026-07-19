/* Function at 0x807C317C, size=188 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807C317C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807C318C
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x807C3194
    if (==) goto 0x0x807c31b0;
    r0 = *(0x14 + r3); // lbz @ 0x807C319C
    if (==) goto 0x0x807c31c0;
    /* li r3, 0 */ // 0x807C31A8
    /* b 0x807c3220 */ // 0x807C31AC
    /* li r0, 0 */ // 0x807C31B0
    *(0x14 + r3) = r0; // stb @ 0x807C31B4
    /* li r3, 0 */ // 0x807C31B8
    /* b 0x807c3220 */ // 0x807C31BC
    /* li r0, 1 */ // 0x807C31C0
    *(0x14 + r3) = r0; // stb @ 0x807C31C4
    /* lis r30, 0 */ // 0x807C31C8
    /* li r4, 0x64 */ // 0x807C31CC
    r3 = *(0 + r30); // lwz @ 0x807C31D0
    FUN_807C03BC(r4); // bl 0x807C03BC
    r4 = *(0xc + r31); // lwz @ 0x807C31D8
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x807C31E0
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807C31E8
    r0 = r3 rlwinm 2; // rlwinm
    r4 = *(0 + r4); // lwz @ 0x807C31F0
    r3 = *(0 + r30); // lwz @ 0x807C31F4
    r4 = *(0xc + r4); // lwz @ 0x807C31F8
    r3 = *(0x8c + r3); // lwz @ 0x807C31FC
    /* lwzx r4, r4, r0 */ // 0x807C3200
    r4 = *(0x20 + r4); // lbz @ 0x807C3204
    r4 = r4 + -1; // 0x807C3208
    FUN_807C1700(r4); // bl 0x807C1700
    r0 = *(2 + r3); // lbz @ 0x807C3210
    /* clrlwi r3, r31, 0x18 */ // 0x807C3214
    /* subf r0, r0, r3 */ // 0x807C3218
    /* srwi r3, r0, 0x1f */ // 0x807C321C
    r0 = *(0x14 + r1); // lwz @ 0x807C3220
    r31 = *(0xc + r1); // lwz @ 0x807C3224
    r30 = *(8 + r1); // lwz @ 0x807C3228
    return;
}