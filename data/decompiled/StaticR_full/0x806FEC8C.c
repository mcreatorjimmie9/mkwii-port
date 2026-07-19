/* Function at 0x806FEC8C, size=92 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_806FEC8C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* stmw r27, 0x1c(r1) */ // 0x806FEC98
    r31 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r0 = *(0x41f4 + r3); // lwz @ 0x806FECB0
    if (!=) goto 0x0x806feccc;
    /* li r0, 2 */ // 0x806FECBC
    *(0x14 + r3) = r0; // stw @ 0x806FECC0
    /* li r3, 0 */ // 0x806FECC4
    /* b 0x806fedc8 */ // 0x806FECC8
    r3 = *(0x757c + r3); // lwz @ 0x806FECCC
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806fecec;
    /* li r0, 6 */ // 0x806FECDC
    *(0x14 + r31) = r0; // stw @ 0x806FECE0
    /* li r3, 0 */ // 0x806FECE4
}