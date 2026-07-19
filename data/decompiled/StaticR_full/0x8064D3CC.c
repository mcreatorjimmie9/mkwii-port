/* Function at 0x8064D3CC, size=344 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_8064D3CC(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8064D3DC
    r31 = r31 + 0; // 0x8064D3E0
    *(0x38 + r1) = r30; // stw @ 0x8064D3E4
    r30 = r3;
    *(0x34 + r1) = r29; // stw @ 0x8064D3EC
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x8064D3F4
    r29 = r30 + 0x44; // 0x8064D3F8
    r3 = r3 + 0; // 0x8064D3FC
    *(0 + r30) = r3; // stw @ 0x8064D400
    r3 = r29;
    FUN_806A0418(r3, r3, r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x8064D40C
    r3 = r30 + 0x1b8; // 0x8064D410
    r4 = r4 + 0; // 0x8064D414
    *(0 + r29) = r4; // stw @ 0x8064D418
    FUN_806497A4(r4, r3, r4); // bl 0x806497A4
    r29 = r30 + 0x40c; // 0x8064D420
    r3 = r29;
    FUN_806497A4(r4, r3); // bl 0x806497A4
    /* lis r3, 0 */ // 0x8064D42C
    /* lis r5, 0 */ // 0x8064D430
    /* lfs f0, 0(r3) */ // 0x8064D434
    r5 = r5 + 0; // 0x8064D438
    /* li r4, 0x7d1 */ // 0x8064D43C
    /* li r0, 0 */ // 0x8064D440
    *(0 + r29) = r5; // stw @ 0x8064D444
    r3 = r30 + 0x670; // 0x8064D448
    *(0x254 + r29) = r4; // stw @ 0x8064D44C
    *(0x258 + r29) = r0; // stw @ 0x8064D450
    /* stfs f0, 0x25c(r29) */ // 0x8064D454
    FUN_8066CEBC(r3); // bl 0x8066CEBC
    r3 = r31 + 0; // 0x8064D45C
    r29 = *(0 + r31); // lwz @ 0x8064D460
    r12 = *(4 + r3); // lwz @ 0x8064D464
    /* lis r7, 0 */ // 0x8064D468
    r11 = *(8 + r3); // lwz @ 0x8064D46C
    r7 = r7 + 0; // 0x8064D470
    *(0x7f4 + r30) = r11; // stw @ 0x8064D474
    /* lis r4, 0 */ // 0x8064D478
    r6 = r31 + 0xc; // 0x8064D47C
    r5 = r31 + 0x18; // 0x8064D480
    *(0x7e4 + r30) = r7; // stw @ 0x8064D484
    r4 = r4 + 0; // 0x8064D488
    r3 = r30 + 0x828; // 0x8064D48C
    *(0x7e8 + r30) = r30; // stw @ 0x8064D490
    *(0x7ec + r30) = r29; // stw @ 0x8064D494
    *(0x7f0 + r30) = r12; // stw @ 0x8064D498
    r10 = *(0xc + r31); // lwz @ 0x8064D49C
    r9 = *(4 + r6); // lwz @ 0x8064D4A0
    r8 = *(8 + r6); // lwz @ 0x8064D4A4
    *(0x808 + r30) = r8; // stw @ 0x8064D4A8
    *(0x7f8 + r30) = r7; // stw @ 0x8064D4AC
    *(0x7fc + r30) = r30; // stw @ 0x8064D4B0
    *(0x800 + r30) = r10; // stw @ 0x8064D4B4
    *(0x804 + r30) = r9; // stw @ 0x8064D4B8
    r7 = *(0x18 + r31); // lwz @ 0x8064D4BC
    r6 = *(4 + r5); // lwz @ 0x8064D4C0
    r0 = *(8 + r5); // lwz @ 0x8064D4C4
    *(0x20 + r1) = r29; // stw @ 0x8064D4C8
    *(0x24 + r1) = r12; // stw @ 0x8064D4CC
    *(0x28 + r1) = r11; // stw @ 0x8064D4D0
    *(0x14 + r1) = r10; // stw @ 0x8064D4D4
    *(0x18 + r1) = r9; // stw @ 0x8064D4D8
    *(0x1c + r1) = r8; // stw @ 0x8064D4DC
    *(8 + r1) = r7; // stw @ 0x8064D4E0
    *(0xc + r1) = r6; // stw @ 0x8064D4E4
    *(0x10 + r1) = r0; // stw @ 0x8064D4E8
    *(0x80c + r30) = r4; // stw @ 0x8064D4EC
    *(0x810 + r30) = r30; // stw @ 0x8064D4F0
    *(0x814 + r30) = r7; // stw @ 0x8064D4F4
    *(0x818 + r30) = r6; // stw @ 0x8064D4F8
    *(0x81c + r30) = r0; // stw @ 0x8064D4FC
    FUN_80669F74(); // bl 0x80669F74
    r3 = r30;
    r31 = *(0x3c + r1); // lwz @ 0x8064D508
    r30 = *(0x38 + r1); // lwz @ 0x8064D50C
    r29 = *(0x34 + r1); // lwz @ 0x8064D510
    r0 = *(0x44 + r1); // lwz @ 0x8064D514
    return;
}