/* Function at 0x807ADE48, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807ADE48(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807ADE58
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807ADE60
    r30 = r3;
    if (==) goto 0x0x807adec4;
    /* lis r5, 0 */ // 0x807ADE6C
    /* lis r4, 0 */ // 0x807ADE70
    r5 = r5 + 0; // 0x807ADE74
    *(0 + r3) = r5; // stw @ 0x807ADE78
    r3 = *(0 + r4); // lwz @ 0x807ADE7C
    if (==) goto 0x0x807adea8;
    /* li r0, 0 */ // 0x807ADE88
    *(0 + r4) = r0; // stw @ 0x807ADE8C
    if (==) goto 0x0x807adea8;
    r12 = *(0x10 + r3); // lwz @ 0x807ADE94
    /* li r4, 1 */ // 0x807ADE98
    r12 = *(8 + r12); // lwz @ 0x807ADE9C
    /* mtctr r12 */ // 0x807ADEA0
    /* bctrl  */ // 0x807ADEA4
    r3 = r30;
    /* li r4, 0 */ // 0x807ADEAC
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x807adec4;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807ADEC8
    r30 = *(8 + r1); // lwz @ 0x807ADECC
}