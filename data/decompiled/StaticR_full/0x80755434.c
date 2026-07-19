/* Function at 0x80755434, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80755434(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x80755444
    *(0x18 + r1) = r30; // stw @ 0x80755448
    /* li r30, 0 */ // 0x8075544C
    *(0x14 + r1) = r29; // stw @ 0x80755450
    r29 = r3;
    /* b 0x8075547c */ // 0x80755458
    r3 = *(0xe0 + r29); // lwz @ 0x8075545C
    /* lwzx r3, r3, r31 */ // 0x80755460
    r12 = *(0 + r3); // lwz @ 0x80755464
    r12 = *(0xf0 + r12); // lwz @ 0x80755468
    /* mtctr r12 */ // 0x8075546C
    /* bctrl  */ // 0x80755470
    r31 = r31 + 4; // 0x80755474
    r30 = r30 + 1; // 0x80755478
    r0 = *(0xd0 + r29); // lbz @ 0x8075547C
    if (<) goto 0x0x8075545c;
    r0 = *(0x24 + r1); // lwz @ 0x80755488
    r31 = *(0x1c + r1); // lwz @ 0x8075548C
    r30 = *(0x18 + r1); // lwz @ 0x80755490
    r29 = *(0x14 + r1); // lwz @ 0x80755494
    return;
}