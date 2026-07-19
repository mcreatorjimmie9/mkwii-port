/* Function at 0x806CCB40, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_806CCB40(int r3)
{
    r0 = *(0x90 + r3); // lbz @ 0x806CCB40
    /* bnelr  */ // 0x806CCB48
    r0 = *(8 + r3); // lwz @ 0x806CCB4C
    /* bltlr  */ // 0x806CCB54
    /* lis r3, 0 */ // 0x806CCB58
    r3 = *(0 + r3); // lwz @ 0x806CCB5C
    /* b 0x80647620 */ // 0x806CCB60
}