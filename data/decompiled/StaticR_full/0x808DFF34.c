/* Function at 0x808DFF34, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808DFF34(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808DFF44
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808DFF4C
    r30 = r3;
    if (==) goto 0x0x808dffb8;
    /* lis r5, 0 */ // 0x808DFF58
    /* lis r4, 0 */ // 0x808DFF5C
    r5 = r5 + 0; // 0x808DFF60
    *(0 + r3) = r5; // stw @ 0x808DFF64
    r0 = *(0 + r4); // lwz @ 0x808DFF68
    /* addic. r0, r0, -1 */ // 0x808DFF6C
    *(0 + r4) = r0; // stw @ 0x808DFF70
    if (!=) goto 0x0x808dffa8;
    /* lis r3, 0 */ // 0x808DFF78
    r3 = *(0 + r3); // lwz @ 0x808DFF7C
    if (==) goto 0x0x808dff9c;
    r12 = *(0 + r3); // lwz @ 0x808DFF88
    /* li r4, 1 */ // 0x808DFF8C
    r12 = *(8 + r12); // lwz @ 0x808DFF90
    /* mtctr r12 */ // 0x808DFF94
    /* bctrl  */ // 0x808DFF98
    /* lis r3, 0 */ // 0x808DFF9C
    /* li r0, 0 */ // 0x808DFFA0
    *(0 + r3) = r0; // stw @ 0x808DFFA4
    if (<=) goto 0x0x808dffb8;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808DFFBC
    r30 = *(8 + r1); // lwz @ 0x808DFFC0
    r0 = *(0x14 + r1); // lwz @ 0x808DFFC4
    return;
}