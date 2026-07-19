/* Function at 0x805E8424, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */

int FUN_805E8424(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18 + r1) = r30; // stw @ 0x805E8434
    /* li r30, 0 */ // 0x805E8438
    r31 = *(0xc + r3); // lwz @ 0x805E843C
    if (==) goto 0x0x805e8478;
    /* lis r4, 0 */ // 0x805E8448
    r3 = r31;
    r4 = r4 + 0; // 0x805E8450
    *(8 + r1) = r4; // stw @ 0x805E8454
    r12 = *(0 + r31); // lwz @ 0x805E845C
    r12 = *(8 + r12); // lwz @ 0x805E8460
    /* mtctr r12 */ // 0x805E8464
    /* bctrl  */ // 0x805E8468
    if (==) goto 0x0x805e8478;
    /* li r30, 1 */ // 0x805E8474
    if (==) goto 0x0x805e8488;
    r3 = r31;
    /* b 0x805e848c */ // 0x805E8484
    /* li r3, 0 */ // 0x805E8488
    r12 = *(0 + r3); // lwz @ 0x805E848C
    r12 = *(0x44 + r12); // lwz @ 0x805E8490
    /* mtctr r12 */ // 0x805E8494
    /* bctrl  */ // 0x805E8498
    r0 = *(0x24 + r1); // lwz @ 0x805E849C
    r31 = *(0x1c + r1); // lwz @ 0x805E84A0
    r30 = *(0x18 + r1); // lwz @ 0x805E84A4
    return;
}