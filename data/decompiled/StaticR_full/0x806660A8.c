/* Function at 0x806660A8, size=76 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 1 function(s) */

int FUN_806660A8(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* lis r5, 0 */ // 0x806660B0
    *(0x34 + r1) = r0; // stw @ 0x806660B4
    /* stmw r24, 0x10(r1) */ // 0x806660B8
    r31 = r3;
    r24 = r4;
    r3 = *(0 + r5); // lwz @ 0x806660C4
    r3 = *(0 + r3); // lwz @ 0x806660C8
    r25 = *(0x3e8 + r3); // lwz @ 0x806660CC
    r26 = *(0 + r25); // lwz @ 0x806660D0
    /* b 0x806660f4 */ // 0x806660D4
    r4 = r24;
    r3 = r26 + 0x370; // 0x806660DC
    FUN_805E3430(r4, r3); // bl 0x805E3430
    if (!=) goto 0x0x806660f0;
    /* b 0x80666238 */ // 0x806660EC
    r26 = *(0x3b0 + r26); // lwz @ 0x806660F0
}