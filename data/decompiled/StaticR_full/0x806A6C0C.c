/* Function at 0x806A6C0C, size=604 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 4 function(s) */

int FUN_806A6C0C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* lis r5, 0 */ // 0x806A6C14
    *(0x34 + r1) = r0; // stw @ 0x806A6C18
    /* stmw r22, 8(r1) */ // 0x806A6C1C
    r24 = r3;
    r25 = r4;
    r3 = *(0 + r5); // lwz @ 0x806A6C28
    r3 = *(0 + r3); // lwz @ 0x806A6C2C
    r30 = *(0x248 + r3); // lwz @ 0x806A6C30
    if (!=) goto 0x0x806a6c44;
    /* li r30, 0 */ // 0x806A6C3C
    /* b 0x806a6c98 */ // 0x806A6C40
    /* lis r23, 0 */ // 0x806A6C44
    r23 = r23 + 0; // 0x806A6C48
    if (==) goto 0x0x806a6c94;
    r12 = *(0 + r30); // lwz @ 0x806A6C50
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806A6C58
    /* mtctr r12 */ // 0x806A6C5C
    /* bctrl  */ // 0x806A6C60
    /* b 0x806a6c7c */ // 0x806A6C64
    if (!=) goto 0x0x806a6c78;
    /* li r0, 1 */ // 0x806A6C70
    /* b 0x806a6c88 */ // 0x806A6C74
    r3 = *(0 + r3); // lwz @ 0x806A6C78
    if (!=) goto 0x0x806a6c68;
    /* li r0, 0 */ // 0x806A6C84
    if (==) goto 0x0x806a6c94;
    /* b 0x806a6c98 */ // 0x806A6C90
    /* li r30, 0 */ // 0x806A6C94
    /* li r3, 0 */ // 0x806A6C9C
    if (<) goto 0x0x806a6cb4;
    r0 = *(0x284 + r30); // lwz @ 0x806A6CA4
    if (>=) goto 0x0x806a6cb4;
    /* li r3, 1 */ // 0x806A6CB0
    if (!=) goto 0x0x806a6cc4;
    /* li r3, 0 */ // 0x806A6CBC
    /* b 0x806a6e54 */ // 0x806A6CC0
    /* slwi r0, r25, 2 */ // 0x806A6CC4
    r31 = r24 + r0; // 0x806A6CC8
    r0 = *(0x1668 + r31); // lwz @ 0x806A6CCC
    if (<) goto 0x0x806a6ce0;
    /* li r3, 0 */ // 0x806A6CD8
    /* b 0x806a6e54 */ // 0x806A6CDC
    /* mulli r28, r25, 0xc */ // 0x806A6CE0
    /* lis r23, 0 */ // 0x806A6CE4
    r3 = *(0 + r23); // lwz @ 0x806A6CE8
    r4 = r30 + r28; // 0x806A6CEC
    r22 = *(0x1f5 + r4); // lbz @ 0x806A6CF0
    r29 = *(0x1f4 + r4); // lbz @ 0x806A6CF4
    r5 = r22;
    r4 = r29;
    FUN_806EC638(r5, r4); // bl 0x806EC638
    if (!=) goto 0x0x806a6d14;
    /* li r3, 0 */ // 0x806A6D0C
    /* b 0x806a6e54 */ // 0x806A6D10
    r3 = *(0 + r23); // lwz @ 0x806A6D14
    r4 = r29;
    r5 = r22;
    FUN_806EC6D8(r3, r4, r5); // bl 0x806EC6D8
    r0 = *(0x169c + r24); // lwz @ 0x806A6D24
    r27 = r3;
    if (==) goto 0x0x806a6d40;
    if (==) goto 0x0x806a6d8c;
    /* b 0x806a6de4 */ // 0x806A6D3C
    /* li r0, 1 */ // 0x806A6D44
    if (==) goto 0x0x806a6d68;
    /* li r3, 0 */ // 0x806A6D50
    if (>) goto 0x0x806a6d5c;
    /* li r3, 1 */ // 0x806A6D58
    if (!=) goto 0x0x806a6d68;
    /* li r0, 0 */ // 0x806A6D64
    if (!=) goto 0x0x806a6d74;
    /* li r27, -1 */ // 0x806A6D70
    if (!=) goto 0x0x806a6d84;
    /* li r26, 0x1101 */ // 0x806A6D7C
    /* b 0x806a6de4 */ // 0x806A6D80
    r26 = r27 + 0x2454; // 0x806A6D84
    /* b 0x806a6de4 */ // 0x806A6D88
    r3 = *(0 + r23); // lwz @ 0x806A6D8C
    r4 = r29;
    r5 = r22;
    FUN_806EC6D8(r4, r5); // bl 0x806EC6D8
    /* li r4, 1 */ // 0x806A6DA0
    if (==) goto 0x0x806a6dc8;
    r0 = r3 + -0x20; // 0x806A6DA8
    /* li r5, 0 */ // 0x806A6DAC
    if (>) goto 0x0x806a6dbc;
    /* li r5, 1 */ // 0x806A6DB8
    if (!=) goto 0x0x806a6dc8;
    /* li r4, 0 */ // 0x806A6DC4
    if (!=) goto 0x0x806a6dd4;
    /* li r3, -1 */ // 0x806A6DD0
    /* li r26, 0x1101 */ // 0x806A6DD8
    if (==) goto 0x0x806a6de4;
    r26 = r3 + 0x2498; // 0x806A6DE0
    /* lis r3, 0 */ // 0x806A6DE4
    r0 = *(0x1698 + r24); // lwz @ 0x806A6DE8
    r8 = *(0 + r3); // lwz @ 0x806A6DEC
    r3 = r30 + r28; // 0x806A6DF0
    /* mulli r6, r0, 0x178 */ // 0x806A6DF4
    r9 = *(0x1f8 + r3); // lwz @ 0x806A6DF8
    r0 = *(0x291c + r8); // lwz @ 0x806A6DFC
    r4 = r27 + 1; // 0x806A6E00
    r5 = r26;
    /* mulli r0, r0, 0x58 */ // 0x806A6E08
    r3 = r24 + r6; // 0x806A6E0C
    /* cntlzw r4, r4 */ // 0x806A6E10
    r6 = r8 + r0; // 0x806A6E14
    r7 = r25;
    r0 = *(0x59 + r6); // lbz @ 0x806A6E1C
    r3 = r3 + 0x4c8; // 0x806A6E20
    /* srwi r4, r4, 5 */ // 0x806A6E24
    r6 = r30 + 0x290; // 0x806A6E28
    /* subf r0, r29, r0 */ // 0x806A6E2C
    /* cntlzw r0, r0 */ // 0x806A6E30
    /* srwi r8, r0, 5 */ // 0x806A6E34
    FUN_806A5924(r6); // bl 0x806A5924
    r0 = *(0x1698 + r24); // lwz @ 0x806A6E3C
    /* li r3, 1 */ // 0x806A6E40
    *(0x1668 + r31) = r0; // stw @ 0x806A6E44
    r4 = *(0x1698 + r24); // lwz @ 0x806A6E48
    r0 = r4 + 1; // 0x806A6E4C
    *(0x1698 + r24) = r0; // stw @ 0x806A6E50
    r0 = *(0x34 + r1); // lwz @ 0x806A6E58
    return;
}