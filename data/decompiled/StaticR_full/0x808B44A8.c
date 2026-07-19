/* Function at 0x808B44A8, size=460 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_808B44A8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r26 */
    /* lis r7, 0 */ // 0x808B44B0
    *(0x34 + r1) = r0; // stw @ 0x808B44B4
    /* stfd f31, 0x28(r1) */ // 0x808B44B8
    /* fmr f31, f1 */ // 0x808B44BC
    /* stmw r26, 0x10(r1) */ // 0x808B44C0
    r31 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r7 = *(0 + r7); // lwz @ 0x808B44D4
    r3 = *(0 + r7); // lwz @ 0x808B44D8
    r29 = *(0x14c + r3); // lwz @ 0x808B44DC
    if (!=) goto 0x0x808b44f0;
    /* li r29, 0 */ // 0x808B44E8
    /* b 0x808b4544 */ // 0x808B44EC
    /* lis r30, 0 */ // 0x808B44F0
    r30 = r30 + 0; // 0x808B44F4
    if (==) goto 0x0x808b4540;
    r12 = *(0 + r29); // lwz @ 0x808B44FC
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808B4504
    /* mtctr r12 */ // 0x808B4508
    /* bctrl  */ // 0x808B450C
    /* b 0x808b4528 */ // 0x808B4510
    if (!=) goto 0x0x808b4524;
    /* li r0, 1 */ // 0x808B451C
    /* b 0x808b4534 */ // 0x808B4520
    r3 = *(0 + r3); // lwz @ 0x808B4524
    if (!=) goto 0x0x808b4514;
    /* li r0, 0 */ // 0x808B4530
    if (==) goto 0x0x808b4540;
    /* b 0x808b4544 */ // 0x808B453C
    /* li r29, 0 */ // 0x808B4540
    r12 = *(0 + r29); // lwz @ 0x808B4544
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x808B454C
    /* mtctr r12 */ // 0x808B4550
    /* bctrl  */ // 0x808B4554
    r12 = *(0 + r31); // lwz @ 0x808B4558
    r3 = r31;
    r12 = *(0x68 + r12); // lwz @ 0x808B4560
    /* mtctr r12 */ // 0x808B4564
    /* bctrl  */ // 0x808B4568
    *(0x1a0 + r29) = r3; // stw @ 0x808B456C
    r3 = r29;
    r4 = r26;
    r5 = r27;
    r12 = *(0 + r29); // lwz @ 0x808B457C
    r12 = *(0x68 + r12); // lwz @ 0x808B4580
    /* mtctr r12 */ // 0x808B4584
    /* bctrl  */ // 0x808B4588
    /* li r0, -1 */ // 0x808B458C
    *(0x604 + r29) = r0; // stw @ 0x808B4590
    r4 = r31 + 0x3fc; // 0x808B4594
    /* lis r3, 0 */ // 0x808B4598
    *(0x3f0 + r31) = r28; // stw @ 0x808B459C
    /* li r0, 0x51 */ // 0x808B45A0
    *(0x188 + r29) = r4; // stw @ 0x808B45A4
    *(0x3e8 + r31) = r0; // stw @ 0x808B45A8
    r3 = *(0 + r3); // lwz @ 0x808B45AC
    r3 = *(0 + r3); // lwz @ 0x808B45B0
    r29 = *(0x14c + r3); // lwz @ 0x808B45B4
    if (!=) goto 0x0x808b45c8;
    /* li r29, 0 */ // 0x808B45C0
    /* b 0x808b461c */ // 0x808B45C4
    /* lis r30, 0 */ // 0x808B45C8
    r30 = r30 + 0; // 0x808B45CC
    if (==) goto 0x0x808b4618;
    r12 = *(0 + r29); // lwz @ 0x808B45D4
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808B45DC
    /* mtctr r12 */ // 0x808B45E0
    /* bctrl  */ // 0x808B45E4
    /* b 0x808b4600 */ // 0x808B45E8
    if (!=) goto 0x0x808b45fc;
    /* li r0, 1 */ // 0x808B45F4
    /* b 0x808b460c */ // 0x808B45F8
    r3 = *(0 + r3); // lwz @ 0x808B45FC
    if (!=) goto 0x0x808b45ec;
    /* li r0, 0 */ // 0x808B4608
    if (==) goto 0x0x808b4618;
    /* b 0x808b461c */ // 0x808B4614
    /* li r29, 0 */ // 0x808B4618
    if (==) goto 0x0x808b462c;
    r0 = *(4 + r31); // lwz @ 0x808B4624
    *(0x3ec + r29) = r0; // stw @ 0x808B4628
    r0 = *(0x42c + r31); // lbz @ 0x808B462C
    if (!=) goto 0x0x808b465c;
    r0 = *(8 + r31); // lwz @ 0x808B4638
    if (!=) goto 0x0x808b465c;
    /* fmr f1, f31 */ // 0x808B4644
    r3 = r31;
    /* li r4, 0 */ // 0x808B464C
    FUN_80671C48(r3, r4); // bl 0x80671C48
    /* li r0, 1 */ // 0x808B4654
    *(0x42c + r31) = r0; // stb @ 0x808B4658
    /* lfd f31, 0x28(r1) */ // 0x808B465C
    r0 = *(0x34 + r1); // lwz @ 0x808B4664
    return;
}