/* Function at 0x8088AAD4, size=388 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r23 */
/* Calls: 5 function(s) */

int FUN_8088AAD4(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r23 */
    /* stfd f31, 0x38(r1) */ // 0x8088AAE0
    /* fmr f31, f1 */ // 0x8088AAE4
    /* stmw r23, 0x14(r1) */ // 0x8088AAE8
    r29 = r9;
    r24 = r4;
    r23 = r3;
    r25 = r5;
    r26 = r6;
    r27 = r7;
    r28 = r8;
    r4 = r29;
    r12 = *(0 + r3); // lwz @ 0x8088AB0C
    r12 = *(0x120 + r12); // lwz @ 0x8088AB10
    /* mtctr r12 */ // 0x8088AB14
    /* bctrl  */ // 0x8088AB18
    /* lis r4, 0 */ // 0x8088AB1C
    r3 = r23;
    r4 = *(0 + r4); // lwz @ 0x8088AB24
    r0 = *(0x20 + r4); // lwz @ 0x8088AB28
    /* subf r4, r29, r0 */ // 0x8088AB2C
    FUN_8089A2C0(r4, r3); // bl 0x8089A2C0
    r12 = *(0 + r23); // lwz @ 0x8088AB34
    r31 = r3;
    r3 = r23;
    r12 = *(0x158 + r12); // lwz @ 0x8088AB40
    r4 = r31;
    /* mtctr r12 */ // 0x8088AB48
    /* bctrl  */ // 0x8088AB4C
    if (!=) goto 0x0x8088ab7c;
    /* fmr f1, f31 */ // 0x8088AB58
    r3 = *(0xac + r23); // lwz @ 0x8088AB5C
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084B90C(r4, r5, r6, r7, r8); // bl 0x8084B90C
    /* b 0x8088ac40 */ // 0x8088AB78
    /* fmr f1, f31 */ // 0x8088AB7C
    r3 = *(0xac + r23); // lwz @ 0x8088AB80
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    /* li r31, 1 */ // 0x8088AB98
    /* li r30, 1 */ // 0x8088AB9C
    FUN_8084B90C(r6, r7, r8); // bl 0x8084B90C
    if (!=) goto 0x0x8088abf0;
    r3 = *(0x16c + r23); // lwz @ 0x8088ABAC
    /* li r29, 0 */ // 0x8088ABB0
    if (==) goto 0x0x8088abe4;
    /* fmr f1, f31 */ // 0x8088ABBC
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084B90C(r4, r5, r6, r7, r8); // bl 0x8084B90C
    if (==) goto 0x0x8088abe4;
    /* li r29, 1 */ // 0x8088ABE0
    if (!=) goto 0x0x8088abf0;
    /* li r30, 0 */ // 0x8088ABEC
    if (!=) goto 0x0x8088ac3c;
    r3 = *(0x170 + r23); // lwz @ 0x8088ABF8
    /* li r29, 0 */ // 0x8088ABFC
    if (==) goto 0x0x8088ac30;
    /* fmr f1, f31 */ // 0x8088AC08
    r4 = r24;
    r5 = r25;
    r6 = r26;
    r7 = r27;
    r8 = r28;
    FUN_8084B90C(r4, r5, r6, r7, r8); // bl 0x8084B90C
    if (==) goto 0x0x8088ac30;
    /* li r29, 1 */ // 0x8088AC2C
    if (!=) goto 0x0x8088ac3c;
    /* li r31, 0 */ // 0x8088AC38
    r3 = r31;
    /* lfd f31, 0x38(r1) */ // 0x8088AC40
    r0 = *(0x44 + r1); // lwz @ 0x8088AC48
    return;
}