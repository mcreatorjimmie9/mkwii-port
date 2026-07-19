/* Function at 0x805E75F8, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805E75F8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x805E7608
    r30 = r3;
    r31 = *(0x30 + r3); // lwz @ 0x805E7610
    if (==) goto 0x0x805e7654;
    r3 = *(0x24 + r3); // lwz @ 0x805E761C
    r3 = *(0 + r3); // lwz @ 0x805E7620
    if (==) goto 0x0x805e7654;
    if (==) goto 0x0x805e7654;
    r12 = *(0 + r3); // lwz @ 0x805E7630
    r12 = *(0xc + r12); // lwz @ 0x805E7634
    /* mtctr r12 */ // 0x805E7638
    /* bctrl  */ // 0x805E763C
    r12 = *(0 + r31); // lwz @ 0x805E7640
    r3 = r31;
    r12 = *(0x60 + r12); // lwz @ 0x805E7648
    /* mtctr r12 */ // 0x805E764C
    /* bctrl  */ // 0x805E7650
    r3 = r30;
    FUN_805E7680(r3, r3); // bl 0x805E7680
    r0 = *(0x14 + r1); // lwz @ 0x805E765C
    r31 = *(0xc + r1); // lwz @ 0x805E7660
    r30 = *(8 + r1); // lwz @ 0x805E7664
    return;
}