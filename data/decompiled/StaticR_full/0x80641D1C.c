/* Function at 0x80641D1C, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80641D1C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80641D2C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80641D34
    r30 = r3;
    if (==) goto 0x0x80641d98;
    /* lis r5, 0 */ // 0x80641D40
    /* lis r4, 0 */ // 0x80641D44
    r5 = r5 + 0; // 0x80641D48
    *(0 + r3) = r5; // stw @ 0x80641D4C
    r3 = *(0 + r4); // lwz @ 0x80641D50
    if (==) goto 0x0x80641d7c;
    /* li r0, 0 */ // 0x80641D5C
    *(0 + r4) = r0; // stw @ 0x80641D60
    if (==) goto 0x0x80641d7c;
    r12 = *(0x10 + r3); // lwz @ 0x80641D68
    /* li r4, 1 */ // 0x80641D6C
    r12 = *(8 + r12); // lwz @ 0x80641D70
    /* mtctr r12 */ // 0x80641D74
    /* bctrl  */ // 0x80641D78
    r3 = r30;
    /* li r4, 0 */ // 0x80641D80
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x80641d98;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80641D9C
    r30 = *(8 + r1); // lwz @ 0x80641DA0
}