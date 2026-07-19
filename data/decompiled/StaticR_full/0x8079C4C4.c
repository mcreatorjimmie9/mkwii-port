/* Function at 0x8079C4C4, size=436 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_8079C4C4(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r3;
    *(0x10 + r1) = r28; // stw @ 0x8079C4E0
    /* lis r28, 0 */ // 0x8079C4E4
    r3 = *(0 + r28); // lwz @ 0x8079C4E8
    FUN_8079DD9C(); // bl 0x8079DD9C
    r30 = r3;
    r3 = *(0 + r28); // lwz @ 0x8079C4F4
    FUN_8079DD28(); // bl 0x8079DD28
    r31 = r3;
    r3 = *(0 + r28); // lwz @ 0x8079C500
    FUN_8079DC64(); // bl 0x8079DC64
    r0 = *(0x10 + r29); // lwz @ 0x8079C508
    if (==) goto 0x0x8079c520;
    if (==) goto 0x0x8079c594;
    /* b 0x8079c608 */ // 0x8079C51C
    if (==) goto 0x0x8079c560;
    if (==) goto 0x0x8079c554;
    r0 = *(0x15 + r29); // lbz @ 0x8079C530
    if (==) goto 0x0x8079c548;
    /* li r0, 0 */ // 0x8079C53C
    *(0x10 + r29) = r0; // stw @ 0x8079C540
    /* b 0x8079c64c */ // 0x8079C544
    /* li r0, 1 */ // 0x8079C548
    *(0x10 + r29) = r0; // stw @ 0x8079C54C
    /* b 0x8079c64c */ // 0x8079C550
    /* li r0, 1 */ // 0x8079C554
    *(0x10 + r29) = r0; // stw @ 0x8079C558
    /* b 0x8079c64c */ // 0x8079C55C
    if (==) goto 0x0x8079c574;
    /* li r0, 0 */ // 0x8079C568
    *(0x10 + r29) = r0; // stw @ 0x8079C56C
    /* b 0x8079c64c */ // 0x8079C570
    if (==) goto 0x0x8079c588;
    /* li r0, 2 */ // 0x8079C57C
    *(0x10 + r29) = r0; // stw @ 0x8079C580
    /* b 0x8079c64c */ // 0x8079C584
    /* li r0, 3 */ // 0x8079C588
    *(0x10 + r29) = r0; // stw @ 0x8079C58C
    /* b 0x8079c64c */ // 0x8079C590
    if (==) goto 0x0x8079c5d4;
    if (==) goto 0x0x8079c5c8;
    r0 = *(0x14 + r29); // lbz @ 0x8079C5A4
    if (==) goto 0x0x8079c5bc;
    /* li r0, 1 */ // 0x8079C5B0
    *(0x10 + r29) = r0; // stw @ 0x8079C5B4
    /* b 0x8079c64c */ // 0x8079C5B8
    /* li r0, 0 */ // 0x8079C5BC
    *(0x10 + r29) = r0; // stw @ 0x8079C5C0
    /* b 0x8079c64c */ // 0x8079C5C4
    /* li r0, 1 */ // 0x8079C5C8
    *(0x10 + r29) = r0; // stw @ 0x8079C5CC
    /* b 0x8079c64c */ // 0x8079C5D0
    if (==) goto 0x0x8079c5e8;
    /* li r0, 1 */ // 0x8079C5DC
    *(0x10 + r29) = r0; // stw @ 0x8079C5E0
    /* b 0x8079c64c */ // 0x8079C5E4
    if (==) goto 0x0x8079c5fc;
    /* li r0, 2 */ // 0x8079C5F0
    *(0x10 + r29) = r0; // stw @ 0x8079C5F4
    /* b 0x8079c64c */ // 0x8079C5F8
    /* li r0, 3 */ // 0x8079C5FC
    *(0x10 + r29) = r0; // stw @ 0x8079C600
    /* b 0x8079c64c */ // 0x8079C604
    if (==) goto 0x0x8079c61c;
    /* li r0, 0 */ // 0x8079C610
    *(0x10 + r29) = r0; // stw @ 0x8079C614
    /* b 0x8079c64c */ // 0x8079C618
    if (==) goto 0x0x8079c630;
    /* li r0, 1 */ // 0x8079C624
    *(0x10 + r29) = r0; // stw @ 0x8079C628
    /* b 0x8079c64c */ // 0x8079C62C
    if (==) goto 0x0x8079c644;
    /* li r0, 2 */ // 0x8079C638
    *(0x10 + r29) = r0; // stw @ 0x8079C63C
    /* b 0x8079c64c */ // 0x8079C640
    /* li r0, 3 */ // 0x8079C644
    *(0x10 + r29) = r0; // stw @ 0x8079C648
    *(0x14 + r29) = r30; // stb @ 0x8079C64C
    *(0x15 + r29) = r31; // stb @ 0x8079C650
    *(0x16 + r29) = r3; // stb @ 0x8079C654
    r31 = *(0x1c + r1); // lwz @ 0x8079C658
    r30 = *(0x18 + r1); // lwz @ 0x8079C65C
    r29 = *(0x14 + r1); // lwz @ 0x8079C660
    r28 = *(0x10 + r1); // lwz @ 0x8079C664
    r0 = *(0x24 + r1); // lwz @ 0x8079C668
    return;
}