/* Function at 0x806A3330, size=292 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r24 */
/* Calls: 11 function(s) */

int FUN_806A3330(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -128(r1) */
    /* saved r24 */
    /* stmw r24, 0x60(r1) */ // 0x806A333C
    r24 = r3;
    r25 = r4;
    r29 = r5;
    r28 = r6;
    r26 = r7;
    r27 = r8;
    r4 = r24;
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r7, 0 */ // 0x806A3364
    r4 = r25;
    r5 = r29;
    r6 = r28;
    r7 = r7 + 0; // 0x806A3378
    FUN_8064E36C(r4, r5, r6, r3, r7); // bl 0x8064E36C
    r3 = r24;
    /* li r4, 2 */ // 0x806A3384
    FUN_8069FEE8(r3, r7, r3, r4); // bl 0x8069FEE8
    /* lis r31, 0 */ // 0x806A338C
    r29 = r24 + 0x17c; // 0x806A3390
    r31 = r31 + 0; // 0x806A3394
    /* li r28, 0 */ // 0x806A3398
    /* lis r30, 0 */ // 0x806A339C
    r3 = r24;
    r4 = r28;
    r5 = r29;
    FUN_8069FEF8(r3, r4, r5); // bl 0x8069FEF8
    r4 = r29;
    FUN_8064E324(r4, r5, r4, r3); // bl 0x8064E324
    r4 = r25;
    r5 = r26;
    r6 = r27;
    r7 = r30 + 0; // 0x806A33CC
    FUN_8064E36C(r4, r5, r6, r3, r7); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806A33D8
    FUN_8064E32C(r3, r7, r3, r4); // bl 0x8064E32C
    r3 = r29;
    r4 = r31 + 0xdb; // 0x806A33E4
    FUN_806A0680(r3, r4, r3, r4); // bl 0x806A0680
    r28 = r28 + 1; // 0x806A33EC
    r29 = r29 + 0x174; // 0x806A33F0
    if (<) goto 0x0x806a33a0;
    /* lis r31, 0 */ // 0x806A33FC
    r3 = r24 + 0x17c; // 0x806A3400
    r0 = r24 + 0x2f0; // 0x806A3404
    *(0x464 + r24) = r3; // stw @ 0x806A3408
    r31 = r31 + 0; // 0x806A340C
    r3 = r24 + 0xa8; // 0x806A3410
    *(0x468 + r24) = r0; // stw @ 0x806A3414
    r4 = r31 + 0xe5; // 0x806A3418
    FUN_80665D1C(r3, r4); // bl 0x80665D1C
    *(0x46c + r24) = r3; // stw @ 0x806A3420
    r4 = r31 + 0xf3; // 0x806A3424
    r3 = r24 + 0xa8; // 0x806A3428
    FUN_80665D1C(r4, r4, r3); // bl 0x80665D1C
    *(0x470 + r24) = r3; // stw @ 0x806A3430
    /* li r4, -1 */ // 0x806A3438
    FUN_8064E32C(r3, r3, r4); // bl 0x8064E32C
    r0 = *(0x84 + r1); // lwz @ 0x806A3444
    return;
}