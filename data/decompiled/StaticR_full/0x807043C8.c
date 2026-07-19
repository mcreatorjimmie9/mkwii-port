/* Function at 0x807043C8, size=88 bytes */
/* Stack frame: 528 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807043C8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -528(r1) */
    /* saved r31 */
    /* lis r10, 0 */ // 0x807043D0
    r8 = r4;
    *(0x214 + r1) = r0; // stw @ 0x807043D8
    r9 = r5;
    /* li r4, 0x200 */ // 0x807043E4
    *(0x20c + r1) = r31; // stw @ 0x807043E8
    r31 = r3;
    r0 = *(0xa8 + r3); // lbz @ 0x807043F4
    *(0x1c + r3) = r6; // stw @ 0x807043F8
    *(0x20 + r3) = r7; // stw @ 0x80704404
    if (==) goto 0x0x80704414;
    r7 = *(0x98 + r31); // lwz @ 0x80704414
    /* crclr cr1eq */ // 0x80704418
    FUN_805E3430(r3, r6); // bl 0x805E3430
}