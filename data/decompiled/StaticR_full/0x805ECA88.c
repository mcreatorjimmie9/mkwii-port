/* Function at 0x805ECA88, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_805ECA88(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* cntlzw r0, r5 */ // 0x805ECA98
    *(0x1c + r1) = r31; // stw @ 0x805ECA9C
    /* srwi r31, r0, 5 */ // 0x805ECAA0
    *(0x18 + r1) = r30; // stw @ 0x805ECAA4
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805ECAAC
    r29 = r3;
    if (!=) goto 0x0x805ecb34;
    r12 = *(0 + r30); // lwz @ 0x805ECAB8
    r3 = r30;
    r5 = r31;
    /* li r4, 1 */ // 0x805ECAC4
    r12 = *(0x20 + r12); // lwz @ 0x805ECAC8
    /* mtctr r12 */ // 0x805ECACC
    /* bctrl  */ // 0x805ECAD0
    r0 = *(4 + r29); // lwz @ 0x805ECAD4
    /* rlwinm. r0, r0, 0, 6, 6 */ // 0x805ECAD8
    if (!=) goto 0x0x805ecafc;
    r12 = *(0 + r30); // lwz @ 0x805ECAE0
    r3 = r30;
    r5 = r31;
    /* li r4, 2 */ // 0x805ECAEC
    r12 = *(0x20 + r12); // lwz @ 0x805ECAF0
    /* mtctr r12 */ // 0x805ECAF4
    /* bctrl  */ // 0x805ECAF8
    r12 = *(0 + r30); // lwz @ 0x805ECAFC
    r3 = r30;
    r5 = r31;
    /* li r4, 3 */ // 0x805ECB08
    r12 = *(0x20 + r12); // lwz @ 0x805ECB0C
    /* mtctr r12 */ // 0x805ECB10
    /* bctrl  */ // 0x805ECB14
    r12 = *(0 + r30); // lwz @ 0x805ECB18
    r3 = r30;
    r5 = r31;
    /* li r4, 4 */ // 0x805ECB24
    r12 = *(0x20 + r12); // lwz @ 0x805ECB28
    /* mtctr r12 */ // 0x805ECB2C
    /* bctrl  */ // 0x805ECB30
    r12 = *(0 + r30); // lwz @ 0x805ECB34
    r3 = r30;
    r5 = r31;
    /* li r4, 5 */ // 0x805ECB40
    r12 = *(0x20 + r12); // lwz @ 0x805ECB44
    /* mtctr r12 */ // 0x805ECB48
    /* bctrl  */ // 0x805ECB4C
    r12 = *(0 + r30); // lwz @ 0x805ECB50
    r3 = r30;
    r5 = r31;
    /* li r4, 6 */ // 0x805ECB5C
    r12 = *(0x20 + r12); // lwz @ 0x805ECB60
    /* mtctr r12 */ // 0x805ECB64
    /* bctrl  */ // 0x805ECB68
    r12 = *(0 + r30); // lwz @ 0x805ECB6C
    r3 = r30;
    r5 = r31;
    /* li r4, 7 */ // 0x805ECB78
    r12 = *(0x20 + r12); // lwz @ 0x805ECB7C
    /* mtctr r12 */ // 0x805ECB80
    /* bctrl  */ // 0x805ECB84
    r0 = *(0x24 + r1); // lwz @ 0x805ECB88
    r31 = *(0x1c + r1); // lwz @ 0x805ECB8C
    r30 = *(0x18 + r1); // lwz @ 0x805ECB90
    r29 = *(0x14 + r1); // lwz @ 0x805ECB94
    return;
}