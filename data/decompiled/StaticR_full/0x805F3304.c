/* Function at 0x805F3304, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805F3304(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x805F3314
    r30 = r3;
    r0 = *(0x7c + r3); // lwz @ 0x805F331C
    r4 = r0 ~| r0; // 0x805F3320
    /* clrlwi r0, r4, 0x1f */ // 0x805F3324
    *(0x7c + r3) = r0; // stw @ 0x805F3328
    r0 = r4 rlwinm 2; // rlwinm
    r4 = r3 + r0; // 0x805F3330
    r4 = *(0x28 + r4); // lwz @ 0x805F3334
    *(0x24 + r3) = r4; // stw @ 0x805F3338
    r3 = *(0x30 + r3); // lwz @ 0x805F333C
    r12 = *(0xb4 + r3); // lwz @ 0x805F3340
    r12 = *(0x18 + r12); // lwz @ 0x805F3344
    /* mtctr r12 */ // 0x805F3348
    /* bctrl  */ // 0x805F334C
    /* li r31, 0 */ // 0x805F3350
    /* b 0x805f3364 */ // 0x805F3354
    r4 = *(0x7c + r30); // lwz @ 0x805F3358
    r3 = r31;
    FUN_805ECF5C(r3); // bl 0x805ECF5C
}