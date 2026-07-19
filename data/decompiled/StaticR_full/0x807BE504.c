/* Function at 0x807BE504, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807BE504(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r4 = r3 + 0x38; // 0x807BE50C
    *(0xc + r1) = r31; // stw @ 0x807BE514
    /* li r31, 0 */ // 0x807BE518
    *(8 + r1) = r30; // stw @ 0x807BE51C
    r30 = r3;
    *(0x19c + r3) = r31; // stw @ 0x807BE524
    *(0x1a0 + r3) = r31; // stb @ 0x807BE528
    *(0x1a1 + r3) = r31; // stb @ 0x807BE52C
    *(0x1a2 + r3) = r31; // stb @ 0x807BE530
    *(0x1a4 + r3) = r31; // stw @ 0x807BE534
    FUN_807CF1B4(); // bl 0x807CF1B4
    *(0x1a8 + r30) = r31; // stw @ 0x807BE53C
    *(0x1ac + r30) = r31; // stb @ 0x807BE540
    r31 = *(0xc + r1); // lwz @ 0x807BE544
    r30 = *(8 + r1); // lwz @ 0x807BE548
    r0 = *(0x14 + r1); // lwz @ 0x807BE54C
    return;
}