/* Function at 0x80665D34, size=76 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 1 function(s) */

int FUN_80665D34(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* lis r5, 0 */ // 0x80665D3C
    *(0x34 + r1) = r0; // stw @ 0x80665D40
    /* stmw r24, 0x10(r1) */ // 0x80665D44
    r31 = r3;
    r24 = r4;
    r3 = *(0 + r5); // lwz @ 0x80665D50
    r3 = *(0 + r3); // lwz @ 0x80665D54
    r25 = *(0x3e8 + r3); // lwz @ 0x80665D58
    r26 = *(0 + r25); // lwz @ 0x80665D5C
    /* b 0x80665d80 */ // 0x80665D60
    r4 = r24;
    r3 = r26 + 0x370; // 0x80665D68
    FUN_805E3430(r4, r3); // bl 0x805E3430
    if (!=) goto 0x0x80665d7c;
    /* b 0x80665ec4 */ // 0x80665D78
    r26 = *(0x3b0 + r26); // lwz @ 0x80665D7C
}