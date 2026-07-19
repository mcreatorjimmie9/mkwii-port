/* Function at 0x80672580, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80672580(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80672590
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80672598
    r30 = r3;
    if (==) goto 0x0x806725f8;
    r0 = *(0x38 + r3); // lwz @ 0x806725A4
    /* lis r4, 0 */ // 0x806725A8
    r4 = r4 + 0; // 0x806725AC
    *(0 + r3) = r4; // stw @ 0x806725B0
    if (==) goto 0x0x806725d4;
    r3 = r0;
    /* li r4, 1 */ // 0x806725C0
    r12 = *(0 + r3); // lwz @ 0x806725C4
    r12 = *(0xc + r12); // lwz @ 0x806725C8
    /* mtctr r12 */ // 0x806725CC
    /* bctrl  */ // 0x806725D0
    if (==) goto 0x0x806725e8;
    r3 = r30 + 0x24; // 0x806725DC
    /* li r4, -1 */ // 0x806725E0
    FUN_8064DB0C(r3, r4); // bl 0x8064DB0C
    if (<=) goto 0x0x806725f8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806725FC
    r30 = *(8 + r1); // lwz @ 0x80672600
    r0 = *(0x14 + r1); // lwz @ 0x80672604
    return;
}