/* Function at 0x8070F268, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_8070F268(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x8070F270
    *(0x14 + r1) = r0; // stw @ 0x8070F274
    /* li r0, 0 */ // 0x8070F278
    *(0xc + r1) = r31; // stw @ 0x8070F27C
    r31 = *(0x15c + r3); // lwz @ 0x8070F280
    *(0xbc + r31) = r0; // stb @ 0x8070F284
    r3 = r31;
    r12 = *(0 + r31); // lwz @ 0x8070F28C
    r12 = *(0x68 + r12); // lwz @ 0x8070F290
    /* mtctr r12 */ // 0x8070F294
    /* bctrl  */ // 0x8070F298
    r12 = *(0 + r31); // lwz @ 0x8070F29C
    r3 = r31;
    r12 = *(0x90 + r12); // lwz @ 0x8070F2A4
    /* mtctr r12 */ // 0x8070F2A8
    /* bctrl  */ // 0x8070F2AC
    r0 = *(0x14 + r1); // lwz @ 0x8070F2B0
    r31 = *(0xc + r1); // lwz @ 0x8070F2B4
    return;
}