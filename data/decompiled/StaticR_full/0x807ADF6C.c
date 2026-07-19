/* Function at 0x807ADF6C, size=48 bytes */
/* Stack frame: 0 bytes */

void FUN_807ADF6C(int r3, int r4)
{
    /* lis r4, 0 */ // 0x807ADF6C
    r3 = *(0 + r4); // lwz @ 0x807ADF70
    /* beqlr  */ // 0x807ADF78
    /* li r0, 0 */ // 0x807ADF7C
    *(0 + r4) = r0; // stw @ 0x807ADF80
    /* beqlr  */ // 0x807ADF84
    r12 = *(0x10 + r3); // lwz @ 0x807ADF88
    /* li r4, 1 */ // 0x807ADF8C
    r12 = *(8 + r12); // lwz @ 0x807ADF90
    /* mtctr r12 */ // 0x807ADF94
    /* bctr  */ // 0x807ADF98
}