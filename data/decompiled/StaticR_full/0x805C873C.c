/* Function at 0x805C873C, size=256 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 2 function(s) */

int FUN_805C873C(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* lis r4, 0 */ // 0x805C8744
    *(0x34 + r1) = r0; // stw @ 0x805C8748
    /* stmw r25, 0x14(r1) */ // 0x805C874C
    r28 = r3;
    /* li r31, 0 */ // 0x805C8754
    r3 = *(0 + r4); // lwz @ 0x805C8758
    r3 = *(0x34 + r3); // lwz @ 0x805C875C
    if (==) goto 0x0x805c8770;
    r30 = *(4 + r3); // lhz @ 0x805C8768
    /* b 0x805c8774 */ // 0x805C876C
    /* li r30, 0 */ // 0x805C8770
    /* li r29, 1 */ // 0x805C8774
    /* lis r26, 0 */ // 0x805C8778
    /* li r27, 1 */ // 0x805C877C
    /* b 0x805c87fc */ // 0x805C8780
    r0 = *(0xc + r28); // lhz @ 0x805C8784
    r0 = r29 + r0; // 0x805C8788
    /* clrlwi r25, r0, 0x10 */ // 0x805C878C
    if (<) goto 0x0x805c87a0;
    /* subf r0, r30, r25 */ // 0x805C8798
    /* clrlwi r25, r0, 0x10 */ // 0x805C879C
    r3 = *(0 + r26); // lwz @ 0x805C87A0
    r4 = r25;
    FUN_805A854C(r4); // bl 0x805A854C
    r0 = *(0x2a + r3); // lha @ 0x805C87AC
    if (==) goto 0x0x805c87ec;
    /* clrlwi r0, r0, 0x18 */ // 0x805C87B8
    if (>=) goto 0x0x805c87e0;
    r4 = *(8 + r28); // lwz @ 0x805C87C4
    r0 = r27 << r0; // slw
    r4 = r4 & r0; // 0x805C87CC
    /* neg r0, r4 */ // 0x805C87D0
    r0 = r0 | r4; // 0x805C87D4
    /* srwi r0, r0, 0x1f */ // 0x805C87D8
    /* b 0x805c87e4 */ // 0x805C87DC
    /* li r0, 0 */ // 0x805C87E0
    if (==) goto 0x0x805c87f8;
    *(0xc + r28) = r25; // sth @ 0x805C87EC
    r31 = r3;
    /* b 0x805c8808 */ // 0x805C87F4
    r29 = r29 + 1; // 0x805C87F8
    /* clrlwi r0, r29, 0x10 */ // 0x805C87FC
    if (<=) goto 0x0x805c8784;
    if (!=) goto 0x0x805c8824;
    /* lis r3, 0 */ // 0x805C8810
    /* li r4, 0 */ // 0x805C8814
    r3 = *(0 + r3); // lwz @ 0x805C8818
    FUN_805A854C(r3, r4); // bl 0x805A854C
    r31 = r3;
    r3 = r31;
    r0 = *(0x34 + r1); // lwz @ 0x805C882C
    return;
}