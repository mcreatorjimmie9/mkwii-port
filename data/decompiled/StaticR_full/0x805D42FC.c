/* Function at 0x805D42FC, size=152 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */

void FUN_805D42FC(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    r12 = *(0x18 + r4); // lwz @ 0x805D4300
    /* stmw r25, 0x14(r1) */ // 0x805D4304
    /* addis r26, r3, 1 */ // 0x805D4308
    r25 = *(0 + r4); // lwz @ 0x805D430C
    r27 = *(4 + r4); // lwz @ 0x805D4310
    r28 = *(8 + r4); // lwz @ 0x805D4314
    r29 = *(0xc + r4); // lwz @ 0x805D4318
    r30 = *(0x10 + r4); // lwz @ 0x805D431C
    r31 = *(0x14 + r4); // lwz @ 0x805D4320
    r11 = *(0x1c + r4); // lwz @ 0x805D4324
    r10 = *(0x20 + r4); // lwz @ 0x805D4328
    r9 = *(0x24 + r4); // lwz @ 0x805D432C
    r8 = *(0x28 + r4); // lwz @ 0x805D4330
    r7 = *(0x2c + r4); // lwz @ 0x805D4334
    r6 = *(0x30 + r4); // lwz @ 0x805D4338
    r5 = *(0x34 + r4); // lwz @ 0x805D433C
    r3 = *(0x38 + r4); // lwz @ 0x805D4340
    r0 = *(0x3c + r4); // lwz @ 0x805D4344
    *(-0x7048 + r26) = r25; // stw @ 0x805D4348
    *(-0x7044 + r26) = r27; // stw @ 0x805D434C
    *(-0x7040 + r26) = r28; // stw @ 0x805D4350
    *(-0x703c + r26) = r29; // stw @ 0x805D4354
    *(-0x7038 + r26) = r30; // stw @ 0x805D4358
    *(-0x7034 + r26) = r31; // stw @ 0x805D435C
    *(-0x7030 + r26) = r12; // stw @ 0x805D4360
    *(-0x702c + r26) = r11; // stw @ 0x805D4364
    *(-0x7028 + r26) = r10; // stw @ 0x805D4368
    *(-0x7024 + r26) = r9; // stw @ 0x805D436C
    *(-0x7020 + r26) = r8; // stw @ 0x805D4370
    *(-0x701c + r26) = r7; // stw @ 0x805D4374
    *(-0x7018 + r26) = r6; // stw @ 0x805D4378
    *(-0x7014 + r26) = r5; // stw @ 0x805D437C
    *(-0x7010 + r26) = r3; // stw @ 0x805D4380
    *(-0x700c + r26) = r0; // stw @ 0x805D4384
    return;
}