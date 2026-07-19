/* Function at 0x806ED3EC, size=192 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r25 */
/* Calls: 2 function(s) */

int FUN_806ED3EC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r25 */
    /* stmw r25, 0x24(r1) */ // 0x806ED3F8
    /* lis r27, 0 */ // 0x806ED3FC
    r28 = r3;
    r29 = r4;
    r31 = r5;
    r30 = r6;
    r3 = *(0 + r27); // lwz @ 0x806ED410
    FUN_806E6B18(); // bl 0x806E6B18
    if (!=) goto 0x0x806ed428;
    /* li r0, 1 */ // 0x806ED420
    /* b 0x806ed460 */ // 0x806ED424
    r3 = *(0 + r27); // lwz @ 0x806ED428
    /* li r4, 1 */ // 0x806ED42C
    r5 = *(0x3e0 + r28); // lwz @ 0x806ED430
    r0 = *(0x291c + r3); // lwz @ 0x806ED434
    /* mulli r0, r0, 0x58 */ // 0x806ED438
    r3 = r3 + r0; // 0x806ED43C
    r0 = *(0x59 + r3); // lbz @ 0x806ED440
    r3 = *(0x48 + r3); // lwz @ 0x806ED444
    r0 = r4 << r0; // slw
    r5 = r5 | r0; // 0x806ED44C
    r0 = r3 & r5; // 0x806ED450
    /* subf r0, r3, r0 */ // 0x806ED454
    /* cntlzw r0, r0 */ // 0x806ED458
    /* srwi r0, r0, 5 */ // 0x806ED45C
    if (==) goto 0x0x806ed600;
    /* lis r4, -0x8000 */ // 0x806ED468
    /* lis r3, 0x1062 */ // 0x806ED46C
    r0 = *(0xf8 + r4); // lwz @ 0x806ED470
    r6 = r3 + 0x4dd3; // 0x806ED474
    r3 = r31;
    r4 = r30;
    /* srwi r0, r0, 2 */ // 0x806ED480
    /* li r5, 0 */ // 0x806ED484
    r0 = r6 * r0; // 0x806ED488
    /* srwi r27, r0, 6 */ // 0x806ED48C
    r6 = r27;
    FUN_805E3430(r5, r6); // bl 0x805E3430
    /* mulli r0, r29, 0x38 */ // 0x806ED498
    *(8 + r28) = r3; // stw @ 0x806ED49C
    *(0xc + r28) = r4; // stw @ 0x806ED4A0
    r3 = r28 + r0; // 0x806ED4A4
    r26 = *(0x40 + r3); // lwz @ 0x806ED4A8
}