/* Function at 0x806E2A98, size=744 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r24 */
/* Calls: 12 function(s) */

int FUN_806E2A98(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -160(r1) */
    /* saved r24 */
    /* li r4, 0 */ // 0x806E2AA0
    /* li r5, 0 */ // 0x806E2AA4
    *(0xa4 + r1) = r0; // stw @ 0x806E2AA8
    /* stmw r24, 0x80(r1) */ // 0x806E2AAC
    r30 = r3;
    r12 = *(0x798 + r3); // lwz @ 0x806E2AB4
    r12 = *(0x10 + r12); // lwz @ 0x806E2AB8
    /* mtctr r12 */ // 0x806E2ABC
    r3 = r3 + 0x798; // 0x806E2AC0
    /* bctrl  */ // 0x806E2AC4
    r3 = r30;
    r4 = r30 + 0x798; // 0x806E2ACC
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    /* lis r3, 0 */ // 0x806E2AD4
    /* li r31, 1 */ // 0x806E2AD8
    r3 = *(0 + r3); // lwz @ 0x806E2ADC
    r3 = *(0 + r3); // lwz @ 0x806E2AE0
    r0 = *(0 + r3); // lwz @ 0x806E2AE4
    if (==) goto 0x0x806e2bb8;
    if (>=) goto 0x0x806e2b50;
    if (==) goto 0x0x806e2ba8;
    if (>=) goto 0x0x806e2b2c;
    if (==) goto 0x0x806e2bb0;
    if (>=) goto 0x0x806e2b20;
    if (>=) goto 0x0x806e2ba8;
    if (>=) goto 0x0x806e2ba0;
    /* b 0x806e2bfc */ // 0x806E2B1C
    if (>=) goto 0x0x806e2ba0;
    /* b 0x806e2bb8 */ // 0x806E2B28
    if (==) goto 0x0x806e2ba0;
    if (>=) goto 0x0x806e2b44;
    if (>=) goto 0x0x806e2bb8;
    /* b 0x806e2bb0 */ // 0x806E2B40
    if (>=) goto 0x0x806e2bb0;
    /* b 0x806e2ba8 */ // 0x806E2B4C
    if (==) goto 0x0x806e2ba8;
    if (>=) goto 0x0x806e2b80;
    if (==) goto 0x0x806e2bc0;
    if (>=) goto 0x0x806e2b74;
    if (>=) goto 0x0x806e2bfc;
    /* b 0x806e2ba0 */ // 0x806E2B70
    if (>=) goto 0x0x806e2ba0;
    /* b 0x806e2bfc */ // 0x806E2B7C
    if (>=) goto 0x0x806e2b94;
    if (==) goto 0x0x806e2ba8;
    /* b 0x806e2ba0 */ // 0x806E2B90
    if (>=) goto 0x0x806e2bfc;
    /* b 0x806e2ba8 */ // 0x806E2B9C
    /* li r31, 1 */ // 0x806E2BA0
    /* b 0x806e2bfc */ // 0x806E2BA4
    /* li r31, 2 */ // 0x806E2BA8
    /* b 0x806e2bfc */ // 0x806E2BAC
    /* li r31, 3 */ // 0x806E2BB0
    /* b 0x806e2bfc */ // 0x806E2BB4
    /* li r31, 4 */ // 0x806E2BB8
    /* b 0x806e2bfc */ // 0x806E2BBC
    /* lis r3, 0 */ // 0x806E2BC0
    r3 = *(0 + r3); // lwz @ 0x806E2BC4
    r0 = *(0xb74 + r3); // lwz @ 0x806E2BC8
    if (==) goto 0x0x806e2be8;
    if (==) goto 0x0x806e2bf0;
    if (==) goto 0x0x806e2bf8;
    /* b 0x806e2bfc */ // 0x806E2BE4
    /* li r31, 1 */ // 0x806E2BE8
    /* b 0x806e2bfc */ // 0x806E2BEC
    /* li r31, 2 */ // 0x806E2BF0
    /* b 0x806e2bfc */ // 0x806E2BF4
    /* li r31, 4 */ // 0x806E2BF8
    r0 = r31 + -3; // 0x806E2BFC
    if (<=) goto 0x0x806e2c2c;
    if (==) goto 0x0x806e2c1c;
    if (==) goto 0x0x806e2c24;
    /* b 0x806e2c30 */ // 0x806E2C18
    /* li r25, 1 */ // 0x806E2C1C
    /* b 0x806e2c30 */ // 0x806E2C20
    /* li r25, 2 */ // 0x806E2C24
    /* b 0x806e2c30 */ // 0x806E2C28
    /* li r25, 4 */ // 0x806E2C2C
    r3 = r30;
    r4 = r31 + 1; // 0x806E2C34
    FUN_80671C1C(r3, r4); // bl 0x80671C1C
    /* lis r28, 0 */ // 0x806E2C3C
    /* lis r29, 0 */ // 0x806E2C40
    r26 = r30;
    r27 = r30 + 0x44; // 0x806E2C48
    r28 = r28 + 0; // 0x806E2C4C
    r29 = r29 + 0; // 0x806E2C50
    /* li r24, 0 */ // 0x806E2C54
    /* b 0x806e2cf4 */ // 0x806E2C58
    r3 = r30;
    r4 = r24;
    r5 = r27;
    /* li r6, 0 */ // 0x806E2C68
    FUN_80671C2C(r3, r4, r5, r6); // bl 0x80671C2C
    *(0x1b8 + r26) = r24; // stw @ 0x806E2C70
    r7 = r25;
    r5 = r28 + 0x29; // 0x806E2C7C
    r6 = r24 + 1; // 0x806E2C80
    /* li r4, 0xf */ // 0x806E2C84
    /* crclr cr1eq */ // 0x806E2C88
    FUN_805E3430(r3, r5, r6, r4); // bl 0x805E3430
    r4 = r27;
    FUN_8064E324(r4, r4, r3); // bl 0x8064E324
    r11 = *(0 + r29); // lwz @ 0x806E2C9C
    r10 = *(4 + r29); // lwz @ 0x806E2CA4
    r4 = r28 + 0x36; // 0x806E2CA8
    r9 = *(8 + r29); // lwz @ 0x806E2CAC
    r5 = r28 + 0x41; // 0x806E2CB0
    r8 = *(0xc + r29); // lwz @ 0x806E2CB4
    r0 = *(0x10 + r29); // lwz @ 0x806E2CBC
    *(0x18 + r1) = r11; // stw @ 0x806E2CC4
    *(0x1c + r1) = r10; // stw @ 0x806E2CC8
    *(0x20 + r1) = r9; // stw @ 0x806E2CCC
    *(0x24 + r1) = r8; // stw @ 0x806E2CD0
    *(0x28 + r1) = r0; // stw @ 0x806E2CD4
    FUN_8064E36C(); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806E2CE0
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r27 = r27 + 0x178; // 0x806E2CE8
    r26 = r26 + 0x178; // 0x806E2CEC
    r24 = r24 + 1; // 0x806E2CF0
    if (<) goto 0x0x806e2c5c;
    r3 = r30;
    r4 = r31;
    r5 = r30 + 0x624; // 0x806E2D04
    /* li r6, 0 */ // 0x806E2D08
    FUN_80671C2C(r3, r4, r5, r6); // bl 0x80671C2C
    r4 = r30 + 0x624; // 0x806E2D14
    FUN_8064E324(r5, r6, r3, r4); // bl 0x8064E324
    /* lis r29, 0 */ // 0x806E2D1C
    r29 = r29 + 0; // 0x806E2D24
    /* li r7, 0 */ // 0x806E2D28
    r4 = r29 + 0x46; // 0x806E2D2C
    r5 = r29 + 0x51; // 0x806E2D30
    r6 = r29 + 0x60; // 0x806E2D34
    FUN_8064E36C(r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806E2D40
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r0 = r31 + -3; // 0x806E2D48
    if (<=) goto 0x0x806e2db0;
    if (==) goto 0x0x806e2d68;
    if (==) goto 0x0x806e2d8c;
    /* b 0x806e2dd0 */ // 0x806E2D64
    r3 = r30 + 0x624; // 0x806E2D68
    r4 = r29 + 0x6f; // 0x806E2D6C
    /* li r5, 0 */ // 0x806E2D70
    FUN_806A11CC(r3, r4, r5); // bl 0x806A11CC
    r3 = r30 + 0x624; // 0x806E2D78
    r4 = r29 + 0x79; // 0x806E2D7C
}