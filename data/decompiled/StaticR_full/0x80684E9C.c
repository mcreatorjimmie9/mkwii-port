/* Function at 0x80684E9C, size=48 bytes */
/* Stack frame: 0 bytes */

void FUN_80684E9C(int r3, int r5)
{
    r0 = *(0x14 + r3); // lbz @ 0x80684E9C
    /* bnelr  */ // 0x80684EA4
    r0 = *(0xc + r3); // lwz @ 0x80684EA8
    /* bnelr  */ // 0x80684EB0
    /* li r5, 1 */ // 0x80684EB4
    /* li r0, -1 */ // 0x80684EB8
    *(5 + r3) = r5; // stb @ 0x80684EBC
    *(0x120 + r3) = r0; // stw @ 0x80684EC0
    *(0x124 + r3) = r4; // stw @ 0x80684EC4
    return;
}