/* Function at 0x805D6894, size=68 bytes */
/* Stack frame: 0 bytes */

void FUN_805D6894(int r3, int r6, int r7, int r8, int r9)
{
    /* addis r9, r3, 1 */ // 0x805D6894
    r8 = *(-0x6da6 + r9); // lbz @ 0x805D6898
    if (==) goto 0x0x805d68d0;
    r7 = *(-0x6daa + r9); // lbz @ 0x805D68A4
    /* li r3, 1 */ // 0x805D68A8
    r6 = *(-0x6da8 + r9); // lhz @ 0x805D68AC
    r0 = *(-0x6dac + r9); // lhz @ 0x805D68B0
    *(4 + r4) = r0; // sth @ 0x805D68B4
    r0 = *(-0x6da4 + r9); // lwz @ 0x805D68B8
    *(6 + r4) = r7; // stb @ 0x805D68BC
    *(8 + r4) = r6; // sth @ 0x805D68C0
    *(0xa + r4) = r8; // stb @ 0x805D68C4
    *(0 + r5) = r0; // stw @ 0x805D68C8
    return;
    /* li r3, 0 */ // 0x805D68D0
    return;
}