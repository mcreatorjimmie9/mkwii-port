/* Function at 0x808BE25C, size=304 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808BE25C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r3 = r3 + 0x24; // 0x808BE264
    r0 = r4 + -2; // 0x808BE26C
    /* cntlzw r0, r0 */ // 0x808BE270
    *(0xc + r1) = r31; // stw @ 0x808BE274
    /* srwi r4, r0, 5 */ // 0x808BE278
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x808BE280
    r30 = r6;
    r4 = r4 + 1; // 0x808BE288
    FUN_8064E1CC(r4); // bl 0x8064E1CC
    r4 = r31;
    r3 = r3 + 0x68; // 0x808BE294
    FUN_8064E1CC(r4, r4, r3); // bl 0x8064E1CC
    r4 = r30;
    r3 = r3 + 0x68; // 0x808BE2A0
    FUN_8064E1CC(r4, r3, r4, r3); // bl 0x8064E1CC
    r30 = r3;
    if (!=) goto 0x0x808be2bc;
    /* li r30, 0 */ // 0x808BE2B4
    /* b 0x808be30c */ // 0x808BE2B8
    /* lis r31, 0 */ // 0x808BE2BC
    r31 = r31 + 0; // 0x808BE2C0
    if (==) goto 0x0x808be308;
    r12 = *(0 + r3); // lwz @ 0x808BE2C8
    r12 = *(0x28 + r12); // lwz @ 0x808BE2CC
    /* mtctr r12 */ // 0x808BE2D0
    /* bctrl  */ // 0x808BE2D4
    /* b 0x808be2f0 */ // 0x808BE2D8
    if (!=) goto 0x0x808be2ec;
    /* li r0, 1 */ // 0x808BE2E4
    /* b 0x808be2fc */ // 0x808BE2E8
    r3 = *(0 + r3); // lwz @ 0x808BE2EC
    if (!=) goto 0x0x808be2dc;
    /* li r0, 0 */ // 0x808BE2F8
    if (==) goto 0x0x808be308;
    /* b 0x808be30c */ // 0x808BE304
    /* li r30, 0 */ // 0x808BE308
    if (!=) goto 0x0x808be31c;
    /* li r30, 0 */ // 0x808BE314
    /* b 0x808be370 */ // 0x808BE318
    /* lis r31, 0 */ // 0x808BE31C
    r31 = r31 + 0; // 0x808BE320
    if (==) goto 0x0x808be36c;
    r12 = *(0 + r30); // lwz @ 0x808BE328
    r3 = r30;
    r12 = *(0x28 + r12); // lwz @ 0x808BE330
    /* mtctr r12 */ // 0x808BE334
    /* bctrl  */ // 0x808BE338
    /* b 0x808be354 */ // 0x808BE33C
    if (!=) goto 0x0x808be350;
    /* li r0, 1 */ // 0x808BE348
    /* b 0x808be360 */ // 0x808BE34C
    r3 = *(0 + r3); // lwz @ 0x808BE350
    if (!=) goto 0x0x808be340;
    /* li r0, 0 */ // 0x808BE35C
    if (==) goto 0x0x808be36c;
    /* b 0x808be370 */ // 0x808BE368
    /* li r30, 0 */ // 0x808BE36C
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808BE374
    r30 = *(8 + r1); // lwz @ 0x808BE378
    r0 = *(0x14 + r1); // lwz @ 0x808BE37C
    return;
}