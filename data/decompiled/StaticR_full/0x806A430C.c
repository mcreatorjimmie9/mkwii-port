/* Function at 0x806A430C, size=840 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r26 */
/* Calls: 14 function(s) */

int FUN_806A430C(int r3, int r4, int r5, int r6, int r7, int r8, int r10)
{
    /* Stack frame: -80(r1) */
    /* saved r26 */
    /* li r0, 0 */ // 0x806A4318
    /* stmw r26, 0x38(r1) */ // 0x806A431C
    r30 = r3;
    r31 = r4;
    r26 = r6;
    r29 = r7;
    r28 = r8;
    r27 = r10;
    r4 = r30;
    *(0x290 + r3) = r5; // stw @ 0x806A433C
    *(0x28c + r3) = r0; // stw @ 0x806A4340
    *(0x288 + r3) = r9; // stw @ 0x806A4344
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r7, 0 */ // 0x806A4350
    r4 = r26;
    r5 = r29;
    r6 = r28;
    r7 = r7 + 0; // 0x806A4364
    FUN_8064E36C(r4, r5, r6, r3, r7); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806A4370
    FUN_8064E32C(r3, r7, r3, r4); // bl 0x8064E32C
    /* lis r4, 0 */ // 0x806A4378
    r3 = r30 + 0xa8; // 0x806A437C
    r4 = r4 + 0; // 0x806A4380
    r4 = r4 + 0x133; // 0x806A4384
    FUN_80665D1C(r4, r3, r4, r4); // bl 0x80665D1C
    r28 = r3;
    if (!=) goto 0x0x806a43a0;
    /* li r28, 0 */ // 0x806A4398
    /* b 0x806a43f0 */ // 0x806A439C
    /* lis r29, 0 */ // 0x806A43A0
    r29 = r29 + 0; // 0x806A43A4
    if (==) goto 0x0x806a43ec;
    r12 = *(0 + r3); // lwz @ 0x806A43AC
    r12 = *(0xc + r12); // lwz @ 0x806A43B0
    /* mtctr r12 */ // 0x806A43B4
    /* bctrl  */ // 0x806A43B8
    /* b 0x806a43d4 */ // 0x806A43BC
    if (!=) goto 0x0x806a43d0;
    /* li r0, 1 */ // 0x806A43C8
    /* b 0x806a43e0 */ // 0x806A43CC
    r3 = *(0 + r3); // lwz @ 0x806A43D0
    if (!=) goto 0x0x806a43c0;
    /* li r0, 0 */ // 0x806A43DC
    if (==) goto 0x0x806a43ec;
    /* b 0x806a43f0 */ // 0x806A43E8
    /* li r28, 0 */ // 0x806A43EC
    r6 = r30 + 0x1f8; // 0x806A43F0
    r0 = r30 + 0x20c; // 0x806A43F4
    *(0x198 + r30) = r6; // stw @ 0x806A43F8
    r5 = r27;
    r3 = r30 + 0x174; // 0x806A4400
    /* li r4, 2 */ // 0x806A4404
    *(0x180 + r30) = r28; // stw @ 0x806A4408
    /* li r6, 0 */ // 0x806A440C
    *(0x19c + r30) = r0; // stw @ 0x806A4410
    FUN_80669214(r3, r4, r6); // bl 0x80669214
    /* lis r4, 0 */ // 0x806A4418
    r3 = r30 + 0xa8; // 0x806A441C
    r4 = r4 + 0; // 0x806A4420
    r4 = r4 + 0x140; // 0x806A4424
    FUN_80665D1C(r4, r3, r4, r4); // bl 0x80665D1C
    r29 = r3;
    if (!=) goto 0x0x806a4440;
    /* li r29, 0 */ // 0x806A4438
    /* b 0x806a4490 */ // 0x806A443C
    /* lis r28, 0 */ // 0x806A4440
    r28 = r28 + 0; // 0x806A4444
    if (==) goto 0x0x806a448c;
    r12 = *(0 + r3); // lwz @ 0x806A444C
    r12 = *(0xc + r12); // lwz @ 0x806A4450
    /* mtctr r12 */ // 0x806A4454
    /* bctrl  */ // 0x806A4458
    /* b 0x806a4474 */ // 0x806A445C
    if (!=) goto 0x0x806a4470;
    /* li r0, 1 */ // 0x806A4468
    /* b 0x806a4480 */ // 0x806A446C
    r3 = *(0 + r3); // lwz @ 0x806A4470
    if (!=) goto 0x0x806a4460;
    /* li r0, 0 */ // 0x806A447C
    if (==) goto 0x0x806a448c;
    /* b 0x806a4490 */ // 0x806A4488
    /* li r29, 0 */ // 0x806A448C
    r4 = *(0x1a8 + r30); // lwz @ 0x806A4490
    /* lis r3, 0 */ // 0x806A4494
    r6 = r30 + 0x220; // 0x806A4498
    r0 = r30 + 0x234; // 0x806A449C
    *(0 + r4) = r29; // stw @ 0x806A44A0
    r3 = r3 + 0; // 0x806A44A4
    r4 = r3 + 0x14d; // 0x806A44A8
    r5 = *(0x1a8 + r30); // lwz @ 0x806A44AC
    r3 = r30 + 0xa8; // 0x806A44B0
    *(0x18 + r5) = r6; // stw @ 0x806A44B4
    r5 = *(0x1a8 + r30); // lwz @ 0x806A44B8
    *(0x1c + r5) = r0; // stw @ 0x806A44BC
    FUN_80665D1C(r3); // bl 0x80665D1C
    r29 = r3;
    if (!=) goto 0x0x806a44d8;
    /* li r29, 0 */ // 0x806A44D0
    /* b 0x806a4528 */ // 0x806A44D4
    /* lis r28, 0 */ // 0x806A44D8
    r28 = r28 + 0; // 0x806A44DC
    if (==) goto 0x0x806a4524;
    r12 = *(0 + r3); // lwz @ 0x806A44E4
    r12 = *(0xc + r12); // lwz @ 0x806A44E8
    /* mtctr r12 */ // 0x806A44EC
    /* bctrl  */ // 0x806A44F0
    /* b 0x806a450c */ // 0x806A44F4
    if (!=) goto 0x0x806a4508;
    /* li r0, 1 */ // 0x806A4500
    /* b 0x806a4518 */ // 0x806A4504
    r3 = *(0 + r3); // lwz @ 0x806A4508
    if (!=) goto 0x0x806a44f8;
    /* li r0, 0 */ // 0x806A4514
    if (==) goto 0x0x806a4524;
    /* b 0x806a4528 */ // 0x806A4520
    /* li r29, 0 */ // 0x806A4524
    r3 = *(0x1a8 + r30); // lwz @ 0x806A4528
    r4 = r30 + 0x220; // 0x806A452C
    r0 = r30 + 0x234; // 0x806A4534
    *(0x28 + r3) = r29; // stw @ 0x806A4538
    r3 = *(0x1a8 + r30); // lwz @ 0x806A453C
    *(0x40 + r3) = r4; // stw @ 0x806A4540
    r3 = *(0x1a8 + r30); // lwz @ 0x806A4544
    *(0x44 + r3) = r0; // stw @ 0x806A4548
    if (!=) goto 0x0x806a457c;
    r3 = r30 + 0x174; // 0x806A4550
    r5 = r30 + 0x248; // 0x806A4554
    /* li r4, 3 */ // 0x806A4558
    /* li r6, 1 */ // 0x806A455C
    FUN_806692C4(r3, r5, r4, r6); // bl 0x806692C4
    r3 = r30 + 0x174; // 0x806A4564
    r5 = r30 + 0x25c; // 0x806A4568
    /* li r4, 4 */ // 0x806A456C
    /* li r6, 1 */ // 0x806A4570
    FUN_806692C4(r3, r5, r4, r6); // bl 0x806692C4
    /* b 0x806a45a4 */ // 0x806A4578
    r3 = r30 + 0x174; // 0x806A457C
    r5 = r30 + 0x248; // 0x806A4580
    /* li r4, 6 */ // 0x806A4584
    /* li r6, 1 */ // 0x806A4588
    FUN_806692C4(r3, r5, r4, r6); // bl 0x806692C4
    r3 = r30 + 0x174; // 0x806A4590
    r5 = r30 + 0x25c; // 0x806A4594
    /* li r4, 5 */ // 0x806A4598
    /* li r6, 1 */ // 0x806A459C
    FUN_806692C4(r3, r5, r4, r6); // bl 0x806692C4
    r3 = r30 + 0x174; // 0x806A45A4
    r5 = r30 + 0x270; // 0x806A45A8
    /* li r4, 0 */ // 0x806A45AC
    /* li r6, 1 */ // 0x806A45B0
    FUN_806692C4(r3, r5, r4, r6); // bl 0x806692C4
    r4 = *(0x288 + r30); // lwz @ 0x806A45B8
    r3 = r30 + 0x174; // 0x806A45BC
    FUN_806692E0(r4, r6, r3); // bl 0x806692E0
    r3 = *(0x64 + r30); // lwz @ 0x806A45C4
    r3 = *(0xc + r3); // lwz @ 0x806A45C8
    r29 = *(0x38 + r3); // lwz @ 0x806A45CC
    if (!=) goto 0x0x806a45e0;
    /* li r29, 0 */ // 0x806A45D8
    /* b 0x806a4634 */ // 0x806A45DC
    /* lis r28, 0 */ // 0x806A45E0
    r28 = r28 + 0; // 0x806A45E4
    if (==) goto 0x0x806a4630;
    r12 = *(0 + r29); // lwz @ 0x806A45EC
    r3 = r29;
    r12 = *(8 + r12); // lwz @ 0x806A45F4
    /* mtctr r12 */ // 0x806A45F8
    /* bctrl  */ // 0x806A45FC
    /* b 0x806a4618 */ // 0x806A4600
    if (!=) goto 0x0x806a4614;
    /* li r0, 1 */ // 0x806A460C
    /* b 0x806a4624 */ // 0x806A4610
    r3 = *(0 + r3); // lwz @ 0x806A4614
    if (!=) goto 0x0x806a4604;
    /* li r0, 0 */ // 0x806A4620
    if (==) goto 0x0x806a4630;
    /* b 0x806a4634 */ // 0x806A462C
    /* li r29, 0 */ // 0x806A4630
    r3 = r29;
    r4 = r30 + 0x174; // 0x806A4638
    FUN_8066A310(r3, r4); // bl 0x8066A310
    r0 = *(0x54 + r1); // lwz @ 0x806A4644
    return;
}