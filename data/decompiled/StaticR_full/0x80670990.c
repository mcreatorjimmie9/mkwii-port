/* Function at 0x80670990, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_80670990(int r3, int r4)
{
    r0 = *(0xac + r3); // lwz @ 0x80670990
    /* li r4, 1 */ // 0x80670994
    *(0xfc + r3) = r4; // stb @ 0x80670998
    /* bnelr  */ // 0x806709A0
    /* b 0x805b9bb0 */ // 0x806709A4
}