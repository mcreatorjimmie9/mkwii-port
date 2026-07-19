/* Function at 0x806845FC, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_806845FC(int r3)
{
    r0 = *(0x14 + r3); // lbz @ 0x806845FC
    /* bnelr  */ // 0x80684604
    r0 = *(2 + r3); // lbz @ 0x80684608
    /* bnelr  */ // 0x80684610
    /* li r0, 1 */ // 0x80684614
    *(0x16 + r3) = r0; // stb @ 0x80684618
    return;
}