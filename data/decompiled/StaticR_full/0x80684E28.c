/* Function at 0x80684E28, size=60 bytes */
/* Stack frame: 0 bytes */

void FUN_80684E28(int r3, int r8)
{
    r0 = *(0x14 + r3); // lbz @ 0x80684E28
    /* bnelr  */ // 0x80684E30
    r0 = *(0xc + r3); // lwz @ 0x80684E34
    /* bnelr  */ // 0x80684E3C
    /* li r8, 1 */ // 0x80684E40
    /* li r0, -1 */ // 0x80684E44
    *(4 + r3) = r8; // stb @ 0x80684E48
    *(0xfc + r3) = r0; // stw @ 0x80684E4C
    *(0x100 + r3) = r4; // stw @ 0x80684E50
    *(0x104 + r3) = r5; // stb @ 0x80684E54
    *(0x108 + r3) = r6; // stw @ 0x80684E58
    *(0x10c + r3) = r7; // stb @ 0x80684E5C
    return;
}