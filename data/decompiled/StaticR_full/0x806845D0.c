/* Function at 0x806845D0, size=44 bytes */
/* Stack frame: 0 bytes */

void FUN_806845D0(int r3, int r4)
{
    r0 = *(0x14 + r3); // lbz @ 0x806845D0
    /* bnelr  */ // 0x806845D8
    r0 = *(0xc + r3); // lwz @ 0x806845DC
    /* bnelr  */ // 0x806845E4
    /* li r4, 1 */ // 0x806845E8
    /* li r0, 0 */ // 0x806845EC
    *(2 + r3) = r4; // stb @ 0x806845F0
    *(0x16 + r3) = r0; // stb @ 0x806845F4
    return;
}