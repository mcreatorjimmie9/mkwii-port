/* Function at 0x80627D74, size=124 bytes */
/* Stack frame: 0 bytes */

void FUN_80627D74(int r3, int r4, int r5)
{
    /* lfs f3, 0x20(r4) */ // 0x80627D74
    /* lfs f2, 0(r5) */ // 0x80627D78
    /* lfs f1, 0x10(r4) */ // 0x80627D7C
    /* fmuls f7, f3, f2 */ // 0x80627D80
    /* lfs f0, 0(r4) */ // 0x80627D84
    /* fmuls f4, f1, f2 */ // 0x80627D88
    /* lfs f3, 0x24(r4) */ // 0x80627D8C
    /* fmuls f1, f0, f2 */ // 0x80627D90
    /* lfs f5, 4(r5) */ // 0x80627D94
    /* lfs f0, 4(r4) */ // 0x80627D98
    /* fmuls f6, f3, f5 */ // 0x80627D9C
    /* lfs f2, 0x14(r4) */ // 0x80627DA0
    /* fmuls f0, f0, f5 */ // 0x80627DA4
    /* lfs f8, 0x28(r4) */ // 0x80627DA8
    /* fmuls f3, f2, f5 */ // 0x80627DAC
    /* lfs f9, 8(r5) */ // 0x80627DB0
    /* lfs f5, 0x18(r4) */ // 0x80627DB4
    /* fadds f6, f7, f6 */ // 0x80627DB8
    /* lfs f2, 8(r4) */ // 0x80627DBC
    /* fmuls f8, f8, f9 */ // 0x80627DC0
    /* fadds f3, f4, f3 */ // 0x80627DC4
    /* fmuls f5, f5, f9 */ // 0x80627DC8
    /* fadds f0, f1, f0 */ // 0x80627DCC
    /* fmuls f2, f2, f9 */ // 0x80627DD0
    /* fadds f4, f8, f6 */ // 0x80627DD4
    /* fadds f1, f5, f3 */ // 0x80627DD8
    /* fadds f0, f2, f0 */ // 0x80627DDC
    /* stfs f4, 8(r3) */ // 0x80627DE0
    /* stfs f1, 4(r3) */ // 0x80627DE4
    /* stfs f0, 0(r3) */ // 0x80627DE8
    return;
}