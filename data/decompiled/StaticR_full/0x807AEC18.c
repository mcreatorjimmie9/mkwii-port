/* Function at 0x807AEC18, size=48 bytes */
/* Stack frame: 0 bytes */

void FUN_807AEC18(int r3, int r4, int r5)
{
    /* lfs f2, 0(r4) */ // 0x807AEC18
    /* lfs f1, 4(r4) */ // 0x807AEC20
    /* lfs f0, 8(r4) */ // 0x807AEC24
    /* stfs f2, 4(r3) */ // 0x807AEC28
    /* stfs f1, 8(r3) */ // 0x807AEC2C
    /* stfs f0, 0xc(r3) */ // 0x807AEC30
    /* beqlr  */ // 0x807AEC34
    /* stfs f2, 0x10(r3) */ // 0x807AEC38
    /* stfs f1, 0x14(r3) */ // 0x807AEC3C
    /* stfs f0, 0x18(r3) */ // 0x807AEC40
    return;
}