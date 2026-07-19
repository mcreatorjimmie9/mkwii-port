/* Function at 0x8062FEA8, size=116 bytes */
/* Stack frame: 0 bytes */

void FUN_8062FEA8(int r3, int r4, int r5, int r6)
{
    r0 = *(0 + r4); // lwz @ 0x8062FEA8
    r5 = r4 + 0x30; // 0x8062FEAC
    *(0 + r3) = r0; // stw @ 0x8062FEB0
    r0 = r4 + 0xf0; // 0x8062FEB4
    r6 = *(4 + r4); // lhz @ 0x8062FEB8
    *(4 + r3) = r6; // sth @ 0x8062FEBC
    /* lfs f0, 8(r4) */ // 0x8062FEC0
    /* stfs f0, 8(r3) */ // 0x8062FEC4
    /* lfs f0, 0xc(r4) */ // 0x8062FEC8
    /* stfs f0, 0xc(r3) */ // 0x8062FECC
    /* lfs f0, 0x10(r4) */ // 0x8062FED0
    /* stfs f0, 0x10(r3) */ // 0x8062FED4
    /* lfs f0, 0x14(r4) */ // 0x8062FED8
    /* stfs f0, 0x14(r3) */ // 0x8062FEDC
    /* lfs f0, 0x18(r4) */ // 0x8062FEE0
    /* stfs f0, 0x18(r3) */ // 0x8062FEE4
    /* lfs f0, 0x1c(r4) */ // 0x8062FEE8
    /* stfs f0, 0x1c(r3) */ // 0x8062FEEC
    /* lfs f0, 0x20(r4) */ // 0x8062FEF0
    /* stfs f0, 0x20(r3) */ // 0x8062FEF4
    /* lfs f0, 0x24(r4) */ // 0x8062FEF8
    /* stfs f0, 0x24(r3) */ // 0x8062FEFC
    /* lfs f0, 0x28(r4) */ // 0x8062FF00
    /* stfs f0, 0x28(r3) */ // 0x8062FF04
    /* lfs f0, 0x2c(r4) */ // 0x8062FF08
    /* stfs f0, 0x2c(r3) */ // 0x8062FF0C
    *(0x30 + r3) = r5; // stw @ 0x8062FF10
    *(0x34 + r3) = r0; // stw @ 0x8062FF14
    return;
}