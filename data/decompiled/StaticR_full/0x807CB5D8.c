/* Function at 0x807CB5D8, size=144 bytes */
/* Stack frame: 0 bytes */

void FUN_807CB5D8(int r3, int r4)
{
    r4 = *(0x2c + r3); // lhz @ 0x807CB5D8
    /* li r0, 0 */ // 0x807CB5DC
    *(0x54 + r3) = r0; // stb @ 0x807CB5E0
    r0 = r4 | 4; // 0x807CB5E4
    *(0x2c + r3) = r0; // sth @ 0x807CB5E8
    /* lfs f0, 0x108(r3) */ // 0x807CB5EC
    /* stfs f0, 0x58(r3) */ // 0x807CB5F0
    /* lfs f0, 0x10c(r3) */ // 0x807CB5F4
    /* stfs f0, 0x5c(r3) */ // 0x807CB5F8
    /* lfs f0, 0x110(r3) */ // 0x807CB5FC
    /* stfs f0, 0x60(r3) */ // 0x807CB600
    /* lfs f0, 0x114(r3) */ // 0x807CB604
    /* stfs f0, 0x64(r3) */ // 0x807CB608
    /* lfs f0, 0x118(r3) */ // 0x807CB60C
    /* stfs f0, 0x68(r3) */ // 0x807CB610
    /* lfs f0, 0x11c(r3) */ // 0x807CB614
    /* stfs f0, 0x6c(r3) */ // 0x807CB618
    /* lfs f0, 0x120(r3) */ // 0x807CB61C
    /* stfs f0, 0x70(r3) */ // 0x807CB620
    /* lfs f0, 0x124(r3) */ // 0x807CB624
    /* stfs f0, 0x74(r3) */ // 0x807CB628
    /* lfs f0, 0x128(r3) */ // 0x807CB62C
    /* stfs f0, 0x78(r3) */ // 0x807CB630
    /* lfs f0, 0x12c(r3) */ // 0x807CB634
    /* stfs f0, 0x7c(r3) */ // 0x807CB638
    /* lfs f0, 0x130(r3) */ // 0x807CB63C
    /* stfs f0, 0x80(r3) */ // 0x807CB640
    /* lfs f0, 0x134(r3) */ // 0x807CB644
    /* stfs f0, 0x84(r3) */ // 0x807CB648
    /* lfs f0, 0x114(r3) */ // 0x807CB64C
    /* lfs f1, 0x124(r3) */ // 0x807CB650
    /* lfs f2, 0x134(r3) */ // 0x807CB654
    /* stfs f0, 0x30(r3) */ // 0x807CB658
    /* stfs f1, 0x34(r3) */ // 0x807CB65C
    /* stfs f2, 0x38(r3) */ // 0x807CB660
    return;
}