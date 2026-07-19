/* Function at 0x80751A80, size=336 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80751A80(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x80751A88
    /* lis r5, 0x51ec */ // 0x80751A8C
    *(0x14 + r1) = r0; // stw @ 0x80751A90
    r0 = r5 + -0x7ae1; // 0x80751A94
    *(0xc + r1) = r31; // stw @ 0x80751A98
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80751AA0
    r30 = r3;
    r6 = *(0 + r6); // lwz @ 0x80751AA8
    r4 = *(0x20 + r6); // lwz @ 0x80751AAC
    /* li r6, 0 */ // 0x80751AB0
    r0 = r0 * r4; // 0x80751AB4
    /* srwi r0, r0, 7 */ // 0x80751AB8
    /* mulli r0, r0, 0x190 */ // 0x80751ABC
    /* subf r7, r0, r4 */ // 0x80751AC0
    /* xori r5, r7, 0x14 */ // 0x80751AC4
    /* andi. r4, r5, 0x14 */ // 0x80751AC8
    r0 = r7 + -0x28; // 0x80751ACC
    r5 = r5 >> 1; // srawi
    /* subf r0, r4, r5 */ // 0x80751AD8
    /* srwi r5, r0, 0x1f */ // 0x80751ADC
    if (>) goto 0x0x80751ae8;
    /* li r6, 1 */ // 0x80751AE4
    r0 = r7 + -0x50; // 0x80751AE8
    /* li r4, 0 */ // 0x80751AEC
    if (>) goto 0x0x80751afc;
    /* li r4, 1 */ // 0x80751AF8
    r0 = *(0x100 + r3); // lbz @ 0x80751AFC
    if (==) goto 0x0x80751b78;
    if (!=) goto 0x0x80751b20;
    if (!=) goto 0x0x80751b20;
    if (==) goto 0x0x80751b78;
    r3 = *(0xe8 + r3); // lwz @ 0x80751B20
    r12 = *(0 + r3); // lwz @ 0x80751B24
    r12 = *(0xc + r12); // lwz @ 0x80751B28
    /* mtctr r12 */ // 0x80751B2C
    /* bctrl  */ // 0x80751B30
    r3 = *(0xe8 + r30); // lwz @ 0x80751B34
    r4 = r31;
    r12 = *(0 + r3); // lwz @ 0x80751B3C
    r12 = *(0x78 + r12); // lwz @ 0x80751B40
    /* mtctr r12 */ // 0x80751B44
    /* bctrl  */ // 0x80751B48
    r3 = *(0xe8 + r30); // lwz @ 0x80751B4C
    r12 = *(0 + r3); // lwz @ 0x80751B50
    r12 = *(0x80 + r12); // lwz @ 0x80751B54
    /* mtctr r12 */ // 0x80751B58
    /* bctrl  */ // 0x80751B5C
    /* lis r4, 0 */ // 0x80751B60
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x80751B68
    /* li r4, 0x273 */ // 0x80751B6C
    FUN_808A0AC8(r4, r3, r4); // bl 0x808A0AC8
    /* b 0x80751bb8 */ // 0x80751B74
    r3 = *(0xe8 + r3); // lwz @ 0x80751B78
    r12 = *(0 + r3); // lwz @ 0x80751B7C
    r12 = *(0x14 + r12); // lwz @ 0x80751B80
    /* mtctr r12 */ // 0x80751B84
    /* bctrl  */ // 0x80751B88
    r3 = *(0xe8 + r30); // lwz @ 0x80751B8C
    r4 = r31;
    r12 = *(0 + r3); // lwz @ 0x80751B94
    r12 = *(0x78 + r12); // lwz @ 0x80751B98
    /* mtctr r12 */ // 0x80751B9C
    /* bctrl  */ // 0x80751BA0
    r3 = *(0xe8 + r30); // lwz @ 0x80751BA4
    r12 = *(0 + r3); // lwz @ 0x80751BA8
    r12 = *(0x80 + r12); // lwz @ 0x80751BAC
    /* mtctr r12 */ // 0x80751BB0
    /* bctrl  */ // 0x80751BB4
    r0 = *(0x14 + r1); // lwz @ 0x80751BB8
    r31 = *(0xc + r1); // lwz @ 0x80751BBC
    r30 = *(8 + r1); // lwz @ 0x80751BC0
    return;
}