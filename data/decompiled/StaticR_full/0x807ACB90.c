/* Function at 0x807ACB90, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807ACB90(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807ACBA0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807ACBA8
    r30 = r3;
    if (==) goto 0x0x807acc24;
    r0 = *(8 + r3); // lwz @ 0x807ACBB4
    /* lis r4, 0 */ // 0x807ACBB8
    r4 = r4 + 0; // 0x807ACBBC
    *(0 + r3) = r4; // stw @ 0x807ACBC0
    if (==) goto 0x0x807acbe4;
    r3 = r0;
    /* li r4, 1 */ // 0x807ACBD0
    r12 = *(0 + r3); // lwz @ 0x807ACBD4
    r12 = *(8 + r12); // lwz @ 0x807ACBD8
    /* mtctr r12 */ // 0x807ACBDC
    /* bctrl  */ // 0x807ACBE0
    r3 = *(4 + r30); // lwz @ 0x807ACBE4
    /* li r0, 0 */ // 0x807ACBE8
    *(8 + r30) = r0; // stw @ 0x807ACBEC
    if (==) goto 0x0x807acc0c;
    r12 = *(0 + r3); // lwz @ 0x807ACBF8
    /* li r4, 1 */ // 0x807ACBFC
    r12 = *(8 + r12); // lwz @ 0x807ACC00
    /* mtctr r12 */ // 0x807ACC04
    /* bctrl  */ // 0x807ACC08
    /* li r0, 0 */ // 0x807ACC10
    *(4 + r30) = r0; // stw @ 0x807ACC14
    if (<=) goto 0x0x807acc24;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807ACC28
    r30 = *(8 + r1); // lwz @ 0x807ACC2C
    r0 = *(0x14 + r1); // lwz @ 0x807ACC30
    return;
}