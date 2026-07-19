/* Function at 0x807C8C40, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807C8C40(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807C8C50
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807C8C58
    r30 = r3;
    if (==) goto 0x0x807c8cac;
    r0 = *(0xc4 + r3); // lwz @ 0x807C8C64
    /* lis r4, 0 */ // 0x807C8C68
    r4 = r4 + 0; // 0x807C8C6C
    *(0x34 + r3) = r4; // stw @ 0x807C8C70
    if (==) goto 0x0x807c8c94;
    r3 = r0;
    /* li r4, 1 */ // 0x807C8C80
    r12 = *(0 + r3); // lwz @ 0x807C8C84
    r12 = *(8 + r12); // lwz @ 0x807C8C88
    /* mtctr r12 */ // 0x807C8C8C
    /* bctrl  */ // 0x807C8C90
    /* li r0, 0 */ // 0x807C8C98
    *(0xc4 + r30) = r0; // stw @ 0x807C8C9C
    if (<=) goto 0x0x807c8cac;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807C8CB0
    r30 = *(8 + r1); // lwz @ 0x807C8CB4
    r0 = *(0x14 + r1); // lwz @ 0x807C8CB8
    return;
}