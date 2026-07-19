/* Function at 0x8064252C, size=164 bytes */
/* Stack frame: 32 bytes */

void FUN_8064252C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* lis r4, 0 */ // 0x8064252C
    /* lfs f2, 0(r4) */ // 0x80642534
    /* li r7, -1 */ // 0x80642538
    *(0x10 + r3) = r7; // stw @ 0x8064253C
    /* lis r6, 0 */ // 0x80642540
    /* lis r4, 0 */ // 0x80642544
    /* li r0, 0 */ // 0x80642548
    /* stfs f2, 0x2c(r3) */ // 0x8064254C
    r5 = r6 + 0; // 0x80642550
    /* lfs f0, 0(r4) */ // 0x80642554
    /* stfs f2, 0x30(r3) */ // 0x80642558
    /* stfs f2, 0x34(r3) */ // 0x8064255C
    /* lfs f1, 0(r6) */ // 0x80642560
    /* stfs f1, 0x14(r3) */ // 0x80642564
    /* lfs f1, 4(r5) */ // 0x80642568
    /* stfs f1, 0x18(r3) */ // 0x8064256C
    /* lfs f1, 8(r5) */ // 0x80642570
    /* stfs f1, 0x1c(r3) */ // 0x80642574
    /* lfs f1, 0(r6) */ // 0x80642578
    /* stfs f1, 0x20(r3) */ // 0x8064257C
    /* lfs f1, 4(r5) */ // 0x80642580
    /* stfs f1, 0x24(r3) */ // 0x80642584
    /* lfs f1, 8(r5) */ // 0x80642588
    /* stfs f2, 0x14(r1) */ // 0x8064258C
    /* stfs f2, 0x18(r1) */ // 0x80642590
    /* stfs f2, 0x1c(r1) */ // 0x80642594
    /* stfs f1, 0x28(r3) */ // 0x80642598
    *(0x38 + r3) = r0; // stb @ 0x8064259C
    /* stfs f0, 0x3c(r3) */ // 0x806425A0
    *(0x60 + r3) = r7; // stw @ 0x806425A4
    *(0x64 + r3) = r0; // stb @ 0x806425A8
    /* stfs f0, 0x68(r3) */ // 0x806425AC
    /* stfs f2, 8(r1) */ // 0x806425B0
    /* stfs f2, 0xc(r1) */ // 0x806425B4
    /* stfs f2, 0x10(r1) */ // 0x806425B8
    /* stfs f2, 0x6c(r3) */ // 0x806425BC
    /* stfs f2, 0x70(r3) */ // 0x806425C0
    /* stfs f2, 0x74(r3) */ // 0x806425C4
    return;
}