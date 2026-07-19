/* Function at 0x808B42E4, size=452 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_808B42E4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r26 */
    /* stfd f31, 0x28(r1) */ // 0x808B42F0
    /* stmw r26, 0x10(r1) */ // 0x808B42F4
    r31 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r3 = r7;
    FUN_8064A384(r3); // bl 0x8064A384
    /* lis r3, 0 */ // 0x808B4310
    /* fmr f31, f1 */ // 0x808B4314
    r3 = *(0 + r3); // lwz @ 0x808B4318
    r3 = *(0 + r3); // lwz @ 0x808B431C
    r29 = *(0x14c + r3); // lwz @ 0x808B4320
    if (!=) goto 0x0x808b4334;
    /* li r29, 0 */ // 0x808B432C
    /* b 0x808b4388 */ // 0x808B4330
    /* lis r30, 0 */ // 0x808B4334
    r30 = r30 + 0; // 0x808B4338
    if (==) goto 0x0x808b4384;
    r12 = *(0 + r29); // lwz @ 0x808B4340
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808B4348
    /* mtctr r12 */ // 0x808B434C
    /* bctrl  */ // 0x808B4350
    /* b 0x808b436c */ // 0x808B4354
    if (!=) goto 0x0x808b4368;
    /* li r0, 1 */ // 0x808B4360
    /* b 0x808b4378 */ // 0x808B4364
    r3 = *(0 + r3); // lwz @ 0x808B4368
    if (!=) goto 0x0x808b4358;
    /* li r0, 0 */ // 0x808B4374
    if (==) goto 0x0x808b4384;
    /* b 0x808b4388 */ // 0x808B4380
    /* li r29, 0 */ // 0x808B4384
    r12 = *(0 + r29); // lwz @ 0x808B4388
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x808B4390
    /* mtctr r12 */ // 0x808B4394
    /* bctrl  */ // 0x808B4398
    r12 = *(0 + r31); // lwz @ 0x808B439C
    r3 = r31;
    r12 = *(0x68 + r12); // lwz @ 0x808B43A4
    /* mtctr r12 */ // 0x808B43A8
    /* bctrl  */ // 0x808B43AC
    *(0x1a0 + r29) = r3; // stw @ 0x808B43B0
    r3 = r29;
    r4 = r26;
    r5 = r27;
    r12 = *(0 + r29); // lwz @ 0x808B43C0
    r12 = *(0x68 + r12); // lwz @ 0x808B43C4
    /* mtctr r12 */ // 0x808B43C8
    /* bctrl  */ // 0x808B43CC
    *(0x604 + r29) = r28; // stw @ 0x808B43D0
    /* li r0, 0x51 */ // 0x808B43D4
    /* lis r3, 0 */ // 0x808B43D8
    *(0x3e8 + r31) = r0; // stw @ 0x808B43DC
    r3 = *(0 + r3); // lwz @ 0x808B43E0
    r3 = *(0 + r3); // lwz @ 0x808B43E4
    r29 = *(0x14c + r3); // lwz @ 0x808B43E8
    if (!=) goto 0x0x808b43fc;
    /* li r29, 0 */ // 0x808B43F4
    /* b 0x808b4450 */ // 0x808B43F8
    /* lis r30, 0 */ // 0x808B43FC
    r30 = r30 + 0; // 0x808B4400
    if (==) goto 0x0x808b444c;
    r12 = *(0 + r29); // lwz @ 0x808B4408
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808B4410
    /* mtctr r12 */ // 0x808B4414
    /* bctrl  */ // 0x808B4418
    /* b 0x808b4434 */ // 0x808B441C
    if (!=) goto 0x0x808b4430;
    /* li r0, 1 */ // 0x808B4428
    /* b 0x808b4440 */ // 0x808B442C
    r3 = *(0 + r3); // lwz @ 0x808B4430
    if (!=) goto 0x0x808b4420;
    /* li r0, 0 */ // 0x808B443C
    if (==) goto 0x0x808b444c;
    /* b 0x808b4450 */ // 0x808B4448
    /* li r29, 0 */ // 0x808B444C
    if (==) goto 0x0x808b4460;
    r0 = *(4 + r31); // lwz @ 0x808B4458
    *(0x3ec + r29) = r0; // stw @ 0x808B445C
    r0 = *(0x42c + r31); // lbz @ 0x808B4460
    if (!=) goto 0x0x808b4490;
    r0 = *(8 + r31); // lwz @ 0x808B446C
    if (!=) goto 0x0x808b4490;
    /* fmr f1, f31 */ // 0x808B4478
    r3 = r31;
    /* li r4, 0 */ // 0x808B4480
    FUN_80671C48(r3, r4); // bl 0x80671C48
    /* li r0, 1 */ // 0x808B4488
    *(0x42c + r31) = r0; // stb @ 0x808B448C
    /* lfd f31, 0x28(r1) */ // 0x808B4490
    r0 = *(0x34 + r1); // lwz @ 0x808B4498
    return;
}