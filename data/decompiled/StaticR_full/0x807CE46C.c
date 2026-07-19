/* Function at 0x807CE46C, size=116 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807CE46C(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 2 */ // 0x807CE474
    /* li r0, 1 */ // 0x807CE47C
    *(0x4c + r1) = r31; // stw @ 0x807CE480
    /* lis r31, 0 */ // 0x807CE484
    r31 = r31 + 0; // 0x807CE488
    *(0x48 + r1) = r30; // stw @ 0x807CE48C
    r30 = r3;
    /* lfs f1, 0(r31) */ // 0x807CE494
    *(0x34a + r3) = r0; // stb @ 0x807CE498
    r5 = *(8 + r3); // lwz @ 0x807CE49C
    /* lfs f2, 4(r31) */ // 0x807CE4A0
    r3 = *(0x28 + r5); // lwz @ 0x807CE4A4
    FUN_805E70EC(); // bl 0x805E70EC
    /* li r0, 0 */ // 0x807CE4AC
    *(0xe8 + r30) = r0; // stw @ 0x807CE4B0
    r4 = *(0x304 + r30); // lwz @ 0x807CE4B4
    *(0x33c + r30) = r0; // stw @ 0x807CE4BC
    r0 = *(0x308 + r30); // lwz @ 0x807CE4C0
    *(0x3c + r1) = r0; // stw @ 0x807CE4C4
    /* lfs f0, 0(r31) */ // 0x807CE4C8
    *(0x38 + r1) = r4; // stw @ 0x807CE4CC
    r0 = *(0x30c + r30); // lwz @ 0x807CE4D0
    *(0x40 + r1) = r0; // stw @ 0x807CE4D4
    /* stfs f0, 0x3c(r1) */ // 0x807CE4D8
    FUN_805E3430(); // bl 0x805E3430
}