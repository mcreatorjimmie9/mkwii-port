/* Function at 0x807362BC, size=164 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807362BC(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    *(0x4c + r1) = r31; // stw @ 0x807362C8
    r31 = r3;
    r0 = *(7 + r3); // lbz @ 0x807362D0
    if (!=) goto 0x0x807363e8;
    /* lis r4, 0 */ // 0x807362DC
    r4 = *(0 + r4); // lwz @ 0x807362E0
    r0 = *(0x10 + r4); // lbz @ 0x807362E4
    if (!=) goto 0x0x807363e8;
    r0 = *(0x129 + r3); // lbz @ 0x807362F0
    if (!=) goto 0x0x80736300;
    /* b 0x807363e8 */ // 0x807362FC
    r0 = *(0x7b7 + r3); // lbz @ 0x80736300
    /* extsb r0, r0 */ // 0x80736304
    if (<=) goto 0x0x807363e8;
    r3 = *(0x118 + r3); // lwz @ 0x80736310
    FUN_8061E63C(); // bl 0x8061E63C
    /* lis r3, 0 */ // 0x80736318
    /* lfs f0, 0(r3) */ // 0x8073631C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80736320
    /* cror cr0eq, cr0gt, cr0eq */ // 0x80736324
    if (!=) goto 0x0x807363e8;
    r4 = *(0x6dc + r31); // lwz @ 0x8073632C
    r0 = *(0x6e0 + r31); // lwz @ 0x80736334
    *(0xc + r1) = r0; // stw @ 0x80736338
    *(8 + r1) = r4; // stw @ 0x8073633C
    r0 = *(0x6e4 + r31); // lwz @ 0x80736340
    *(0x10 + r1) = r0; // stw @ 0x80736344
    FUN_805E3430(); // bl 0x805E3430
    FUN_807438BC(r3, r4); // bl 0x807438BC
    /* lfs f0, 0x6d0(r31) */ // 0x80736358
    /* stfs f0, 0x24(r1) */ // 0x8073635C
}