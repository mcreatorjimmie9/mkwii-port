/* Function at 0x808EE268, size=284 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 6 function(s) */

int FUN_808EE268(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* stmw r22, 8(r1) */ // 0x808EE274
    /* lis r30, 0 */ // 0x808EE278
    r25 = r3;
    r3 = *(0 + r30); // lwz @ 0x808EE280
    r3 = r3 + 0xc10; // 0x808EE284
    FUN_805BDEA8(r3); // bl 0x805BDEA8
    r12 = *(0 + r25); // lwz @ 0x808EE28C
    r3 = r25;
    r12 = *(0x70 + r12); // lwz @ 0x808EE294
    /* mtctr r12 */ // 0x808EE298
    /* bctrl  */ // 0x808EE29C
    /* clrlwi r28, r3, 0x18 */ // 0x808EE2A0
    /* li r27, 0 */ // 0x808EE2A4
    /* li r29, 0 */ // 0x808EE2A8
    /* lis r31, 0 */ // 0x808EE2AC
    /* b 0x808ee354 */ // 0x808EE2B0
    r5 = *(0 + r31); // lwz @ 0x808EE2B4
    r0 = r27 + 1; // 0x808EE2B8
    /* clrlwi r4, r0, 0x18 */ // 0x808EE2BC
    r3 = *(0x1a0 + r25); // lwz @ 0x808EE2C0
    r0 = *(0x18 + r5); // lwz @ 0x808EE2C4
    /* lwzx r26, r3, r29 */ // 0x808EE2C8
    r3 = r0 + r4; // 0x808EE2CC
    r24 = *(-1 + r3); // lbz @ 0x808EE2D0
    r3 = r26;
    r5 = r24;
    FUN_8087FA64(r3, r5); // bl 0x8087FA64
    /* mulli r23, r24, 0xf0 */ // 0x808EE2E0
    r0 = *(0 + r30); // lwz @ 0x808EE2E4
    r3 = r26;
    /* li r5, 0x521 */ // 0x808EE2EC
    r4 = r0 + r23; // 0x808EE2F0
    r22 = *(0x100 + r4); // lhz @ 0x808EE2F4
    r4 = r22;
    FUN_8087F14C(r3, r5, r4); // bl 0x8087F14C
    r4 = *(0 + r30); // lwz @ 0x808EE300
    /* cntlzw r0, r27 */ // 0x808EE304
    /* srwi r5, r0, 5 */ // 0x808EE308
    r3 = r26;
    r4 = r4 + r23; // 0x808EE310
    r0 = *(0xcf2 + r4); // lhz @ 0x808EE314
    /* subf r4, r22, r0 */ // 0x808EE318
    FUN_8087F214(r3); // bl 0x8087F214
    r3 = *(0 + r30); // lwz @ 0x808EE320
    r0 = *(0xb70 + r3); // lwz @ 0x808EE324
    if (!=) goto 0x0x808ee340;
    r3 = r26;
    r4 = r24;
    FUN_8087F3D4(r3, r4); // bl 0x8087F3D4
    /* b 0x808ee34c */ // 0x808EE33C
    r3 = r26;
    r4 = r24;
    FUN_8087ED6C(r4, r3, r4); // bl 0x8087ED6C
    r29 = r29 + 4; // 0x808EE34C
    r27 = r27 + 1; // 0x808EE350
    if (<) goto 0x0x808ee2b4;
    r12 = *(0 + r25); // lwz @ 0x808EE35C
    r3 = r25;
    r12 = *(0x6c + r12); // lwz @ 0x808EE364
    /* mtctr r12 */ // 0x808EE368
    /* bctrl  */ // 0x808EE36C
    r0 = *(0x34 + r1); // lwz @ 0x808EE374
    return;
}