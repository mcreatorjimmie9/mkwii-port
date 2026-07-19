/* Function at 0x8067B328, size=288 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_8067B328(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3 + 0xc54; // 0x8067B338
    *(0x18 + r1) = r30; // stw @ 0x8067B33C
    /* li r30, 0 */ // 0x8067B340
    *(0x14 + r1) = r29; // stw @ 0x8067B344
    r29 = r3;
    r12 = *(0 + r31); // lwz @ 0x8067B34C
    r3 = r31;
    r12 = *(0x3c + r12); // lwz @ 0x8067B354
    /* mtctr r12 */ // 0x8067B358
    /* bctrl  */ // 0x8067B35C
    r30 = r30 + 1; // 0x8067B360
    r31 = r31 + 0x274; // 0x8067B364
    if (<) goto 0x0x8067b34c;
    r31 = r29 + 0x1624; // 0x8067B370
    /* li r30, 0 */ // 0x8067B374
    r12 = *(0 + r31); // lwz @ 0x8067B378
    r3 = r31;
    r12 = *(0x3c + r12); // lwz @ 0x8067B380
    /* mtctr r12 */ // 0x8067B384
    /* bctrl  */ // 0x8067B388
    r30 = r30 + 1; // 0x8067B38C
    r31 = r31 + 0x274; // 0x8067B390
    if (<) goto 0x0x8067b378;
    r12 = *(0x5fbc + r29); // lwz @ 0x8067B39C
    r3 = r29 + 0x5fbc; // 0x8067B3A0
    r12 = *(0x3c + r12); // lwz @ 0x8067B3A4
    /* mtctr r12 */ // 0x8067B3A8
    /* bctrl  */ // 0x8067B3AC
    r12 = *(0x6230 + r29); // lwz @ 0x8067B3B0
    r3 = r29 + 0x6230; // 0x8067B3B4
    r12 = *(0x3c + r12); // lwz @ 0x8067B3B8
    /* mtctr r12 */ // 0x8067B3BC
    /* bctrl  */ // 0x8067B3C0
    r12 = *(0x64a4 + r29); // lwz @ 0x8067B3C4
    r3 = r29 + 0x64a4; // 0x8067B3C8
    r12 = *(0x3c + r12); // lwz @ 0x8067B3CC
    /* mtctr r12 */ // 0x8067B3D0
    /* bctrl  */ // 0x8067B3D4
    r12 = *(0x6718 + r29); // lwz @ 0x8067B3D8
    r3 = r29 + 0x6718; // 0x8067B3DC
    r12 = *(0x3c + r12); // lwz @ 0x8067B3E0
    /* mtctr r12 */ // 0x8067B3E4
    /* bctrl  */ // 0x8067B3E8
    r12 = *(0x698c + r29); // lwz @ 0x8067B3EC
    r3 = r29 + 0x698c; // 0x8067B3F0
    r12 = *(0x3c + r12); // lwz @ 0x8067B3F4
    /* mtctr r12 */ // 0x8067B3F8
    /* bctrl  */ // 0x8067B3FC
    r31 = r29 + 0x6c00; // 0x8067B400
    /* li r30, 0 */ // 0x8067B404
    r12 = *(0 + r31); // lwz @ 0x8067B408
    r3 = r31;
    r12 = *(0x3c + r12); // lwz @ 0x8067B410
    /* mtctr r12 */ // 0x8067B414
    /* bctrl  */ // 0x8067B418
    r30 = r30 + 1; // 0x8067B41C
    r31 = r31 + 0x1b4; // 0x8067B420
    if (<) goto 0x0x8067b408;
    r0 = *(0x24 + r1); // lwz @ 0x8067B42C
    r31 = *(0x1c + r1); // lwz @ 0x8067B430
    r30 = *(0x18 + r1); // lwz @ 0x8067B434
    r29 = *(0x14 + r1); // lwz @ 0x8067B438
    return;
}