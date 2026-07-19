/* Function at 0x8089FD54, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8089FD54(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8089FD60
    r31 = r3;
    FUN_808A1BCC(); // bl 0x808A1BCC
    r12 = *(0 + r31); // lwz @ 0x8089FD6C
    r3 = r31;
    r12 = *(0xd4 + r12); // lwz @ 0x8089FD74
    /* mtctr r12 */ // 0x8089FD78
    /* bctrl  */ // 0x8089FD7C
    r6 = r3;
    r3 = *(0xac + r31); // lwz @ 0x8089FD84
    r4 = r31 + 0x58; // 0x8089FD88
    r5 = r31 + 0x3c; // 0x8089FD8C
    r12 = *(0 + r3); // lwz @ 0x8089FD90
    r12 = *(0x10 + r12); // lwz @ 0x8089FD94
    /* mtctr r12 */ // 0x8089FD98
    /* bctrl  */ // 0x8089FD9C
    r0 = *(0x14 + r1); // lwz @ 0x8089FDA0
    r31 = *(0xc + r1); // lwz @ 0x8089FDA4
    return;
}