/* Function at 0x806026B4, size=180 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806026B4(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x806026C4
    *(0x28 + r1) = r30; // stw @ 0x806026C8
    /* slwi r30, r5, 2 */ // 0x806026CC
    *(0x24 + r1) = r29; // stw @ 0x806026D0
    r29 = r3;
    r4 = *(0 + r31); // lwz @ 0x806026D8
    r3 = *(0x40 + r4); // lwz @ 0x806026DC
    /* lwzx r3, r3, r30 */ // 0x806026E0
    r12 = *(0 + r3); // lwz @ 0x806026E4
    r12 = *(0xb4 + r12); // lwz @ 0x806026E8
    /* mtctr r12 */ // 0x806026EC
    /* bctrl  */ // 0x806026F0
    if (==) goto 0x0x8060272c;
    r3 = *(0 + r31); // lwz @ 0x806026FC
    r3 = *(0x40 + r3); // lwz @ 0x80602700
    /* lwzx r3, r3, r30 */ // 0x80602704
    r12 = *(0 + r3); // lwz @ 0x80602708
    r12 = *(0xb4 + r12); // lwz @ 0x8060270C
    /* mtctr r12 */ // 0x80602710
    /* bctrl  */ // 0x80602714
    r4 = r3;
    FUN_80602770(r4, r3); // bl 0x80602770
    /* b 0x80602734 */ // 0x80602728
    /* lis r4, 0 */ // 0x8060272C
    r4 = r4 + 0; // 0x80602730
    r3 = *(0 + r4); // lwz @ 0x80602734
    r0 = *(4 + r4); // lwz @ 0x80602738
    *(4 + r29) = r0; // stw @ 0x8060273C
    *(0 + r29) = r3; // stw @ 0x80602740
    r0 = *(8 + r4); // lwz @ 0x80602744
    *(8 + r29) = r0; // stw @ 0x80602748
    r31 = *(0x2c + r1); // lwz @ 0x8060274C
    r30 = *(0x28 + r1); // lwz @ 0x80602750
    r29 = *(0x24 + r1); // lwz @ 0x80602754
    r0 = *(0x34 + r1); // lwz @ 0x80602758
    return;
}