/* Function at 0x809134B4, size=264 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_809134B4(int r3, int r4)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x809134BC
    *(0xdc + r1) = r31; // stw @ 0x809134C4
    /* lis r31, 0 */ // 0x809134C8
    r31 = r31 + 0; // 0x809134CC
    *(0xd8 + r1) = r30; // stw @ 0x809134D0
    r30 = r3;
    /* lfs f1, 0(r31) */ // 0x809134D8
    *(0xd4 + r1) = r29; // stw @ 0x809134DC
    r3 = *(0x20 + r3); // lwz @ 0x809134E0
    r12 = *(0 + r3); // lwz @ 0x809134E4
    r12 = *(0x10 + r12); // lwz @ 0x809134E8
    /* mtctr r12 */ // 0x809134EC
    /* bctrl  */ // 0x809134F0
    r3 = *(0xa0 + r30); // lwz @ 0x809134F4
    /* lfs f1, 0(r31) */ // 0x809134F8
    r3 = *(0 + r3); // lwz @ 0x809134FC
    /* lfs f0, 0x48(r31) */ // 0x80913500
    r3 = *(0x2c + r3); // lha @ 0x80913504
    /* neg r0, r3 */ // 0x80913508
    /* stfs f1, 0xd4(r30) */ // 0x8091350C
    r0 = r0 | r3; // 0x80913510
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x80913514
    /* stfs f0, 0xd8(r30) */ // 0x80913518
    *(0xd0 + r30) = r0; // stb @ 0x8091351C
    /* stfs f1, 0xdc(r30) */ // 0x80913520
    if (==) goto 0x0x80913530;
    /* fneg f0, f0 */ // 0x80913528
    /* stfs f0, 0xd8(r30) */ // 0x8091352C
    r3 = *(0x20 + r30); // lwz @ 0x80913530
    r0 = *(0x44 + r3); // lbz @ 0x80913534
    if (!=) goto 0x0x8091354c;
    /* lfs f0, 0xd8(r30) */ // 0x80913540
    /* fneg f0, f0 */ // 0x80913544
    /* stfs f0, 0xd8(r30) */ // 0x80913548
    r3 = *(0xa0 + r30); // lwz @ 0x8091354C
    /* lis r0, 0x4330 */ // 0x80913550
    *(0xc0 + r1) = r0; // stw @ 0x80913554
    r3 = *(0 + r3); // lwz @ 0x80913558
    /* lfd f1, 0x50(r31) */ // 0x8091355C
    r0 = *(0x2a + r3); // lha @ 0x80913560
    r3 = *(0x20 + r30); // lwz @ 0x80913564
    /* xoris r0, r0, 0x8000 */ // 0x80913568
    *(0xc4 + r1) = r0; // stw @ 0x8091356C
    /* lfd f0, 0xc0(r1) */ // 0x80913570
    /* fsubs f1, f0, f1 */ // 0x80913574
    /* stfs f1, 0xbc(r30) */ // 0x80913578
    r12 = *(0 + r3); // lwz @ 0x8091357C
    r12 = *(0x18 + r12); // lwz @ 0x80913580
    /* mtctr r12 */ // 0x80913584
    /* bctrl  */ // 0x80913588
    r4 = *(0x20 + r30); // lwz @ 0x8091358C
    r0 = *(0x2c + r30); // lhz @ 0x80913594
    /* lfs f0, 0x20(r4) */ // 0x80913598
    /* lfs f1, 0x1c(r4) */ // 0x8091359C
    r0 = r0 | 1; // 0x809135A0
    /* lfs f2, 0x18(r4) */ // 0x809135A4
    /* stfs f2, 0x30(r30) */ // 0x809135A8
    *(0x2c + r30) = r0; // sth @ 0x809135AC
    /* stfs f1, 0x34(r30) */ // 0x809135B0
    /* stfs f0, 0x38(r30) */ // 0x809135B4
    FUN_805E3430(); // bl 0x805E3430
}