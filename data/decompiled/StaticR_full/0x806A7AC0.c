/* Function at 0x806A7AC0, size=568 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 3 function(s) */

int FUN_806A7AC0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r5, 0 */ // 0x806A7AC8
    *(0x24 + r1) = r0; // stw @ 0x806A7ACC
    /* stmw r26, 8(r1) */ // 0x806A7AD0
    r30 = r3;
    r31 = r4;
    r3 = *(0 + r5); // lwz @ 0x806A7ADC
    r3 = *(0 + r3); // lwz @ 0x806A7AE0
    r27 = *(0x2a4 + r3); // lwz @ 0x806A7AE4
    if (!=) goto 0x0x806a7af8;
    /* li r27, 0 */ // 0x806A7AF0
    /* b 0x806a7b4c */ // 0x806A7AF4
    /* lis r26, 0 */ // 0x806A7AF8
    r26 = r26 + 0; // 0x806A7AFC
    if (==) goto 0x0x806a7b48;
    r12 = *(0 + r27); // lwz @ 0x806A7B04
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x806A7B0C
    /* mtctr r12 */ // 0x806A7B10
    /* bctrl  */ // 0x806A7B14
    /* b 0x806a7b30 */ // 0x806A7B18
    if (!=) goto 0x0x806a7b2c;
    /* li r0, 1 */ // 0x806A7B24
    /* b 0x806a7b3c */ // 0x806A7B28
    r3 = *(0 + r3); // lwz @ 0x806A7B2C
    if (!=) goto 0x0x806a7b1c;
    /* li r0, 0 */ // 0x806A7B38
    if (==) goto 0x0x806a7b48;
    /* b 0x806a7b4c */ // 0x806A7B44
    /* li r27, 0 */ // 0x806A7B48
    r3 = r27;
    FUN_8065FA90(r3); // bl 0x8065FA90
    /* li r26, 1 */ // 0x806A7B54
    /* lis r3, 0 */ // 0x806A7B58
    /* mulli r26, r26, 0xf0 */ // 0x806A7B5C
    r6 = *(0 + r3); // lwz @ 0x806A7B60
    /* li r28, 2 */ // 0x806A7B64
    /* li r12, 3 */ // 0x806A7B68
    r6 = r6 + r26; // 0x806A7B6C
    /* li r27, 5 */ // 0x806A7B70
    *(0xc28 + r6) = r27; // stw @ 0x806A7B74
    /* mulli r29, r28, 0xf0 */ // 0x806A7B78
    /* li r10, 4 */ // 0x806A7B7C
    r8 = *(0 + r3); // lwz @ 0x806A7B80
    /* li r26, 6 */ // 0x806A7B84
    /* mulli r11, r12, 0xf0 */ // 0x806A7B88
    /* li r5, 0xb */ // 0x806A7B8C
    r8 = r8 + r29; // 0x806A7B90
    *(0xc28 + r8) = r27; // stw @ 0x806A7B94
    /* li r28, 7 */ // 0x806A7B98
    /* mulli r9, r10, 0xf0 */ // 0x806A7B9C
    r29 = *(0 + r3); // lwz @ 0x806A7BA0
    /* li r8, 0xa */ // 0x806A7BA4
    /* li r12, 8 */ // 0x806A7BA8
    r11 = r29 + r11; // 0x806A7BAC
    /* li r10, 9 */ // 0x806A7BB0
    *(0xc28 + r11) = r27; // stw @ 0x806A7BB4
    /* mulli r6, r27, 0xf0 */ // 0x806A7BB8
    /* li r7, 2 */ // 0x806A7BBC
    r11 = *(0 + r3); // lwz @ 0x806A7BC0
    /* li r0, 0 */ // 0x806A7BC4
    /* mulli r26, r26, 0xf0 */ // 0x806A7BC8
    /* lis r4, 0 */ // 0x806A7BCC
    r9 = r11 + r9; // 0x806A7BD0
    *(0xc28 + r9) = r27; // stw @ 0x806A7BD4
    /* mulli r29, r28, 0xf0 */ // 0x806A7BD8
    r9 = *(0 + r3); // lwz @ 0x806A7BDC
    r6 = r9 + r6; // 0x806A7BE0
    *(0xc28 + r6) = r27; // stw @ 0x806A7BE4
    /* mulli r11, r12, 0xf0 */ // 0x806A7BE8
    r6 = *(0 + r3); // lwz @ 0x806A7BEC
    /* mulli r9, r10, 0xf0 */ // 0x806A7BF0
    r6 = r6 + r26; // 0x806A7BF4
    *(0xc28 + r6) = r27; // stw @ 0x806A7BF8
    /* mulli r6, r8, 0xf0 */ // 0x806A7BFC
    r8 = *(0 + r3); // lwz @ 0x806A7C00
    r8 = r8 + r29; // 0x806A7C04
    *(0xc28 + r8) = r27; // stw @ 0x806A7C08
    /* mulli r5, r5, 0xf0 */ // 0x806A7C0C
    r29 = *(0 + r3); // lwz @ 0x806A7C10
    r11 = r29 + r11; // 0x806A7C14
    *(0xc28 + r11) = r27; // stw @ 0x806A7C18
    r11 = *(0 + r3); // lwz @ 0x806A7C1C
    r9 = r11 + r9; // 0x806A7C20
    *(0xc28 + r9) = r27; // stw @ 0x806A7C24
    r9 = *(0 + r3); // lwz @ 0x806A7C28
    r6 = r9 + r6; // 0x806A7C2C
    *(0xc28 + r6) = r27; // stw @ 0x806A7C30
    r6 = *(0 + r3); // lwz @ 0x806A7C34
    r5 = r6 + r5; // 0x806A7C38
    *(0xc28 + r5) = r27; // stw @ 0x806A7C3C
    r5 = *(0 + r3); // lwz @ 0x806A7C40
    *(0x175c + r5) = r7; // stw @ 0x806A7C44
    r6 = *(0 + r3); // lwz @ 0x806A7C48
    r5 = *(0x1780 + r6); // lwz @ 0x806A7C4C
    r5 = r5 rlwinm 0; // rlwinm
    *(0x1780 + r6) = r5; // stw @ 0x806A7C54
    r5 = *(0 + r3); // lwz @ 0x806A7C58
    *(0x1764 + r5) = r0; // stw @ 0x806A7C5C
    r5 = *(0 + r3); // lwz @ 0x806A7C60
    *(0x1760 + r5) = r7; // stw @ 0x806A7C64
    r3 = *(0 + r3); // lwz @ 0x806A7C68
    r0 = *(0x1780 + r3); // lwz @ 0x806A7C6C
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r3) = r0; // stw @ 0x806A7C74
    r3 = *(0 + r4); // lwz @ 0x806A7C78
    r3 = *(0 + r3); // lwz @ 0x806A7C7C
    r0 = *(0 + r3); // lwz @ 0x806A7C80
    if (==) goto 0x0x806a7c98;
    if (==) goto 0x0x806a7cc0;
    /* b 0x806a7ce4 */ // 0x806A7C94
    r3 = r31;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r30); // lwz @ 0x806A7CA0
    r3 = r30;
    /* li r4, 0x32 */ // 0x806A7CA8
    /* li r5, 0 */ // 0x806A7CAC
    r12 = *(0x1c + r12); // lwz @ 0x806A7CB0
    /* mtctr r12 */ // 0x806A7CB4
    /* bctrl  */ // 0x806A7CB8
    /* b 0x806a7ce4 */ // 0x806A7CBC
    r3 = r31;
    FUN_8064A384(r3); // bl 0x8064A384
    r12 = *(0 + r30); // lwz @ 0x806A7CC8
    r3 = r30;
    /* li r4, 0x33 */ // 0x806A7CD0
    /* li r5, 0 */ // 0x806A7CD4
    r12 = *(0x1c + r12); // lwz @ 0x806A7CD8
    /* mtctr r12 */ // 0x806A7CDC
    /* bctrl  */ // 0x806A7CE0
    r0 = *(0x24 + r1); // lwz @ 0x806A7CE8
    return;
}