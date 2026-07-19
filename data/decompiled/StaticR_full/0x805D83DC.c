/* Function at 0x805D83DC, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_805D83DC(int r3, int r4, int r5)
{
    /* addis r5, r3, 1 */ // 0x805D83DC
    /* li r0, 0 */ // 0x805D83E0
    r4 = *(-0x6c15 + r5); // lbz @ 0x805D83E4
    r3 = *(-0x6c16 + r5); // lbz @ 0x805D83E8
    *(-0x6c14 + r5) = r4; // stb @ 0x805D83EC
    *(-0x6c15 + r5) = r3; // stb @ 0x805D83F0
    *(-0x6c16 + r5) = r0; // stb @ 0x805D83F4
    return;
}