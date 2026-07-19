/* Function at 0x807F01D0, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807F01D0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807F01E0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807F01E8
    r30 = r3;
    if (==) goto 0x0x807f020c;
    /* li r4, 0 */ // 0x807F01F4
    FUN_807F7408(r4); // bl 0x807F7408
    if (<=) goto 0x0x807f020c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807F0210
    r30 = *(8 + r1); // lwz @ 0x807F0214
    r0 = *(0x14 + r1); // lwz @ 0x807F0218
    return;
}