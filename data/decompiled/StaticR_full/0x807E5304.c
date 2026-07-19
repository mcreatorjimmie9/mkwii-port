/* Function at 0x807E5304, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807E5304(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807E5310
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x807E5318
    r12 = *(0 + r3); // lwz @ 0x807E531C
    r12 = *(0x14 + r12); // lwz @ 0x807E5320
    /* mtctr r12 */ // 0x807E5324
    /* bctrl  */ // 0x807E5328
    r4 = *(0x20 + r31); // lwz @ 0x807E532C
    r3 = r31;
    r0 = *(0x2c + r31); // lhz @ 0x807E5334
    /* lfs f2, 0x20(r4) */ // 0x807E5338
    /* lfs f1, 0x1c(r4) */ // 0x807E533C
    r0 = r0 | 1; // 0x807E5340
    /* lfs f0, 0x18(r4) */ // 0x807E5344
    /* stfs f0, 0x30(r31) */ // 0x807E5348
    *(0x2c + r31) = r0; // sth @ 0x807E534C
    /* stfs f1, 0x34(r31) */ // 0x807E5350
    /* stfs f2, 0x38(r31) */ // 0x807E5354
    FUN_807E5534(); // bl 0x807E5534
    r0 = *(0x14 + r1); // lwz @ 0x807E535C
    r31 = *(0xc + r1); // lwz @ 0x807E5360
    return;
}