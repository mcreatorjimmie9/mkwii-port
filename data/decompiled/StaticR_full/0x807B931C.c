/* Function at 0x807B931C, size=120 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807B931C(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x28 + r1) = r30; // stw @ 0x807B932C
    r30 = r3;
    r4 = *(0x38 + r3); // lwz @ 0x807B9334
    r3 = *(0x19c + r3); // lwz @ 0x807B9338
    r4 = *(0 + r4); // lwz @ 0x807B933C
    r12 = *(0 + r3); // lwz @ 0x807B9340
    r4 = *(0x10 + r4); // lwz @ 0x807B9344
    r12 = *(0xc + r12); // lwz @ 0x807B9348
    r31 = *(0x14c + r4); // lwz @ 0x807B934C
    /* mtctr r12 */ // 0x807B9350
    /* bctrl  */ // 0x807B9354
    if (==) goto 0x0x807b9388;
    r4 = *(0x19c + r30); // lwz @ 0x807B9360
    FUN_807B8BB4(r3); // bl 0x807B8BB4
    r3 = *(0x50 + r30); // lwz @ 0x807B936C
    /* lfs f0, 0x14(r1) */ // 0x807B9370
    /* stfs f0, 0(r3) */ // 0x807B9374
    /* lfs f0, 0x18(r1) */ // 0x807B9378
    /* stfs f0, 4(r3) */ // 0x807B937C
    /* lfs f0, 0x1c(r1) */ // 0x807B9380
    /* stfs f0, 8(r3) */ // 0x807B9384
    r3 = *(0x194 + r30); // lwz @ 0x807B9388
    r3 = *(8 + r3); // lwz @ 0x807B938C
    FUN_8061DA88(); // bl 0x8061DA88
}