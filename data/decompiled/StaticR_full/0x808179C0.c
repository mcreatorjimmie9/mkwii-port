/* Function at 0x808179C0, size=48 bytes */
/* Stack frame: 0 bytes */

int FUN_808179C0(int r3, int r4, int r5)
{
    r0 = *(0x1e + r3); // lbz @ 0x808179C0
    /* lis r4, -0x2121 */ // 0x808179C4
    r5 = *(0x20 + r3); // lwz @ 0x808179C8
    r4 = r4 + -0x2122; // 0x808179CC
    r0 = r5 & r4; // 0x808179D4
    *(0x20 + r3) = r0; // stw @ 0x808179D8
    /* bnelr  */ // 0x808179DC
    /* lis r5, 0 */ // 0x808179E0
    r4 = r3;
    r3 = *(0 + r5); // lwz @ 0x808179E8
    /* b 0x80817810 */ // 0x808179EC
}