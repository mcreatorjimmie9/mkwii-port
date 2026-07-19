/* Function at 0x8061B76C, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8061B76C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8061B77C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8061B784
    r30 = r3;
    if (==) goto 0x0x8061b7c0;
    /* lis r4, 0 */ // 0x8061B790
    r4 = r4 + 0; // 0x8061B794
    *(0xc + r3) = r4; // stw @ 0x8061B798
    FUN_8061E010(r4, r4); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x8061B7A0
    r12 = *(0x124 + r12); // lwz @ 0x8061B7A4
    /* mtctr r12 */ // 0x8061B7A8
    /* bctrl  */ // 0x8061B7AC
    if (<=) goto 0x0x8061b7c0;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8061B7C4
    r30 = *(8 + r1); // lwz @ 0x8061B7C8
    r0 = *(0x14 + r1); // lwz @ 0x8061B7CC
    return;
}