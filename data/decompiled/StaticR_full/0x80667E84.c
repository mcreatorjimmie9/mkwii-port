/* Function at 0x80667E84, size=60 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_80667E84(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x80667E90
    r30 = r3;
    r29 = r4;
    r25 = *(0 + r3); // lwz @ 0x80667E9C
    /* b 0x80667ec4 */ // 0x80667EA0
    r4 = r29;
    r3 = r25 + 0x370; // 0x80667EA8
    FUN_805E3430(r4, r3); // bl 0x805E3430
    if (!=) goto 0x0x80667ec0;
    r3 = r25;
    /* b 0x8066800c */ // 0x80667EBC
}