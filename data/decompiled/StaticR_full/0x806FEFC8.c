/* Function at 0x806FEFC8, size=96 bytes */
/* Stack frame: 256 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_806FEFC8(int r3, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -256(r1) */
    /* saved r25 */
    /* stmw r25, 0xe4(r1) */ // 0x806FEFD4
    r27 = r3;
    r29 = r5;
    r28 = r6;
    r25 = r7;
    r30 = r8;
    r31 = r9;
    r0 = *(0x41f4 + r3); // lwz @ 0x806FEFF0
    if (!=) goto 0x0x806ff00c;
    /* li r0, 2 */ // 0x806FEFFC
    *(0x14 + r3) = r0; // stw @ 0x806FF000
    /* li r3, 0 */ // 0x806FF004
    /* b 0x806ff168 */ // 0x806FF008
    r3 = *(0x757c + r3); // lwz @ 0x806FF00C
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806ff02c;
    /* li r0, 6 */ // 0x806FF01C
    *(0x14 + r27) = r0; // stw @ 0x806FF020
    /* li r3, 0 */ // 0x806FF024
}