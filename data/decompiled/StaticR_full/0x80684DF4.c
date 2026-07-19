/* Function at 0x80684DF4, size=52 bytes */
/* Stack frame: 0 bytes */

void FUN_80684DF4(int r3)
{
    r0 = *(0x14 + r3); // lbz @ 0x80684DF4
    /* bnelr  */ // 0x80684DFC
    r0 = *(0xc + r3); // lwz @ 0x80684E00
    /* bnelr  */ // 0x80684E08
    /* li r0, 1 */ // 0x80684E0C
    *(3 + r3) = r0; // stb @ 0x80684E10
    *(0x110 + r3) = r4; // stw @ 0x80684E14
    *(0x114 + r3) = r5; // stw @ 0x80684E18
    *(0x118 + r3) = r6; // stb @ 0x80684E1C
    *(0x11c + r3) = r7; // stw @ 0x80684E20
    return;
}