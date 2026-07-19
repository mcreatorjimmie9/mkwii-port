/* Function at 0x808B4848, size=268 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */

int FUN_808B4848(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r6, 0 */ // 0x808B4850
    *(0x24 + r1) = r0; // stw @ 0x808B4854
    /* stmw r27, 0xc(r1) */ // 0x808B4858
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r3 = *(0 + r6); // lwz @ 0x808B4868
    r3 = *(0 + r3); // lwz @ 0x808B486C
    r30 = *(0x13c + r3); // lwz @ 0x808B4870
    if (!=) goto 0x0x808b4884;
    /* li r30, 0 */ // 0x808B487C
    /* b 0x808b48d8 */ // 0x808B4880
    /* lis r31, 0 */ // 0x808B4884
    r31 = r31 + 0; // 0x808B4888
    if (==) goto 0x0x808b48d4;
    r12 = *(0 + r30); // lwz @ 0x808B4890
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808B4898
    /* mtctr r12 */ // 0x808B489C
    /* bctrl  */ // 0x808B48A0
    /* b 0x808b48bc */ // 0x808B48A4
    if (!=) goto 0x0x808b48b8;
    /* li r0, 1 */ // 0x808B48B0
    /* b 0x808b48c8 */ // 0x808B48B4
    r3 = *(0 + r3); // lwz @ 0x808B48B8
    if (!=) goto 0x0x808b48a8;
    /* li r0, 0 */ // 0x808B48C4
    if (==) goto 0x0x808b48d4;
    /* b 0x808b48d8 */ // 0x808B48D0
    /* li r30, 0 */ // 0x808B48D4
    r12 = *(0 + r30); // lwz @ 0x808B48D8
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x808B48E0
    /* mtctr r12 */ // 0x808B48E4
    /* bctrl  */ // 0x808B48E8
    r12 = *(0 + r27); // lwz @ 0x808B48EC
    r3 = r27;
    r12 = *(0x68 + r12); // lwz @ 0x808B48F4
    /* mtctr r12 */ // 0x808B48F8
    /* bctrl  */ // 0x808B48FC
    *(0x1a0 + r30) = r3; // stw @ 0x808B4900
    r3 = r30;
    r4 = r28;
    r5 = r29;
    r12 = *(0 + r30); // lwz @ 0x808B4910
    r12 = *(0x68 + r12); // lwz @ 0x808B4914
    /* mtctr r12 */ // 0x808B4918
    /* bctrl  */ // 0x808B491C
    r12 = *(0 + r27); // lwz @ 0x808B4920
    r3 = r27;
    /* li r4, 0x4d */ // 0x808B4928
    /* li r5, 0 */ // 0x808B492C
    r12 = *(0x24 + r12); // lwz @ 0x808B4930
    /* mtctr r12 */ // 0x808B4934
    /* bctrl  */ // 0x808B4938
    r3 = r30;
    r0 = *(0x24 + r1); // lwz @ 0x808B4944
    return;
}