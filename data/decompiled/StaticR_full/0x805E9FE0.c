/* Function at 0x805E9FE0, size=256 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_805E9FE0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r30, 0 */ // 0x805E9FF4
    *(0x14 + r1) = r29; // stw @ 0x805E9FF8
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x805EA000
    r28 = r5;
    r31 = *(0xc + r3); // lwz @ 0x805EA008
    if (==) goto 0x0x805ea044;
    /* lis r4, 0 */ // 0x805EA014
    r3 = r31;
    r4 = r4 + 0; // 0x805EA01C
    *(0xc + r1) = r4; // stw @ 0x805EA020
    r12 = *(0 + r31); // lwz @ 0x805EA028
    r12 = *(8 + r12); // lwz @ 0x805EA02C
    /* mtctr r12 */ // 0x805EA030
    /* bctrl  */ // 0x805EA034
    if (==) goto 0x0x805ea044;
    /* li r30, 1 */ // 0x805EA040
    if (==) goto 0x0x805ea050;
    /* b 0x805ea054 */ // 0x805EA04C
    /* li r31, 0 */ // 0x805EA050
    r30 = *(0xc + r29); // lwz @ 0x805EA054
    /* li r29, 0 */ // 0x805EA058
    if (==) goto 0x0x805ea094;
    /* lis r4, 0 */ // 0x805EA064
    r3 = r30;
    r4 = r4 + 0; // 0x805EA06C
    *(8 + r1) = r4; // stw @ 0x805EA070
    r12 = *(0 + r30); // lwz @ 0x805EA078
    r12 = *(8 + r12); // lwz @ 0x805EA07C
    /* mtctr r12 */ // 0x805EA080
    /* bctrl  */ // 0x805EA084
    if (==) goto 0x0x805ea094;
    /* li r29, 1 */ // 0x805EA090
    r3 = r31;
    r4 = r28;
    if (==) goto 0x0x805ea0ac;
    r5 = r30;
    /* b 0x805ea0b0 */ // 0x805EA0A8
    /* li r5, 0 */ // 0x805EA0AC
    r12 = *(0 + r3); // lwz @ 0x805EA0B0
    r12 = *(0x3c + r12); // lwz @ 0x805EA0B4
    /* mtctr r12 */ // 0x805EA0B8
    /* bctrl  */ // 0x805EA0BC
    r0 = *(0x24 + r1); // lwz @ 0x805EA0C0
    r31 = *(0x1c + r1); // lwz @ 0x805EA0C4
    r30 = *(0x18 + r1); // lwz @ 0x805EA0C8
    r29 = *(0x14 + r1); // lwz @ 0x805EA0CC
    r28 = *(0x10 + r1); // lwz @ 0x805EA0D0
    return;
}