/* Function at 0x806F0374, size=368 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806F0374(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x806F037C
    *(0xc + r1) = r31; // stw @ 0x806F0384
    /* li r31, 0 */ // 0x806F0388
    *(8 + r1) = r30; // stw @ 0x806F038C
    r30 = r3;
    *(0 + r3) = r31; // stb @ 0x806F0394
    *(4 + r3) = r31; // stw @ 0x806F0398
    *(8 + r3) = r31; // stw @ 0x806F039C
    *(0xc + r3) = r31; // stw @ 0x806F03A0
    *(1 + r3) = r31; // stb @ 0x806F03A4
    r3 = *(0 + r4); // lwz @ 0x806F03A8
    FUN_806E6B58(); // bl 0x806E6B58
    /* li r0, 6 */ // 0x806F03B0
    /* li r4, 0xff */ // 0x806F03B4
    *(4 + r30) = r31; // stw @ 0x806F03B8
    /* li r5, 0 */ // 0x806F03BC
    /* li r3, -1 */ // 0x806F03C0
    *(8 + r30) = r31; // stw @ 0x806F03C4
    *(0xc + r30) = r31; // stw @ 0x806F03C8
    *(0x10 + r30) = r4; // stb @ 0x806F03CC
    *(0x1c + r30) = r31; // stw @ 0x806F03D0
    *(0x18 + r30) = r31; // stw @ 0x806F03D4
    /* mtctr r0 */ // 0x806F03D8
    /* clrlwi r0, r5, 0x18 */ // 0x806F03DC
    r5 = r5 + 1; // 0x806F03E0
    /* mulli r6, r0, 0x30 */ // 0x806F03E4
    /* clrlwi r0, r5, 0x18 */ // 0x806F03E8
    r5 = r5 + 1; // 0x806F03EC
    r7 = r30 + r6; // 0x806F03F0
    *(0x20 + r7) = r31; // stw @ 0x806F03F4
    /* mulli r6, r0, 0x30 */ // 0x806F03F8
    *(0x34 + r7) = r3; // stw @ 0x806F03FC
    *(0x38 + r7) = r31; // stw @ 0x806F0400
    *(0x3c + r7) = r31; // stw @ 0x806F0404
    *(0x4c + r7) = r31; // stb @ 0x806F0408
    *(0x24 + r7) = r3; // stw @ 0x806F040C
    *(0x2c + r7) = r3; // stw @ 0x806F0410
    *(0x4d + r7) = r31; // stb @ 0x806F0414
    *(0x28 + r7) = r3; // stw @ 0x806F0418
    *(0x30 + r7) = r3; // stw @ 0x806F041C
    *(0x4e + r7) = r31; // stb @ 0x806F0420
    *(0x40 + r7) = r4; // stb @ 0x806F0424
    *(0x41 + r7) = r4; // stb @ 0x806F0428
    *(0x42 + r7) = r4; // stb @ 0x806F042C
    *(0x43 + r7) = r4; // stb @ 0x806F0430
    *(0x44 + r7) = r4; // stb @ 0x806F0434
    *(0x45 + r7) = r4; // stb @ 0x806F0438
    *(0x46 + r7) = r4; // stb @ 0x806F043C
    *(0x47 + r7) = r4; // stb @ 0x806F0440
    *(0x48 + r7) = r4; // stb @ 0x806F0444
    *(0x49 + r7) = r4; // stb @ 0x806F0448
    *(0x4a + r7) = r4; // stb @ 0x806F044C
    *(0x4b + r7) = r4; // stb @ 0x806F0450
    r7 = r30 + r6; // 0x806F0454
    *(0x20 + r7) = r31; // stw @ 0x806F0458
    *(0x34 + r7) = r3; // stw @ 0x806F045C
    *(0x38 + r7) = r31; // stw @ 0x806F0460
    *(0x3c + r7) = r31; // stw @ 0x806F0464
    *(0x4c + r7) = r31; // stb @ 0x806F0468
    *(0x24 + r7) = r3; // stw @ 0x806F046C
    *(0x2c + r7) = r3; // stw @ 0x806F0470
    *(0x4d + r7) = r31; // stb @ 0x806F0474
    *(0x28 + r7) = r3; // stw @ 0x806F0478
    *(0x30 + r7) = r3; // stw @ 0x806F047C
    *(0x4e + r7) = r31; // stb @ 0x806F0480
    *(0x40 + r7) = r4; // stb @ 0x806F0484
    *(0x41 + r7) = r4; // stb @ 0x806F0488
    *(0x42 + r7) = r4; // stb @ 0x806F048C
    *(0x43 + r7) = r4; // stb @ 0x806F0490
    *(0x44 + r7) = r4; // stb @ 0x806F0494
    *(0x45 + r7) = r4; // stb @ 0x806F0498
    *(0x46 + r7) = r4; // stb @ 0x806F049C
    *(0x47 + r7) = r4; // stb @ 0x806F04A0
    *(0x48 + r7) = r4; // stb @ 0x806F04A4
    *(0x49 + r7) = r4; // stb @ 0x806F04A8
    *(0x4a + r7) = r4; // stb @ 0x806F04AC
    *(0x4b + r7) = r4; // stb @ 0x806F04B0
    if (counter-- != 0) goto 0x0x806f03dc;
    /* lis r3, 0 */ // 0x806F04B8
    /* li r0, 0 */ // 0x806F04BC
    r4 = *(0 + r3); // lwz @ 0x806F04C0
    r3 = r30;
    *(0x29c0 + r4) = r0; // stw @ 0x806F04C8
    r31 = *(0xc + r1); // lwz @ 0x806F04CC
    r30 = *(8 + r1); // lwz @ 0x806F04D0
    r0 = *(0x14 + r1); // lwz @ 0x806F04D4
    return;
}