/* Function at 0x807333D0, size=100 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_807333D0(int r3, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* li r5, 0x13 */ // 0x807333D8
    /* li r6, 0x14 */ // 0x807333DC
    *(0x24 + r1) = r0; // stw @ 0x807333E0
    /* li r7, 0x12 */ // 0x807333E8
    /* li r8, 0x13 */ // 0x807333EC
    /* lfs f2, 0x6d8(r3) */ // 0x807333F0
    /* lfs f1, 0x7cc(r3) */ // 0x807333F4
    /* lfs f0, 0x6d0(r3) */ // 0x807333F8
    /* stfs f0, 0x14(r1) */ // 0x807333FC
    /* stfs f1, 0x18(r1) */ // 0x80733400
    r11 = *(0x14 + r1); // lwz @ 0x80733404
    /* stfs f2, 0x1c(r1) */ // 0x80733408
    r10 = *(0x18 + r1); // lwz @ 0x8073340C
    r0 = *(0x1c + r1); // lwz @ 0x80733410
    *(8 + r1) = r11; // stw @ 0x80733414
    *(0xc + r1) = r10; // stw @ 0x80733418
    *(0x10 + r1) = r0; // stw @ 0x8073341C
    FUN_80732B38(); // bl 0x80732B38
    r0 = *(0x24 + r1); // lwz @ 0x80733424
    return;
}