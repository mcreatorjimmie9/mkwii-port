/* Function at 0x8088A9E8, size=232 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 5 function(s) */

int FUN_8088A9E8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* lis r7, 0 */ // 0x8088A9F0
    *(0x34 + r1) = r0; // stw @ 0x8088A9F4
    /* stfd f31, 0x28(r1) */ // 0x8088A9F8
    /* fmr f31, f1 */ // 0x8088A9FC
    /* stmw r27, 0x14(r1) */ // 0x8088AA00
    r28 = r4;
    r27 = r3;
    r29 = r5;
    r30 = r6;
    r7 = *(0 + r7); // lwz @ 0x8088AA14
    r4 = *(0x20 + r7); // lwz @ 0x8088AA18
    FUN_8089A2C0(); // bl 0x8089A2C0
    r12 = *(0 + r27); // lwz @ 0x8088AA20
    r31 = r3;
    r3 = r27;
    r12 = *(0x158 + r12); // lwz @ 0x8088AA2C
    r4 = r31;
    /* mtctr r12 */ // 0x8088AA34
    /* bctrl  */ // 0x8088AA38
    if (!=) goto 0x0x8088aa60;
    /* fmr f1, f31 */ // 0x8088AA44
    r3 = *(0xac + r27); // lwz @ 0x8088AA48
    r4 = r28;
    r5 = r29;
    r6 = r30;
    FUN_8084A408(r4, r5, r6); // bl 0x8084A408
    /* b 0x8088aab8 */ // 0x8088AA5C
    /* fmr f1, f31 */ // 0x8088AA60
    r3 = *(0xac + r27); // lwz @ 0x8088AA64
    r4 = r28;
    r5 = r29;
    r6 = r30;
    FUN_8084A408(r4, r5, r6); // bl 0x8084A408
    r3 = *(0x16c + r27); // lwz @ 0x8088AA78
    if (==) goto 0x0x8088aa98;
    /* fmr f1, f31 */ // 0x8088AA84
    r4 = r28;
    r5 = r29;
    r6 = r30;
    FUN_8084A408(r4, r5, r6); // bl 0x8084A408
    r3 = *(0x170 + r27); // lwz @ 0x8088AA98
    if (==) goto 0x0x8088aab8;
    /* fmr f1, f31 */ // 0x8088AAA4
    r4 = r28;
    r5 = r29;
    r6 = r30;
    FUN_8084A408(r4, r5, r6); // bl 0x8084A408
    /* lfd f31, 0x28(r1) */ // 0x8088AAB8
    r0 = *(0x34 + r1); // lwz @ 0x8088AAC0
    return;
}