/* Function at 0x805FA3F8, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_805FA3F8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* clrlwi r0, r4, 0x10 */ // 0x805FA408
    *(0x18 + r1) = r30; // stw @ 0x805FA410
    *(0x14 + r1) = r29; // stw @ 0x805FA414
    *(0x10 + r1) = r28; // stw @ 0x805FA418
    r28 = r3;
    r5 = *(0x10 + r3); // lhz @ 0x805FA420
    /* andc r0, r5, r0 */ // 0x805FA424
    *(0x10 + r3) = r0; // sth @ 0x805FA428
    if (!=) goto 0x0x805fa480;
    FUN_8061E2BC(); // bl 0x8061E2BC
    r30 = r3;
    /* li r31, 0 */ // 0x805FA438
    r29 = r30;
    /* b 0x805fa464 */ // 0x805FA440
    r12 = *(0xc + r28); // lwz @ 0x805FA444
    r3 = r28;
    r4 = *(0xd8 + r29); // lwz @ 0x805FA44C
    r12 = *(8 + r12); // lwz @ 0x805FA450
    /* mtctr r12 */ // 0x805FA454
    /* bctrl  */ // 0x805FA458
    r29 = r29 + 4; // 0x805FA45C
    r31 = r31 + 1; // 0x805FA460
    r0 = *(0xf0 + r30); // lwz @ 0x805FA464
    if (<) goto 0x0x805fa444;
    /* lis r4, 0 */ // 0x805FA470
    r3 = r28;
    r4 = r4 + 0; // 0x805FA478
    FUN_8061EDB4(r4, r3, r4); // bl 0x8061EDB4
    r0 = *(0x24 + r1); // lwz @ 0x805FA480
    r31 = *(0x1c + r1); // lwz @ 0x805FA484
    r30 = *(0x18 + r1); // lwz @ 0x805FA488
    r29 = *(0x14 + r1); // lwz @ 0x805FA48C
    r28 = *(0x10 + r1); // lwz @ 0x805FA490
    return;
}