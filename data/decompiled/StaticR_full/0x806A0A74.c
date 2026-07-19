/* Function at 0x806A0A74, size=248 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806A0A74(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x806A0A88
    r31 = r31 + 0; // 0x806A0A8C
    *(0x18 + r1) = r30; // stw @ 0x806A0A90
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806A0A98
    r29 = r3;
    if (==) goto 0x0x806a0aec;
    r12 = *(0 + r30); // lwz @ 0x806A0AA4
    r3 = r30;
    r12 = *(0xc + r12); // lwz @ 0x806A0AAC
    /* mtctr r12 */ // 0x806A0AB0
    /* bctrl  */ // 0x806A0AB4
    /* b 0x806a0ad0 */ // 0x806A0AB8
    if (!=) goto 0x0x806a0acc;
    /* li r0, 1 */ // 0x806A0AC4
    /* b 0x806a0adc */ // 0x806A0AC8
    r3 = *(0 + r3); // lwz @ 0x806A0ACC
    if (!=) goto 0x0x806a0abc;
    /* li r0, 0 */ // 0x806A0AD8
    if (==) goto 0x0x806a0aec;
    r31 = r30;
    /* b 0x806a0af0 */ // 0x806A0AE8
    /* li r31, 0 */ // 0x806A0AEC
    if (==) goto 0x0x806a0b50;
    r3 = r30;
    /* li r4, 0x4c */ // 0x806A0AFC
    FUN_80665420(r3, r4); // bl 0x80665420
    if (!=) goto 0x0x806a0b38;
    r3 = *(4 + r29); // lwz @ 0x806A0B0C
    r4 = r31;
    r3 = r3 + 0xa8; // 0x806A0B14
    FUN_80666A54(r4, r3); // bl 0x80666A54
    r5 = *(4 + r29); // lwz @ 0x806A0B1C
    r6 = *(8 + r29); // lwz @ 0x806A0B20
    r4 = r5 + 0x144; // 0x806A0B24
    r7 = *(0xc + r29); // lwz @ 0x806A0B28
    r5 = r5 + 0x158; // 0x806A0B2C
    FUN_80655280(r4, r5); // bl 0x80655280
    /* b 0x806a0b50 */ // 0x806A0B34
    r5 = *(4 + r29); // lwz @ 0x806A0B38
    r3 = r31;
    r6 = *(8 + r29); // lwz @ 0x806A0B40
    r4 = r5 + 0x144; // 0x806A0B44
    r5 = r5 + 0x158; // 0x806A0B48
    FUN_806651B8(r3, r4, r5); // bl 0x806651B8
    r0 = *(0x24 + r1); // lwz @ 0x806A0B50
    r31 = *(0x1c + r1); // lwz @ 0x806A0B54
    r30 = *(0x18 + r1); // lwz @ 0x806A0B58
    r29 = *(0x14 + r1); // lwz @ 0x806A0B5C
    return;
}