/* Function at 0x807C6D94, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807C6D94(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807C6D9C
    *(0x14 + r1) = r0; // stw @ 0x807C6DA0
    *(0xc + r1) = r31; // stw @ 0x807C6DA4
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x807C6DAC
    /* li r4, 2 */ // 0x807C6DB0
    FUN_805C5788(r4); // bl 0x805C5788
    if (==) goto 0x0x807c6dcc;
    r3 = r31;
    r4 = r31 + 0x64; // 0x807C6DC4
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807C6DCC
    r31 = *(0xc + r1); // lwz @ 0x807C6DD0
    return;
}