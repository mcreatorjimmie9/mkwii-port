/* Function at 0x805EF474, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805EF474(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805EF480
    r31 = r3;
    r0 = *(4 + r3); // lwz @ 0x805EF488
    /* rlwinm. r0, r0, 0, 0xb, 0xb */ // 0x805EF48C
    if (==) goto 0x0x805ef4e4;
    r12 = *(0 + r3); // lwz @ 0x805EF494
    /* li r4, 0 */ // 0x805EF498
    r12 = *(0xc + r12); // lwz @ 0x805EF49C
    /* mtctr r12 */ // 0x805EF4A0
    /* bctrl  */ // 0x805EF4A4
    r0 = *(0x3c + r31); // lwz @ 0x805EF4A8
    /* li r3, 0 */ // 0x805EF4AC
    if (==) goto 0x0x805ef4c4;
    if (==) goto 0x0x805ef4d0;
    /* b 0x805ef4dc */ // 0x805EF4C0
    /* lis r3, 0 */ // 0x805EF4C4
    r3 = *(0 + r3); // lwz @ 0x805EF4C8
    /* b 0x805ef4dc */ // 0x805EF4CC
    /* lis r3, 0 */ // 0x805EF4D0
    r3 = r3 + 0; // 0x805EF4D4
    r3 = *(4 + r3); // lwz @ 0x805EF4D8
    r4 = r31;
    FUN_805F32E4(r3, r3, r4); // bl 0x805F32E4
    r0 = *(0x14 + r1); // lwz @ 0x805EF4E4
    r31 = *(0xc + r1); // lwz @ 0x805EF4E8
    return;
}