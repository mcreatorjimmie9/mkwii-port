/* Function at 0x805F1DDC, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805F1DDC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805F1DEC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805F1DF4
    r30 = r3;
    if (==) goto 0x0x805f1e48;
    /* lis r4, 0 */ // 0x805F1E00
    r4 = r4 + 0; // 0x805F1E04
    *(0 + r3) = r4; // stw @ 0x805F1E08
    FUN_805F4D14(r4, r4); // bl 0x805F4D14
    r12 = *(0 + r30); // lwz @ 0x805F1E10
    r3 = r30;
    r12 = *(0x1c + r12); // lwz @ 0x805F1E18
    /* mtctr r12 */ // 0x805F1E1C
    /* bctrl  */ // 0x805F1E20
    if (==) goto 0x0x805f1e38;
    r3 = r30;
    /* li r4, 0 */ // 0x805F1E30
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x805f1e48;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805F1E4C
    r30 = *(8 + r1); // lwz @ 0x805F1E50
    r0 = *(0x14 + r1); // lwz @ 0x805F1E54
    return;
}