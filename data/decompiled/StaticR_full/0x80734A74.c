/* Function at 0x80734A74, size=100 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80734A74(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x80734A80
    r31 = r3;
    r4 = r31 + 0x7bc; // 0x80734A8C
    r5 = r31 + 0x7c8; // 0x80734A90
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lis r4, 0 */ // 0x80734A98
    /* lfs f1, 0(r4) */ // 0x80734AA0
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    r3 = *(0x610 + r31); // lwz @ 0x80734AAC
    r31 = *(0xc + r3); // lwz @ 0x80734AB0
    if (==) goto 0x0x80734b24;
    r3 = r31 + 0x74; // 0x80734ABC
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80734ad4;
    /* li r3, 0 */ // 0x80734ACC
    /* b 0x80734ad8 */ // 0x80734AD0
    r3 = *(0xc + r3); // lwz @ 0x80734AD4
}