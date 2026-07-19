/* Function at 0x807BFDA0, size=260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_807BFDA0(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x807BFDAC
    r27 = r3;
    r0 = *(0x84 + r3); // lwz @ 0x807BFDB4
    if (==) goto 0x0x807bfe5c;
    r3 = r0;
    r12 = *(0x34 + r3); // lwz @ 0x807BFDC4
    r12 = *(0x18 + r12); // lwz @ 0x807BFDC8
    /* mtctr r12 */ // 0x807BFDCC
    /* bctrl  */ // 0x807BFDD0
    r3 = r27;
    FUN_807C04F4(r3); // bl 0x807C04F4
    r28 = r27;
    /* li r30, 0 */ // 0x807BFDE0
    /* b 0x807bfe50 */ // 0x807BFDE4
    r3 = *(0x24 + r28); // lwz @ 0x807BFDE8
    r3 = *(0x10 + r3); // lwz @ 0x807BFDEC
    r29 = *(0x144 + r3); // lwz @ 0x807BFDF0
    r12 = *(0x34 + r29); // lwz @ 0x807BFDF4
    r3 = r29;
    r12 = *(0x3c + r12); // lwz @ 0x807BFDFC
    /* mtctr r12 */ // 0x807BFE00
    /* bctrl  */ // 0x807BFE04
    r3 = *(8 + r3); // lwz @ 0x807BFE08
    if (==) goto 0x0x807bfe2c;
    r12 = *(0 + r3); // lwz @ 0x807BFE14
    r12 = *(0x10 + r12); // lwz @ 0x807BFE18
    /* mtctr r12 */ // 0x807BFE1C
    /* bctrl  */ // 0x807BFE20
    r31 = r3;
    /* b 0x807bfe30 */ // 0x807BFE28
    /* li r31, 0 */ // 0x807BFE2C
    r12 = *(0x34 + r29); // lwz @ 0x807BFE30
    r3 = r29;
    r12 = *(0x44 + r12); // lwz @ 0x807BFE38
    /* mtctr r12 */ // 0x807BFE3C
    /* bctrl  */ // 0x807BFE40
    *(4 + r3) = r31; // stw @ 0x807BFE44
    r28 = r28 + 4; // 0x807BFE48
    r30 = r30 + 1; // 0x807BFE4C
    r0 = *(0x14 + r27); // lwz @ 0x807BFE50
    if (<) goto 0x0x807bfde8;
    r3 = *(0x88 + r27); // lwz @ 0x807BFE5C
    FUN_807C2E04(); // bl 0x807C2E04
    r3 = *(0x90 + r27); // lwz @ 0x807BFE64
    r12 = *(0 + r3); // lwz @ 0x807BFE68
    r12 = *(0xc + r12); // lwz @ 0x807BFE6C
    /* mtctr r12 */ // 0x807BFE70
    /* bctrl  */ // 0x807BFE74
    r3 = *(0x94 + r27); // lwz @ 0x807BFE78
    if (==) goto 0x0x807bfe88;
    FUN_807D1CE0(); // bl 0x807D1CE0
    /* li r0, 0 */ // 0x807BFE88
    *(0x98 + r27) = r0; // stw @ 0x807BFE8C
    r0 = *(0x24 + r1); // lwz @ 0x807BFE94
    return;
}