/* Function at 0x805F4480, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805F4480(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805F448C
    r31 = r3;
    r0 = *(0x24 + r3); // lbz @ 0x805F4494
    if (==) goto 0x0x805f44ac;
    r3 = *(0x10 + r3); // lwz @ 0x805F44A0
    FUN_805F5F08(); // bl 0x805F5F08
    /* b 0x805f44b4 */ // 0x805F44A8
    r3 = *(0x10 + r3); // lwz @ 0x805F44AC
    FUN_805F60D8(); // bl 0x805F60D8
    r3 = *(0x20 + r31); // lwz @ 0x805F44B4
    r12 = *(0 + r3); // lwz @ 0x805F44B8
    r12 = *(0x18 + r12); // lwz @ 0x805F44BC
    /* mtctr r12 */ // 0x805F44C0
    /* bctrl  */ // 0x805F44C4
    r0 = *(0x14 + r1); // lwz @ 0x805F44C8
    r31 = *(0xc + r1); // lwz @ 0x805F44CC
    return;
}