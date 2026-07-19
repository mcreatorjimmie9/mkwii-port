/* Function at 0x8070037C, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8070037C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8070038C
    r30 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x80700394
    if (!=) goto 0x0x807003c0;
    /* li r31, 0 */ // 0x807003A0
    *(0x14 + r3) = r31; // stw @ 0x807003A4
    /* lis r3, 0 */ // 0x807003A8
    r3 = *(0 + r3); // lwz @ 0x807003AC
    FUN_80703B58(r3); // bl 0x80703B58
    *(0x28 + r30) = r31; // stb @ 0x807003B4
    *(0x7578 + r30) = r31; // stw @ 0x807003B8
    *(0x10 + r30) = r31; // stw @ 0x807003BC
    r0 = *(0x14 + r1); // lwz @ 0x807003C0
    r31 = *(0xc + r1); // lwz @ 0x807003C4
    r30 = *(8 + r1); // lwz @ 0x807003C8
    return;
}