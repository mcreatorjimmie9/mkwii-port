/* Function at 0x8090C374, size=212 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8090C374(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8090C380
    r31 = r3;
    r0 = *(0x2c + r3); // lhz @ 0x8090C388
    /* lfs f0, 0x130(r3) */ // 0x8090C38C
    /* lfs f1, 0x12c(r3) */ // 0x8090C390
    r0 = r0 | 1; // 0x8090C394
    /* lfs f2, 0x128(r3) */ // 0x8090C398
    *(0x2c + r3) = r0; // sth @ 0x8090C39C
    /* stfs f2, 0x30(r3) */ // 0x8090C3A0
    /* stfs f1, 0x34(r3) */ // 0x8090C3A4
    /* stfs f0, 0x38(r3) */ // 0x8090C3A8
    FUN_808A1BCC(); // bl 0x808A1BCC
    /* lfs f0, 0x58(r31) */ // 0x8090C3B0
    r3 = r31;
    /* stfs f0, 0x140(r31) */ // 0x8090C3B8
    /* li r4, 1 */ // 0x8090C3BC
    /* lfs f0, 0x5c(r31) */ // 0x8090C3C0
    /* stfs f0, 0x144(r31) */ // 0x8090C3C4
    /* lfs f0, 0x60(r31) */ // 0x8090C3C8
    /* stfs f0, 0x148(r31) */ // 0x8090C3CC
    /* lfs f0, 0x64(r31) */ // 0x8090C3D0
    /* stfs f0, 0x14c(r31) */ // 0x8090C3D4
    /* lfs f0, 0x68(r31) */ // 0x8090C3D8
    /* stfs f0, 0x150(r31) */ // 0x8090C3DC
    /* lfs f0, 0x6c(r31) */ // 0x8090C3E0
    /* stfs f0, 0x154(r31) */ // 0x8090C3E4
    /* lfs f0, 0x70(r31) */ // 0x8090C3E8
    /* stfs f0, 0x158(r31) */ // 0x8090C3EC
    /* lfs f0, 0x74(r31) */ // 0x8090C3F0
    /* stfs f0, 0x15c(r31) */ // 0x8090C3F4
    /* lfs f0, 0x78(r31) */ // 0x8090C3F8
    /* stfs f0, 0x160(r31) */ // 0x8090C3FC
    /* lfs f0, 0x7c(r31) */ // 0x8090C400
    /* stfs f0, 0x164(r31) */ // 0x8090C404
    /* lfs f0, 0x80(r31) */ // 0x8090C408
    /* stfs f0, 0x168(r31) */ // 0x8090C40C
    /* lfs f0, 0x84(r31) */ // 0x8090C410
    /* stfs f0, 0x16c(r31) */ // 0x8090C414
    r12 = *(0 + r31); // lwz @ 0x8090C418
    r12 = *(0x68 + r12); // lwz @ 0x8090C41C
    /* mtctr r12 */ // 0x8090C420
    /* bctrl  */ // 0x8090C424
    r3 = r31;
    /* li r4, 0 */ // 0x8090C42C
    FUN_808A0A44(r3, r4); // bl 0x808A0A44
    r0 = *(0x14 + r1); // lwz @ 0x8090C434
    r31 = *(0xc + r1); // lwz @ 0x8090C438
    return;
}