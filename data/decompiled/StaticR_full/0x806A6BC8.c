/* Function at 0x806A6BC8, size=52 bytes */
/* Stack frame: 0 bytes */

void FUN_806A6BC8(int r5)
{
    /* lis r5, 0 */ // 0x806A6BC8
    r5 = *(0 + r5); // lwz @ 0x806A6BCC
    r5 = *(0 + r5); // lwz @ 0x806A6BD0
    r5 = *(0 + r5); // lwz @ 0x806A6BD4
    r0 = r5 + -0x58; // 0x806A6BD8
    /* bgtlr  */ // 0x806A6BE0
    /* lis r5, 0 */ // 0x806A6BE4
    /* slwi r0, r0, 2 */ // 0x806A6BE8
    r5 = r5 + 0; // 0x806A6BEC
    /* lwzx r5, r5, r0 */ // 0x806A6BF0
    /* mtctr r5 */ // 0x806A6BF4
    /* bctr  */ // 0x806A6BF8
}