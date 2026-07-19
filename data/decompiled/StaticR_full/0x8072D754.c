/* Function at 0x8072D754, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8072D754(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x8072D764
    *(8 + r1) = r30; // stw @ 0x8072D768
    r30 = r3;
    r4 = *(0x118 + r3); // lwz @ 0x8072D770
    r4 = *(0 + r4); // lwz @ 0x8072D774
    r4 = *(4 + r4); // lwz @ 0x8072D778
    r0 = *(0xc + r4); // lwz @ 0x8072D77C
    /* rlwinm. r0, r0, 0xd, 0x1f, 0x1f */ // 0x8072D780
    *(0xf5 + r3) = r0; // stb @ 0x8072D784
    if (==) goto 0x0x8072d7a0;
    /* li r31, 1 */ // 0x8072D78C
    /* li r4, 1 */ // 0x8072D790
    FUN_8072550C(r4); // bl 0x8072550C
    /* li r0, 1 */ // 0x8072D798
    *(4 + r30) = r0; // stb @ 0x8072D79C
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x8072D7A4
    r30 = *(8 + r1); // lwz @ 0x8072D7A8
    r0 = *(0x14 + r1); // lwz @ 0x8072D7AC
    return;
}