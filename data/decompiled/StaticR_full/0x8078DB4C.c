/* Function at 0x8078DB4C, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_8078DB4C(int r3, int r4)
{
    /* lis r4, 0 */ // 0x8078DB4C
    /* li r0, 0 */ // 0x8078DB50
    /* lfs f0, 0(r4) */ // 0x8078DB54
    /* stfs f0, 0x50(r3) */ // 0x8078DB58
    /* stfs f0, 0x6c(r3) */ // 0x8078DB5C
    /* stfs f0, 0x88(r3) */ // 0x8078DB60
    /* stfs f0, 0xa4(r3) */ // 0x8078DB64
    *(0x10 + r3) = r0; // stb @ 0x8078DB68
    return;
}