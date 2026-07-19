/* Function at 0x806C70BC, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

void FUN_806C70BC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r4, 0x46 */ // 0x806C70C4
    /* li r5, 0 */ // 0x806C70C8
    *(0x24 + r1) = r0; // stw @ 0x806C70CC
    /* stfd f31, 0x18(r1) */ // 0x806C70D0
    /* fmr f31, f1 */ // 0x806C70D4
    *(0x14 + r1) = r31; // stw @ 0x806C70D8
    /* lis r31, 0 */ // 0x806C70DC
    r3 = *(0 + r31); // lwz @ 0x806C70E0
    FUN_80698C44(); // bl 0x80698C44
    /* fctiwz f0, f31 */ // 0x806C70E8
    r3 = *(0 + r31); // lwz @ 0x806C70EC
    /* li r5, 0xff */ // 0x806C70F0
    /* stfd f0, 8(r1) */ // 0x806C70F4
    r4 = *(0xc + r1); // lwz @ 0x806C70F8
    FUN_80698CD0(r5); // bl 0x80698CD0
    r0 = *(0x24 + r1); // lwz @ 0x806C7100
    /* lfd f31, 0x18(r1) */ // 0x806C7104
    r31 = *(0x14 + r1); // lwz @ 0x806C7108
    return;
}