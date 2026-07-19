/* Function at 0x807BF918, size=48 bytes */
/* Stack frame: 0 bytes */

void FUN_807BF918(int r3, int r4)
{
    /* lis r4, 0 */ // 0x807BF918
    r3 = *(0 + r4); // lwz @ 0x807BF91C
    /* beqlr  */ // 0x807BF924
    /* li r0, 0 */ // 0x807BF928
    *(0 + r4) = r0; // stw @ 0x807BF92C
    /* beqlr  */ // 0x807BF930
    r12 = *(0x10 + r3); // lwz @ 0x807BF934
    /* li r4, 1 */ // 0x807BF938
    r12 = *(8 + r12); // lwz @ 0x807BF93C
    /* mtctr r12 */ // 0x807BF940
    /* bctr  */ // 0x807BF944
}