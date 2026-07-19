/* Function at 0x807D9508, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807D9508(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807D9514
    r31 = r3;
    r12 = *(0x34 + r3); // lwz @ 0x807D951C
    r4 = *(0x1f4 + r3); // lwz @ 0x807D9520
    r12 = *(0x8c + r12); // lwz @ 0x807D9524
    /* mtctr r12 */ // 0x807D9528
    /* bctrl  */ // 0x807D952C
    if (==) goto 0x0x807d9554;
    r5 = *(0x1f4 + r31); // lwz @ 0x807D9538
    r3 = r31;
    r4 = r31 + 0xe8; // 0x807D9540
    r0 = *(0 + r5); // lwz @ 0x807D9544
    *(0x1f8 + r31) = r0; // stw @ 0x807D9548
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807d956c */ // 0x807D9550
    r0 = *(0x20c + r31); // lbz @ 0x807D9554
    if (==) goto 0x0x807d956c;
    r3 = r31;
    r4 = r31 + 0x140; // 0x807D9564
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807D956C
    r31 = *(0xc + r1); // lwz @ 0x807D9570
    return;
}