/* Function at 0x808A0CB8, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808A0CB8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x808A0CCC
    r29 = r3;
    r0 = *(8 + r3); // lwz @ 0x808A0CD4
    if (==) goto 0x0x808a0de4;
    /* lis r4, 0 */ // 0x808A0CE0
    /* li r30, 0 */ // 0x808A0CE4
    r4 = *(0 + r4); // lwz @ 0x808A0CE8
    r0 = *(0x25 + r4); // lbz @ 0x808A0CEC
    if (!=) goto 0x0x808a0d0c;
    r12 = *(0 + r3); // lwz @ 0x808A0CF8
    r12 = *(0x38 + r12); // lwz @ 0x808A0CFC
    /* mtctr r12 */ // 0x808A0D00
    /* bctrl  */ // 0x808A0D04
    /* b 0x808a0d1c */ // 0x808A0D08
    r12 = *(0 + r3); // lwz @ 0x808A0D0C
    r12 = *(0x3c + r12); // lwz @ 0x808A0D10
    /* mtctr r12 */ // 0x808A0D14
    /* bctrl  */ // 0x808A0D18
    r31 = r3;
    r4 = r3;
    r3 = r29 + 0x14; // 0x808A0D24
    FUN_805E3430(r4, r3); // bl 0x805E3430
    if (==) goto 0x0x808a0d48;
    r3 = r29;
    /* li r4, 0 */ // 0x808A0D38
    /* li r5, 0 */ // 0x808A0D3C
    /* li r30, 1 */ // 0x808A0D40
    FUN_808A101C(r3, r4, r5); // bl 0x808A101C
}