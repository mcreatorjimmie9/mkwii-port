/* Function at 0x807C9B30, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807C9B30(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807C9B40
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807C9B48
    r30 = r3;
    if (==) goto 0x0x807c9b9c;
    r0 = *(4 + r3); // lwz @ 0x807C9B54
    /* lis r4, 0 */ // 0x807C9B58
    r4 = r4 + 0; // 0x807C9B5C
    *(0 + r3) = r4; // stw @ 0x807C9B60
    if (==) goto 0x0x807c9b84;
    r3 = r0;
    /* li r4, 1 */ // 0x807C9B70
    r12 = *(0 + r3); // lwz @ 0x807C9B74
    r12 = *(8 + r12); // lwz @ 0x807C9B78
    /* mtctr r12 */ // 0x807C9B7C
    /* bctrl  */ // 0x807C9B80
    /* li r0, 0 */ // 0x807C9B88
    *(4 + r30) = r0; // stw @ 0x807C9B8C
    if (<=) goto 0x0x807c9b9c;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807C9BA0
    r30 = *(8 + r1); // lwz @ 0x807C9BA4
    r0 = *(0x14 + r1); // lwz @ 0x807C9BA8
    return;
}