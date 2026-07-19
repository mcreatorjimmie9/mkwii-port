/* Function at 0x80641F3C, size=156 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80641F3C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80641F4C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80641F54
    r30 = r3;
    if (==) goto 0x0x80641fbc;
    if (==) goto 0x0x80641fac;
    /* lis r5, 0 */ // 0x80641F64
    /* lis r4, 0 */ // 0x80641F68
    r5 = r5 + 0; // 0x80641F6C
    *(0 + r3) = r5; // stw @ 0x80641F70
    r3 = *(0 + r4); // lwz @ 0x80641F74
    if (==) goto 0x0x80641fa0;
    /* li r0, 0 */ // 0x80641F80
    *(0 + r4) = r0; // stw @ 0x80641F84
    if (==) goto 0x0x80641fa0;
    r12 = *(0x10 + r3); // lwz @ 0x80641F8C
    /* li r4, 1 */ // 0x80641F90
    r12 = *(8 + r12); // lwz @ 0x80641F94
    /* mtctr r12 */ // 0x80641F98
    /* bctrl  */ // 0x80641F9C
    r3 = r30;
    /* li r4, 0 */ // 0x80641FA4
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x80641fbc;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80641FC0
    r30 = *(8 + r1); // lwz @ 0x80641FC4
    r0 = *(0x14 + r1); // lwz @ 0x80641FC8
    return;
}