/* Function at 0x806CCBEC, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_806CCBEC(int r3)
{
    r0 = *(0x90 + r3); // lbz @ 0x806CCBEC
    /* bnelr  */ // 0x806CCBF4
    /* lis r3, 0 */ // 0x806CCBF8
    r3 = *(0 + r3); // lwz @ 0x806CCBFC
    /* b 0x8064765c */ // 0x806CCC00
}