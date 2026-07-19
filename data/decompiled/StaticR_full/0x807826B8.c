/* Function at 0x807826B8, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807826B8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 0 */ // 0x807826C4
    *(0xc + r1) = r31; // stw @ 0x807826C8
    r31 = r3;
    r4 = *(0xbc + r3); // lwz @ 0x807826D0
    *(0xc0 + r3) = r0; // stb @ 0x807826D4
    *(0xc4 + r3) = r0; // stw @ 0x807826DC
    if (!=) goto 0x0x80782708;
    r4 = *(8 + r3); // lwz @ 0x807826E4
    /* lis r3, 0 */ // 0x807826E8
    /* lis r5, 0 */ // 0x807826EC
    /* lfs f1, 0(r3) */ // 0x807826F0
    r3 = *(0x28 + r4); // lwz @ 0x807826F4
    /* li r4, 0 */ // 0x807826F8
    /* lfs f2, 0(r5) */ // 0x807826FC
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    /* b 0x80782758 */ // 0x80782704
    if (!=) goto 0x0x80782758;
    r3 = *(0xb8 + r3); // lwz @ 0x80782710
    r12 = *(0 + r3); // lwz @ 0x80782714
    r12 = *(0xc + r12); // lwz @ 0x80782718
    /* mtctr r12 */ // 0x8078271C
    /* bctrl  */ // 0x80782720
    r3 = *(0xb8 + r31); // lwz @ 0x80782724
    r4 = r31 + 0x30; // 0x80782728
    r12 = *(0 + r3); // lwz @ 0x8078272C
    r12 = *(0x74 + r12); // lwz @ 0x80782730
    /* mtctr r12 */ // 0x80782734
    /* bctrl  */ // 0x80782738
    r3 = *(0xb8 + r31); // lwz @ 0x8078273C
    /* li r4, 1 */ // 0x80782740
    /* li r5, 0 */ // 0x80782744
    r12 = *(0 + r3); // lwz @ 0x80782748
    r12 = *(0x7c + r12); // lwz @ 0x8078274C
    /* mtctr r12 */ // 0x80782750
    /* bctrl  */ // 0x80782754
    r0 = *(0x14 + r1); // lwz @ 0x80782758
    r31 = *(0xc + r1); // lwz @ 0x8078275C
    return;
}