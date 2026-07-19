/* Function at 0x805DA480, size=176 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805DA480(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x805DA490
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x805DA498
    r4 = *(0x30 + r31); // lwz @ 0x805DA49C
    r6 = *(0x34 + r31); // lwz @ 0x805DA4A0
    FUN_805DB7A8(); // bl 0x805DB7A8
    /* clrlwi. r0, r3, 0x18 */ // 0x805DA4A8
    *(0xa0 + r31) = r3; // stb @ 0x805DA4AC
    if (==) goto 0x0x805da514;
    r3 = *(0x98 + r31); // lwz @ 0x805DA4B4
    /* li r4, 1 */ // 0x805DA4B8
    /* li r0, 0 */ // 0x805DA4BC
    *(0xc + r3) = r4; // stb @ 0x805DA4C0
    /* lfs f0, 8(r1) */ // 0x805DA4C4
    /* lfs f2, 0xc(r1) */ // 0x805DA4C8
    /* fctiwz f1, f0 */ // 0x805DA4CC
    r5 = *(0x98 + r31); // lwz @ 0x805DA4D0
    /* fctiwz f0, f2 */ // 0x805DA4D4
    /* stfd f1, 0x18(r1) */ // 0x805DA4D8
    r7 = *(0x1c + r1); // lwz @ 0x805DA4DC
    /* stfd f0, 0x20(r1) */ // 0x805DA4E0
    r3 = r7 + -1; // 0x805DA4E4
    *(4 + r5) = r7; // sth @ 0x805DA4E8
    r4 = r3 rlwinm 0; // rlwinm
    r6 = *(0x24 + r1); // lwz @ 0x805DA4F0
    *(6 + r5) = r6; // sth @ 0x805DA4F4
    r3 = r6 + -1; // 0x805DA4F8
    *(8 + r5) = r4; // sth @ 0x805DA4FC
    r3 = r3 rlwinm 0; // rlwinm
    *(0xa + r5) = r3; // sth @ 0x805DA504
    r3 = *(0x98 + r31); // lwz @ 0x805DA508
    *(0xd + r3) = r0; // stb @ 0x805DA50C
    /* b 0x805da51c */ // 0x805DA510
    /* li r0, 0 */ // 0x805DA514
    *(8 + r31) = r0; // stw @ 0x805DA518
    r0 = *(0x34 + r1); // lwz @ 0x805DA51C
    r31 = *(0x2c + r1); // lwz @ 0x805DA520
    return;
}