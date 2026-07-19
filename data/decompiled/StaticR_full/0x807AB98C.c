/* Function at 0x807AB98C, size=256 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807AB98C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807AB99C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807AB9A4
    r30 = r3;
    if (==) goto 0x0x807aba70;
    r0 = *(4 + r3); // lwz @ 0x807AB9B0
    /* lis r4, 0 */ // 0x807AB9B4
    r4 = r4 + 0; // 0x807AB9B8
    *(0 + r3) = r4; // stw @ 0x807AB9BC
    if (==) goto 0x0x807ab9e0;
    r3 = r0;
    /* li r4, 1 */ // 0x807AB9CC
    r12 = *(0 + r3); // lwz @ 0x807AB9D0
    r12 = *(8 + r12); // lwz @ 0x807AB9D4
    /* mtctr r12 */ // 0x807AB9D8
    /* bctrl  */ // 0x807AB9DC
    r3 = *(0xc + r30); // lwz @ 0x807AB9E0
    /* li r0, 0 */ // 0x807AB9E4
    *(4 + r30) = r0; // stw @ 0x807AB9E8
    if (==) goto 0x0x807aba08;
    r12 = *(0 + r3); // lwz @ 0x807AB9F4
    /* li r4, 1 */ // 0x807AB9F8
    r12 = *(8 + r12); // lwz @ 0x807AB9FC
    /* mtctr r12 */ // 0x807ABA00
    /* bctrl  */ // 0x807ABA04
    r3 = *(0x10 + r30); // lwz @ 0x807ABA08
    /* li r0, 0 */ // 0x807ABA0C
    *(0xc + r30) = r0; // stw @ 0x807ABA10
    if (==) goto 0x0x807aba30;
    r12 = *(0 + r3); // lwz @ 0x807ABA1C
    /* li r4, 1 */ // 0x807ABA20
    r12 = *(8 + r12); // lwz @ 0x807ABA24
    /* mtctr r12 */ // 0x807ABA28
    /* bctrl  */ // 0x807ABA2C
    r3 = *(0x14 + r30); // lwz @ 0x807ABA30
    /* li r0, 0 */ // 0x807ABA34
    *(0x10 + r30) = r0; // stw @ 0x807ABA38
    if (==) goto 0x0x807aba58;
    r12 = *(0 + r3); // lwz @ 0x807ABA44
    /* li r4, 1 */ // 0x807ABA48
    r12 = *(8 + r12); // lwz @ 0x807ABA4C
    /* mtctr r12 */ // 0x807ABA50
    /* bctrl  */ // 0x807ABA54
    /* li r0, 0 */ // 0x807ABA5C
    *(0x14 + r30) = r0; // stw @ 0x807ABA60
    if (<=) goto 0x0x807aba70;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807ABA74
    r30 = *(8 + r1); // lwz @ 0x807ABA78
    r0 = *(0x14 + r1); // lwz @ 0x807ABA7C
    return;
}