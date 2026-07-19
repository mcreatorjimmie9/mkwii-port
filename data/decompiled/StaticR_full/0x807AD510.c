/* Function at 0x807AD510, size=188 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_807AD510(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0x28 + r1) = r30; // stw @ 0x807AD528
    r30 = r5;
    *(0x24 + r1) = r29; // stw @ 0x807AD530
    r29 = r4;
    *(0x20 + r1) = r28; // stw @ 0x807AD538
    r28 = r3;
    if (>=) goto 0x0x807ad54c;
    r30 = r5 + 0x80; // 0x807AD544
    /* b 0x807ad558 */ // 0x807AD548
    if (<) goto 0x0x807ad558;
    r30 = r5 + -0x80; // 0x807AD554
    r4 = r29;
    r5 = r30;
    r6 = r31;
    FUN_807AD4D0(r4, r5, r6, r3); // bl 0x807AD4D0
    /* addic. r30, r30, -1 */ // 0x807AD56C
    if (>=) goto 0x0x807ad57c;
    r30 = r30 + 0x80; // 0x807AD574
    /* b 0x807ad588 */ // 0x807AD578
    if (<) goto 0x0x807ad588;
    r30 = r30 + -0x80; // 0x807AD584
    r4 = r29;
    r5 = r30;
    r6 = r31;
    FUN_807AD4D0(r4, r5, r6, r3); // bl 0x807AD4D0
    r3 = r28;
    FUN_805A4498(r3, r3, r4, r5); // bl 0x805A4498
    r0 = *(0x34 + r1); // lwz @ 0x807AD5AC
    r31 = *(0x2c + r1); // lwz @ 0x807AD5B0
    r30 = *(0x28 + r1); // lwz @ 0x807AD5B4
    r29 = *(0x24 + r1); // lwz @ 0x807AD5B8
    r28 = *(0x20 + r1); // lwz @ 0x807AD5BC
    return;
}