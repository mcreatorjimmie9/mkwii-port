/* Function at 0x806EF3D0, size=332 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806EF3D0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x806EF3D8
    *(0xc + r1) = r31; // stw @ 0x806EF3E0
    /* li r31, 0 */ // 0x806EF3E4
    *(8 + r1) = r30; // stw @ 0x806EF3E8
    r30 = r3;
    *(0 + r3) = r31; // stb @ 0x806EF3F0
    r3 = *(0 + r4); // lwz @ 0x806EF3F4
    FUN_806E6B58(); // bl 0x806E6B58
    /* li r0, 6 */ // 0x806EF3FC
    /* li r4, 0xff */ // 0x806EF400
    *(4 + r30) = r31; // stw @ 0x806EF404
    /* li r5, 0 */ // 0x806EF408
    /* li r3, -1 */ // 0x806EF40C
    *(8 + r30) = r31; // stw @ 0x806EF410
    *(0xc + r30) = r31; // stw @ 0x806EF414
    *(0x10 + r30) = r4; // stb @ 0x806EF418
    *(0x1c + r30) = r31; // stw @ 0x806EF41C
    *(0x18 + r30) = r31; // stw @ 0x806EF420
    /* mtctr r0 */ // 0x806EF424
    /* clrlwi r0, r5, 0x18 */ // 0x806EF428
    r5 = r5 + 1; // 0x806EF42C
    /* mulli r6, r0, 0x30 */ // 0x806EF430
    /* clrlwi r0, r5, 0x18 */ // 0x806EF434
    r5 = r5 + 1; // 0x806EF438
    r7 = r30 + r6; // 0x806EF43C
    *(0x20 + r7) = r31; // stw @ 0x806EF440
    /* mulli r6, r0, 0x30 */ // 0x806EF444
    *(0x34 + r7) = r3; // stw @ 0x806EF448
    *(0x38 + r7) = r31; // stw @ 0x806EF44C
    *(0x3c + r7) = r31; // stw @ 0x806EF450
    *(0x4c + r7) = r31; // stb @ 0x806EF454
    *(0x24 + r7) = r3; // stw @ 0x806EF458
    *(0x2c + r7) = r3; // stw @ 0x806EF45C
    *(0x4d + r7) = r31; // stb @ 0x806EF460
    *(0x28 + r7) = r3; // stw @ 0x806EF464
    *(0x30 + r7) = r3; // stw @ 0x806EF468
    *(0x4e + r7) = r31; // stb @ 0x806EF46C
    *(0x40 + r7) = r4; // stb @ 0x806EF470
    *(0x41 + r7) = r4; // stb @ 0x806EF474
    *(0x42 + r7) = r4; // stb @ 0x806EF478
    *(0x43 + r7) = r4; // stb @ 0x806EF47C
    *(0x44 + r7) = r4; // stb @ 0x806EF480
    *(0x45 + r7) = r4; // stb @ 0x806EF484
    *(0x46 + r7) = r4; // stb @ 0x806EF488
    *(0x47 + r7) = r4; // stb @ 0x806EF48C
    *(0x48 + r7) = r4; // stb @ 0x806EF490
    *(0x49 + r7) = r4; // stb @ 0x806EF494
    *(0x4a + r7) = r4; // stb @ 0x806EF498
    *(0x4b + r7) = r4; // stb @ 0x806EF49C
    r7 = r30 + r6; // 0x806EF4A0
    *(0x20 + r7) = r31; // stw @ 0x806EF4A4
    *(0x34 + r7) = r3; // stw @ 0x806EF4A8
    *(0x38 + r7) = r31; // stw @ 0x806EF4AC
    *(0x3c + r7) = r31; // stw @ 0x806EF4B0
    *(0x4c + r7) = r31; // stb @ 0x806EF4B4
    *(0x24 + r7) = r3; // stw @ 0x806EF4B8
    *(0x2c + r7) = r3; // stw @ 0x806EF4BC
    *(0x4d + r7) = r31; // stb @ 0x806EF4C0
    *(0x28 + r7) = r3; // stw @ 0x806EF4C4
    *(0x30 + r7) = r3; // stw @ 0x806EF4C8
    *(0x4e + r7) = r31; // stb @ 0x806EF4CC
    *(0x40 + r7) = r4; // stb @ 0x806EF4D0
    *(0x41 + r7) = r4; // stb @ 0x806EF4D4
    *(0x42 + r7) = r4; // stb @ 0x806EF4D8
    *(0x43 + r7) = r4; // stb @ 0x806EF4DC
    *(0x44 + r7) = r4; // stb @ 0x806EF4E0
    *(0x45 + r7) = r4; // stb @ 0x806EF4E4
    *(0x46 + r7) = r4; // stb @ 0x806EF4E8
    *(0x47 + r7) = r4; // stb @ 0x806EF4EC
    *(0x48 + r7) = r4; // stb @ 0x806EF4F0
    *(0x49 + r7) = r4; // stb @ 0x806EF4F4
    *(0x4a + r7) = r4; // stb @ 0x806EF4F8
    *(0x4b + r7) = r4; // stb @ 0x806EF4FC
    if (counter-- != 0) goto 0x0x806ef428;
    r0 = *(0x14 + r1); // lwz @ 0x806EF504
    r31 = *(0xc + r1); // lwz @ 0x806EF508
    r30 = *(8 + r1); // lwz @ 0x806EF50C
    return;
}