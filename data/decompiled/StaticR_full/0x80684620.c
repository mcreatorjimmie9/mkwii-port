/* Function at 0x80684620, size=80 bytes */
/* Stack frame: 0 bytes */

void FUN_80684620(int r3, int r4)
{
    r0 = *(0x14 + r3); // lbz @ 0x80684620
    /* cmpwi cr1, r0, 0 */
    /* bnelr cr1 */ // 0x80684628
    r0 = *(0x16 + r3); // lbz @ 0x8068462C
    /* beqlr  */ // 0x80684634
    r0 = *(8 + r3); // lwz @ 0x80684638
    /* beqlr  */ // 0x80684640
    /* beqlr  */ // 0x80684648
    /* bnelr cr1 */ // 0x8068464C
    r0 = *(0xc + r3); // lwz @ 0x80684650
    /* bnelr  */ // 0x80684658
    /* li r4, 1 */ // 0x8068465C
    /* li r0, 0 */ // 0x80684660
    *(2 + r3) = r4; // stb @ 0x80684664
    *(0x16 + r3) = r0; // stb @ 0x80684668
    return;
}