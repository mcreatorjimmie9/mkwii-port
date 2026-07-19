/* Function at 0x8061BEC4, size=220 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8061BEC4(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8061BEDC
    r29 = r3;
    r5 = *(0x14 + r3); // lwz @ 0x8061BEE4
    r0 = *(0xe + r5); // lhz @ 0x8061BEE8
    r3 = *(0 + r5); // lwz @ 0x8061BEEC
    r4 = *(0x14 + r5); // lwz @ 0x8061BEF0
    /* clrlwi r6, r0, 0x18 */ // 0x8061BEF4
    r5 = *(0x18 + r5); // lwz @ 0x8061BEF8
    FUN_8062A81C(); // bl 0x8062A81C
    r5 = *(0x10 + r29); // lwz @ 0x8061BF00
    /* lis r6, 0 */ // 0x8061BF04
    r4 = *(4 + r3); // lwz @ 0x8061BF08
    r31 = r3;
    r7 = *(0x10 + r5); // lwz @ 0x8061BF10
    /* lis r3, 0 */ // 0x8061BF14
    /* lis r5, 0 */ // 0x8061BF18
    /* lfs f3, 0(r6) */ // 0x8061BF1C
    /* lfs f2, 0x2c(r7) */ // 0x8061BF20
    r4 = r4 + 0x68; // 0x8061BF24
    /* lfs f1, 0(r5) */ // 0x8061BF28
    /* li r5, 0 */ // 0x8061BF2C
    r3 = *(0 + r3); // lwz @ 0x8061BF30
    /* li r6, 2 */ // 0x8061BF34
    /* li r7, 0 */ // 0x8061BF38
    /* li r8, -1 */ // 0x8061BF3C
    FUN_80817728(r5, r6, r7, r8); // bl 0x80817728
    *(0x6c + r29) = r3; // stw @ 0x8061BF44
    /* lis r5, 0 */ // 0x8061BF48
    r4 = r31;
    *(0 + r5) = r3; // stw @ 0x8061BF50
    r3 = r29;
    r12 = *(0xc + r29); // lwz @ 0x8061BF58
    r12 = *(0x10 + r12); // lwz @ 0x8061BF5C
    /* mtctr r12 */ // 0x8061BF60
    /* bctrl  */ // 0x8061BF64
    r5 = *(0x14 + r29); // lwz @ 0x8061BF68
    r31 = r3;
    r6 = r30;
    r4 = *(0x20 + r5); // lwz @ 0x8061BF74
    r5 = *(0x24 + r5); // lwz @ 0x8061BF78
    FUN_805FB6A8(r6); // bl 0x805FB6A8
    *(0x24 + r29) = r31; // stw @ 0x8061BF80
    r31 = *(0x1c + r1); // lwz @ 0x8061BF84
    r30 = *(0x18 + r1); // lwz @ 0x8061BF88
    r29 = *(0x14 + r1); // lwz @ 0x8061BF8C
    r0 = *(0x24 + r1); // lwz @ 0x8061BF90
    return;
}