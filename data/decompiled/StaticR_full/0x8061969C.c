/* Function at 0x8061969C, size=308 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 11 function(s) */

int FUN_8061969C(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806196A4
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x806196B4
    /* lis r30, 0 */ // 0x806196B8
    r30 = r30 + 0; // 0x806196BC
    *(0x24 + r1) = r29; // stw @ 0x806196C0
    r4 = *(0 + r4); // lwz @ 0x806196C4
    r0 = *(0xb74 + r4); // lwz @ 0x806196C8
    if (!=) goto 0x0x806196fc;
    r0 = *(0x58 + r3); // lbz @ 0x806196D4
    if (!=) goto 0x0x806196fc;
    r4 = r3 + 0x68; // 0x806196E0
    FUN_80619958(r4); // bl 0x80619958
    r3 = r31;
    FUN_8061E6A4(r4, r3); // bl 0x8061E6A4
    /* li r0, 1 */ // 0x806196F0
    *(0x58 + r31) = r0; // stb @ 0x806196F4
    /* b 0x806198e8 */ // 0x806196F8
    r4 = *(0x64 + r3); // lwz @ 0x806196FC
    r3 = *(0x18 + r4); // lwz @ 0x80619700
    r0 = *(0x1c + r4); // lwz @ 0x80619704
    r3 = r3 rlwinm 0x18; // rlwinm
    r0 = r0 rlwinm 0x18; // rlwinm
    if (==) goto 0x0x806197ac;
    r3 = r31;
    FUN_8061DFE0(r3); // bl 0x8061DFE0
    FUN_80623978(r3); // bl 0x80623978
    r3 = r31;
    r4 = r31 + 0x68; // 0x80619728
    FUN_80619958(r3, r3, r4); // bl 0x80619958
    r4 = *(0x68 + r31); // lwz @ 0x80619730
    r3 = r31;
    r0 = *(0x6c + r31); // lwz @ 0x80619738
    *(0xc + r1) = r0; // stw @ 0x8061973C
    /* lfs f0, 0x74(r30) */ // 0x80619740
    *(8 + r1) = r4; // stw @ 0x80619744
    /* lfs f1, 0xc(r1) */ // 0x80619748
    r0 = *(0x70 + r31); // lwz @ 0x8061974C
    /* fsubs f0, f1, f0 */ // 0x80619750
    *(0x10 + r1) = r0; // stw @ 0x80619754
    /* stfs f0, 0xc(r1) */ // 0x80619758
    FUN_8061DFF8(); // bl 0x8061DFF8
    FUN_80611EC4(r4); // bl 0x80611EC4
    r3 = r31;
    FUN_8061E6A4(r4, r3); // bl 0x8061E6A4
    r3 = r31;
    FUN_8061E2D8(r4, r3, r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x80619778
    /* clrlwi r0, r3, 0x18 */ // 0x8061977C
    r3 = *(0 + r4); // lwz @ 0x80619780
    /* mulli r0, r0, 0x248 */ // 0x80619784
    r3 = *(0x14 + r3); // lwz @ 0x80619788
    r3 = r3 + r0; // 0x8061978C
    FUN_80824018(); // bl 0x80824018
    r3 = *(0x60 + r31); // lhz @ 0x80619794
    /* li r0, 0 */ // 0x80619798
    *(0x5c + r31) = r0; // stw @ 0x8061979C
    r0 = r3 rlwinm 0; // rlwinm
    *(0x60 + r31) = r0; // sth @ 0x806197A4
    /* b 0x806198e8 */ // 0x806197A8
    r3 = r31;
    FUN_8061DA88(r3); // bl 0x8061DA88
    r4 = *(0 + r31); // lwz @ 0x806197B4
    /* li r29, 0 */ // 0x806197B8
    /* lfs f1, 0x68(r31) */ // 0x806197BC
    /* lfs f0, 0(r3) */ // 0x806197C0
    r4 = *(4 + r4); // lwz @ 0x806197C4
    /* fsubs f5, f1, f0 */ // 0x806197C8
    /* lfs f3, 0x6c(r31) */ // 0x806197CC
}