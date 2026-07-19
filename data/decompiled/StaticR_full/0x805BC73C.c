/* Function at 0x805BC73C, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805BC73C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x805BC744
    *(0x24 + r1) = r0; // stw @ 0x805BC748
    *(0x1c + r1) = r31; // stw @ 0x805BC74C
    r31 = r4;
    r3 = *(0 + r3); // lwz @ 0x805BC758
    FUN_805BB478(r4); // bl 0x805BB478
    /* li r0, 0 */ // 0x805BC764
    *(0 + r31) = r0; // stb @ 0x805BC768
    if (!=) goto 0x0x805bc784;
    r0 = *(8 + r1); // lwz @ 0x805BC770
    if (!=) goto 0x0x805bc784;
    /* li r0, 1 */ // 0x805BC77C
    *(0 + r31) = r0; // stb @ 0x805BC780
    r0 = *(0x24 + r1); // lwz @ 0x805BC784
    r31 = *(0x1c + r1); // lwz @ 0x805BC788
    return;
}