/* Function at 0x80776AE4, size=76 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_80776AE4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x80776AF0
    /* lis r28, 0 */ // 0x80776AF4
    r31 = r3;
    r5 = r28 + 0; // 0x80776AFC
    FUN_80776794(r5); // bl 0x80776794
    /* lis r4, 0 */ // 0x80776B04
    r3 = r31;
    r4 = r4 + 0; // 0x80776B0C
    *(0 + r31) = r4; // stw @ 0x80776B10
    r12 = *(0 + r31); // lwz @ 0x80776B14
    r12 = *(0x28 + r12); // lwz @ 0x80776B18
    /* mtctr r12 */ // 0x80776B1C
    /* bctrl  */ // 0x80776B20
    r4 = r28 + 0; // 0x80776B24
    r4 = r4 + 0x11; // 0x80776B28
    FUN_805E3430(r4, r4); // bl 0x805E3430
}