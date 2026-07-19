/* Function at 0x805CE574, size=296 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805CE574(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x805CE57C
    *(0x14 + r1) = r0; // stw @ 0x805CE580
    *(0xc + r1) = r31; // stw @ 0x805CE584
    r4 = *(0 + r3); // lwz @ 0x805CE588
    r3 = *(0x20 + r4); // lwz @ 0x805CE58C
    if (==) goto 0x0x805ce5a0;
    r3 = *(4 + r3); // lhz @ 0x805CE598
    /* b 0x805ce5a4 */ // 0x805CE59C
    /* li r3, 0 */ // 0x805CE5A0
    /* neg r0, r3 */ // 0x805CE5A4
    r0 = r0 | r3; // 0x805CE5A8
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x805CE5AC
    if (==) goto 0x0x805ce5d8;
    r3 = *(0x1c + r4); // lwz @ 0x805CE5B4
    if (==) goto 0x0x805ce5c8;
    r3 = *(4 + r3); // lhz @ 0x805CE5C0
    /* b 0x805ce5cc */ // 0x805CE5C4
    /* li r3, 0 */ // 0x805CE5C8
    /* neg r0, r3 */ // 0x805CE5CC
    r0 = r0 | r3; // 0x805CE5D0
    /* srwi r0, r0, 0x1f */ // 0x805CE5D4
    if (!=) goto 0x0x805ce5e8;
    /* li r3, 0 */ // 0x805CE5E0
    /* b 0x805ce688 */ // 0x805CE5E4
    /* lis r3, 0 */ // 0x805CE5E8
    r3 = *(0 + r3); // lwz @ 0x805CE5EC
    FUN_806E6B18(r3, r3); // bl 0x806E6B18
    if (!=) goto 0x0x805ce604;
    /* li r3, 1 */ // 0x805CE5FC
    /* b 0x805ce688 */ // 0x805CE600
    /* lis r31, 0 */ // 0x805CE604
    /* li r4, 2 */ // 0x805CE608
    r3 = *(0 + r31); // lwz @ 0x805CE60C
    FUN_805C5788(r3, r4); // bl 0x805C5788
    if (!=) goto 0x0x805ce624;
    /* li r3, 0 */ // 0x805CE61C
    /* b 0x805ce688 */ // 0x805CE620
    /* lis r3, 0 */ // 0x805CE624
    r4 = *(0 + r31); // lwz @ 0x805CE628
    r3 = *(0 + r3); // lwz @ 0x805CE62C
    /* li r6, 0 */ // 0x805CE630
    /* li r7, 0 */ // 0x805CE634
    r5 = *(0x24 + r3); // lbz @ 0x805CE638
    /* b 0x805ce678 */ // 0x805CE63C
    r3 = *(0xc + r4); // lwz @ 0x805CE640
    r0 = r7 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x805CE648
    r3 = *(0x38 + r3); // lwz @ 0x805CE64C
    /* rlwinm. r0, r3, 0, 0x1e, 0x1e */ // 0x805CE650
    if (!=) goto 0x0x805ce674;
    /* rlwinm. r0, r3, 0, 0x1b, 0x1b */ // 0x805CE658
    if (!=) goto 0x0x805ce674;
    r6 = r6 + 1; // 0x805CE660
    if (<=) goto 0x0x805ce674;
    /* li r3, 0 */ // 0x805CE66C
    /* b 0x805ce688 */ // 0x805CE670
    r7 = r7 + 1; // 0x805CE674
    /* clrlwi r0, r7, 0x18 */ // 0x805CE678
    if (<) goto 0x0x805ce640;
    /* li r3, 1 */ // 0x805CE684
    r0 = *(0x14 + r1); // lwz @ 0x805CE688
    r31 = *(0xc + r1); // lwz @ 0x805CE68C
    return;
}