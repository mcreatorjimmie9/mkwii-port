/* Function at 0x807AD310, size=252 bytes */
/* Stack frame: 0 bytes */

void FUN_807AD310(int r3, int r4, int r5)
{
    /* lis r4, 0 */ // 0x807AD310
    /* li r0, 8 */ // 0x807AD314
    r5 = *(0x24 + r3); // lwz @ 0x807AD318
    /* lfs f0, 0(r4) */ // 0x807AD31C
    /* mtctr r0 */ // 0x807AD320
    /* stfs f0, 8(r5) */ // 0x807AD324
    /* stfs f0, 4(r5) */ // 0x807AD328
    /* stfs f0, 0(r5) */ // 0x807AD32C
    /* stfs f0, 0x14(r5) */ // 0x807AD330
    /* stfs f0, 0x10(r5) */ // 0x807AD334
    /* stfs f0, 0xc(r5) */ // 0x807AD338
    /* stfs f0, 0x20(r5) */ // 0x807AD33C
    /* stfs f0, 0x1c(r5) */ // 0x807AD340
    /* stfs f0, 0x18(r5) */ // 0x807AD344
    /* stfs f0, 0x2c(r5) */ // 0x807AD348
    /* stfs f0, 0x28(r5) */ // 0x807AD34C
    /* stfs f0, 0x24(r5) */ // 0x807AD350
    /* stfs f0, 0x38(r5) */ // 0x807AD354
    /* stfs f0, 0x34(r5) */ // 0x807AD358
    /* stfs f0, 0x30(r5) */ // 0x807AD35C
    /* stfs f0, 0x44(r5) */ // 0x807AD360
    /* stfs f0, 0x40(r5) */ // 0x807AD364
    /* stfs f0, 0x3c(r5) */ // 0x807AD368
    /* stfs f0, 0x50(r5) */ // 0x807AD36C
    /* stfs f0, 0x4c(r5) */ // 0x807AD370
    /* stfs f0, 0x48(r5) */ // 0x807AD374
    /* stfs f0, 0x5c(r5) */ // 0x807AD378
    /* stfs f0, 0x58(r5) */ // 0x807AD37C
    /* stfs f0, 0x54(r5) */ // 0x807AD380
    /* stfs f0, 0x68(r5) */ // 0x807AD384
    /* stfs f0, 0x64(r5) */ // 0x807AD388
    /* stfs f0, 0x60(r5) */ // 0x807AD38C
    /* stfs f0, 0x74(r5) */ // 0x807AD390
    /* stfs f0, 0x70(r5) */ // 0x807AD394
    /* stfs f0, 0x6c(r5) */ // 0x807AD398
    /* stfs f0, 0x80(r5) */ // 0x807AD39C
    /* stfs f0, 0x7c(r5) */ // 0x807AD3A0
    /* stfs f0, 0x78(r5) */ // 0x807AD3A4
    /* stfs f0, 0x8c(r5) */ // 0x807AD3A8
    /* stfs f0, 0x88(r5) */ // 0x807AD3AC
    /* stfs f0, 0x84(r5) */ // 0x807AD3B0
    /* stfs f0, 0x98(r5) */ // 0x807AD3B4
    /* stfs f0, 0x94(r5) */ // 0x807AD3B8
    /* stfs f0, 0x90(r5) */ // 0x807AD3BC
    /* stfs f0, 0xa4(r5) */ // 0x807AD3C0
    /* stfs f0, 0xa0(r5) */ // 0x807AD3C4
    /* stfs f0, 0x9c(r5) */ // 0x807AD3C8
    /* stfs f0, 0xb0(r5) */ // 0x807AD3CC
    /* stfs f0, 0xac(r5) */ // 0x807AD3D0
    /* stfs f0, 0xa8(r5) */ // 0x807AD3D4
    /* stfs f0, 0xbc(r5) */ // 0x807AD3D8
    /* stfs f0, 0xb8(r5) */ // 0x807AD3DC
    /* stfs f0, 0xb4(r5) */ // 0x807AD3E0
    r5 = r5 + 0xc0; // 0x807AD3E4
    if (counter-- != 0) goto 0x0x807ad324;
    /* li r0, 0 */ // 0x807AD3EC
    *(0xc + r3) = r0; // stw @ 0x807AD3F0
    *(0x10 + r3) = r0; // stw @ 0x807AD3F4
    *(0x14 + r3) = r0; // stw @ 0x807AD3F8
    *(0x18 + r3) = r0; // stw @ 0x807AD3FC
    *(0x1c + r3) = r0; // stw @ 0x807AD400
    *(0x20 + r3) = r0; // stw @ 0x807AD404
    return;
}