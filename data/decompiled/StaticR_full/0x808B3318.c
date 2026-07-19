/* Function at 0x808B3318, size=368 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808B3318(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x808B3320
    *(0x18 + r1) = r30; // stw @ 0x808B332C
    *(0x14 + r1) = r29; // stw @ 0x808B3330
    r29 = r3;
    r0 = *(0x2b8 + r3); // lwz @ 0x808B3338
    *(0x42c + r3) = r4; // stb @ 0x808B333C
    if (==) goto 0x0x808b3368;
    r12 = *(0 + r3); // lwz @ 0x808B3348
    r12 = *(0x90 + r12); // lwz @ 0x808B334C
    /* mtctr r12 */ // 0x808B3350
    /* bctrl  */ // 0x808B3354
    r5 = r3;
    r3 = *(0x2b8 + r29); // lwz @ 0x808B335C
    r4 = *(0x3e4 + r29); // lwz @ 0x808B3360
    FUN_808D5844(r5); // bl 0x808D5844
    r0 = *(0x10 + r29); // lwz @ 0x808B3368
    if (==) goto 0x0x808b341c;
    r12 = *(0 + r29); // lwz @ 0x808B3374
    r3 = r29;
    r12 = *(0x70 + r12); // lwz @ 0x808B337C
    /* mtctr r12 */ // 0x808B3380
    /* bctrl  */ // 0x808B3384
    r12 = *(0 + r29); // lwz @ 0x808B3388
    r31 = *(4 + r3); // lwz @ 0x808B338C
    r3 = r29;
    r12 = *(0x68 + r12); // lwz @ 0x808B3394
    /* mtctr r12 */ // 0x808B3398
    /* bctrl  */ // 0x808B339C
    if (!=) goto 0x0x808b341c;
    r12 = *(0 + r29); // lwz @ 0x808B33A8
    r3 = r29;
    r12 = *(0x70 + r12); // lwz @ 0x808B33B0
    /* mtctr r12 */ // 0x808B33B4
    /* bctrl  */ // 0x808B33B8
    r12 = *(0 + r29); // lwz @ 0x808B33BC
    r31 = *(8 + r3); // lwz @ 0x808B33C0
    r3 = r29;
    r12 = *(0x6c + r12); // lwz @ 0x808B33C8
    /* mtctr r12 */ // 0x808B33CC
    /* bctrl  */ // 0x808B33D0
    if (!=) goto 0x0x808b341c;
    r12 = *(0 + r29); // lwz @ 0x808B33DC
    r3 = r29;
    r12 = *(0x70 + r12); // lwz @ 0x808B33E4
    /* mtctr r12 */ // 0x808B33E8
    /* bctrl  */ // 0x808B33EC
    r31 = *(0xd + r3); // lbz @ 0x808B33F0
    FUN_808CFA50(r3); // bl 0x808CFA50
    /* clrlwi r4, r3, 0x18 */ // 0x808B33F8
    /* li r3, 2 */ // 0x808B33FC
    r0 = r4 + -2; // 0x808B3400
    /* orc r3, r4, r3 */ // 0x808B3404
    /* srwi r0, r0, 1 */ // 0x808B3408
    /* subf r0, r0, r3 */ // 0x808B340C
    /* srwi r0, r0, 0x1f */ // 0x808B3410
    if (==) goto 0x0x808b3430;
    r12 = *(0 + r29); // lwz @ 0x808B341C
    r3 = r29;
    r12 = *(0x80 + r12); // lwz @ 0x808B3424
    /* mtctr r12 */ // 0x808B3428
    /* bctrl  */ // 0x808B342C
    r31 = r29;
    /* li r30, 0 */ // 0x808B3434
    /* b 0x808b3460 */ // 0x808B3438
    r3 = *(0x2c0 + r31); // lwz @ 0x808B343C
    /* li r4, 0 */ // 0x808B3440
    /* li r5, 0 */ // 0x808B3444
    r12 = *(0 + r3); // lwz @ 0x808B3448
    r12 = *(0xc + r12); // lwz @ 0x808B344C
    /* mtctr r12 */ // 0x808B3450
    /* bctrl  */ // 0x808B3454
    r31 = r31 + 4; // 0x808B3458
    r30 = r30 + 1; // 0x808B345C
    r0 = *(0x310 + r29); // lwz @ 0x808B3460
    if (<) goto 0x0x808b343c;
    r0 = *(0x24 + r1); // lwz @ 0x808B346C
    r31 = *(0x1c + r1); // lwz @ 0x808B3470
    r30 = *(0x18 + r1); // lwz @ 0x808B3474
    r29 = *(0x14 + r1); // lwz @ 0x808B3478
    return;
}