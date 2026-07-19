/* Function at 0x80911478, size=548 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 1 function(s) */

int FUN_80911478(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* stmw r22, 8(r1) */ // 0x80911484
    r24 = r3;
    /* li r26, 0 */ // 0x8091148C
    /* li r25, 0 */ // 0x80911490
    /* lis r28, 0 */ // 0x80911494
    /* lis r27, 0 */ // 0x80911498
    /* lis r29, 0x101 */ // 0x8091149C
    /* li r30, -1 */ // 0x809114A0
    /* li r31, 0 */ // 0x809114A4
    /* b 0x8091186c */ // 0x809114A8
    r0 = *(0x1d8 + r24); // lwz @ 0x809114AC
    /* lwzx r8, r25, r0 */ // 0x809114B0
    r6 = r0 + r25; // 0x809114B4
    if (==) goto 0x0x80911864;
    r0 = *(8 + r6); // lwz @ 0x809114C0
    if (==) goto 0x0x80911864;
    r3 = *(0 + r27); // lwz @ 0x809114CC
    /* li r0, 0 */ // 0x809114D0
    /* li r4, 0 */ // 0x809114D4
    r5 = *(0x25 + r3); // lbz @ 0x809114D8
    if (==) goto 0x0x80911638;
    r3 = r5 + 0xf8; // 0x809114E8
    if (<=) goto 0x0x809115fc;
    /* clrlwi r9, r3, 0x18 */ // 0x809114F0
    r3 = *(0 + r28); // lwz @ 0x809114F4
    r7 = r9 + 7; // 0x809114F8
    /* srwi r7, r7, 3 */ // 0x809114FC
    /* mtctr r7 */ // 0x80911500
    if (<=) goto 0x0x809115fc;
    r9 = *(0x18 + r3); // lwz @ 0x8091150C
    r7 = r4 rlwinm 2; // rlwinm
    r4 = r4 + 8; // 0x80911514
    /* lwzux r9, r7, r9 */ // 0x80911518
    r9 = *(0x334 + r9); // lhz @ 0x8091151C
    r10 = *(4 + r7); // lwz @ 0x80911520
    r9 = r9 rlwinm 0x1b; // rlwinm
    r22 = *(8 + r7); // lwz @ 0x80911528
    r11 = r0 | r9; // 0x8091152C
    r10 = *(0x334 + r10); // lhz @ 0x80911530
    /* neg r0, r11 */ // 0x80911534
    r9 = *(0x334 + r22); // lhz @ 0x80911538
    r11 = r0 | r11; // 0x8091153C
    r12 = *(0xc + r7); // lwz @ 0x80911540
    /* srwi r11, r11, 0x1f */ // 0x80911544
    r10 = r10 rlwinm 0x1b; // rlwinm
    r11 = r11 | r10; // 0x8091154C
    r0 = *(0x334 + r12); // lhz @ 0x80911550
    /* neg r10, r11 */ // 0x80911554
    r12 = *(0x10 + r7); // lwz @ 0x80911558
    r10 = r10 | r11; // 0x8091155C
    r9 = r9 rlwinm 0x1b; // rlwinm
    /* srwi r10, r10, 0x1f */ // 0x80911564
    r11 = *(0x334 + r12); // lhz @ 0x80911568
    r12 = r10 | r9; // 0x8091156C
    r22 = *(0x14 + r7); // lwz @ 0x80911570
    /* neg r9, r12 */ // 0x80911574
    r0 = r0 rlwinm 0x1b; // rlwinm
    r9 = r9 | r12; // 0x8091157C
    r10 = *(0x334 + r22); // lhz @ 0x80911580
    /* srwi r9, r9, 0x1f */ // 0x80911584
    r22 = *(0x18 + r7); // lwz @ 0x80911588
    r23 = r9 | r0; // 0x8091158C
    r7 = *(0x1c + r7); // lwz @ 0x80911590
    /* neg r12, r23 */ // 0x80911594
    r11 = r11 rlwinm 0x1b; // rlwinm
    r0 = *(0x334 + r7); // lhz @ 0x8091159C
    r7 = r12 | r23; // 0x809115A0
    /* srwi r7, r7, 0x1f */ // 0x809115A4
    r12 = r10 rlwinm 0x1b; // rlwinm
    r10 = r7 | r11; // 0x809115AC
    r9 = *(0x334 + r22); // lhz @ 0x809115B0
    /* neg r7, r10 */ // 0x809115B4
    r0 = r0 rlwinm 0x1b; // rlwinm
    r7 = r7 | r10; // 0x809115BC
    r11 = r9 rlwinm 0x1b; // rlwinm
    /* srwi r7, r7, 0x1f */ // 0x809115C4
    r9 = r7 | r12; // 0x809115C8
    /* neg r7, r9 */ // 0x809115CC
    r7 = r7 | r9; // 0x809115D0
    /* srwi r7, r7, 0x1f */ // 0x809115D4
    r9 = r7 | r11; // 0x809115D8
    /* neg r7, r9 */ // 0x809115DC
    r7 = r7 | r9; // 0x809115E0
    /* srwi r7, r7, 0x1f */ // 0x809115E4
    r7 = r7 | r0; // 0x809115E8
    /* neg r0, r7 */ // 0x809115EC
    r0 = r0 | r7; // 0x809115F0
    /* srwi r0, r0, 0x1f */ // 0x809115F4
    if (counter-- != 0) goto 0x0x8091150c;
    r9 = *(0 + r28); // lwz @ 0x809115FC
    /* b 0x8091162c */ // 0x80911600
    r7 = *(0x18 + r9); // lwz @ 0x80911604
    r3 = r4 rlwinm 2; // rlwinm
    r4 = r4 + 1; // 0x8091160C
    /* lwzx r3, r7, r3 */ // 0x80911610
    r3 = *(0x334 + r3); // lhz @ 0x80911614
    r3 = r3 rlwinm 0x1b; // rlwinm
    r3 = r0 | r3; // 0x8091161C
    /* neg r0, r3 */ // 0x80911620
    r0 = r0 | r3; // 0x80911624
    /* srwi r0, r0, 0x1f */ // 0x80911628
    /* clrlwi r3, r4, 0x18 */ // 0x8091162C
    if (<) goto 0x0x80911604;
    r3 = *(0x10 + r6); // lwz @ 0x80911638
    if (==) goto 0x0x809116cc;
    r3 = *(0x20 + r3); // lwz @ 0x80911644
    r4 = r29 + 0x101; // 0x80911648
    /* andc. r3, r4, r3 */ // 0x8091164C
    if (!=) goto 0x0x809116cc;
    if (!=) goto 0x0x809116cc;
    r3 = r8 + 0x74; // 0x8091165C
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80911674;
    /* li r3, 0 */ // 0x8091166C
    /* b 0x80911678 */ // 0x80911670
    r3 = *(0xc + r3); // lwz @ 0x80911674
    /* li r0, 0 */ // 0x8091167C
    if (==) goto 0x0x8091168c;
    if (!=) goto 0x0x80911690;
    /* li r0, 1 */ // 0x8091168C
    if (==) goto 0x0x8091180c;
    r3 = *(0x1d8 + r24); // lwz @ 0x80911698
}