/* Function at 0x806614E8, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806614E8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x806614F8
    r30 = r3;
    r3 = r3 + 0x188; // 0x80661500
    FUN_8066DB2C(r3); // bl 0x8066DB2C
    /* li r31, -1 */ // 0x80661508
    *(0x220 + r30) = r31; // stw @ 0x8066150C
    r3 = r30 + 0x238; // 0x80661510
    *(0x224 + r30) = r31; // stw @ 0x80661514
    *(0x22c + r30) = r31; // stw @ 0x80661518
    *(0x230 + r30) = r31; // stw @ 0x8066151C
    FUN_8066DB2C(r3); // bl 0x8066DB2C
    r3 = r30 + 0x2d0; // 0x80661524
    FUN_80661E6C(r3); // bl 0x80661E6C
    /* li r0, 0 */ // 0x8066152C
    /* li r4, 8 */ // 0x80661530
    /* li r3, 2 */ // 0x80661534
    *(0x3bc + r30) = r4; // stw @ 0x80661538
    *(0x3c0 + r30) = r3; // stw @ 0x8066153C
    *(0x3c4 + r30) = r0; // stw @ 0x80661540
    *(0x3c8 + r30) = r31; // stw @ 0x80661544
    *(0x3cc + r30) = r31; // stw @ 0x80661548
    *(0x4e8 + r30) = r0; // stb @ 0x8066154C
    *(0x500 + r30) = r0; // stw @ 0x80661550
    *(0x504 + r30) = r0; // stw @ 0x80661554
    r31 = *(0xc + r1); // lwz @ 0x80661558
    r30 = *(8 + r1); // lwz @ 0x8066155C
    r0 = *(0x14 + r1); // lwz @ 0x80661560
    return;
}