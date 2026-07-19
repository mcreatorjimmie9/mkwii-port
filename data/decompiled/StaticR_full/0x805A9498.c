/* Function at 0x805A9498, size=276 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805A9498(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805A94AC
    r30 = r3;
    r3 = r5;
    FUN_805E0ED8(r3); // bl 0x805E0ED8
    /* clrlwi r0, r3, 0x10 */ // 0x805A94BC
    if (>) goto 0x0x805a9594;
    r0 = *(0x56 + r31); // lbz @ 0x805A94C8
    if (==) goto 0x0x805a957c;
    r0 = *(0x50 + r31); // lhz @ 0x805A94D4
    /* li r4, 0x63 */ // 0x805A94D8
    if (>) goto 0x0x805a94e8;
    r4 = r0;
    /* extsh r3, r3 */ // 0x805A94E8
    r0 = *(0x50 + r31); // lhz @ 0x805A94EC
    /* slwi r6, r3, 3 */ // 0x805A94F0
    r5 = r30 + r6; // 0x805A94F4
    r0 = *(0xc8 + r5); // lwz @ 0x805A94FC
    r0 = r4 rlwimi 0x19; // rlwimi
    *(0xc8 + r5) = r0; // stw @ 0x805A9504
    if (<=) goto 0x0x805a9514;
    /* li r4, 0x3b */ // 0x805A950C
    /* b 0x805a9518 */ // 0x805A9510
    r4 = *(0x52 + r31); // lbz @ 0x805A9514
    r0 = *(0x50 + r31); // lhz @ 0x805A9518
    r3 = *(0xc8 + r5); // lwz @ 0x805A951C
    r3 = r4 rlwimi 0x12; // rlwimi
    *(0xc8 + r5) = r3; // stw @ 0x805A9528
    if (<=) goto 0x0x805a9538;
    /* li r0, 0x3e7 */ // 0x805A9530
    /* b 0x805a953c */ // 0x805A9534
    r0 = *(0x54 + r31); // lhz @ 0x805A9538
    r6 = r30 + r6; // 0x805A953C
    r4 = *(0x58 + r31); // lwz @ 0x805A9540
    r5 = *(0xc8 + r6); // lwz @ 0x805A9544
    r5 = r0 rlwimi 8; // rlwimi
    *(0xc8 + r6) = r5; // stw @ 0x805A954C
    r0 = *(0x5c + r31); // lwz @ 0x805A9550
    r3 = *(0xcc + r6); // lwz @ 0x805A9554
    r3 = r4 rlwimi 0x19; // rlwimi
    *(0xcc + r6) = r3; // stw @ 0x805A955C
    r5 = r0 rlwimi 2; // rlwimi
    r0 = *(0x60 + r31); // lwz @ 0x805A9564
    *(0xc8 + r6) = r5; // stw @ 0x805A9568
    r3 = r0 rlwimi 0x16; // rlwimi
    r0 = r3 | 0x8000; // 0x805A9570
    *(0xcc + r6) = r0; // stw @ 0x805A9574
    /* b 0x805a9594 */ // 0x805A9578
    /* extsh r0, r3 */ // 0x805A957C
    /* slwi r0, r0, 3 */ // 0x805A9580
    r3 = r30 + r0; // 0x805A9584
    r0 = *(0xcc + r3); // lwz @ 0x805A9588
    /* clrlwi r0, r0, 1 */ // 0x805A958C
    *(0xcc + r3) = r0; // stw @ 0x805A9590
    r0 = *(0x14 + r1); // lwz @ 0x805A9594
    r31 = *(0xc + r1); // lwz @ 0x805A9598
    r30 = *(8 + r1); // lwz @ 0x805A959C
    return;
}