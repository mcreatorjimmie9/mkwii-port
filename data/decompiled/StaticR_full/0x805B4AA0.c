/* Function at 0x805B4AA0, size=260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */

int FUN_805B4AA0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x805B4AAC
    r31 = r3;
    r29 = r5;
    r28 = r6;
    r27 = r7;
    r0 = *(0x14 + r3); // lwz @ 0x805B4AC0
    if (!=) goto 0x0x805b4b90;
    r3 = *(4 + r3); // lwz @ 0x805B4ACC
    r12 = *(0 + r3); // lwz @ 0x805B4AD0
    r12 = *(8 + r12); // lwz @ 0x805B4AD4
    /* mtctr r12 */ // 0x805B4AD8
    /* bctrl  */ // 0x805B4ADC
    r3 = *(8 + r31); // lwz @ 0x805B4AE0
    r0 = r29 rlwinm 4; // rlwinm
    r0 = r0 + r28; // 0x805B4AE8
    r12 = *(0 + r3); // lwz @ 0x805B4AEC
    /* clrlwi r4, r0, 0x18 */ // 0x805B4AF0
    r12 = *(8 + r12); // lwz @ 0x805B4AF4
    /* mtctr r12 */ // 0x805B4AF8
    /* bctrl  */ // 0x805B4AFC
    r3 = *(0xc + r31); // lwz @ 0x805B4B00
    r4 = r27;
    r12 = *(0 + r3); // lwz @ 0x805B4B08
    r12 = *(8 + r12); // lwz @ 0x805B4B0C
    /* mtctr r12 */ // 0x805B4B10
    /* bctrl  */ // 0x805B4B14
    r27 = r31;
    /* li r29, 0 */ // 0x805B4B1C
    /* li r30, 0 */ // 0x805B4B20
    r3 = *(4 + r27); // lwz @ 0x805B4B24
    r28 = *(8 + r3); // lwz @ 0x805B4B28
    if (>=) goto 0x0x805b4b3c;
    /* li r0, 0 */ // 0x805B4B34
    /* b 0x805b4b80 */ // 0x805B4B38
    r12 = *(0 + r3); // lwz @ 0x805B4B3C
    r12 = *(0x10 + r12); // lwz @ 0x805B4B40
    /* mtctr r12 */ // 0x805B4B44
    /* bctrl  */ // 0x805B4B48
    r0 = r28 + 1; // 0x805B4B4C
    r30 = r30 + 1; // 0x805B4B50
    r0 = r0 * r3; // 0x805B4B54
    r27 = r27 + 4; // 0x805B4B58
    r29 = r29 + r0; // 0x805B4B60
    if (<) goto 0x0x805b4b24;
    r0 = r29 + 6; // 0x805B4B68
    /* li r3, 0x276c */ // 0x805B4B6C
    /* xori r0, r0, 0x276c */ // 0x805B4B70
    /* cntlzw r0, r0 */ // 0x805B4B74
    r0 = r3 << r0; // slw
    /* srwi r0, r0, 0x1f */ // 0x805B4B7C
    if (!=) goto 0x0x805b4b90;
    /* li r0, 3 */ // 0x805B4B88
    *(0x14 + r31) = r0; // stw @ 0x805B4B8C
    r0 = *(0x24 + r1); // lwz @ 0x805B4B94
    return;
}