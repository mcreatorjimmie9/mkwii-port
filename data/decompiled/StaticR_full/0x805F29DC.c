/* Function at 0x805F29DC, size=300 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */

int FUN_805F29DC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x805F29E8
    r26 = r3;
    r27 = r4;
    /* li r31, 0 */ // 0x805F29F4
    r30 = r26;
    /* li r28, 0 */ // 0x805F29FC
    r29 = r27;
    r0 = *(0x54 + r26); // lwz @ 0x805F2A04
    r3 = *(0x14 + r29); // lwz @ 0x805F2A08
    r0 = *(0x24 + r27); // lwz @ 0x805F2A10
    r25 = *(0x28 + r30); // lwz @ 0x805F2A14
    r5 = *(0 + r3); // lwz @ 0x805F2A18
    if (==) goto 0x0x805f2a7c;
    if (<) goto 0x0x805f2a7c;
    /* clrlwi r0, r0, 0x18 */ // 0x805F2A28
    r3 = *(0x3c + r26); // lwz @ 0x805F2A2C
    /* mulli r0, r0, 0xc */ // 0x805F2A30
    r3 = *(0 + r3); // lwz @ 0x805F2A34
    r3 = r3 + r0; // 0x805F2A38
    r0 = *(4 + r3); // lbz @ 0x805F2A3C
    if (==) goto 0x0x805f2a7c;
    r0 = *(8 + r3); // lwz @ 0x805F2A48
    r3 = *(0x80 + r26); // lwz @ 0x805F2A4C
    /* slwi r0, r0, 2 */ // 0x805F2A50
    /* lwzx r0, r3, r0 */ // 0x805F2A54
    r3 = r0 + r28; // 0x805F2A58
    r25 = *(4 + r3); // lwz @ 0x805F2A5C
    r12 = *(0 + r25); // lwz @ 0x805F2A60
    r3 = r25;
    r4 = *(0xe4 + r25); // lwz @ 0x805F2A68
    r12 = *(0x34 + r12); // lwz @ 0x805F2A6C
    /* mtctr r12 */ // 0x805F2A70
    /* bctrl  */ // 0x805F2A74
    /* b 0x805f2a94 */ // 0x805F2A78
    r12 = *(0 + r25); // lwz @ 0x805F2A7C
    r3 = r25;
    r4 = *(0xe4 + r25); // lwz @ 0x805F2A84
    r12 = *(0x34 + r12); // lwz @ 0x805F2A88
    /* mtctr r12 */ // 0x805F2A8C
    /* bctrl  */ // 0x805F2A90
    r31 = r31 + 1; // 0x805F2A94
    *(0x1c + r29) = r25; // stw @ 0x805F2A98
    r30 = r30 + 4; // 0x805F2AA0
    r29 = r29 + 4; // 0x805F2AA4
    r28 = r28 + 4; // 0x805F2AA8
    if (<) goto 0x0x805f2a04;
    r3 = *(4 + r27); // lwz @ 0x805F2AB0
    r0 = r3 rlwinm 0; // rlwinm
    /* rlwimi. r0, r3, 0, 0x1b, 0x1b */ // 0x805F2AB8
    if (!=) goto 0x0x805f2b9c;
    /* lis r3, 0 */ // 0x805F2AC0
    r0 = *(0 + r3); // lwz @ 0x805F2AC4
    /* cmpwi cr1, r0, 0 */
    if (!=) goto 0x0x805f2b9c;
    r0 = *(0xc + r27); // lwz @ 0x805F2AD0
    if (==) goto 0x0x805f2b9c;
    if (!=) goto 0x0x805f2b9c;
    /* li r4, 0 */ // 0x805F2AE0
    /* li r28, 0 */ // 0x805F2AE4
    /* b 0x805f2b30 */ // 0x805F2AE8
    r5 = *(0xc + r27); // lwz @ 0x805F2AEC
    /* li r6, 0 */ // 0x805F2AF0
    r0 = *(4 + r3); // lwz @ 0x805F2AF4
    if (!=) goto 0x0x805f2b14;
    r5 = *(8 + r3); // lwz @ 0x805F2B00
    r0 = *(0x24 + r27); // lwz @ 0x805F2B04
}