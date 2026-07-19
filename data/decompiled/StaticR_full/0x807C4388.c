/* Function at 0x807C4388, size=772 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 8 function(s) */

int FUN_807C4388(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x807C43A0
    *(0x10 + r1) = r28; // stw @ 0x807C43A4
    r0 = *(0x24 + r3); // lwz @ 0x807C43A8
    if (==) goto 0x0x807c43c0;
    if (==) goto 0x0x807c454c;
    /* b 0x807c466c */ // 0x807C43BC
    r5 = *(0x28 + r3); // lwz @ 0x807C43C0
    /* lis r4, 0 */ // 0x807C43C4
    r5 = r5 + 1; // 0x807C43C8
    *(0x28 + r3) = r5; // stw @ 0x807C43CC
    r0 = *(0 + r4); // lha @ 0x807C43D0
    if (<=) goto 0x0x807c4484;
    r28 = *(4 + r3); // lwz @ 0x807C43DC
    if (<=) goto 0x0x807c447c;
    /* lis r30, 0 */ // 0x807C43E8
    r4 = r28;
    r3 = *(0 + r30); // lwz @ 0x807C43F0
    FUN_807C03BC(r4); // bl 0x807C03BC
    r0 = r3 / r28; // 0x807C43F8
    r29 = *(4 + r31); // lwz @ 0x807C43FC
    r0 = r0 * r28; // 0x807C4400
    /* subf r0, r0, r3 */ // 0x807C4404
    /* slwi r0, r0, 2 */ // 0x807C4408
    r3 = r31 + r0; // 0x807C440C
    r28 = *(0xc + r3); // lwz @ 0x807C4410
    if (==) goto 0x0x807c4440;
    r3 = *(0 + r30); // lwz @ 0x807C441C
    r4 = r29 + -1; // 0x807C4420
    FUN_807C03BC(r4); // bl 0x807C03BC
    r4 = *(0x10 + r28); // lwz @ 0x807C4428
    r4 = r4 + 1; // 0x807C442C
    r0 = r4 / r29; // 0x807C4430
    r0 = r0 * r29; // 0x807C4434
    /* subf r4, r0, r4 */ // 0x807C4438
    /* b 0x807c4450 */ // 0x807C443C
    r3 = *(0 + r30); // lwz @ 0x807C4440
    r4 = r29;
    FUN_807C03BC(r4); // bl 0x807C03BC
    /* li r4, 0 */ // 0x807C444C
    r3 = r4 + r3; // 0x807C4450
    r4 = *(0x18 + r28); // lwz @ 0x807C4454
    r0 = r3 / r29; // 0x807C4458
    r0 = r0 * r29; // 0x807C445C
    /* subf r3, r0, r3 */ // 0x807C4460
    /* slwi r0, r3, 2 */ // 0x807C4464
    r3 = r31 + r0; // 0x807C4468
    r3 = *(0xc + r3); // lwz @ 0x807C446C
    r0 = *(0x18 + r3); // lwz @ 0x807C4470
    *(0x18 + r28) = r0; // stw @ 0x807C4474
    *(0x18 + r3) = r4; // stw @ 0x807C4478
    /* li r0, 0 */ // 0x807C447C
    *(0x28 + r31) = r0; // stw @ 0x807C4480
    /* lis r3, 0 */ // 0x807C4484
    r3 = *(0 + r3); // lwz @ 0x807C4488
    FUN_805C2BFC(r3); // bl 0x805C2BFC
    r0 = *(4 + r31); // lwz @ 0x807C4490
    r30 = r3;
    r5 = r31;
    /* li r3, 0 */ // 0x807C449C
    /* mtctr r0 */ // 0x807C44A0
    if (<=) goto 0x0x807c44cc;
    r4 = *(0xc + r5); // lwz @ 0x807C44AC
    r0 = *(0x18 + r4); // lwz @ 0x807C44B0
    if (!=) goto 0x0x807c44c4;
    r3 = r4;
    /* b 0x807c44cc */ // 0x807C44C0
    r5 = r5 + 4; // 0x807C44C4
    if (counter-- != 0) goto 0x0x807c44ac;
    if (==) goto 0x0x807c450c;
    r3 = *(4 + r3); // lwz @ 0x807C44D4
    r3 = *(0 + r3); // lwz @ 0x807C44D8
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x807C44E0
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x807C44E8
    /* clrlwi r4, r30, 0x18 */ // 0x807C44EC
    r3 = *(0xc + r3); // lwz @ 0x807C44F0
    /* lwzx r3, r3, r0 */ // 0x807C44F4
    r0 = *(0x26 + r3); // lbz @ 0x807C44F8
    if (!=) goto 0x0x807c450c;
    /* li r0, 1 */ // 0x807C4504
    /* b 0x807c4510 */ // 0x807C4508
    /* li r0, 0 */ // 0x807C450C
    if (==) goto 0x0x807c466c;
    /* lis r4, 0 */ // 0x807C4518
    /* lis r3, 0x6666 */ // 0x807C451C
    r0 = *(0 + r4); // lha @ 0x807C4520
    r4 = r3 + 0x6667; // 0x807C4524
    r3 = *(0x24 + r31); // lwz @ 0x807C4528
    /* mulhw r4, r4, r0 */ // 0x807C452C
    r0 = r3 + 1; // 0x807C4530
    *(0x24 + r31) = r0; // stw @ 0x807C4534
    r0 = r4 >> 1; // srawi
    /* srwi r3, r0, 0x1f */ // 0x807C453C
    r0 = r0 + r3; // 0x807C4540
    *(0x28 + r31) = r0; // stw @ 0x807C4544
    /* b 0x807c466c */ // 0x807C4548
    r5 = *(0x28 + r3); // lwz @ 0x807C454C
    /* lis r4, 0 */ // 0x807C4550
    r5 = r5 + 1; // 0x807C4554
    *(0x28 + r3) = r5; // stw @ 0x807C4558
    r0 = *(0 + r4); // lha @ 0x807C455C
    if (<=) goto 0x0x807c466c;
    r29 = *(4 + r3); // lwz @ 0x807C4568
    if (<=) goto 0x0x807c4608;
    /* lis r30, 0 */ // 0x807C4574
    r4 = r29;
    r3 = *(0 + r30); // lwz @ 0x807C457C
    FUN_807C03BC(r4); // bl 0x807C03BC
    r0 = r3 / r29; // 0x807C4584
    r28 = *(4 + r31); // lwz @ 0x807C4588
    r0 = r0 * r29; // 0x807C458C
    /* subf r0, r0, r3 */ // 0x807C4590
    /* slwi r0, r0, 2 */ // 0x807C4594
    r3 = r31 + r0; // 0x807C4598
    r29 = *(0xc + r3); // lwz @ 0x807C459C
    if (==) goto 0x0x807c45cc;
    r3 = *(0 + r30); // lwz @ 0x807C45A8
    r4 = r28 + -1; // 0x807C45AC
    FUN_807C03BC(r4); // bl 0x807C03BC
    r4 = *(0x10 + r29); // lwz @ 0x807C45B4
    r4 = r4 + 1; // 0x807C45B8
    r0 = r4 / r28; // 0x807C45BC
    r0 = r0 * r28; // 0x807C45C0
    /* subf r4, r0, r4 */ // 0x807C45C4
    /* b 0x807c45dc */ // 0x807C45C8
    r3 = *(0 + r30); // lwz @ 0x807C45CC
    r4 = r28;
    FUN_807C03BC(r4); // bl 0x807C03BC
    /* li r4, 0 */ // 0x807C45D8
    r3 = r4 + r3; // 0x807C45DC
    r4 = *(0x18 + r29); // lwz @ 0x807C45E0
    r0 = r3 / r28; // 0x807C45E4
    r0 = r0 * r28; // 0x807C45E8
    /* subf r3, r0, r3 */ // 0x807C45EC
    /* slwi r0, r3, 2 */ // 0x807C45F0
    r3 = r31 + r0; // 0x807C45F4
    r3 = *(0xc + r3); // lwz @ 0x807C45F8
    r0 = *(0x18 + r3); // lwz @ 0x807C45FC
    *(0x18 + r29) = r0; // stw @ 0x807C4600
    *(0x18 + r3) = r4; // stw @ 0x807C4604
    r0 = *(4 + r31); // lwz @ 0x807C4608
    if (<=) goto 0x0x807c4664;
    r5 = *(0xc + r31); // lwz @ 0x807C4614
    r7 = *(0x18 + r5); // lwz @ 0x807C4618
    if (==) goto 0x0x807c4664;
    r6 = r31;
    /* li r4, 0 */ // 0x807C4628
    /* mtctr r0 */ // 0x807C462C
    if (<=) goto 0x0x807c4658;
    r3 = *(0xc + r6); // lwz @ 0x807C4638
    r0 = *(0x18 + r3); // lwz @ 0x807C463C
    if (!=) goto 0x0x807c4650;
    r4 = r3;
    /* b 0x807c4658 */ // 0x807C464C
    r6 = r6 + 4; // 0x807C4650
    if (counter-- != 0) goto 0x0x807c4638;
    r0 = *(0x18 + r4); // lwz @ 0x807C4658
    *(0x18 + r5) = r0; // stw @ 0x807C465C
    *(0x18 + r4) = r7; // stw @ 0x807C4660
    /* li r0, 0 */ // 0x807C4664
    *(0x28 + r31) = r0; // stw @ 0x807C4668
    r0 = *(0x24 + r1); // lwz @ 0x807C466C
    r31 = *(0x1c + r1); // lwz @ 0x807C4670
    r30 = *(0x18 + r1); // lwz @ 0x807C4674
    r29 = *(0x14 + r1); // lwz @ 0x807C4678
    r28 = *(0x10 + r1); // lwz @ 0x807C467C
    return;
}