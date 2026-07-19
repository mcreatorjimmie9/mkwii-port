/* Function at 0x805B29F8, size=372 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_805B29F8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r4;
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x805B2A14
    *(0x10 + r1) = r28; // stw @ 0x805B2A18
    r0 = *(0x14 + r3); // lwz @ 0x805B2A1C
    if (!=) goto 0x0x805b2b4c;
    r29 = *(8 + r3); // lwz @ 0x805B2A28
    /* li r28, 0 */ // 0x805B2A2C
    if (>=) goto 0x0x805b2a48;
    /* li r0, 0 */ // 0x805B2A38
    *(8 + r3) = r0; // stw @ 0x805B2A3C
    /* li r28, 1 */ // 0x805B2A40
    /* b 0x805b2ad0 */ // 0x805B2A44
    if (>=) goto 0x0x805b2a54;
    /* li r4, 0 */ // 0x805B2A4C
    /* b 0x805b2a70 */ // 0x805B2A50
    r12 = *(0 + r3); // lwz @ 0x805B2A54
    r12 = *(0x10 + r12); // lwz @ 0x805B2A58
    /* mtctr r12 */ // 0x805B2A5C
    /* bctrl  */ // 0x805B2A60
    r3 = r29 * r3; // 0x805B2A64
    r0 = *(4 + r30); // lwz @ 0x805B2A68
    r4 = r0 + r3; // 0x805B2A6C
    r12 = *(0 + r30); // lwz @ 0x805B2A70
    r3 = r30;
    r5 = r31;
    r12 = *(0x1c + r12); // lwz @ 0x805B2A7C
    /* mtctr r12 */ // 0x805B2A80
    /* bctrl  */ // 0x805B2A84
    if (==) goto 0x0x805b2ad0;
    r4 = *(8 + r30); // lwz @ 0x805B2A90
    r3 = r30;
    /* li r28, 1 */ // 0x805B2A98
    r0 = r4 + 1; // 0x805B2A9C
    *(8 + r30) = r0; // stw @ 0x805B2AA0
    r12 = *(0 + r30); // lwz @ 0x805B2AA4
    r12 = *(0x10 + r12); // lwz @ 0x805B2AA8
    /* mtctr r12 */ // 0x805B2AAC
    /* bctrl  */ // 0x805B2AB0
    r4 = *(8 + r30); // lwz @ 0x805B2AB4
    r0 = *(0xc + r30); // lwz @ 0x805B2AB8
    r3 = r4 * r3; // 0x805B2ABC
    if (<=) goto 0x0x805b2ad0;
    /* li r0, 2 */ // 0x805B2AC8
    *(0x14 + r30) = r0; // stw @ 0x805B2ACC
    r0 = *(0x14 + r30); // lwz @ 0x805B2AD0
    if (!=) goto 0x0x805b2b4c;
    r29 = *(8 + r30); // lwz @ 0x805B2ADC
    if (>=) goto 0x0x805b2af0;
    /* li r29, 0 */ // 0x805B2AE8
    /* b 0x805b2b10 */ // 0x805B2AEC
    r12 = *(0 + r30); // lwz @ 0x805B2AF0
    r3 = r30;
    r12 = *(0x10 + r12); // lwz @ 0x805B2AF8
    /* mtctr r12 */ // 0x805B2AFC
    /* bctrl  */ // 0x805B2B00
    r3 = r29 * r3; // 0x805B2B04
    r0 = *(4 + r30); // lwz @ 0x805B2B08
    r29 = r0 + r3; // 0x805B2B0C
    if (==) goto 0x0x805b2b34;
    r12 = *(0 + r30); // lwz @ 0x805B2B18
    r3 = r30;
    r4 = r29;
    r5 = r31;
    r12 = *(0x14 + r12); // lwz @ 0x805B2B28
    /* mtctr r12 */ // 0x805B2B2C
    /* bctrl  */ // 0x805B2B30
    r12 = *(0 + r30); // lwz @ 0x805B2B34
    r3 = r30;
    r4 = r29;
    r12 = *(0x18 + r12); // lwz @ 0x805B2B40
    /* mtctr r12 */ // 0x805B2B44
    /* bctrl  */ // 0x805B2B48
    r0 = *(0x24 + r1); // lwz @ 0x805B2B4C
    r31 = *(0x1c + r1); // lwz @ 0x805B2B50
    r30 = *(0x18 + r1); // lwz @ 0x805B2B54
    r29 = *(0x14 + r1); // lwz @ 0x805B2B58
    r28 = *(0x10 + r1); // lwz @ 0x805B2B5C
    return;
}