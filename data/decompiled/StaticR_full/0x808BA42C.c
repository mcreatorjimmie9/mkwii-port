/* Function at 0x808BA42C, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_808BA42C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x808BA434
    /* slwi r0, r3, 2 */ // 0x808BA43C
    *(0xc + r1) = r31; // stw @ 0x808BA440
    *(8 + r1) = r30; // stw @ 0x808BA444
    r3 = *(0 + r4); // lwz @ 0x808BA448
    r3 = *(0 + r3); // lwz @ 0x808BA44C
    r3 = r3 + r0; // 0x808BA450
    r30 = *(8 + r3); // lwz @ 0x808BA454
    if (!=) goto 0x0x808ba468;
    /* li r30, 0 */ // 0x808BA460
    /* b 0x808ba4bc */ // 0x808BA464
    /* lis r31, 0 */ // 0x808BA468
    r31 = r31 + 0; // 0x808BA46C
    if (==) goto 0x0x808ba4b8;
    r12 = *(0 + r30); // lwz @ 0x808BA474
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808BA47C
    /* mtctr r12 */ // 0x808BA480
    /* bctrl  */ // 0x808BA484
    /* b 0x808ba4a0 */ // 0x808BA488
    if (!=) goto 0x0x808ba49c;
    /* li r0, 1 */ // 0x808BA494
    /* b 0x808ba4ac */ // 0x808BA498
    r3 = *(0 + r3); // lwz @ 0x808BA49C
    if (!=) goto 0x0x808ba48c;
    /* li r0, 0 */ // 0x808BA4A8
    if (==) goto 0x0x808ba4b8;
    /* b 0x808ba4bc */ // 0x808BA4B4
    /* li r30, 0 */ // 0x808BA4B8
    if (!=) goto 0x0x808ba4cc;
    /* li r30, 0 */ // 0x808BA4C4
    /* b 0x808ba520 */ // 0x808BA4C8
    /* lis r31, 0 */ // 0x808BA4CC
    r31 = r31 + 0; // 0x808BA4D0
    if (==) goto 0x0x808ba51c;
    r12 = *(0 + r30); // lwz @ 0x808BA4D8
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808BA4E0
    /* mtctr r12 */ // 0x808BA4E4
    /* bctrl  */ // 0x808BA4E8
    /* b 0x808ba504 */ // 0x808BA4EC
    if (!=) goto 0x0x808ba500;
    /* li r0, 1 */ // 0x808BA4F8
    /* b 0x808ba510 */ // 0x808BA4FC
    r3 = *(0 + r3); // lwz @ 0x808BA500
    if (!=) goto 0x0x808ba4f0;
    /* li r0, 0 */ // 0x808BA50C
    if (==) goto 0x0x808ba51c;
    /* b 0x808ba520 */ // 0x808BA518
    /* li r30, 0 */ // 0x808BA51C
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808BA524
    r30 = *(8 + r1); // lwz @ 0x808BA528
    r0 = *(0x14 + r1); // lwz @ 0x808BA52C
    return;
}