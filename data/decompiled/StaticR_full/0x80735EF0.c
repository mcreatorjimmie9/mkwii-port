/* Function at 0x80735EF0, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80735EF0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80735EFC
    r31 = r3;
    r0 = *(0x96 + r3); // lbz @ 0x80735F04
    if (!=) goto 0x0x80735f38;
    r0 = *(0x129 + r3); // lbz @ 0x80735F10
    if (==) goto 0x0x80735f38;
    r0 = *(0x7b5 + r3); // lbz @ 0x80735F1C
    /* extsb r0, r0 */ // 0x80735F20
    if (<=) goto 0x0x80735f38;
    FUN_80736204(); // bl 0x80736204
    /* li r0, 0 */ // 0x80735F30
    *(0x7b5 + r31) = r0; // stb @ 0x80735F34
    r0 = *(0x14 + r1); // lwz @ 0x80735F38
    r31 = *(0xc + r1); // lwz @ 0x80735F3C
    return;
}