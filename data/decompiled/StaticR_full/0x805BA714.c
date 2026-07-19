/* Function at 0x805BA714, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805BA714(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 0 */ // 0x805BA724
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x805BA730
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x805BA738
    r28 = r3;
    /* b 0x805ba768 */ // 0x805BA740
    /* clrlwi r0, r31, 0x10 */ // 0x805BA744
    r3 = *(4 + r28); // lwz @ 0x805BA748
    /* mulli r4, r0, 0x24 */ // 0x805BA74C
    r0 = *(4 + r29); // lwz @ 0x805BA750
    r5 = r30;
    r3 = r3 + r4; // 0x805BA758
    r4 = r0 + r4; // 0x805BA75C
    FUN_805A9204(r5); // bl 0x805A9204
    r31 = r31 + 1; // 0x805BA764
    r0 = *(8 + r28); // lhz @ 0x805BA768
    /* clrlwi r3, r31, 0x10 */ // 0x805BA76C
    if (<) goto 0x0x805ba744;
    r0 = *(0x24 + r1); // lwz @ 0x805BA778
    r31 = *(0x1c + r1); // lwz @ 0x805BA77C
    r30 = *(0x18 + r1); // lwz @ 0x805BA780
    r29 = *(0x14 + r1); // lwz @ 0x805BA784
    r28 = *(0x10 + r1); // lwz @ 0x805BA788
    return;
}