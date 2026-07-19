/* Function at 0x8074D464, size=464 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 8 function(s) */

int FUN_8074D464(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8074D470
    r31 = r3;
    r0 = *(0x14d + r3); // lbz @ 0x8074D478
    if (==) goto 0x0x8074d498;
    if (==) goto 0x0x8074d524;
    if (==) goto 0x0x8074d5b8;
    /* b 0x8074d620 */ // 0x8074D494
    r3 = *(8 + r3); // lwz @ 0x8074D498
    /* li r4, 0 */ // 0x8074D49C
    r3 = *(0x28 + r3); // lwz @ 0x8074D4A0
    FUN_805E7060(r4); // bl 0x805E7060
    r0 = *(8 + r3); // lhz @ 0x8074D4A8
    if (==) goto 0x0x8074d4e4;
    r0 = *(0x120 + r31); // lwz @ 0x8074D4B4
    if (!=) goto 0x0x8074d4e4;
    r4 = *(8 + r31); // lwz @ 0x8074D4C0
    /* lis r3, 0 */ // 0x8074D4C4
    /* lis r5, 0 */ // 0x8074D4C8
    /* lfs f1, 0(r3) */ // 0x8074D4CC
    r3 = *(0x28 + r4); // lwz @ 0x8074D4D0
    /* li r4, 2 */ // 0x8074D4D4
    /* lfs f2, 0(r5) */ // 0x8074D4D8
    /* li r5, 1 */ // 0x8074D4DC
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    r4 = *(0x134 + r31); // lwz @ 0x8074D4E4
    if (!=) goto 0x0x8074d620;
    /* li r0, 1 */ // 0x8074D4F0
    *(0x150 + r31) = r4; // sth @ 0x8074D4F4
    /* lis r3, 0 */ // 0x8074D4F8
    /* lis r6, 0 */ // 0x8074D4FC
    *(0x14d + r31) = r0; // stb @ 0x8074D500
    /* li r4, 3 */ // 0x8074D504
    r7 = *(8 + r31); // lwz @ 0x8074D508
    /* li r5, 1 */ // 0x8074D50C
    /* lfs f1, 0(r3) */ // 0x8074D510
    r3 = *(0x28 + r7); // lwz @ 0x8074D514
    /* lfs f2, 0(r6) */ // 0x8074D518
    FUN_805E73A4(r5); // bl 0x805E73A4
    /* b 0x8074d620 */ // 0x8074D520
    r3 = *(8 + r3); // lwz @ 0x8074D524
    /* li r4, 0 */ // 0x8074D528
    r3 = *(0x28 + r3); // lwz @ 0x8074D52C
    FUN_805E7060(r4); // bl 0x805E7060
    r0 = *(8 + r3); // lhz @ 0x8074D534
    if (==) goto 0x0x8074d570;
    r0 = *(0x120 + r31); // lwz @ 0x8074D540
    if (!=) goto 0x0x8074d570;
    r4 = *(8 + r31); // lwz @ 0x8074D54C
    /* lis r3, 0 */ // 0x8074D550
    /* lis r5, 0 */ // 0x8074D554
    /* lfs f1, 0(r3) */ // 0x8074D558
    r3 = *(0x28 + r4); // lwz @ 0x8074D55C
    /* li r4, 3 */ // 0x8074D560
    /* lfs f2, 0(r5) */ // 0x8074D564
    /* li r5, 1 */ // 0x8074D568
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    r3 = *(0x14e + r31); // lhz @ 0x8074D570
    r0 = *(0x150 + r31); // lhz @ 0x8074D574
    r4 = *(0x134 + r31); // lwz @ 0x8074D578
    r0 = r3 + r0; // 0x8074D57C
    if (<=) goto 0x0x8074d620;
    /* li r0, 2 */ // 0x8074D588
    *(0x14d + r31) = r0; // stb @ 0x8074D58C
    /* lis r3, 0 */ // 0x8074D590
    /* lis r5, 0 */ // 0x8074D594
    /* lfs f2, 0(r5) */ // 0x8074D598
    /* li r5, 1 */ // 0x8074D59C
    r4 = *(8 + r31); // lwz @ 0x8074D5A0
    /* lfs f1, 0(r3) */ // 0x8074D5A4
    r3 = *(0x28 + r4); // lwz @ 0x8074D5A8
    /* li r4, 4 */ // 0x8074D5AC
    FUN_805E73A4(r5, r4); // bl 0x805E73A4
    /* b 0x8074d620 */ // 0x8074D5B4
    r3 = *(8 + r3); // lwz @ 0x8074D5B8
    /* li r4, 0 */ // 0x8074D5BC
    r3 = *(0x28 + r3); // lwz @ 0x8074D5C0
    FUN_805E7060(r4); // bl 0x805E7060
    r0 = *(8 + r3); // lhz @ 0x8074D5C8
    if (==) goto 0x0x8074d604;
    r0 = *(0x120 + r31); // lwz @ 0x8074D5D4
    if (!=) goto 0x0x8074d604;
    r4 = *(8 + r31); // lwz @ 0x8074D5E0
    /* lis r3, 0 */ // 0x8074D5E4
    /* lis r5, 0 */ // 0x8074D5E8
    /* lfs f1, 0(r3) */ // 0x8074D5EC
    r3 = *(0x28 + r4); // lwz @ 0x8074D5F0
    /* li r4, 4 */ // 0x8074D5F4
    /* lfs f2, 0(r5) */ // 0x8074D5F8
    /* li r5, 1 */ // 0x8074D5FC
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    r3 = *(0x14e + r31); // lhz @ 0x8074D604
    r0 = *(0x134 + r31); // lwz @ 0x8074D608
    r3 = r3 + 0x64; // 0x8074D60C
    if (!=) goto 0x0x8074d620;
    /* li r0, 2 */ // 0x8074D618
    *(0x130 + r31) = r0; // stw @ 0x8074D61C
    r0 = *(0x14 + r1); // lwz @ 0x8074D620
    r31 = *(0xc + r1); // lwz @ 0x8074D624
    return;
}