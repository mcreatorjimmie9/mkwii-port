/* Function at 0x8079FD50, size=84 bytes */
/* Stack frame: 0 bytes */

int FUN_8079FD50(int r3, int r4, int r5, int r6)
{
    r6 = *(0x28 + r3); // lbz @ 0x8079FD50
    /* subfic r0, r6, 4 */ // 0x8079FD54
    /* mtctr r0 */ // 0x8079FD58
    /* bgelr  */ // 0x8079FD60
    r0 = r6 rlwinm 2; // rlwinm
    r5 = r3 + r0; // 0x8079FD68
    r0 = *(0x18 + r5); // lwz @ 0x8079FD6C
    if (!=) goto 0x0x8079fd98;
    *(0x18 + r5) = r4; // stw @ 0x8079FD78
    r5 = *(0x28 + r3); // lbz @ 0x8079FD7C
    r4 = *(0x29 + r3); // lbz @ 0x8079FD80
    r0 = r5 + 1; // 0x8079FD84
    *(0x28 + r3) = r0; // stb @ 0x8079FD88
    r0 = r4 + 1; // 0x8079FD8C
    *(0x29 + r3) = r0; // stb @ 0x8079FD90
    return;
    r6 = r6 + 1; // 0x8079FD98
    if (counter-- != 0) goto 0x0x8079fd64;
    return;
}