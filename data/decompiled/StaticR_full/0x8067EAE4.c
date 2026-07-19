/* Function at 0x8067EAE4, size=224 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8067EAE4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x8067EAEC
    /* stfd f31, 0x18(r1) */ // 0x8067EAF4
    /* fmr f31, f1 */ // 0x8067EAF8
    *(0x14 + r1) = r31; // stw @ 0x8067EAFC
    *(0x10 + r1) = r30; // stw @ 0x8067EB00
    *(0xc + r1) = r29; // stw @ 0x8067EB04
    r29 = r3;
    r4 = *(0 + r4); // lwz @ 0x8067EB0C
    r3 = *(0 + r4); // lwz @ 0x8067EB10
    r30 = *(0x2c0 + r3); // lwz @ 0x8067EB14
    if (!=) goto 0x0x8067eb28;
    /* li r30, 0 */ // 0x8067EB20
    /* b 0x8067eb7c */ // 0x8067EB24
    /* lis r31, 0 */ // 0x8067EB28
    r31 = r31 + 0; // 0x8067EB2C
    if (==) goto 0x0x8067eb78;
    r12 = *(0 + r30); // lwz @ 0x8067EB34
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x8067EB3C
    /* mtctr r12 */ // 0x8067EB40
    /* bctrl  */ // 0x8067EB44
    /* b 0x8067eb60 */ // 0x8067EB48
    if (!=) goto 0x0x8067eb5c;
    /* li r0, 1 */ // 0x8067EB54
    /* b 0x8067eb6c */ // 0x8067EB58
    r3 = *(0 + r3); // lwz @ 0x8067EB5C
    if (!=) goto 0x0x8067eb4c;
    /* li r0, 0 */ // 0x8067EB68
    if (==) goto 0x0x8067eb78;
    /* b 0x8067eb7c */ // 0x8067EB74
    /* li r30, 0 */ // 0x8067EB78
    r4 = *(0x1b78 + r29); // lwz @ 0x8067EB7C
    r3 = r30;
    r5 = *(0x1b74 + r29); // lwz @ 0x8067EB84
    FUN_806D5AFC(r3); // bl 0x806D5AFC
    /* fmr f1, f31 */ // 0x8067EB8C
    /* li r0, 0xae */ // 0x8067EB90
    *(0x1b70 + r29) = r0; // stw @ 0x8067EB94
    r3 = r29;
    /* li r4, 0 */ // 0x8067EB9C
    FUN_80671C48(r3, r4); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x8067EBA4
    /* lfd f31, 0x18(r1) */ // 0x8067EBA8
    r31 = *(0x14 + r1); // lwz @ 0x8067EBAC
    r30 = *(0x10 + r1); // lwz @ 0x8067EBB0
    r29 = *(0xc + r1); // lwz @ 0x8067EBB4
    return;
}