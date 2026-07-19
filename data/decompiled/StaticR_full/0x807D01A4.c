/* Function at 0x807D01A4, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807D01A4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807D01B4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807D01BC
    r30 = r3;
    if (==) goto 0x0x807d0200;
    r5 = *(4 + r3); // lwz @ 0x807D01C8
    /* lis r4, 0 */ // 0x807D01CC
    r4 = r4 + 0; // 0x807D01D0
    *(0 + r3) = r4; // stw @ 0x807D01D4
    if (==) goto 0x0x807d01e8;
    r3 = r5 + -0x10; // 0x807D01E0
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x807D01EC
    *(4 + r30) = r0; // stw @ 0x807D01F0
    if (<=) goto 0x0x807d0200;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807D0204
    r30 = *(8 + r1); // lwz @ 0x807D0208
    r0 = *(0x14 + r1); // lwz @ 0x807D020C
    return;
}