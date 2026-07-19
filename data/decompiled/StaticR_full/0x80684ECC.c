/* Function at 0x80684ECC, size=44 bytes */
/* Stack frame: 0 bytes */

void FUN_80684ECC(int r3)
{
    r0 = *(0x14 + r3); // lbz @ 0x80684ECC
    /* bnelr  */ // 0x80684ED4
    r0 = *(0xc + r3); // lwz @ 0x80684ED8
    /* bnelr  */ // 0x80684EE0
    /* li r0, 1 */ // 0x80684EE4
    *(5 + r3) = r0; // stb @ 0x80684EE8
    *(0x120 + r3) = r4; // stw @ 0x80684EEC
    *(0x124 + r3) = r5; // stw @ 0x80684EF0
    return;
}