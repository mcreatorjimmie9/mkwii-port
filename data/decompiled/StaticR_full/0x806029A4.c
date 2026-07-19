/* Function at 0x806029A4, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_806029A4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    r3 = r3 + 4; // 0x806029AC
    *(0x14 + r1) = r0; // stw @ 0x806029B0
    FUN_8061DFF8(r3); // bl 0x8061DFF8
    /* lis r4, 0 */ // 0x806029B8
    /* lfs f1, 0x20(r3) */ // 0x806029BC
    /* lfs f0, 0(r4) */ // 0x806029C0
    /* fmuls f0, f1, f0 */ // 0x806029C4
    /* stfs f0, 0x20(r3) */ // 0x806029C8
    /* li r3, -1 */ // 0x806029CC
    r0 = *(0x14 + r1); // lwz @ 0x806029D0
    return;
}