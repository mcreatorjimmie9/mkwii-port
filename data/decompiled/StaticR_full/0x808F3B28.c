/* Function at 0x808F3B28, size=320 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r18 */
/* Calls: 2 function(s) */

int FUN_808F3B28(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r18 */
    /* stmw r18, 8(r1) */ // 0x808F3B34
    r23 = r3;
    r0 = *(0x6ff + r3); // lbz @ 0x808F3B3C
    if (==) goto 0x0x808f3c54;
    r0 = *(0x9c + r3); // lhz @ 0x808F3B48
    if (>=) goto 0x0x808f3c54;
    /* lis r30, 0 */ // 0x808F3B54
    /* lis r29, 0 */ // 0x808F3B58
    r26 = r23;
    r27 = r3 + 0x150; // 0x808F3B60
    r30 = r30 + 0; // 0x808F3B64
    r29 = r29 + 0; // 0x808F3B68
    /* li r25, 0 */ // 0x808F3B6C
    /* li r28, 0 */ // 0x808F3B70
    /* li r21, 1 */ // 0x808F3B74
    /* lis r31, 0 */ // 0x808F3B78
    /* li r24, 0 */ // 0x808F3B7C
    /* li r20, -1 */ // 0x808F3B80
    /* li r22, 0 */ // 0x808F3B84
    r0 = *(0x6fa + r23); // lbz @ 0x808F3B88
    if (==) goto 0x0x808f3ba8;
    r0 = *(0x9c + r23); // lhz @ 0x808F3B94
    /* slwi r0, r0, 2 */ // 0x808F3B98
    /* lwzx r0, r29, r0 */ // 0x808F3B9C
    r3 = r0 + r28; // 0x808F3BA0
    /* b 0x808f3bb8 */ // 0x808F3BA4
    r0 = *(0x9c + r23); // lhz @ 0x808F3BA8
    /* slwi r0, r0, 2 */ // 0x808F3BAC
    /* lwzx r0, r30, r0 */ // 0x808F3BB0
    r3 = r0 + r28; // 0x808F3BB4
    r0 = *(0x6fb + r23); // lbz @ 0x808F3BB8
    r19 = *(0 + r3); // lhz @ 0x808F3BBC
    r18 = *(2 + r3); // lhz @ 0x808F3BC4
    if (==) goto 0x0x808f3bdc;
    r0 = *(0x11c + r23); // lwz @ 0x808F3BCC
    /* mulli r0, r0, 0x76 */ // 0x808F3BD0
    r19 = r19 + r0; // 0x808F3BD4
    r18 = r18 + r0; // 0x808F3BD8
    r3 = r27;
    FUN_808F928C(r3); // bl 0x808F928C
    r3 = r27;
    r4 = r19;
    r5 = r18;
    r7 = r23;
    /* li r6, 0x64 */ // 0x808F3BF4
    FUN_808F6DA4(r3, r4, r5, r7, r6); // bl 0x808F6DA4
    r0 = *(0x6ec + r23); // lbz @ 0x808F3BFC
    r3 = *(0 + r31); // lwz @ 0x808F3C00
    /* slwi r0, r0, 2 */ // 0x808F3C04
    r3 = r3 + r0; // 0x808F3C08
    r0 = *(0x4728 + r3); // lwz @ 0x808F3C0C
    r3 = r0 + r25; // 0x808F3C10
    /* subfc r0, r3, r20 */ // 0x808F3C14
    /* subfe r0, r24, r24 */ // 0x808F3C18
    /* subfe r0, r20, r20 */ // 0x808F3C1C
    /* neg. r0, r0 */ // 0x808F3C20
    if (==) goto 0x0x808f3c2c;
    /* addc r3, r3, r21 */ // 0x808F3C28
    *(0x15c + r26) = r3; // stw @ 0x808F3C2C
    r25 = r25 + 1; // 0x808F3C30
    r28 = r28 + 4; // 0x808F3C38
    *(0x158 + r26) = r22; // stw @ 0x808F3C3C
    r27 = r27 + 0x30; // 0x808F3C40
    *(0x164 + r26) = r3; // stw @ 0x808F3C44
    *(0x160 + r26) = r22; // stw @ 0x808F3C48
    r26 = r26 + 0x30; // 0x808F3C4C
    if (<) goto 0x0x808f3b88;
    r0 = *(0x44 + r1); // lwz @ 0x808F3C58
    return;
}