/* Function at 0x807F330C, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807F330C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x807F3314
    /* lis r4, 0 */ // 0x807F3318
    *(0x24 + r1) = r0; // stw @ 0x807F331C
    r6 = r6 + 0; // 0x807F3320
    /* li r0, 1 */ // 0x807F3324
    /* lfd f2, 0x30(r6) */ // 0x807F3328
    *(0x1c + r1) = r31; // stw @ 0x807F332C
    r31 = r3;
    /* lfs f0, 0x28(r6) */ // 0x807F3334
    *(0xb0 + r3) = r0; // stw @ 0x807F3338
    /* lis r0, 0x4330 */ // 0x807F333C
    r5 = *(8 + r3); // lwz @ 0x807F3340
    r4 = *(0 + r4); // lwz @ 0x807F3344
    *(8 + r1) = r0; // stw @ 0x807F3348
    /* xoris r0, r4, 0x8000 */ // 0x807F334C
    /* li r4, 0 */ // 0x807F3350
    *(0xc + r1) = r0; // stw @ 0x807F3354
    /* lfd f1, 8(r1) */ // 0x807F3358
    /* fsubs f3, f1, f2 */ // 0x807F335C
    /* lfs f1, 0(r6) */ // 0x807F3360
    /* lfs f2, 0x24(r6) */ // 0x807F3364
    /* fsubs f0, f3, f0 */ // 0x807F3368
    /* fctiwz f0, f0 */ // 0x807F336C
    /* stfd f0, 0x10(r1) */ // 0x807F3370
    r0 = *(0x14 + r1); // lwz @ 0x807F3374
    *(0xb4 + r3) = r0; // stw @ 0x807F3378
    r3 = *(0x28 + r5); // lwz @ 0x807F337C
    FUN_805E70EC(); // bl 0x805E70EC
    r3 = r31;
    /* li r4, 0 */ // 0x807F3388
    FUN_808A0A44(r3, r4); // bl 0x808A0A44
    r0 = *(0x24 + r1); // lwz @ 0x807F3390
    r31 = *(0x1c + r1); // lwz @ 0x807F3394
    return;
}