/* Function at 0x8067F50C, size=252 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_8067F50C(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r31, 0 */ // 0x8067F51C
    /* li r30, 0 */ // 0x8067F524
    *(0x14 + r1) = r29; // stw @ 0x8067F528
    *(0x10 + r1) = r28; // stw @ 0x8067F52C
    r28 = r3;
    /* clrlwi r0, r30, 0x18 */ // 0x8067F534
    r3 = *(0 + r31); // lwz @ 0x8067F538
    /* mulli r0, r0, 0x920 */ // 0x8067F53C
    r3 = r3 + r0; // 0x8067F540
    r12 = *(0x1720 + r3); // lwzu @ 0x8067F544
    r12 = *(0x10 + r12); // lwz @ 0x8067F548
    /* mtctr r12 */ // 0x8067F54C
    /* bctrl  */ // 0x8067F550
    /* clrlwi. r0, r30, 0x18 */ // 0x8067F554
    if (==) goto 0x0x8067f578;
    if (==) goto 0x0x8067f580;
    if (==) goto 0x0x8067f588;
    if (==) goto 0x0x8067f590;
    /* b 0x8067f594 */ // 0x8067F574
    /* li r29, 0x110 */ // 0x8067F578
    /* b 0x8067f594 */ // 0x8067F57C
    /* li r29, 0x210 */ // 0x8067F580
    /* b 0x8067f594 */ // 0x8067F584
    /* li r29, 0x310 */ // 0x8067F588
    /* b 0x8067f594 */ // 0x8067F58C
    /* li r29, 0x410 */ // 0x8067F590
    /* li r0, 0 */ // 0x8067F598
    if (==) goto 0x0x8067f5b4;
    if (==) goto 0x0x8067f5bc;
    if (==) goto 0x0x8067f5c4;
    /* b 0x8067f5c8 */ // 0x8067F5B0
    /* li r0, 1 */ // 0x8067F5B4
    /* b 0x8067f5c8 */ // 0x8067F5B8
    /* li r0, 2 */ // 0x8067F5BC
    /* b 0x8067f5c8 */ // 0x8067F5C0
    /* li r0, 3 */ // 0x8067F5C4
    if (==) goto 0x0x8067f5dc;
    r0 = r0 | r29; // 0x8067F5D0
    *(4 + r28) = r0; // stw @ 0x8067F5D4
    /* b 0x8067f5e8 */ // 0x8067F5D8
    r30 = r30 + 1; // 0x8067F5DC
    if (<) goto 0x0x8067f534;
    r0 = *(0x24 + r1); // lwz @ 0x8067F5E8
    r31 = *(0x1c + r1); // lwz @ 0x8067F5EC
    r30 = *(0x18 + r1); // lwz @ 0x8067F5F0
    r29 = *(0x14 + r1); // lwz @ 0x8067F5F4
    r28 = *(0x10 + r1); // lwz @ 0x8067F5F8
    return;
}