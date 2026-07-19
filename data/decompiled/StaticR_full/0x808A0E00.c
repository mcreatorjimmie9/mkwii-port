/* Function at 0x808A0E00, size=144 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808A0E00(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x808A0E10
    r30 = r3;
    r0 = *(8 + r3); // lwz @ 0x808A0E18
    if (!=) goto 0x0x808a0e2c;
    /* li r3, 0 */ // 0x808A0E24
    /* b 0x808a0ef4 */ // 0x808A0E28
    /* lis r4, 0 */ // 0x808A0E2C
    r4 = *(0 + r4); // lwz @ 0x808A0E30
    r0 = *(0x25 + r4); // lbz @ 0x808A0E34
    if (!=) goto 0x0x808a0e58;
    r12 = *(0 + r3); // lwz @ 0x808A0E40
    r12 = *(0x38 + r12); // lwz @ 0x808A0E44
    /* mtctr r12 */ // 0x808A0E48
    /* bctrl  */ // 0x808A0E4C
    r31 = r3;
    /* b 0x808a0e6c */ // 0x808A0E54
    r12 = *(0 + r3); // lwz @ 0x808A0E58
    r12 = *(0x3c + r12); // lwz @ 0x808A0E5C
    /* mtctr r12 */ // 0x808A0E60
    /* bctrl  */ // 0x808A0E64
    r31 = r3;
    r4 = r31;
    r3 = r30 + 0x14; // 0x808A0E70
    FUN_805E3430(r4, r3); // bl 0x805E3430
    if (==) goto 0x0x808a0e88;
    /* li r3, 1 */ // 0x808A0E80
    /* b 0x808a0ef4 */ // 0x808A0E84
    r4 = r31;
    r3 = r30 + 0x14; // 0x808A0E8C
}