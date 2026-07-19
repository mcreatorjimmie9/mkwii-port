/* Function at 0x8065E478, size=356 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8065E478(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x8065E480
    *(0xc + r1) = r31; // stw @ 0x8065E488
    *(8 + r1) = r30; // stw @ 0x8065E48C
    r3 = *(0 + r3); // lwz @ 0x8065E490
    r3 = *(0 + r3); // lwz @ 0x8065E494
    r30 = *(0x25c + r3); // lwz @ 0x8065E498
    if (!=) goto 0x0x8065e4ac;
    /* li r30, 0 */ // 0x8065E4A4
    /* b 0x8065e500 */ // 0x8065E4A8
    /* lis r31, 0 */ // 0x8065E4AC
    r31 = r31 + 0; // 0x8065E4B0
    if (==) goto 0x0x8065e4fc;
    r12 = *(0 + r30); // lwz @ 0x8065E4B8
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x8065E4C0
    /* mtctr r12 */ // 0x8065E4C4
    /* bctrl  */ // 0x8065E4C8
    /* b 0x8065e4e4 */ // 0x8065E4CC
    if (!=) goto 0x0x8065e4e0;
    /* li r0, 1 */ // 0x8065E4D8
    /* b 0x8065e4f0 */ // 0x8065E4DC
    r3 = *(0 + r3); // lwz @ 0x8065E4E0
    if (!=) goto 0x0x8065e4d0;
    /* li r0, 0 */ // 0x8065E4EC
    if (==) goto 0x0x8065e4fc;
    /* b 0x8065e500 */ // 0x8065E4F8
    /* li r30, 0 */ // 0x8065E4FC
    r3 = r30;
    FUN_806641A8(r3); // bl 0x806641A8
    /* lis r3, 0 */ // 0x8065E508
    r3 = *(0 + r3); // lwz @ 0x8065E50C
    r3 = *(0 + r3); // lwz @ 0x8065E510
    r30 = *(0x14c + r3); // lwz @ 0x8065E514
    if (!=) goto 0x0x8065e528;
    /* li r30, 0 */ // 0x8065E520
    /* b 0x8065e57c */ // 0x8065E524
    /* lis r31, 0 */ // 0x8065E528
    r31 = r31 + 0; // 0x8065E52C
    if (==) goto 0x0x8065e578;
    r12 = *(0 + r30); // lwz @ 0x8065E534
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x8065E53C
    /* mtctr r12 */ // 0x8065E540
    /* bctrl  */ // 0x8065E544
    /* b 0x8065e560 */ // 0x8065E548
    if (!=) goto 0x0x8065e55c;
    /* li r0, 1 */ // 0x8065E554
    /* b 0x8065e56c */ // 0x8065E558
    r3 = *(0 + r3); // lwz @ 0x8065E55C
    if (!=) goto 0x0x8065e54c;
    /* li r0, 0 */ // 0x8065E568
    if (==) goto 0x0x8065e578;
    /* b 0x8065e57c */ // 0x8065E574
    /* li r30, 0 */ // 0x8065E578
    r12 = *(0 + r30); // lwz @ 0x8065E57C
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x8065E584
    /* mtctr r12 */ // 0x8065E588
    /* bctrl  */ // 0x8065E58C
    r3 = r30;
    /* li r4, 0x145d */ // 0x8065E594
    /* li r5, 0 */ // 0x8065E598
    FUN_8066CDDC(r3, r4, r5); // bl 0x8066CDDC
    r12 = *(0 + r30); // lwz @ 0x8065E5A0
    r3 = r30;
    /* li r4, 0x145b */ // 0x8065E5A8
    /* li r5, 0 */ // 0x8065E5AC
    r12 = *(0x68 + r12); // lwz @ 0x8065E5B0
    /* mtctr r12 */ // 0x8065E5B4
    /* bctrl  */ // 0x8065E5B8
    /* li r0, 0x96 */ // 0x8065E5BC
    *(0x604 + r30) = r0; // stw @ 0x8065E5C0
    r31 = *(0xc + r1); // lwz @ 0x8065E5C4
    r30 = *(8 + r1); // lwz @ 0x8065E5C8
    r0 = *(0x14 + r1); // lwz @ 0x8065E5CC
    return;
}