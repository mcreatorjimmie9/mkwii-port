/* Function at 0x807B1AD4, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807B1AD4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807B1AE4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807B1AEC
    r30 = r3;
    if (==) goto 0x0x807b1b14;
    if (==) goto 0x0x807b1b04;
    /* li r4, 0 */ // 0x807B1AFC
    FUN_807D01A4(r4); // bl 0x807D01A4
    if (<=) goto 0x0x807b1b14;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807B1B18
    r30 = *(8 + r1); // lwz @ 0x807B1B1C
    r0 = *(0x14 + r1); // lwz @ 0x807B1B20
    return;
}