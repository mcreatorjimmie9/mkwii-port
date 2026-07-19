/* Function at 0x8076C758, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8076C758(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8076C768
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8076C770
    r30 = r3;
    if (==) goto 0x0x8076c7bc;
    r0 = *(4 + r3); // lwz @ 0x8076C77C
    /* lis r4, 0 */ // 0x8076C780
    r4 = r4 + 0; // 0x8076C784
    *(0 + r3) = r4; // stw @ 0x8076C788
    if (==) goto 0x0x8076c7ac;
    r3 = r0;
    /* li r4, 1 */ // 0x8076C798
    r12 = *(0 + r3); // lwz @ 0x8076C79C
    r12 = *(8 + r12); // lwz @ 0x8076C7A0
    /* mtctr r12 */ // 0x8076C7A4
    /* bctrl  */ // 0x8076C7A8
    if (<=) goto 0x0x8076c7bc;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8076C7C0
    r30 = *(8 + r1); // lwz @ 0x8076C7C4
    r0 = *(0x14 + r1); // lwz @ 0x8076C7C8
    return;
}