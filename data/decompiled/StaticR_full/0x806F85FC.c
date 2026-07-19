/* Function at 0x806F85FC, size=244 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_806F85FC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x806F8608
    r30 = r3;
    r31 = r4;
    r0 = *(0x41f4 + r3); // lwz @ 0x806F8614
    if (!=) goto 0x0x806f86d8;
    /* lis r3, 0 */ // 0x806F8620
    /* li r29, 0 */ // 0x806F8624
    r3 = *(0 + r3); // lwz @ 0x806F8628
    /* li r27, 0 */ // 0x806F862C
    /* addis r28, r3, 2 */ // 0x806F8630
    r0 = *(0x58 + r30); // lwz @ 0x806F8634
    /* subf. r4, r27, r0 */ // 0x806F8638
    if (<=) goto 0x0x806f86d0;
    r3 = *(0x4ffc + r28); // lwz @ 0x806F8640
    /* addis r3, r3, 2 */ // 0x806F8644
    r3 = r3 + 0x3308; // 0x806F8648
    FUN_805D76F0(r3); // bl 0x805D76F0
    /* extsh r0, r3 */ // 0x806F8650
    if (==) goto 0x0x806f86d0;
    /* clrlwi r0, r3, 0x18 */ // 0x806F865C
    r3 = *(0x4ffc + r28); // lwz @ 0x806F8660
    /* mulli r0, r0, 0x384 */ // 0x806F8664
    /* addis r3, r3, 2 */ // 0x806F8668
    r3 = r3 + 0x3308; // 0x806F866C
    r3 = r3 + r0; // 0x806F8670
    r0 = *(8 + r3); // lwz @ 0x806F8674
    if (<) goto 0x0x806f8688;
    r3 = r3 + 0xc; // 0x806F8680
    /* b 0x806f868c */ // 0x806F8684
    /* li r3, 0 */ // 0x806F8688
    if (==) goto 0x0x806f86a0;
    if (==) goto 0x0x806f86b4;
    /* b 0x806f86c4 */ // 0x806F869C
    r0 = *(0xe0 + r3); // lwz @ 0x806F86A0
    if (>=) goto 0x0x806f86c4;
    r29 = r0;
    /* b 0x806f86c4 */ // 0x806F86B0
    r0 = *(0 + r3); // lwz @ 0x806F86B4
    if (>=) goto 0x0x806f86c4;
    r29 = r0;
    r27 = r27 + 1; // 0x806F86C4
    if (<) goto 0x0x806f8634;
    r3 = r29;
    /* b 0x806f86dc */ // 0x806F86D4
    /* li r3, 0 */ // 0x806F86D8
    r0 = *(0x24 + r1); // lwz @ 0x806F86E0
    return;
}