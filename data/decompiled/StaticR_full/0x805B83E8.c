/* Function at 0x805B83E8, size=1292 bytes */
/* Stack frame: 624 bytes */
/* Saved registers: r16 */
/* Calls: 8 function(s) */

int FUN_805B83E8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -624(r1) */
    /* saved r16 */
    *(0x274 + r1) = r0; // stw @ 0x805B83F4
    /* stmw r16, 0x230(r1) */ // 0x805B83F8
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    if (!=) goto 0x0x805b8418;
    FUN_805ABAFC(); // bl 0x805ABAFC
    r31 = *(0xc94 + r3); // lwz @ 0x805B8414
    if (!=) goto 0x0x805b8424;
    r30 = r28 + 0x2f0; // 0x805B8420
    r0 = *(0x10 + r29); // lbz @ 0x805B8424
    if (==) goto 0x0x805b84b8;
    /* lis r3, 0 */ // 0x805B8430
    /* li r7, 0 */ // 0x805B8434
    r3 = *(0 + r3); // lwz @ 0x805B8438
    /* li r8, 0 */ // 0x805B843C
    r4 = *(0x24 + r3); // lbz @ 0x805B8440
    r6 = r3 + 0x28; // 0x805B8444
    /* b 0x805b849c */ // 0x805B8448
    /* clrlwi r0, r8, 0x18 */ // 0x805B844C
    /* mulli r0, r0, 0xf0 */ // 0x805B8450
    r3 = r6 + r0; // 0x805B8454
    r3 = *(0x10 + r3); // lwz @ 0x805B8458
    if (==) goto 0x0x805b846c;
    if (!=) goto 0x0x805b8498;
    r3 = r6 + r0; // 0x805B846C
    /* li r5, 0 */ // 0x805B8470
    r3 = *(0xc + r3); // lwz @ 0x805B8474
    r0 = r3 + -0x18; // 0x805B8478
    if (>) goto 0x0x805b8488;
    /* li r5, 1 */ // 0x805B8484
    if (==) goto 0x0x805b8498;
    /* li r7, 1 */ // 0x805B8490
    /* b 0x805b84a8 */ // 0x805B8494
    r8 = r8 + 1; // 0x805B8498
    /* clrlwi r0, r8, 0x18 */ // 0x805B849C
    if (<) goto 0x0x805b844c;
    if (!=) goto 0x0x805b84b8;
    /* li r3, 0 */ // 0x805B84B0
    /* b 0x805b8ac0 */ // 0x805B84B4
    /* lis r26, 0 */ // 0x805B84B8
    r26 = r26 + 0; // 0x805B84C0
    /* li r19, 0 */ // 0x805B84C4
    /* li r18, 0 */ // 0x805B84C8
    /* lis r25, 0 */ // 0x805B84CC
    /* lis r22, 0 */ // 0x805B84D0
    /* lis r24, 1 */ // 0x805B84D4
    /* li r21, 1 */ // 0x805B84D8
    /* b 0x805b876c */ // 0x805B84DC
    r0 = *(6 + r29); // lbz @ 0x805B84E0
    /* li r17, 1 */ // 0x805B84E4
    if (==) goto 0x0x805b8520;
    /* clrlwi r0, r18, 0x10 */ // 0x805B84F0
    r3 = r28 + r0; // 0x805B84F4
    r4 = *(0x270 + r3); // lbz @ 0x805B84F8
    /* extsb r4, r4 */ // 0x805B84FC
    r0 = r4 rlwinm 0x1d; // rlwinm
    r3 = r29 + r0; // 0x805B8504
    /* clrlwi r4, r4, 0x1d */ // 0x805B8508
    r0 = *(0x11 + r3); // lbz @ 0x805B850C
    r3 = r21 << r4; // slw
    /* and. r0, r3, r0 */ // 0x805B8514
    if (==) goto 0x0x805b8520;
    /* li r17, 0 */ // 0x805B851C
    if (==) goto 0x0x805b85b8;
    r3 = *(0 + r22); // lwz @ 0x805B8528
    /* addis r3, r3, 2 */ // 0x805B852C
    r3 = *(0x4ffc + r3); // lwz @ 0x805B8530
    /* addis r3, r3, 2 */ // 0x805B8534
    r0 = *(0x330c + r3); // lwz @ 0x805B8538
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x805B853C
    if (!=) goto 0x0x805b85b8;
    /* clrlwi r0, r18, 0x10 */ // 0x805B8544
    r23 = r24 + -0x6c10; // 0x805B8548
    r20 = r28 + r0; // 0x805B854C
    /* li r17, 0 */ // 0x805B8550
    /* li r16, 0 */ // 0x805B8554
    /* clrlwi r0, r16, 0x18 */ // 0x805B8558
    r3 = *(0 + r22); // lwz @ 0x805B855C
    r0 = r0 * r23; // 0x805B8560
    r3 = r3 + r0; // 0x805B8564
    r4 = r3 + 0x38; // 0x805B8568
    /* addis r3, r4, 1 */ // 0x805B856C
    r0 = *(-0x6c13 + r3); // lbz @ 0x805B8570
    if (==) goto 0x0x805b85ac;
    r3 = r4 + 0x16; // 0x805B857C
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (==) goto 0x0x805b85ac;
    r0 = *(0x270 + r20); // lbz @ 0x805B8590
    r3 = *(0xa + r1); // lhz @ 0x805B8594
    /* extsb r0, r0 */ // 0x805B8598
    if (!=) goto 0x0x805b85ac;
    /* li r17, 1 */ // 0x805B85A4
    /* b 0x805b85b8 */ // 0x805B85A8
    if (<) goto 0x0x805b8558;
    if (==) goto 0x0x805b86a0;
    r0 = *(7 + r29); // lbz @ 0x805B85C0
    if (!=) goto 0x0x805b86a0;
    /* clrlwi r0, r18, 0x10 */ // 0x805B85CC
    /* li r16, 0 */ // 0x805B85D0
    r23 = r28 + r0; // 0x805B85D4
    /* b 0x805b8684 */ // 0x805B85D8
    /* clrlwi r0, r16, 0x18 */ // 0x805B85DC
    /* mulli r0, r0, 0xf0 */ // 0x805B85E0
    r4 = r4 + r0; // 0x805B85E4
    r0 = *(0x38 + r4); // lwz @ 0x805B85E8
    if (!=) goto 0x0x805b8680;
    r0 = *(0xcd0 + r4); // lbz @ 0x805B85F4
    if (==) goto 0x0x805b8648;
    r3 = *(0xcc0 + r4); // lbz @ 0x805B8600
    /* li r5, 1 */ // 0x805B8604
    r0 = *(0xcc1 + r4); // lbz @ 0x805B8608
    *(0x19 + r1) = r0; // stb @ 0x805B860C
    *(0x18 + r1) = r3; // stb @ 0x805B8610
    r3 = *(0xcc2 + r4); // lbz @ 0x805B8614
    r0 = *(0xcc3 + r4); // lbz @ 0x805B8618
    *(0x1b + r1) = r0; // stb @ 0x805B861C
    *(0x1a + r1) = r3; // stb @ 0x805B8620
    r3 = *(0xcc4 + r4); // lbz @ 0x805B8624
    r0 = *(0xcc5 + r4); // lbz @ 0x805B8628
    *(0x1d + r1) = r0; // stb @ 0x805B862C
    *(0x1c + r1) = r3; // stb @ 0x805B8630
    r3 = *(0xcc6 + r4); // lbz @ 0x805B8634
    r0 = *(0xcc7 + r4); // lbz @ 0x805B8638
    *(0x1f + r1) = r0; // stb @ 0x805B863C
    *(0x1e + r1) = r3; // stb @ 0x805B8640
    /* b 0x805b864c */ // 0x805B8644
    /* li r5, 0 */ // 0x805B8648
    if (==) goto 0x0x805b8680;
    FUN_805E3430(r5, r3, r4); // bl 0x805E3430
    if (==) goto 0x0x805b8680;
    r0 = *(0x270 + r23); // lbz @ 0x805B8668
    r3 = *(8 + r1); // lhz @ 0x805B866C
    /* extsb r0, r0 */ // 0x805B8670
    if (!=) goto 0x0x805b8680;
    /* li r17, 0 */ // 0x805B867C
    if (==) goto 0x0x805b86a0;
    r4 = *(0 + r25); // lwz @ 0x805B868C
    /* clrlwi r3, r16, 0x18 */ // 0x805B8690
    r0 = *(0x24 + r4); // lbz @ 0x805B8694
    if (<) goto 0x0x805b85dc;
    if (==) goto 0x0x805b86f8;
    r0 = *(0xc + r29); // lwz @ 0x805B86A8
    if (==) goto 0x0x805b86f8;
    /* clrlwi r0, r18, 0x10 */ // 0x805B86B4
    r5 = r28 + r0; // 0x805B86BC
    /* li r4, 0 */ // 0x805B86C0
    r6 = *(0x270 + r5); // lbz @ 0x805B86C4
    /* li r5, 0 */ // 0x805B86C8
    /* extsb r6, r6 */ // 0x805B86CC
    /* clrlwi r6, r6, 0x10 */ // 0x805B86D0
    FUN_805E3430(r4, r5); // bl 0x805E3430
    r0 = *(0xc + r29); // lwz @ 0x805B86D8
    r3 = *(0x90 + r1); // lwz @ 0x805B86DC
    /* slwi r0, r0, 2 */ // 0x805B86E0
    /* lwzx r0, r26, r0 */ // 0x805B86E4
    /* srwi r3, r3, 0x1f */ // 0x805B86E8
    if (==) goto 0x0x805b86f8;
    /* li r17, 0 */ // 0x805B86F4
    if (==) goto 0x0x805b8768;
    /* clrlwi r3, r18, 0x10 */ // 0x805B8700
    r0 = *(9 + r29); // lbz @ 0x805B8704
    r20 = r28 + r3; // 0x805B8708
    r4 = *(0x270 + r20); // lbz @ 0x805B870C
    r3 = r19 rlwinm 1; // rlwinm
    /* extsb r0, r4 */ // 0x805B871C
    /* sthx r0, r27, r3 */ // 0x805B8720
    if (==) goto 0x0x805b8768;
    /* clrlwi r6, r0, 0x10 */ // 0x805B872C
    /* li r4, 0 */ // 0x805B8730
    /* li r5, 0 */ // 0x805B8734
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    if (!=) goto 0x0x805b8768;
    r0 = *(0x54 + r1); // lwz @ 0x805B8744
    r0 = r0 rlwinm 0xf; // rlwinm
    if (!=) goto 0x0x805b8768;
    r3 = *(0x270 + r20); // lbz @ 0x805B8754
    r0 = r19 rlwinm 1; // rlwinm
    /* extsb r3, r3 */ // 0x805B8760
    /* sthx r3, r27, r0 */ // 0x805B8764
    r0 = *(0x2d4 + r28); // lbz @ 0x805B876C
    /* clrlwi r3, r18, 0x10 */ // 0x805B8770
    if (<) goto 0x0x805b84e0;
    /* clrlwi r4, r19, 0x10 */ // 0x805B877C
    r6 = r19;
    /* cmplwi cr1, r4, 0xc8 */
    if (>=) goto 0x0x805b8814;
    /* subfic r0, r19, 0xc8 */ // 0x805B878C
    /* clrlwi r0, r0, 0x10 */ // 0x805B8790
    if (<=) goto 0x0x805b87e8;
    if (>) goto 0x0x805b87e8;
    /* subfic r0, r4, 0xc7 */ // 0x805B87A0
    /* li r3, -1 */ // 0x805B87A4
    /* srwi r0, r0, 3 */ // 0x805B87A8
    /* mtctr r0 */ // 0x805B87AC
    if (>=) goto 0x0x805b87e8;
    r0 = r6 rlwinm 1; // rlwinm
    /* sthux r3, r4, r0 */ // 0x805B87C0
    r6 = r6 + 8; // 0x805B87C4
    *(2 + r4) = r3; // sth @ 0x805B87C8
    *(4 + r4) = r3; // sth @ 0x805B87CC
    *(6 + r4) = r3; // sth @ 0x805B87D0
    *(8 + r4) = r3; // sth @ 0x805B87D4
    *(0xa + r4) = r3; // sth @ 0x805B87D8
    *(0xc + r4) = r3; // sth @ 0x805B87DC
    *(0xe + r4) = r3; // sth @ 0x805B87E0
    if (counter-- != 0) goto 0x0x805b87b8;
    /* clrlwi r3, r6, 0x10 */ // 0x805B87E8
    /* subfic r0, r3, 0xc8 */ // 0x805B87F0
    /* li r5, -1 */ // 0x805B87F4
    /* mtctr r0 */ // 0x805B87F8
    if (>=) goto 0x0x805b8814;
    r0 = r6 rlwinm 1; // rlwinm
    r6 = r6 + 1; // 0x805B8808
    /* sthx r5, r4, r0 */ // 0x805B880C
    if (counter-- != 0) goto 0x0x805b8804;
    r3 = r30;
    /* li r4, 0x64 */ // 0x805B8818
    FUN_805E364C(r6, r3, r4); // bl 0x805E364C
    /* lis r4, 0 */ // 0x805B8820
    /* clrlwi r5, r3, 0x10 */ // 0x805B8824
    r3 = *(0 + r4); // lwz @ 0x805B8828
    /* addis r3, r3, 2 */ // 0x805B882C
    r3 = *(0x4ffc + r3); // lwz @ 0x805B8830
    /* addis r3, r3, 2 */ // 0x805B8834
    r0 = *(0x330c + r3); // lwz @ 0x805B8838
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x805B883C
    if (==) goto 0x0x805b8850;
    r0 = *(4 + r29); // lhz @ 0x805B8844
    if (>) goto 0x0x805b8990;
    /* clrlwi. r4, r19, 0x10 */ // 0x805B8850
    /* li r16, 0 */ // 0x805B8854
    if (==) goto 0x0x805b8928;
    r3 = r30;
    FUN_805E364C(r3); // bl 0x805E364C
    r0 = r3 rlwinm 1; // rlwinm
    /* lhzx r17, r3, r0 */ // 0x805B886C
    r4 = r31;
    /* li r3, 0xb8 */ // 0x805B8874
    /* li r5, 4 */ // 0x805B8878
    FUN_805E3430(r3, r4, r3, r5); // bl 0x805E3430
    if (==) goto 0x0x805b88f8;
    /* lis r4, 0 */ // 0x805B8888
    /* lis r7, 0 */ // 0x805B888C
    r4 = r4 + 0; // 0x805B8890
    *(0 + r3) = r4; // stw @ 0x805B8894
    /* li r8, 0 */ // 0x805B8898
    r7 = r7 + 0; // 0x805B889C
    *(4 + r3) = r8; // stw @ 0x805B88A0
    /* li r4, -1 */ // 0x805B88A4
    /* li r0, 6 */ // 0x805B88A8
    *(8 + r3) = r8; // stb @ 0x805B88AC
    *(9 + r3) = r4; // stb @ 0x805B88B0
    *(0xa4 + r3) = r8; // stb @ 0x805B88B4
    r6 = *(1 + r7); // lbz @ 0x805B88B8
    r5 = *(2 + r7); // lbz @ 0x805B88BC
    r4 = *(3 + r7); // lbz @ 0x805B88C0
    r7 = *(0 + r7); // lbz @ 0x805B88C4
    *(0x60 + r3) = r7; // stb @ 0x805B88C8
    *(0x61 + r3) = r6; // stb @ 0x805B88CC
    *(0x62 + r3) = r5; // stb @ 0x805B88D0
    *(0x63 + r3) = r4; // stb @ 0x805B88D4
    *(0x64 + r3) = r8; // stw @ 0x805B88D8
    *(0xc + r3) = r0; // stw @ 0x805B88DC
    *(0xa5 + r3) = r8; // stb @ 0x805B88E0
    *(0x10 + r1) = r7; // stb @ 0x805B88E4
    *(0x11 + r1) = r6; // stb @ 0x805B88E8
    *(0x12 + r1) = r5; // stb @ 0x805B88EC
    *(0x13 + r1) = r4; // stb @ 0x805B88F0
}