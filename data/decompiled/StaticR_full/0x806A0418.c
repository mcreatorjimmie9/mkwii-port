/* Function at 0x806A0418, size=296 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_806A0418(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806A0420
    /* lis r5, 0 */ // 0x806A0424
    *(0x24 + r1) = r0; // stw @ 0x806A0428
    /* li r0, 0xff */ // 0x806A042C
    /* lfs f0, 0(r4) */ // 0x806A0430
    r5 = r5 + 0; // 0x806A0434
    *(0x1c + r1) = r31; // stw @ 0x806A0438
    /* li r31, 0 */ // 0x806A043C
    *(0x18 + r1) = r30; // stw @ 0x806A0440
    /* lis r30, 0 */ // 0x806A0444
    /* lfs f1, 0(r30) */ // 0x806A0448
    *(0x14 + r1) = r29; // stw @ 0x806A044C
    r29 = r3;
    *(0 + r3) = r5; // stw @ 0x806A0454
    /* stfs f1, 4(r3) */ // 0x806A0458
    /* stfs f1, 8(r3) */ // 0x806A045C
    /* stfs f1, 0xc(r3) */ // 0x806A0460
    /* stfs f0, 0x10(r3) */ // 0x806A0464
    /* stfs f0, 0x14(r3) */ // 0x806A0468
    *(0x18 + r3) = r0; // stb @ 0x806A046C
    /* stfs f1, 0x1c(r3) */ // 0x806A0470
    /* stfs f1, 0x20(r3) */ // 0x806A0474
    /* stfs f1, 0x24(r3) */ // 0x806A0478
    /* stfs f0, 0x28(r3) */ // 0x806A047C
    /* stfs f0, 0x2c(r3) */ // 0x806A0480
    *(0x30 + r3) = r0; // stb @ 0x806A0484
    /* stfs f1, 0x34(r3) */ // 0x806A0488
    /* stfs f1, 0x38(r3) */ // 0x806A048C
    /* stfs f1, 0x3c(r3) */ // 0x806A0490
    /* stfs f0, 0x40(r3) */ // 0x806A0494
    /* stfs f0, 0x44(r3) */ // 0x806A0498
    *(0x48 + r3) = r0; // stb @ 0x806A049C
    /* stfs f1, 0x4c(r3) */ // 0x806A04A0
    /* stfs f1, 0x50(r3) */ // 0x806A04A4
    /* stfs f1, 0x54(r3) */ // 0x806A04A8
    /* stfs f0, 0x58(r3) */ // 0x806A04AC
    /* stfs f0, 0x5c(r3) */ // 0x806A04B0
    *(0x60 + r3) = r0; // stb @ 0x806A04B4
    *(0x64 + r3) = r31; // stw @ 0x806A04B8
    r3 = r3 + 0x68; // 0x806A04BC
    FUN_8064DAF0(r3); // bl 0x8064DAF0
    /* lfs f0, 0(r30) */ // 0x806A04C4
    /* lis r4, 0 */ // 0x806A04C8
    /* li r0, -1 */ // 0x806A04CC
    /* li r5, 1 */ // 0x806A04D0
    r4 = r4 + 0; // 0x806A04D4
    /* stfs f0, 0x7c(r29) */ // 0x806A04D8
    r3 = r29 + 0x98; // 0x806A04DC
    *(0x80 + r29) = r31; // stb @ 0x806A04E0
    *(0x84 + r29) = r31; // stw @ 0x806A04E4
    *(0x88 + r29) = r5; // stb @ 0x806A04E8
    /* stfs f0, 0x8c(r29) */ // 0x806A04EC
    *(0x90 + r29) = r0; // stw @ 0x806A04F0
    *(0x94 + r29) = r0; // stw @ 0x806A04F4
    *(0 + r29) = r4; // stw @ 0x806A04F8
    FUN_8069F06C(); // bl 0x8069F06C
    r3 = r29 + 0xa8; // 0x806A0500
    FUN_80665F5C(r3); // bl 0x80665F5C
    r3 = r29 + 0x144; // 0x806A0508
    FUN_8066C2F0(r3, r3); // bl 0x8066C2F0
    r3 = r29 + 0x158; // 0x806A0510
    FUN_8066C2F0(r3, r3, r3); // bl 0x8066C2F0
    *(0x16c + r29) = r31; // stw @ 0x806A0518
    r3 = r29;
    *(0x170 + r29) = r31; // stw @ 0x806A0520
    r31 = *(0x1c + r1); // lwz @ 0x806A0524
    r30 = *(0x18 + r1); // lwz @ 0x806A0528
    r29 = *(0x14 + r1); // lwz @ 0x806A052C
    r0 = *(0x24 + r1); // lwz @ 0x806A0530
    return;
}