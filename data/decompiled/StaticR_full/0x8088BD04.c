/* Function at 0x8088BD04, size=328 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 5 function(s) */

int FUN_8088BD04(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* lis r9, 0 */ // 0x8088BD0C
    *(0x34 + r1) = r0; // stw @ 0x8088BD10
    /* stmw r23, 0xc(r1) */ // 0x8088BD14
    r24 = r4;
    r23 = r3;
    r25 = r5;
    r26 = r6;
    r27 = r7;
    r28 = r8;
    r4 = *(0 + r9); // lwz @ 0x8088BD30
    r4 = *(0x20 + r4); // lwz @ 0x8088BD34
    FUN_8089A2C0(); // bl 0x8089A2C0
    r12 = *(0 + r23); // lwz @ 0x8088BD3C
    r31 = r3;
    r3 = r23;
    r12 = *(0x158 + r12); // lwz @ 0x8088BD48
    r4 = r31;
    /* mtctr r12 */ // 0x8088BD50
    /* bctrl  */ // 0x8088BD54
    if (!=) goto 0x0x8088bd80;
    r3 = *(0xac + r23); // lwz @ 0x8088BD60
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084A9E4(r4, r5, r6, r7, r8); // bl 0x8084A9E4
    /* b 0x8088be38 */ // 0x8088BD7C
    r3 = *(0xac + r23); // lwz @ 0x8088BD80
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    /* li r31, 1 */ // 0x8088BD98
    /* li r30, 1 */ // 0x8088BD9C
    FUN_8084A9E4(r6, r7, r8); // bl 0x8084A9E4
    if (!=) goto 0x0x8088bdec;
    r3 = *(0x16c + r23); // lwz @ 0x8088BDAC
    /* li r29, 0 */ // 0x8088BDB0
    if (==) goto 0x0x8088bde0;
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084A9E4(r4, r5, r6, r7, r8); // bl 0x8084A9E4
    if (==) goto 0x0x8088bde0;
    /* li r29, 1 */ // 0x8088BDDC
    if (!=) goto 0x0x8088bdec;
    /* li r30, 0 */ // 0x8088BDE8
    if (!=) goto 0x0x8088be34;
    r3 = *(0x170 + r23); // lwz @ 0x8088BDF4
    /* li r29, 0 */ // 0x8088BDF8
    if (==) goto 0x0x8088be28;
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084A9E4(r4, r5, r6, r7, r8); // bl 0x8084A9E4
    if (==) goto 0x0x8088be28;
    /* li r29, 1 */ // 0x8088BE24
    if (!=) goto 0x0x8088be34;
    /* li r31, 0 */ // 0x8088BE30
    r3 = r31;
    r0 = *(0x34 + r1); // lwz @ 0x8088BE3C
    return;
}