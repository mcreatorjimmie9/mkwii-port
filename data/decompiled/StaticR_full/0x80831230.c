/* Function at 0x80831230, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80831230(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80831238
    *(0x14 + r1) = r0; // stw @ 0x8083123C
    *(0xc + r1) = r31; // stw @ 0x80831240
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x80831248
    r4 = *(0xa + r31); // lha @ 0x8083124C
    r3 = *(0x74 + r3); // lwz @ 0x80831250
    FUN_8071D434(); // bl 0x8071D434
    r3 = *(0x1d4 + r31); // lwz @ 0x80831258
    /* li r4, 0 */ // 0x8083125C
    r12 = *(0 + r3); // lwz @ 0x80831260
    r12 = *(0xc + r12); // lwz @ 0x80831264
    /* mtctr r12 */ // 0x80831268
    /* bctrl  */ // 0x8083126C
    r3 = r31;
    FUN_80828E04(r3); // bl 0x80828E04
    r0 = *(0x14 + r1); // lwz @ 0x80831278
    r31 = *(0xc + r1); // lwz @ 0x8083127C
    return;
}