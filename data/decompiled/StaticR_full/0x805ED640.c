/* Function at 0x805ED640, size=112 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_805ED640(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* stmw r27, 0x1c(r1) */ // 0x805ED64C
    r27 = r4;
    r5 = *(0x10 + r3); // lwz @ 0x805ED654
    r4 = *(4 + r5); // lwz @ 0x805ED658
    if (!=) goto 0x0x805ed66c;
    r0 = *(0 + r5); // lwz @ 0x805ED664
    /* b 0x805ed670 */ // 0x805ED668
    /* li r0, 0 */ // 0x805ED66C
    if (==) goto 0x0x805ed698;
    if (!=) goto 0x0x805ed688;
    r3 = *(0 + r5); // lwz @ 0x805ED680
    /* b 0x805ed68c */ // 0x805ED684
    /* li r3, 0 */ // 0x805ED688
    r4 = r27;
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x805ed6fc */ // 0x805ED694
    r31 = r3;
    /* li r30, 0 */ // 0x805ED69C
    r29 = *(0x14 + r31); // lwz @ 0x805ED6A0
    /* li r28, 0 */ // 0x805ED6A4
    /* b 0x805ed6cc */ // 0x805ED6A8
    r3 = r29;
}