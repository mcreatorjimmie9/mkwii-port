/* Function at 0x808C32E8, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808C32E8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808C32F0
    /* slwi r0, r3, 2 */ // 0x808C32F8
    *(0xc + r1) = r31; // stw @ 0x808C32FC
    *(8 + r1) = r30; // stw @ 0x808C3300
    r3 = *(0 + r4); // lwz @ 0x808C3304
    r3 = *(0 + r3); // lwz @ 0x808C3308
    r3 = r3 + r0; // 0x808C330C
    r30 = *(8 + r3); // lwz @ 0x808C3310
    if (!=) goto 0x0x808c3324;
    /* li r30, 0 */ // 0x808C331C
    /* b 0x808c3378 */ // 0x808C3320
    /* lis r31, 0 */ // 0x808C3324
    r31 = r31 + 0; // 0x808C3328
    if (==) goto 0x0x808c3374;
    r12 = *(0 + r30); // lwz @ 0x808C3330
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808C3338
    /* mtctr r12 */ // 0x808C333C
    /* bctrl  */ // 0x808C3340
    /* b 0x808c335c */ // 0x808C3344
    if (!=) goto 0x0x808c3358;
    /* li r0, 1 */ // 0x808C3350
    /* b 0x808c3368 */ // 0x808C3354
    r3 = *(0 + r3); // lwz @ 0x808C3358
    if (!=) goto 0x0x808c3348;
    /* li r0, 0 */ // 0x808C3364
    if (==) goto 0x0x808c3374;
    /* b 0x808c3378 */ // 0x808C3370
    /* li r30, 0 */ // 0x808C3374
    if (!=) goto 0x0x808c3388;
    /* li r30, 0 */ // 0x808C3380
    /* b 0x808c33dc */ // 0x808C3384
    /* lis r31, 0 */ // 0x808C3388
    r31 = r31 + 0; // 0x808C338C
    if (==) goto 0x0x808c33d8;
    r12 = *(0 + r30); // lwz @ 0x808C3394
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808C339C
    /* mtctr r12 */ // 0x808C33A0
    /* bctrl  */ // 0x808C33A4
    /* b 0x808c33c0 */ // 0x808C33A8
    if (!=) goto 0x0x808c33bc;
    /* li r0, 1 */ // 0x808C33B4
    /* b 0x808c33cc */ // 0x808C33B8
    r3 = *(0 + r3); // lwz @ 0x808C33BC
    if (!=) goto 0x0x808c33ac;
    /* li r0, 0 */ // 0x808C33C8
    if (==) goto 0x0x808c33d8;
    /* b 0x808c33dc */ // 0x808C33D4
    /* li r30, 0 */ // 0x808C33D8
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808C33E0
    r30 = *(8 + r1); // lwz @ 0x808C33E4
    r0 = *(0x14 + r1); // lwz @ 0x808C33E8
    return;
}