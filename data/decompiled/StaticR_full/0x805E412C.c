/* Function at 0x805E412C, size=1220 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

void FUN_805E412C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x805E4134
    /* li r0, 0xe */ // 0x805E413C
    *(0x8c + r1) = r31; // stw @ 0x805E4144
    *(0x88 + r1) = r30; // stw @ 0x805E4148
    *(0x84 + r1) = r29; // stw @ 0x805E414C
    *(0x80 + r1) = r28; // stw @ 0x805E4150
    r8 = *(0 + r5); // lwz @ 0x805E4154
    r6 = r8 + 0xb98; // 0x805E4158
    /* mtctr r0 */ // 0x805E415C
    r5 = *(4 + r6); // lwz @ 0x805E4160
    r0 = *(8 + r6); // lwzu @ 0x805E4164
    *(4 + r7) = r5; // stw @ 0x805E4168
    *(8 + r7) = r0; // stwu @ 0x805E416C
    if (counter-- != 0) goto 0x0x805e4160;
    r0 = *(0x4c + r1); // lwz @ 0x805E4174
    r5 = *(0xb9e + r8); // lhz @ 0x805E4178
    if (<) goto 0x0x805e422c;
    r0 = *(0xb70 + r8); // lwz @ 0x805E4184
    r29 = *(4 + r3); // lwz @ 0x805E4188
    if (!=) goto 0x0x805e45d0;
    if (!=) goto 0x0x805e45d0;
    r6 = *(0x10 + r29); // lwz @ 0x805E419C
    r0 = r5 + -1; // 0x805E41A0
    /* li r4, 0 */ // 0x805E41A4
    /* li r3, 1 */ // 0x805E41A8
    *(0x10 + r6) = r4; // stw @ 0x805E41AC
    *(0xc + r6) = r3; // stw @ 0x805E41B4
    if (>) goto 0x0x805e41d0;
    r3 = *(0x10 + r29); // lwz @ 0x805E41BC
    r12 = *(0 + r3); // lwz @ 0x805E41C0
    r12 = *(0xc + r12); // lwz @ 0x805E41C4
    /* mtctr r12 */ // 0x805E41C8
    /* bctrl  */ // 0x805E41CC
    /* li r28, 0 */ // 0x805E41D0
    /* lis r31, 0 */ // 0x805E41D4
    /* lis r30, 0 */ // 0x805E41D8
    /* b 0x805e4214 */ // 0x805E41DC
    r3 = *(0 + r31); // lwz @ 0x805E41E0
    r6 = r28 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x805E41E8
    /* lwzx r3, r3, r6 */ // 0x805E41EC
    r0 = *(0x38 + r3); // lwz @ 0x805E41F0
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805E41F4
    if (!=) goto 0x0x805e4210;
    r3 = *(0xc + r29); // lwz @ 0x805E41FC
    /* li r4, 1 */ // 0x805E4200
    /* li r5, 0 */ // 0x805E4204
    /* lwzx r3, r3, r6 */ // 0x805E4208
    FUN_805C3840(r4, r5); // bl 0x805C3840
    r28 = r28 + 1; // 0x805E4210
    r3 = *(0 + r30); // lwz @ 0x805E4214
    /* clrlwi r4, r28, 0x18 */ // 0x805E4218
    r0 = *(0x24 + r3); // lbz @ 0x805E421C
    if (<) goto 0x0x805e41e0;
    /* b 0x805e45d0 */ // 0x805E4228
    r0 = *(0x48 + r1); // lwz @ 0x805E422C
    if (<) goto 0x0x805e42dc;
    r0 = *(0xb70 + r8); // lwz @ 0x805E4238
    r28 = *(4 + r3); // lwz @ 0x805E423C
    if (!=) goto 0x0x805e45d0;
    if (!=) goto 0x0x805e45d0;
    r4 = *(0x10 + r28); // lwz @ 0x805E4250
    r0 = r5 + -1; // 0x805E4254
    /* li r3, 1 */ // 0x805E4258
    *(0x10 + r4) = r3; // stw @ 0x805E425C
    *(0xc + r4) = r3; // stw @ 0x805E4264
    if (>) goto 0x0x805e4280;
    r3 = *(0x10 + r28); // lwz @ 0x805E426C
    r12 = *(0 + r3); // lwz @ 0x805E4270
    r12 = *(0xc + r12); // lwz @ 0x805E4274
    /* mtctr r12 */ // 0x805E4278
    /* bctrl  */ // 0x805E427C
    /* li r29, 0 */ // 0x805E4280
    /* lis r31, 0 */ // 0x805E4284
    /* lis r30, 0 */ // 0x805E4288
    /* b 0x805e42c4 */ // 0x805E428C
    r3 = *(0 + r31); // lwz @ 0x805E4290
    r6 = r29 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x805E4298
    /* lwzx r3, r3, r6 */ // 0x805E429C
    r0 = *(0x38 + r3); // lwz @ 0x805E42A0
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805E42A4
    if (!=) goto 0x0x805e42c0;
    r3 = *(0xc + r28); // lwz @ 0x805E42AC
    /* li r4, 1 */ // 0x805E42B0
    /* li r5, 0 */ // 0x805E42B4
    /* lwzx r3, r3, r6 */ // 0x805E42B8
    FUN_805C3840(r4, r5); // bl 0x805C3840
    r29 = r29 + 1; // 0x805E42C0
    r3 = *(0 + r30); // lwz @ 0x805E42C4
    /* clrlwi r4, r29, 0x18 */ // 0x805E42C8
    r0 = *(0x24 + r3); // lbz @ 0x805E42CC
    if (<) goto 0x0x805e4290;
    /* b 0x805e45d0 */ // 0x805E42D8
    r0 = *(0x44 + r1); // lwz @ 0x805E42DC
    if (<) goto 0x0x805e4390;
    r0 = *(0xb70 + r8); // lwz @ 0x805E42E8
    r28 = *(4 + r3); // lwz @ 0x805E42EC
    if (!=) goto 0x0x805e45d0;
    if (!=) goto 0x0x805e45d0;
    r6 = *(0x10 + r28); // lwz @ 0x805E4300
    r0 = r5 + -1; // 0x805E4304
    /* li r4, 2 */ // 0x805E4308
    /* li r3, 1 */ // 0x805E430C
    *(0x10 + r6) = r4; // stw @ 0x805E4310
    *(0xc + r6) = r3; // stw @ 0x805E4318
    if (>) goto 0x0x805e4334;
    r3 = *(0x10 + r28); // lwz @ 0x805E4320
    r12 = *(0 + r3); // lwz @ 0x805E4324
    r12 = *(0xc + r12); // lwz @ 0x805E4328
    /* mtctr r12 */ // 0x805E432C
    /* bctrl  */ // 0x805E4330
    /* li r29, 0 */ // 0x805E4334
    /* lis r31, 0 */ // 0x805E4338
    /* lis r30, 0 */ // 0x805E433C
    /* b 0x805e4378 */ // 0x805E4340
    r3 = *(0 + r31); // lwz @ 0x805E4344
    r6 = r29 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x805E434C
    /* lwzx r3, r3, r6 */ // 0x805E4350
    r0 = *(0x38 + r3); // lwz @ 0x805E4354
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805E4358
    if (!=) goto 0x0x805e4374;
    r3 = *(0xc + r28); // lwz @ 0x805E4360
    /* li r4, 1 */ // 0x805E4364
    /* li r5, 0 */ // 0x805E4368
    /* lwzx r3, r3, r6 */ // 0x805E436C
    FUN_805C3840(r4, r5); // bl 0x805C3840
    r29 = r29 + 1; // 0x805E4374
    r3 = *(0 + r30); // lwz @ 0x805E4378
    /* clrlwi r4, r29, 0x18 */ // 0x805E437C
    r0 = *(0x24 + r3); // lbz @ 0x805E4380
    if (<) goto 0x0x805e4344;
    /* b 0x805e45d0 */ // 0x805E438C
    r0 = *(0x40 + r1); // lwz @ 0x805E4390
    if (<) goto 0x0x805e4444;
    r0 = *(0xb70 + r8); // lwz @ 0x805E439C
    r28 = *(4 + r3); // lwz @ 0x805E43A0
    if (!=) goto 0x0x805e45d0;
    if (!=) goto 0x0x805e45d0;
    r6 = *(0x10 + r28); // lwz @ 0x805E43B4
    r0 = r5 + -1; // 0x805E43B8
    /* li r4, 3 */ // 0x805E43BC
    /* li r3, 1 */ // 0x805E43C0
    *(0x10 + r6) = r4; // stw @ 0x805E43C4
    *(0xc + r6) = r3; // stw @ 0x805E43CC
    if (>) goto 0x0x805e43e8;
    r3 = *(0x10 + r28); // lwz @ 0x805E43D4
    r12 = *(0 + r3); // lwz @ 0x805E43D8
    r12 = *(0xc + r12); // lwz @ 0x805E43DC
    /* mtctr r12 */ // 0x805E43E0
    /* bctrl  */ // 0x805E43E4
    /* li r29, 0 */ // 0x805E43E8
    /* lis r31, 0 */ // 0x805E43EC
    /* lis r30, 0 */ // 0x805E43F0
    /* b 0x805e442c */ // 0x805E43F4
    r3 = *(0 + r31); // lwz @ 0x805E43F8
    r6 = r29 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x805E4400
    /* lwzx r3, r3, r6 */ // 0x805E4404
    r0 = *(0x38 + r3); // lwz @ 0x805E4408
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805E440C
    if (!=) goto 0x0x805e4428;
    r3 = *(0xc + r28); // lwz @ 0x805E4414
    /* li r4, 1 */ // 0x805E4418
    /* li r5, 0 */ // 0x805E441C
    /* lwzx r3, r3, r6 */ // 0x805E4420
    FUN_805C3840(r4, r5); // bl 0x805C3840
    r29 = r29 + 1; // 0x805E4428
    r3 = *(0 + r30); // lwz @ 0x805E442C
    /* clrlwi r4, r29, 0x18 */ // 0x805E4430
    r0 = *(0x24 + r3); // lbz @ 0x805E4434
    if (<) goto 0x0x805e43f8;
    /* b 0x805e45d0 */ // 0x805E4440
    r0 = *(0x3c + r1); // lwz @ 0x805E4444
    if (<) goto 0x0x805e44f8;
    r0 = *(0xb70 + r8); // lwz @ 0x805E4450
    r28 = *(4 + r3); // lwz @ 0x805E4454
    if (!=) goto 0x0x805e45d0;
    if (!=) goto 0x0x805e45d0;
    r6 = *(0x10 + r28); // lwz @ 0x805E4468
    r0 = r5 + -1; // 0x805E446C
    /* li r4, 4 */ // 0x805E4470
    /* li r3, 1 */ // 0x805E4474
    *(0x10 + r6) = r4; // stw @ 0x805E4478
    *(0xc + r6) = r3; // stw @ 0x805E4480
    if (>) goto 0x0x805e449c;
    r3 = *(0x10 + r28); // lwz @ 0x805E4488
    r12 = *(0 + r3); // lwz @ 0x805E448C
    r12 = *(0xc + r12); // lwz @ 0x805E4490
    /* mtctr r12 */ // 0x805E4494
    /* bctrl  */ // 0x805E4498
    /* li r29, 0 */ // 0x805E449C
    /* lis r31, 0 */ // 0x805E44A0
    /* lis r30, 0 */ // 0x805E44A4
    /* b 0x805e44e0 */ // 0x805E44A8
    r3 = *(0 + r31); // lwz @ 0x805E44AC
    r6 = r29 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x805E44B4
    /* lwzx r3, r3, r6 */ // 0x805E44B8
    r0 = *(0x38 + r3); // lwz @ 0x805E44BC
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805E44C0
    if (!=) goto 0x0x805e44dc;
    r3 = *(0xc + r28); // lwz @ 0x805E44C8
    /* li r4, 1 */ // 0x805E44CC
    /* li r5, 0 */ // 0x805E44D0
    /* lwzx r3, r3, r6 */ // 0x805E44D4
    FUN_805C3840(r4, r5); // bl 0x805C3840
    r29 = r29 + 1; // 0x805E44DC
    r3 = *(0 + r30); // lwz @ 0x805E44E0
    /* clrlwi r4, r29, 0x18 */ // 0x805E44E4
    r0 = *(0x24 + r3); // lbz @ 0x805E44E8
    if (<) goto 0x0x805e44ac;
    /* b 0x805e45d0 */ // 0x805E44F4
    r0 = *(0x38 + r1); // lwz @ 0x805E44F8
    if (<) goto 0x0x805e45ac;
    r0 = *(0xb70 + r8); // lwz @ 0x805E4504
    r28 = *(4 + r3); // lwz @ 0x805E4508
    if (!=) goto 0x0x805e45d0;
    if (!=) goto 0x0x805e45d0;
    r6 = *(0x10 + r28); // lwz @ 0x805E451C
    r0 = r5 + -1; // 0x805E4520
    /* li r4, 5 */ // 0x805E4524
    /* li r3, 1 */ // 0x805E4528
    *(0x10 + r6) = r4; // stw @ 0x805E452C
    *(0xc + r6) = r3; // stw @ 0x805E4534
    if (>) goto 0x0x805e4550;
    r3 = *(0x10 + r28); // lwz @ 0x805E453C
    r12 = *(0 + r3); // lwz @ 0x805E4540
    r12 = *(0xc + r12); // lwz @ 0x805E4544
    /* mtctr r12 */ // 0x805E4548
    /* bctrl  */ // 0x805E454C
    /* li r29, 0 */ // 0x805E4550
    /* lis r30, 0 */ // 0x805E4554
    /* lis r31, 0 */ // 0x805E4558
    /* b 0x805e4594 */ // 0x805E455C
    r3 = *(0 + r30); // lwz @ 0x805E4560
    r6 = r29 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x805E4568
    /* lwzx r3, r3, r6 */ // 0x805E456C
    r0 = *(0x38 + r3); // lwz @ 0x805E4570
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805E4574
    if (!=) goto 0x0x805e4590;
    r3 = *(0xc + r28); // lwz @ 0x805E457C
    /* li r4, 1 */ // 0x805E4580
    /* li r5, 0 */ // 0x805E4584
    /* lwzx r3, r3, r6 */ // 0x805E4588
    FUN_805C3840(r4, r5); // bl 0x805C3840
    r29 = r29 + 1; // 0x805E4590
    r3 = *(0 + r31); // lwz @ 0x805E4594
    /* clrlwi r4, r29, 0x18 */ // 0x805E4598
    r0 = *(0x24 + r3); // lbz @ 0x805E459C
    if (<) goto 0x0x805e4560;
    /* b 0x805e45d0 */ // 0x805E45A8
    r0 = *(0xb70 + r8); // lwz @ 0x805E45AC
    r3 = *(4 + r3); // lwz @ 0x805E45B0
    if (!=) goto 0x0x805e45d0;
    if (!=) goto 0x0x805e45d0;
    r3 = *(0x10 + r3); // lwz @ 0x805E45C4
    /* li r0, 2 */ // 0x805E45C8
    *(0xc + r3) = r0; // stw @ 0x805E45CC
    r0 = *(0x94 + r1); // lwz @ 0x805E45D0
    r31 = *(0x8c + r1); // lwz @ 0x805E45D4
    r30 = *(0x88 + r1); // lwz @ 0x805E45D8
    r29 = *(0x84 + r1); // lwz @ 0x805E45DC
    r28 = *(0x80 + r1); // lwz @ 0x805E45E0
    return;
}