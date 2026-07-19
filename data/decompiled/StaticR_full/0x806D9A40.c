/* Function at 0x806D9A40, size=220 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_806D9A40(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r7, 0 */ // 0x806D9A48
    *(0x24 + r1) = r0; // stw @ 0x806D9A4C
    /* stmw r26, 8(r1) */ // 0x806D9A50
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r3 = *(0 + r7); // lwz @ 0x806D9A64
    r3 = *(0 + r3); // lwz @ 0x806D9A68
    r30 = *(0x2bc + r3); // lwz @ 0x806D9A6C
    if (!=) goto 0x0x806d9a80;
    /* li r30, 0 */ // 0x806D9A78
    /* b 0x806d9ad4 */ // 0x806D9A7C
    /* lis r31, 0 */ // 0x806D9A80
    r31 = r31 + 0; // 0x806D9A84
    if (==) goto 0x0x806d9ad0;
    r12 = *(0 + r30); // lwz @ 0x806D9A8C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806D9A94
    /* mtctr r12 */ // 0x806D9A98
    /* bctrl  */ // 0x806D9A9C
    /* b 0x806d9ab8 */ // 0x806D9AA0
    if (!=) goto 0x0x806d9ab4;
    /* li r0, 1 */ // 0x806D9AAC
    /* b 0x806d9ac4 */ // 0x806D9AB0
    r3 = *(0 + r3); // lwz @ 0x806D9AB4
    if (!=) goto 0x0x806d9aa4;
    /* li r0, 0 */ // 0x806D9AC0
    if (==) goto 0x0x806d9ad0;
    /* b 0x806d9ad4 */ // 0x806D9ACC
    /* li r30, 0 */ // 0x806D9AD0
    r3 = r30;
    r4 = r27;
    r5 = r28;
    FUN_806D6C6C(r3, r4, r5); // bl 0x806D6C6C
    r12 = *(0 + r26); // lwz @ 0x806D9AE4
    r3 = r26;
    r5 = r29;
    /* li r4, 0xad */ // 0x806D9AF0
    r12 = *(0x24 + r12); // lwz @ 0x806D9AF4
    /* mtctr r12 */ // 0x806D9AF8
    /* bctrl  */ // 0x806D9AFC
    /* li r0, 7 */ // 0x806D9B00
    *(0x2874 + r26) = r0; // stw @ 0x806D9B04
    r0 = *(0x24 + r1); // lwz @ 0x806D9B0C
    return;
}