/* Function at 0x806709AC, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_806709AC(int r3, int r4)
{
    r0 = *(0xac + r3); // lwz @ 0x806709AC
    /* li r4, 0 */ // 0x806709B0
    *(0xfc + r3) = r4; // stb @ 0x806709B4
    /* bnelr  */ // 0x806709BC
    /* b 0x805b9b18 */ // 0x806709C0
}