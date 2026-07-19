/* Function at 0x807DC22C, size=48 bytes */
/* Stack frame: 0 bytes */

void FUN_807DC22C(int r3, int r4)
{
    /* lis r4, 0 */ // 0x807DC22C
    r3 = *(0 + r4); // lwz @ 0x807DC230
    /* beqlr  */ // 0x807DC238
    /* li r0, 0 */ // 0x807DC23C
    *(0 + r4) = r0; // stw @ 0x807DC240
    /* beqlr  */ // 0x807DC244
    r12 = *(0x10 + r3); // lwz @ 0x807DC248
    /* li r4, 1 */ // 0x807DC24C
    r12 = *(8 + r12); // lwz @ 0x807DC250
    /* mtctr r12 */ // 0x807DC254
    /* bctr  */ // 0x807DC258
}