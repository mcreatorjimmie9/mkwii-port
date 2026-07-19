/* Function at 0x808AA460, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808AA460(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18 + r1) = r30; // stw @ 0x808AA470
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x808AA478
    r12 = *(0x44 + r12); // lwz @ 0x808AA47C
    /* mtctr r12 */ // 0x808AA480
    /* bctrl  */ // 0x808AA484
    r12 = *(0 + r30); // lwz @ 0x808AA488
    r3 = r30;
    r12 = *(0x5c + r12); // lwz @ 0x808AA490
    /* mtctr r12 */ // 0x808AA494
    /* bctrl  */ // 0x808AA498
    r12 = *(0 + r30); // lwz @ 0x808AA49C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808AA4A4
    /* mtctr r12 */ // 0x808AA4A8
    /* bctrl  */ // 0x808AA4AC
    r31 = *(0xc4 + r30); // lwz @ 0x808AA4B0
    r3 = r31;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r4 = r31 + 0x58; // 0x808AA4C0
    r5 = r30 + 0xb8; // 0x808AA4C4
    FUN_805E3430(r3, r3, r4, r5); // bl 0x805E3430
}