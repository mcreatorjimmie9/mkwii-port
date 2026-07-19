/* Function at 0x808E5B84, size=396 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_808E5B84(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x808E5B98
    r29 = r3;
    r0 = *(8 + r3); // lwz @ 0x808E5BA0
    if (!=) goto 0x0x808e5cf4;
    /* lis r3, 0 */ // 0x808E5BAC
    r3 = *(0 + r3); // lwz @ 0x808E5BB0
    r3 = *(0 + r3); // lwz @ 0x808E5BB4
    r3 = *(0 + r3); // lwz @ 0x808E5BB8
    FUN_808CF8D8(r3); // bl 0x808CF8D8
    if (==) goto 0x0x808e5cf4;
    r4 = *(0x6c8 + r29); // lwz @ 0x808E5BC8
    /* lis r3, 0 */ // 0x808E5BCC
    /* lfs f0, 0(r3) */ // 0x808E5BD0
    /* lfs f1, 0(r4) */ // 0x808E5BD4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x808E5BD8
    /* cror cr0eq, cr0lt, cr0eq */ // 0x808E5BDC
    /* mfcr r0 */ // 0x808E5BE0
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x808E5BE4
    if (==) goto 0x0x808e5cf4;
    r4 = *(0x6cc + r29); // lwz @ 0x808E5BEC
    r3 = r29 + 0x24; // 0x808E5BF0
    FUN_8064E1CC(r3); // bl 0x8064E1CC
    r30 = r3;
    if (!=) goto 0x0x808e5c0c;
    /* li r30, 0 */ // 0x808E5C04
    /* b 0x808e5c5c */ // 0x808E5C08
    /* lis r31, 0 */ // 0x808E5C0C
    r31 = r31 + 0; // 0x808E5C10
    if (==) goto 0x0x808e5c58;
    r12 = *(0 + r3); // lwz @ 0x808E5C18
    r12 = *(0x28 + r12); // lwz @ 0x808E5C1C
    /* mtctr r12 */ // 0x808E5C20
    /* bctrl  */ // 0x808E5C24
    /* b 0x808e5c40 */ // 0x808E5C28
    if (!=) goto 0x0x808e5c3c;
    /* li r0, 1 */ // 0x808E5C34
    /* b 0x808e5c4c */ // 0x808E5C38
    r3 = *(0 + r3); // lwz @ 0x808E5C3C
    if (!=) goto 0x0x808e5c2c;
    /* li r0, 0 */ // 0x808E5C48
    if (==) goto 0x0x808e5c58;
    /* b 0x808e5c5c */ // 0x808E5C54
    /* li r30, 0 */ // 0x808E5C58
    if (!=) goto 0x0x808e5c6c;
    /* li r30, 0 */ // 0x808E5C64
    /* b 0x808e5cc0 */ // 0x808E5C68
    /* lis r31, 0 */ // 0x808E5C6C
    r31 = r31 + 0; // 0x808E5C70
    if (==) goto 0x0x808e5cbc;
    r12 = *(0 + r30); // lwz @ 0x808E5C78
    r3 = r30;
    r12 = *(0x28 + r12); // lwz @ 0x808E5C80
    /* mtctr r12 */ // 0x808E5C84
    /* bctrl  */ // 0x808E5C88
    /* b 0x808e5ca4 */ // 0x808E5C8C
    if (!=) goto 0x0x808e5ca0;
    /* li r0, 1 */ // 0x808E5C98
    /* b 0x808e5cb0 */ // 0x808E5C9C
    r3 = *(0 + r3); // lwz @ 0x808E5CA0
    if (!=) goto 0x0x808e5c90;
    /* li r0, 0 */ // 0x808E5CAC
    if (==) goto 0x0x808e5cbc;
    /* b 0x808e5cc0 */ // 0x808E5CB8
    /* li r30, 0 */ // 0x808E5CBC
    r12 = *(0 + r29); // lwz @ 0x808E5CC0
    r3 = r29;
    r4 = r30;
    /* li r5, 0 */ // 0x808E5CCC
    r12 = *(0x64 + r12); // lwz @ 0x808E5CD0
    /* mtctr r12 */ // 0x808E5CD4
    /* bctrl  */ // 0x808E5CD8
    r3 = r30;
    FUN_80649F54(r5, r3); // bl 0x80649F54
    r3 = r29;
    r4 = r30;
    /* li r5, 0 */ // 0x808E5CEC
    FUN_808E5D10(r3, r3, r4, r5); // bl 0x808E5D10
    r0 = *(0x24 + r1); // lwz @ 0x808E5CF4
    r31 = *(0x1c + r1); // lwz @ 0x808E5CF8
    r30 = *(0x18 + r1); // lwz @ 0x808E5CFC
    r29 = *(0x14 + r1); // lwz @ 0x808E5D00
    return;
}