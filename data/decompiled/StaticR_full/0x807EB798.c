/* Function at 0x807EB798, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807EB798(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807EB7A0
    *(0x14 + r1) = r0; // stw @ 0x807EB7A4
    /* lfs f1, 0(r4) */ // 0x807EB7A8
    *(0xc + r1) = r31; // stw @ 0x807EB7AC
    r31 = r3;
    r3 = r3 + 0x30; // 0x807EB7B4
    FUN_8081269C(r3); // bl 0x8081269C
    if (<) goto 0x0x807eb7e4;
    r0 = *(0x12c + r31); // lbz @ 0x807EB7C4
    if (!=) goto 0x0x807eb7e4;
    r12 = *(0 + r31); // lwz @ 0x807EB7D0
    r3 = r31;
    r12 = *(0x114 + r12); // lwz @ 0x807EB7D8
    /* mtctr r12 */ // 0x807EB7DC
    /* bctrl  */ // 0x807EB7E0
    r0 = *(0x14 + r1); // lwz @ 0x807EB7E4
    r31 = *(0xc + r1); // lwz @ 0x807EB7E8
    return;
}