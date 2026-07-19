/* Function at 0x8061C288, size=316 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r21 */
/* Calls: 3 function(s) */

int FUN_8061C288(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -128(r1) */
    /* saved r21 */
    /* lis r6, 0 */ // 0x8061C290
    /* lis r10, 0 */ // 0x8061C294
    *(0x84 + r1) = r0; // stw @ 0x8061C298
    /* stmw r21, 0x54(r1) */ // 0x8061C29C
    r23 = r3;
    r24 = r4;
    r21 = *(0x14 + r3); // lwz @ 0x8061C2A8
    r28 = *(0 + r6); // lwzu @ 0x8061C2AC
    r5 = *(0x14 + r21); // lwz @ 0x8061C2B0
    r9 = *(0 + r10); // lwzu @ 0x8061C2B4
    r3 = *(0 + r5); // lwz @ 0x8061C2B8
    r30 = *(4 + r6); // lwz @ 0x8061C2BC
    r27 = *(0 + r3); // lwz @ 0x8061C2C0
    r29 = *(8 + r6); // lwz @ 0x8061C2C4
    r26 = *(0xc + r6); // lwz @ 0x8061C2C8
    r25 = *(0x10 + r6); // lwz @ 0x8061C2D0
    r22 = *(0x14 + r6); // lwz @ 0x8061C2D4
    r12 = *(0x18 + r6); // lwz @ 0x8061C2D8
    r11 = *(0x1c + r6); // lwz @ 0x8061C2DC
    r8 = *(4 + r10); // lwz @ 0x8061C2E0
    r7 = *(8 + r10); // lwz @ 0x8061C2E4
    r6 = *(0xc + r10); // lwz @ 0x8061C2E8
    r5 = *(0x10 + r10); // lwz @ 0x8061C2EC
    r4 = *(0x14 + r10); // lwz @ 0x8061C2F0
    r3 = *(0x18 + r10); // lwz @ 0x8061C2F4
    r0 = *(0x1c + r10); // lwz @ 0x8061C2F8
    *(0x28 + r1) = r28; // stw @ 0x8061C2FC
    r28 = *(0xe + r21); // lhz @ 0x8061C300
    *(0x2c + r1) = r30; // stw @ 0x8061C304
    *(0x30 + r1) = r29; // stw @ 0x8061C308
    *(0x34 + r1) = r26; // stw @ 0x8061C30C
    *(0x38 + r1) = r25; // stw @ 0x8061C310
    *(0x3c + r1) = r22; // stw @ 0x8061C314
    *(0x40 + r1) = r12; // stw @ 0x8061C318
    *(0x44 + r1) = r11; // stw @ 0x8061C31C
    *(8 + r1) = r9; // stw @ 0x8061C320
    *(0xc + r1) = r8; // stw @ 0x8061C324
    *(0x10 + r1) = r7; // stw @ 0x8061C328
    *(0x14 + r1) = r6; // stw @ 0x8061C32C
    *(0x18 + r1) = r5; // stw @ 0x8061C330
    *(0x1c + r1) = r4; // stw @ 0x8061C334
    *(0x20 + r1) = r3; // stw @ 0x8061C338
    *(0x24 + r1) = r0; // stw @ 0x8061C33C
    if (!=) goto 0x0x8061c348;
    /* li r28, 4 */ // 0x8061C344
    /* lis r22, 0 */ // 0x8061C348
    /* li r26, 0 */ // 0x8061C354
    r22 = r22 + 0; // 0x8061C358
    /* li r25, 0 */ // 0x8061C35C
    /* li r30, 0 */ // 0x8061C360
    /* b 0x8061c468 */ // 0x8061C364
    if (!=) goto 0x0x8061c378;
    if (==) goto 0x0x8061c45c;
    r0 = *(0 + r31); // lwz @ 0x8061C378
    if (==) goto 0x0x8061c38c;
    if (!=) goto 0x0x8061c3e8;
    /* li r3, 0x94 */ // 0x8061C38C
    FUN_805E3430(r3); // bl 0x805E3430
    r0 = r3;
    if (==) goto 0x0x8061c3ac;
    r4 = *(0x14 + r23); // lwz @ 0x8061C3A0
    FUN_80626384(); // bl 0x80626384
    r0 = r3;
    r4 = *(0x28 + r23); // lwz @ 0x8061C3AC
    /* li r3, 0xd0 */ // 0x8061C3B0
    /* stwx r0, r4, r30 */ // 0x8061C3B4
    FUN_805E3430(r3); // bl 0x805E3430
    r21 = r3;
}