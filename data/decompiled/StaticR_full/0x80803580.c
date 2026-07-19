/* Function at 0x80803580, size=184 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80803580(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80803590
    r31 = r31 + 0; // 0x80803594
    *(8 + r1) = r30; // stw @ 0x80803598
    r30 = r3;
    r4 = *(0x120 + r3); // lbz @ 0x808035A0
    r0 = *(0x40 + r31); // lwz @ 0x808035A4
    r0 = r4 + r0; // 0x808035A8
    *(0x120 + r3) = r0; // stb @ 0x808035AC
    /* clrlwi r4, r0, 0x18 */ // 0x808035B0
    r0 = *(0x40 + r31); // lwz @ 0x808035B4
    /* subfic r0, r0, 0xff */ // 0x808035B8
    if (<=) goto 0x0x80803608;
    /* lis r4, 0 */ // 0x808035C4
    /* li r5, 0xff */ // 0x808035C8
    /* lfs f0, 0(r4) */ // 0x808035CC
    /* li r0, 1 */ // 0x808035D0
    *(0x120 + r3) = r5; // stb @ 0x808035D4
    /* lis r4, 0 */ // 0x808035D8
    /* stfs f0, 0x114(r3) */ // 0x808035DC
    *(0xb0 + r3) = r0; // stw @ 0x808035E0
    r3 = *(0 + r4); // lwz @ 0x808035E4
    /* lfs f1, 0x4c(r31) */ // 0x808035E8
    /* lfs f0, 0x48(r31) */ // 0x808035EC
    r3 = *(8 + r3); // lwz @ 0x808035F0
    /* fsubs f1, f1, f0 */ // 0x808035F4
    FUN_805E3728(); // bl 0x805E3728
    /* lfs f0, 0x48(r31) */ // 0x808035FC
    /* fadds f0, f0, f1 */ // 0x80803600
    /* stfs f0, 0x118(r30) */ // 0x80803604
    r3 = *(8 + r30); // lwz @ 0x80803608
    /* li r4, 3 */ // 0x8080360C
    r5 = *(0x120 + r30); // lbz @ 0x80803610
    FUN_805EF304(r4); // bl 0x805EF304
    r3 = r30;
    FUN_80803754(r4, r3); // bl 0x80803754
    r0 = *(0x14 + r1); // lwz @ 0x80803620
    r31 = *(0xc + r1); // lwz @ 0x80803624
    r30 = *(8 + r1); // lwz @ 0x80803628
    return;
}