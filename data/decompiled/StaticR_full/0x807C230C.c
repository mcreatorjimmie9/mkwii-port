/* Function at 0x807C230C, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_807C230C(int r3, int r4)
{
    /* lfs f0, 0x34(r3) */ // 0x807C230C
    /* lis r4, 0 */ // 0x807C2310
    /* stfs f0, 0x30(r3) */ // 0x807C2314
    r3 = *(0x14 + r3); // lwz @ 0x807C2318
    /* lfs f0, 0(r4) */ // 0x807C231C
    /* stfs f0, 0x2c(r3) */ // 0x807C2320
    return;
}