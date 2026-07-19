/* Function at 0x807F62A4, size=472 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_807F62A4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x807F62B8
    *(0x14 + r1) = r29; // stw @ 0x807F62BC
    FUN_807F66AC(); // bl 0x807F66AC
    r12 = *(0 + r31); // lwz @ 0x807F62C4
    r3 = r31;
    r12 = *(0x100 + r12); // lwz @ 0x807F62CC
    /* mtctr r12 */ // 0x807F62D0
    /* bctrl  */ // 0x807F62D4
    r12 = *(0 + r31); // lwz @ 0x807F62D8
    r3 = r31;
    r12 = *(0xfc + r12); // lwz @ 0x807F62E0
    /* mtctr r12 */ // 0x807F62E4
    /* bctrl  */ // 0x807F62E8
    r0 = *(0xdc + r31); // lwz @ 0x807F62EC
    /* addic. r0, r0, -1 */ // 0x807F62F0
    *(0xdc + r31) = r0; // stw @ 0x807F62F4
    if (!=) goto 0x0x807f6348;
    r3 = *(8 + r31); // lwz @ 0x807F62FC
    /* lis r29, 0 */ // 0x807F6300
    /* lis r30, 0 */ // 0x807F6304
    /* lfs f1, 0(r29) */ // 0x807F6308
    r3 = *(0x28 + r3); // lwz @ 0x807F630C
    /* li r4, 2 */ // 0x807F6310
    /* lfs f2, 0(r30) */ // 0x807F6314
    /* li r5, 1 */ // 0x807F6318
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    r3 = *(0xe8 + r31); // lwz @ 0x807F6320
    /* li r4, 2 */ // 0x807F6324
    /* lfs f1, 0(r29) */ // 0x807F6328
    /* li r5, 1 */ // 0x807F632C
    r3 = *(8 + r3); // lwz @ 0x807F6330
    /* lfs f2, 0(r30) */ // 0x807F6334
    r3 = *(0x28 + r3); // lwz @ 0x807F6338
    FUN_805E73A4(r5); // bl 0x805E73A4
    /* li r0, 3 */ // 0x807F6340
    *(0xb0 + r31) = r0; // stw @ 0x807F6344
    r12 = *(0 + r31); // lwz @ 0x807F6348
    r3 = r31;
    /* li r29, 0 */ // 0x807F6350
    r12 = *(0x30 + r12); // lwz @ 0x807F6354
    /* mtctr r12 */ // 0x807F6358
    /* bctrl  */ // 0x807F635C
    /* lis r4, 0x101 */ // 0x807F6360
    r0 = *(0x20 + r3); // lwz @ 0x807F6364
    r3 = r4 + 0x101; // 0x807F6368
    /* andc. r0, r3, r0 */ // 0x807F636C
    if (!=) goto 0x0x807f638c;
    /* lis r3, 0 */ // 0x807F6374
    r3 = *(0 + r3); // lwz @ 0x807F6378
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x807f638c;
    /* li r29, 1 */ // 0x807F6388
    r0 = *(0xdc + r31); // lwz @ 0x807F638C
    if (!=) goto 0x0x807f6404;
    if (!=) goto 0x0x807f6404;
    r3 = *(0xe4 + r31); // lwz @ 0x807F63A0
    r12 = *(0 + r3); // lwz @ 0x807F63A4
    r12 = *(0xc + r12); // lwz @ 0x807F63A8
    /* mtctr r12 */ // 0x807F63AC
    /* bctrl  */ // 0x807F63B0
    r3 = r31;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = *(0xe4 + r31); // lwz @ 0x807F63BC
    r4 = r31 + 0x58; // 0x807F63C0
    r12 = *(0 + r3); // lwz @ 0x807F63C4
    r12 = *(0x78 + r12); // lwz @ 0x807F63C8
    /* mtctr r12 */ // 0x807F63CC
    /* bctrl  */ // 0x807F63D0
    r3 = *(0xe4 + r31); // lwz @ 0x807F63D4
    /* lfs f1, 0xcc(r31) */ // 0x807F63D8
    r12 = *(0 + r3); // lwz @ 0x807F63DC
    r12 = *(0x6c + r12); // lwz @ 0x807F63E0
    /* mtctr r12 */ // 0x807F63E4
    /* bctrl  */ // 0x807F63E8
    r3 = *(0xe4 + r31); // lwz @ 0x807F63EC
    r12 = *(0 + r3); // lwz @ 0x807F63F0
    r12 = *(0x80 + r12); // lwz @ 0x807F63F4
    /* mtctr r12 */ // 0x807F63F8
    /* bctrl  */ // 0x807F63FC
    /* b 0x807f6440 */ // 0x807F6400
    if (>=) goto 0x0x807f6440;
    r3 = r31;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r3 = *(0xe4 + r31); // lwz @ 0x807F6414
    r4 = r31 + 0x58; // 0x807F6418
    r12 = *(0 + r3); // lwz @ 0x807F641C
    r12 = *(0x78 + r12); // lwz @ 0x807F6420
    /* mtctr r12 */ // 0x807F6424
    /* bctrl  */ // 0x807F6428
    r3 = *(0xe4 + r31); // lwz @ 0x807F642C
    r12 = *(0 + r3); // lwz @ 0x807F6430
    r12 = *(0x80 + r12); // lwz @ 0x807F6434
    /* mtctr r12 */ // 0x807F6438
    /* bctrl  */ // 0x807F643C
    r0 = *(0xdc + r31); // lwz @ 0x807F6440
    if (>) goto 0x0x807f6460;
    /* lis r4, 0 */ // 0x807F644C
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x807F6454
    /* li r4, 0x34a */ // 0x807F6458
    FUN_808A0AA8(r4, r3, r4); // bl 0x808A0AA8
    r0 = *(0x24 + r1); // lwz @ 0x807F6460
    r31 = *(0x1c + r1); // lwz @ 0x807F6464
    r30 = *(0x18 + r1); // lwz @ 0x807F6468
    r29 = *(0x14 + r1); // lwz @ 0x807F646C
    return;
}