/* Function at 0x805F420C, size=300 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_805F420C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805F4218
    r31 = r3;
    r4 = *(0x20 + r3); // lwz @ 0x805F4220
    r4 = *(0x30 + r4); // lwz @ 0x805F4224
    r0 = *(0x14 + r4); // lhz @ 0x805F4228
    r0 = r0 | 1; // 0x805F422C
    *(0x14 + r4) = r0; // sth @ 0x805F4230
    r4 = *(0x20 + r3); // lwz @ 0x805F4234
    r4 = *(0x30 + r4); // lwz @ 0x805F4238
    r0 = *(0x14 + r4); // lhz @ 0x805F423C
    r0 = r0 | 2; // 0x805F4240
    *(0x14 + r4) = r0; // sth @ 0x805F4244
    r4 = *(0x20 + r3); // lwz @ 0x805F4248
    r4 = *(0x30 + r4); // lwz @ 0x805F424C
    r0 = *(0x14 + r4); // lhz @ 0x805F4250
    r0 = r0 | 8; // 0x805F4254
    *(0x14 + r4) = r0; // sth @ 0x805F4258
    r4 = *(0x20 + r3); // lwz @ 0x805F425C
    r4 = *(0x30 + r4); // lwz @ 0x805F4260
    r0 = *(0x14 + r4); // lhz @ 0x805F4264
    r0 = r0 | 0x10; // 0x805F4268
    *(0x14 + r4) = r0; // sth @ 0x805F426C
    r3 = *(0x20 + r3); // lwz @ 0x805F4270
    r12 = *(0 + r3); // lwz @ 0x805F4274
    r12 = *(0x18 + r12); // lwz @ 0x805F4278
    /* mtctr r12 */ // 0x805F427C
    /* bctrl  */ // 0x805F4280
    r3 = *(0x20 + r31); // lwz @ 0x805F4284
    r3 = *(0x30 + r3); // lwz @ 0x805F4288
    r0 = *(0x14 + r3); // lhz @ 0x805F428C
    r0 = r0 rlwinm 0; // rlwinm
    *(0x14 + r3) = r0; // sth @ 0x805F4294
    r3 = *(0x20 + r31); // lwz @ 0x805F4298
    r3 = *(0x30 + r3); // lwz @ 0x805F429C
    r0 = *(0x14 + r3); // lhz @ 0x805F42A0
    r0 = r0 rlwinm 0; // rlwinm
    *(0x14 + r3) = r0; // sth @ 0x805F42A8
    r3 = *(0x20 + r31); // lwz @ 0x805F42AC
    r3 = *(0x30 + r3); // lwz @ 0x805F42B0
    r0 = *(0x14 + r3); // lhz @ 0x805F42B4
    r0 = r0 rlwinm 0; // rlwinm
    *(0x14 + r3) = r0; // sth @ 0x805F42BC
    r3 = *(0x20 + r31); // lwz @ 0x805F42C0
    r12 = *(0 + r3); // lwz @ 0x805F42C4
    r12 = *(0x18 + r12); // lwz @ 0x805F42C8
    /* mtctr r12 */ // 0x805F42CC
    /* bctrl  */ // 0x805F42D0
    r3 = *(0x20 + r31); // lwz @ 0x805F42D4
    r3 = *(0x30 + r3); // lwz @ 0x805F42D8
    r0 = *(0x14 + r3); // lhz @ 0x805F42DC
    r0 = r0 | 1; // 0x805F42E0
    *(0x14 + r3) = r0; // sth @ 0x805F42E4
    r3 = *(0x20 + r31); // lwz @ 0x805F42E8
    r3 = *(0x30 + r3); // lwz @ 0x805F42EC
    r0 = *(0x14 + r3); // lhz @ 0x805F42F0
    r0 = r0 | 2; // 0x805F42F4
    *(0x14 + r3) = r0; // sth @ 0x805F42F8
    r3 = *(0x20 + r31); // lwz @ 0x805F42FC
    r3 = *(0x30 + r3); // lwz @ 0x805F4300
    r0 = *(0x14 + r3); // lhz @ 0x805F4304
    r0 = r0 | 8; // 0x805F4308
    *(0x14 + r3) = r0; // sth @ 0x805F430C
    r3 = *(0x20 + r31); // lwz @ 0x805F4310
    r3 = *(0x30 + r3); // lwz @ 0x805F4314
    r0 = *(0x14 + r3); // lhz @ 0x805F4318
    r0 = r0 | 0x10; // 0x805F431C
    *(0x14 + r3) = r0; // sth @ 0x805F4320
    r31 = *(0xc + r1); // lwz @ 0x805F4324
    r0 = *(0x14 + r1); // lwz @ 0x805F4328
    return;
}