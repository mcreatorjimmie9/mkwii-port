/* Function at 0x8087F3D4, size=240 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8087F3D4(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0xd8 + r1) = r30; // stw @ 0x8087F3EC
    r30 = r4;
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x8087F3F8
    /* li r4, 0 */ // 0x8087F3FC
    r3 = *(0 + r3); // lwz @ 0x8087F400
    /* lis r5, 0 */ // 0x8087F404
    r5 = r5 + 0; // 0x8087F408
    r0 = r30 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x8087F410
    *(0x12 + r1) = r4; // stb @ 0x8087F414
    /* lwzx r3, r3, r0 */ // 0x8087F418
    *(0xc + r1) = r4; // sth @ 0x8087F41C
    r6 = *(0x40 + r3); // lwz @ 0x8087F420
    *(0xe + r1) = r4; // stb @ 0x8087F424
    r3 = *(4 + r6); // lhz @ 0x8087F428
    *(0x10 + r1) = r4; // sth @ 0x8087F42C
    r7 = *(6 + r6); // lbz @ 0x8087F430
    r8 = *(8 + r6); // lhz @ 0x8087F438
    r0 = *(0xa + r6); // lbz @ 0x8087F43C
    *(8 + r1) = r5; // stw @ 0x8087F440
    *(0xc + r1) = r3; // sth @ 0x8087F444
    *(0xe + r1) = r7; // stb @ 0x8087F448
    *(0x10 + r1) = r8; // sth @ 0x8087F44C
    *(0x12 + r1) = r0; // stb @ 0x8087F450
    if (<=) goto 0x0x8087f468;
    /* li r3, 0x63 */ // 0x8087F458
    /* li r7, 0x3b */ // 0x8087F45C
    /* li r8, 0x3e7 */ // 0x8087F460
    /* b 0x8087f46c */ // 0x8087F464
    /* clrlwi r3, r3, 0x18 */ // 0x8087F468
    /* lis r4, 0 */ // 0x8087F46C
    /* clrlwi r5, r7, 0x18 */ // 0x8087F470
    /* clrlwi r0, r8, 0x10 */ // 0x8087F474
    *(0x14 + r1) = r3; // stw @ 0x8087F478
    r4 = r4 + 0; // 0x8087F47C
    r3 = r31;
    *(0x18 + r1) = r5; // stw @ 0x8087F484
    r4 = r4 + 0x11c; // 0x8087F488
    /* li r5, 0x578 */ // 0x8087F490
    *(0x1c + r1) = r0; // stw @ 0x8087F494
    FUN_806A093C(r4, r6, r5); // bl 0x806A093C
    /* lis r4, 0 */ // 0x8087F49C
    r3 = r31;
    r4 = r4 + 0; // 0x8087F4A4
    FUN_806A0B6C(r4, r3, r4); // bl 0x806A0B6C
    r0 = *(0xe4 + r1); // lwz @ 0x8087F4AC
    r31 = *(0xdc + r1); // lwz @ 0x8087F4B0
    r30 = *(0xd8 + r1); // lwz @ 0x8087F4B4
    return;
}