/* Function at 0x807D2068, size=48 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_807D2068(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* lis r6, 0 */ // 0x807D2070
    *(0x34 + r1) = r0; // stw @ 0x807D2074
    /* stmw r25, 0x14(r1) */ // 0x807D2078
    r31 = r3;
    r26 = r4;
    r25 = r5;
    /* li r3, 0x1c */ // 0x807D2088
    r6 = *(0 + r6); // lwz @ 0x807D208C
    r28 = *(0x14 + r6); // lwz @ 0x807D2090
    FUN_805E3430(r3); // bl 0x805E3430
}