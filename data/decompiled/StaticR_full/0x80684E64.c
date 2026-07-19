/* Function at 0x80684E64, size=56 bytes */
/* Stack frame: 0 bytes */

void FUN_80684E64(int r3)
{
    r0 = *(0x14 + r3); // lbz @ 0x80684E64
    /* bnelr  */ // 0x80684E6C
    r0 = *(0xc + r3); // lwz @ 0x80684E70
    /* bnelr  */ // 0x80684E78
    /* li r0, 1 */ // 0x80684E7C
    *(4 + r3) = r0; // stb @ 0x80684E80
    *(0xfc + r3) = r4; // stw @ 0x80684E84
    *(0x100 + r3) = r5; // stw @ 0x80684E88
    *(0x104 + r3) = r6; // stb @ 0x80684E8C
    *(0x108 + r3) = r7; // stw @ 0x80684E90
    *(0x10c + r3) = r8; // stb @ 0x80684E94
    return;
}