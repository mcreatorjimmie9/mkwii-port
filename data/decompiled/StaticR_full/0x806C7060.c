/* Function at 0x806C7060, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

void FUN_806C7060(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* li r4, 0x45 */ // 0x806C7068
    /* li r5, 0 */ // 0x806C706C
    *(0x24 + r1) = r0; // stw @ 0x806C7070
    /* stfd f31, 0x18(r1) */ // 0x806C7074
    /* fmr f31, f1 */ // 0x806C7078
    *(0x14 + r1) = r31; // stw @ 0x806C707C
    /* lis r31, 0 */ // 0x806C7080
    r3 = *(0 + r31); // lwz @ 0x806C7084
    FUN_80698C44(); // bl 0x80698C44
    /* fctiwz f0, f31 */ // 0x806C708C
    r3 = *(0 + r31); // lwz @ 0x806C7090
    /* li r5, 0xff */ // 0x806C7094
    /* stfd f0, 8(r1) */ // 0x806C7098
    r4 = *(0xc + r1); // lwz @ 0x806C709C
    FUN_80698CD0(r5); // bl 0x80698CD0
    r0 = *(0x24 + r1); // lwz @ 0x806C70A4
    /* lfd f31, 0x18(r1) */ // 0x806C70A8
    r31 = *(0x14 + r1); // lwz @ 0x806C70AC
    return;
}