/* Function at 0x807E91A8, size=316 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */

int FUN_807E91A8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r6 = *(0 + r4); // lwz @ 0x807E91B0
    /* lis r5, 0 */ // 0x807E91B4
    *(0x24 + r1) = r0; // stw @ 0x807E91B8
    /* lfs f0, 8(r4) */ // 0x807E91BC
    *(0x1c + r1) = r31; // stw @ 0x807E91C0
    r31 = r4;
    /* lfs f2, 4(r4) */ // 0x807E91C8
    *(0x18 + r1) = r30; // stw @ 0x807E91CC
    r30 = r3;
    /* lfs f3, 0(r4) */ // 0x807E91D4
    r0 = *(0x2c + r3); // lhz @ 0x807E91D8
    /* stfs f3, 0x30(r3) */ // 0x807E91DC
    r7 = r0 | 1; // 0x807E91E0
    r0 = *(8 + r4); // lwz @ 0x807E91E4
    *(0x10 + r1) = r0; // stw @ 0x807E91E8
    r0 = *(0xb4 + r3); // lwz @ 0x807E91EC
    *(0x2c + r3) = r7; // sth @ 0x807E91F0
    /* lfs f1, 0x10(r1) */ // 0x807E91F4
    /* stfs f2, 0x34(r3) */ // 0x807E91FC
    r4 = *(4 + r4); // lwz @ 0x807E9200
    /* stfs f0, 0x38(r3) */ // 0x807E9204
    /* lfs f0, 0(r5) */ // 0x807E9208
    *(8 + r1) = r6; // stw @ 0x807E920C
    /* fadds f0, f1, f0 */ // 0x807E9210
    *(0xc + r1) = r4; // stw @ 0x807E9214
    /* stfs f0, 0x10(r1) */ // 0x807E9218
    if (>) goto 0x0x807e9230;
    r12 = *(0xb0 + r3); // lwzu @ 0x807E9220
    r12 = *(0x18 + r12); // lwz @ 0x807E9224
    /* mtctr r12 */ // 0x807E9228
    /* bctrl  */ // 0x807E922C
    r4 = *(0xb8 + r30); // lwz @ 0x807E9230
    /* lis r3, 0 */ // 0x807E9234
    /* lfs f0, 8(r1) */ // 0x807E9238
    r4 = *(0 + r4); // lwz @ 0x807E923C
    /* lfs f3, 0(r31) */ // 0x807E9240
    r0 = *(0x2c + r4); // lhz @ 0x807E9244
    /* lfs f1, 0xc(r1) */ // 0x807E9248
    r0 = r0 | 1; // 0x807E924C
    *(0x2c + r4) = r0; // sth @ 0x807E9250
    /* lfs f2, 4(r31) */ // 0x807E9254
    /* stfs f0, 0x30(r4) */ // 0x807E9258
    /* lfs f0, 0x10(r1) */ // 0x807E925C
    /* stfs f1, 0x34(r4) */ // 0x807E9260
    /* lfs f1, 8(r31) */ // 0x807E9264
    /* stfs f0, 0x38(r4) */ // 0x807E9268
    /* lfs f0, 0(r3) */ // 0x807E926C
    r0 = *(0xb4 + r30); // lwz @ 0x807E9270
    /* fsubs f0, f1, f0 */ // 0x807E9274
    /* stfs f3, 8(r1) */ // 0x807E9278
    /* stfs f2, 0xc(r1) */ // 0x807E9280
    /* stfs f0, 0x10(r1) */ // 0x807E9284
    if (>) goto 0x0x807e92a0;
    r12 = *(0xb0 + r30); // lwz @ 0x807E928C
    r3 = r30 + 0xb0; // 0x807E9290
    r12 = *(0x18 + r12); // lwz @ 0x807E9294
    /* mtctr r12 */ // 0x807E9298
    /* bctrl  */ // 0x807E929C
    r3 = *(0xb8 + r30); // lwz @ 0x807E92A0
    /* lfs f2, 8(r1) */ // 0x807E92A4
    r3 = *(4 + r3); // lwz @ 0x807E92A8
    /* lfs f1, 0xc(r1) */ // 0x807E92AC
    r0 = *(0x2c + r3); // lhz @ 0x807E92B0
    /* lfs f0, 0x10(r1) */ // 0x807E92B4
    r0 = r0 | 1; // 0x807E92B8
    *(0x2c + r3) = r0; // sth @ 0x807E92BC
    /* stfs f2, 0x30(r3) */ // 0x807E92C0
    /* stfs f1, 0x34(r3) */ // 0x807E92C4
    /* stfs f0, 0x38(r3) */ // 0x807E92C8
    r31 = *(0x1c + r1); // lwz @ 0x807E92CC
    r30 = *(0x18 + r1); // lwz @ 0x807E92D0
    r0 = *(0x24 + r1); // lwz @ 0x807E92D4
    return;
}