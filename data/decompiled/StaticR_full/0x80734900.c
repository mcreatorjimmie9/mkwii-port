/* Function at 0x80734900, size=100 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80734900(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    *(0x2c + r1) = r31; // stw @ 0x8073490C
    r31 = r3;
    r4 = r31 + 0x7bc; // 0x80734918
    r5 = r31 + 0x7c8; // 0x8073491C
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    /* lis r4, 0 */ // 0x80734924
    /* lfs f1, 0(r4) */ // 0x8073492C
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    r3 = *(0x610 + r31); // lwz @ 0x80734938
    r31 = *(0 + r3); // lwz @ 0x8073493C
    if (==) goto 0x0x807349b0;
    r3 = r31 + 0x74; // 0x80734948
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80734960;
    /* li r3, 0 */ // 0x80734958
    /* b 0x80734964 */ // 0x8073495C
    r3 = *(0xc + r3); // lwz @ 0x80734960
}