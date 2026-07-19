/* Function at 0x80641E74, size=48 bytes */
/* Stack frame: 0 bytes */

void FUN_80641E74(int r3, int r4)
{
    /* lis r4, 0 */ // 0x80641E74
    r3 = *(0 + r4); // lwz @ 0x80641E78
    /* beqlr  */ // 0x80641E80
    /* li r0, 0 */ // 0x80641E84
    *(0 + r4) = r0; // stw @ 0x80641E88
    /* beqlr  */ // 0x80641E8C
    r12 = *(0x10 + r3); // lwz @ 0x80641E90
    /* li r4, 1 */ // 0x80641E94
    r12 = *(8 + r12); // lwz @ 0x80641E98
    /* mtctr r12 */ // 0x80641E9C
    /* bctr  */ // 0x80641EA0
}