/* Function at 0x806E7BFC, size=92 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 2 function(s) */

int FUN_806E7BFC(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    r0 = r4 rlwinm 2; // rlwinm
    /* stmw r24, 0x10(r1) */ // 0x806E7C0C
    r30 = r3 + r0; // 0x806E7C10
    r24 = r3;
    r25 = r4;
    /* li r26, 0 */ // 0x806E7C1C
    r3 = *(0x1b0 + r30); // lwz @ 0x806E7C20
    r4 = *(8 + r3); // lwz @ 0x806E7C24
    if (==) goto 0x0x806e7cbc;
    r3 = *(0 + r3); // lwz @ 0x806E7C30
    FUN_805E3430(); // bl 0x805E3430
    r4 = *(0x1b0 + r30); // lwz @ 0x806E7C38
    r4 = *(0 + r4); // lwz @ 0x806E7C3C
    *(4 + r4) = r3; // stw @ 0x806E7C40
    r3 = r25;
    r5 = *(0x1b0 + r30); // lwz @ 0x806E7C48
    r4 = *(0 + r5); // lwz @ 0x806E7C4C
    r5 = *(8 + r5); // lwz @ 0x806E7C50
    FUN_805E3430(r3); // bl 0x805E3430
}