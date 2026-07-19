/* Function at 0x807DA570, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807DA570(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807DA57C
    r31 = r3;
    *(9 + r3) = r6; // stb @ 0x807DA584
    *(0xa + r3) = r5; // stb @ 0x807DA588
    *(0xb + r3) = r4; // stb @ 0x807DA58C
    FUN_807DAA14(); // bl 0x807DAA14
    /* lfs f1, 0x20(r31) */ // 0x807DA594
    r31 = *(0xc + r1); // lwz @ 0x807DA598
    r0 = *(0x14 + r1); // lwz @ 0x807DA59C
    return;
}