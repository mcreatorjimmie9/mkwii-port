/* Function at 0x80621E10, size=160 bytes */
/* Stack frame: 0 bytes */

void FUN_80621E10(int r3, int r4, int r5, int r6)
{
    /* lis r4, 0 */ // 0x80621E10
    /* li r6, 0 */ // 0x80621E14
    /* lfs f0, 0(r4) */ // 0x80621E18
    /* li r0, -1 */ // 0x80621E1C
    *(0x10 + r3) = r6; // stw @ 0x80621E20
    /* lis r5, 0 */ // 0x80621E24
    r4 = r5 + 0; // 0x80621E28
    *(0xc + r3) = r6; // stw @ 0x80621E2C
    *(8 + r3) = r6; // stw @ 0x80621E30
    *(4 + r3) = r6; // stw @ 0x80621E34
    *(0x1c + r3) = r6; // stw @ 0x80621E38
    /* stfs f0, 0x24(r3) */ // 0x80621E3C
    /* stfs f0, 0x30(r3) */ // 0x80621E40
    /* stfs f0, 0x2c(r3) */ // 0x80621E44
    /* stfs f0, 0x28(r3) */ // 0x80621E48
    /* stfs f0, 0x48(r3) */ // 0x80621E4C
    /* stfs f0, 0x44(r3) */ // 0x80621E50
    /* stfs f0, 0x40(r3) */ // 0x80621E54
    *(0x58 + r3) = r6; // stw @ 0x80621E58
    *(0x5c + r3) = r6; // stw @ 0x80621E5C
    *(0x6c + r3) = r6; // stw @ 0x80621E60
    *(0x70 + r3) = r6; // stw @ 0x80621E64
    *(0x74 + r3) = r0; // stw @ 0x80621E68
    *(0x78 + r3) = r0; // stw @ 0x80621E6C
    *(0x84 + r3) = r6; // sth @ 0x80621E70
    /* stfs f0, 0x9c(r3) */ // 0x80621E74
    /* stfs f0, 0x8c(r3) */ // 0x80621E78
    /* stfs f0, 0x88(r3) */ // 0x80621E7C
    *(0xa4 + r3) = r6; // sth @ 0x80621E80
    /* lfs f2, 0(r5) */ // 0x80621E84
    /* stfs f2, 0xa8(r3) */ // 0x80621E88
    /* lfs f1, 4(r4) */ // 0x80621E8C
    /* stfs f1, 0xac(r3) */ // 0x80621E90
    /* lfs f0, 8(r4) */ // 0x80621E94
    /* stfs f0, 0xb0(r3) */ // 0x80621E98
    /* stfs f2, 0x4c(r3) */ // 0x80621E9C
    /* stfs f1, 0x50(r3) */ // 0x80621EA0
    /* stfs f0, 0x54(r3) */ // 0x80621EA4
    *(0xa6 + r3) = r6; // sth @ 0x80621EA8
    return;
}