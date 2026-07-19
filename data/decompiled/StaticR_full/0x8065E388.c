/* Function at 0x8065E388, size=240 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8065E388(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x8065E390
    *(0x18 + r1) = r30; // stw @ 0x8065E39C
    *(0x14 + r1) = r29; // stw @ 0x8065E3A0
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x8065E3A8
    r3 = *(0 + r3); // lwz @ 0x8065E3AC
    r30 = *(0x264 + r3); // lwz @ 0x8065E3B0
    if (!=) goto 0x0x8065e3c4;
    /* li r30, 0 */ // 0x8065E3BC
    /* b 0x8065e418 */ // 0x8065E3C0
    /* lis r31, 0 */ // 0x8065E3C4
    r31 = r31 + 0; // 0x8065E3C8
    if (==) goto 0x0x8065e414;
    r12 = *(0 + r30); // lwz @ 0x8065E3D0
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x8065E3D8
    /* mtctr r12 */ // 0x8065E3DC
    /* bctrl  */ // 0x8065E3E0
    /* b 0x8065e3fc */ // 0x8065E3E4
    if (!=) goto 0x0x8065e3f8;
    /* li r0, 1 */ // 0x8065E3F0
    /* b 0x8065e408 */ // 0x8065E3F4
    r3 = *(0 + r3); // lwz @ 0x8065E3F8
    if (!=) goto 0x0x8065e3e8;
    /* li r0, 0 */ // 0x8065E404
    if (==) goto 0x0x8065e414;
    /* b 0x8065e418 */ // 0x8065E410
    /* li r30, 0 */ // 0x8065E414
    r4 = *(0x1108 + r30); // lwz @ 0x8065E418
    /* lis r31, 0 */ // 0x8065E41C
    *(0x4b4 + r29) = r4; // stw @ 0x8065E420
    r3 = *(0 + r31); // lwz @ 0x8065E424
    r3 = *(0 + r3); // lwz @ 0x8065E428
    r3 = *(0x404 + r3); // lwz @ 0x8065E42C
    FUN_80659684(); // bl 0x80659684
    r3 = *(0 + r31); // lwz @ 0x8065E434
    r3 = *(0 + r3); // lwz @ 0x8065E438
    r3 = *(0x404 + r3); // lwz @ 0x8065E43C
    FUN_80659138(); // bl 0x80659138
    r3 = *(0 + r31); // lwz @ 0x8065E444
    r3 = *(0 + r3); // lwz @ 0x8065E448
    r3 = *(0x404 + r3); // lwz @ 0x8065E44C
    FUN_806598EC(); // bl 0x806598EC
    /* li r0, 0 */ // 0x8065E454
    *(0x4b0 + r29) = r0; // stw @ 0x8065E458
    r31 = *(0x1c + r1); // lwz @ 0x8065E45C
    r30 = *(0x18 + r1); // lwz @ 0x8065E460
    r29 = *(0x14 + r1); // lwz @ 0x8065E464
    r0 = *(0x24 + r1); // lwz @ 0x8065E468
    return;
}