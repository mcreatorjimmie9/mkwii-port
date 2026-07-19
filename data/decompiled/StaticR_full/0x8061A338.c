/* Function at 0x8061A338, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8061A338(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x8061A340
    *(0xc + r1) = r31; // stw @ 0x8061A348
    *(8 + r1) = r30; // stw @ 0x8061A34C
    r30 = r3;
    r3 = *(0 + r4); // lwz @ 0x8061A354
    /* li r4, 2 */ // 0x8061A358
    FUN_805C5788(r4); // bl 0x805C5788
    if (==) goto 0x0x8061a394;
    r3 = r30;
    FUN_8061A3AC(r4, r3); // bl 0x8061A3AC
    /* lis r4, 0 */ // 0x8061A370
    r3 = r30;
    r31 = *(0 + r4); // lwz @ 0x8061A378
    FUN_8061E2D8(r3, r4, r3); // bl 0x8061E2D8
    /* clrlwi r6, r3, 0x18 */ // 0x8061A380
    r3 = r31;
    r4 = r30 + 0x14; // 0x8061A388
    /* li r5, 0x40 */ // 0x8061A38C
    FUN_806E3578(r3, r4, r5); // bl 0x806E3578
    r0 = *(0x14 + r1); // lwz @ 0x8061A394
    r31 = *(0xc + r1); // lwz @ 0x8061A398
    r30 = *(8 + r1); // lwz @ 0x8061A39C
    return;
}