/* Function at 0x807C22EC, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_807C22EC(int r3, int r4, int r5)
{
    /* lis r5, 0 */ // 0x807C22EC
    /* lis r4, 0 */ // 0x807C22F0
    /* lfs f0, 0(r5) */ // 0x807C22F4
    /* stfs f0, 0x30(r3) */ // 0x807C22F8
    r3 = *(0x14 + r3); // lwz @ 0x807C22FC
    /* lfs f0, 0(r4) */ // 0x807C2300
    /* stfs f0, 0x2c(r3) */ // 0x807C2304
    return;
}