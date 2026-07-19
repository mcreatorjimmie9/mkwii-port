/* Function at 0x80704CC0, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80704CC0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r6 = r3;
    *(0x14 + r1) = r0; // stw @ 0x80704CD0
    r0 = r4;
    *(0xc + r1) = r31; // stw @ 0x80704CD8
    r31 = r5;
    if (==) goto 0x0x80704cf8;
    r4 = *(0x10 + r5); // lwz @ 0x80704CE4
    r3 = r31;
    /* li r5, 8 */ // 0x80704CEC
    FUN_80704DE0(r3, r5); // bl 0x80704DE0
    /* b 0x80704d10 */ // 0x80704CF4
    r3 = *(0x18 + r5); // lwz @ 0x80704CF8
    r4 = r6;
    r5 = r0;
    FUN_805E3430(r4, r5); // bl 0x805E3430
    /* li r0, 1 */ // 0x80704D08
    *(4 + r31) = r0; // stw @ 0x80704D0C
    r0 = *(0x14 + r1); // lwz @ 0x80704D10
    r31 = *(0xc + r1); // lwz @ 0x80704D14
}