/* Function at 0x805EA3FC, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */

int FUN_805EA3FC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18 + r1) = r30; // stw @ 0x805EA40C
    /* li r30, 0 */ // 0x805EA410
    r31 = *(0xc + r3); // lwz @ 0x805EA414
    if (==) goto 0x0x805ea450;
    /* lis r4, 0 */ // 0x805EA420
    r3 = r31;
    r4 = r4 + 0; // 0x805EA428
    *(8 + r1) = r4; // stw @ 0x805EA42C
    r12 = *(0 + r31); // lwz @ 0x805EA434
    r12 = *(8 + r12); // lwz @ 0x805EA438
    /* mtctr r12 */ // 0x805EA43C
    /* bctrl  */ // 0x805EA440
    if (==) goto 0x0x805ea450;
    /* li r30, 1 */ // 0x805EA44C
    if (==) goto 0x0x805ea460;
    r3 = r31;
    /* b 0x805ea464 */ // 0x805EA45C
    /* li r3, 0 */ // 0x805EA460
    r12 = *(0 + r3); // lwz @ 0x805EA464
    r12 = *(0x44 + r12); // lwz @ 0x805EA468
    /* mtctr r12 */ // 0x805EA46C
    /* bctrl  */ // 0x805EA470
    r0 = *(0x24 + r1); // lwz @ 0x805EA474
    r31 = *(0x1c + r1); // lwz @ 0x805EA478
    r30 = *(0x18 + r1); // lwz @ 0x805EA47C
    return;
}