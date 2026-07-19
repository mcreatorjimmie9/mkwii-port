/* Function at 0x807B9218, size=120 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807B9218(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x28 + r1) = r30; // stw @ 0x807B9228
    r30 = r3;
    r4 = *(0x38 + r3); // lwz @ 0x807B9230
    r3 = *(0x19c + r3); // lwz @ 0x807B9234
    r4 = *(0 + r4); // lwz @ 0x807B9238
    r12 = *(0 + r3); // lwz @ 0x807B923C
    r4 = *(0x10 + r4); // lwz @ 0x807B9240
    r12 = *(0xc + r12); // lwz @ 0x807B9244
    r31 = *(0x14c + r4); // lwz @ 0x807B9248
    /* mtctr r12 */ // 0x807B924C
    /* bctrl  */ // 0x807B9250
    if (==) goto 0x0x807b9284;
    r4 = *(0x19c + r30); // lwz @ 0x807B925C
    FUN_807B8BB4(r3); // bl 0x807B8BB4
    r3 = *(0x50 + r30); // lwz @ 0x807B9268
    /* lfs f0, 0x14(r1) */ // 0x807B926C
    /* stfs f0, 0(r3) */ // 0x807B9270
    /* lfs f0, 0x18(r1) */ // 0x807B9274
    /* stfs f0, 4(r3) */ // 0x807B9278
    /* lfs f0, 0x1c(r1) */ // 0x807B927C
    /* stfs f0, 8(r3) */ // 0x807B9280
    r3 = *(0x194 + r30); // lwz @ 0x807B9284
    r3 = *(8 + r3); // lwz @ 0x807B9288
    FUN_8061DA88(); // bl 0x8061DA88
}