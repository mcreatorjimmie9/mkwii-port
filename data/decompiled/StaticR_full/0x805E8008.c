/* Function at 0x805E8008, size=256 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_805E8008(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r30, 0 */ // 0x805E801C
    *(0x14 + r1) = r29; // stw @ 0x805E8020
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x805E8028
    r28 = r5;
    r31 = *(0xc + r3); // lwz @ 0x805E8030
    if (==) goto 0x0x805e806c;
    /* lis r4, 0 */ // 0x805E803C
    r3 = r31;
    r4 = r4 + 0; // 0x805E8044
    *(0xc + r1) = r4; // stw @ 0x805E8048
    r12 = *(0 + r31); // lwz @ 0x805E8050
    r12 = *(8 + r12); // lwz @ 0x805E8054
    /* mtctr r12 */ // 0x805E8058
    /* bctrl  */ // 0x805E805C
    if (==) goto 0x0x805e806c;
    /* li r30, 1 */ // 0x805E8068
    if (==) goto 0x0x805e8078;
    /* b 0x805e807c */ // 0x805E8074
    /* li r31, 0 */ // 0x805E8078
    r30 = *(0xc + r29); // lwz @ 0x805E807C
    /* li r29, 0 */ // 0x805E8080
    if (==) goto 0x0x805e80bc;
    /* lis r4, 0 */ // 0x805E808C
    r3 = r30;
    r4 = r4 + 0; // 0x805E8094
    *(8 + r1) = r4; // stw @ 0x805E8098
    r12 = *(0 + r30); // lwz @ 0x805E80A0
    r12 = *(8 + r12); // lwz @ 0x805E80A4
    /* mtctr r12 */ // 0x805E80A8
    /* bctrl  */ // 0x805E80AC
    if (==) goto 0x0x805e80bc;
    /* li r29, 1 */ // 0x805E80B8
    r3 = r31;
    r4 = r28;
    if (==) goto 0x0x805e80d4;
    r5 = r30;
    /* b 0x805e80d8 */ // 0x805E80D0
    /* li r5, 0 */ // 0x805E80D4
    r12 = *(0 + r3); // lwz @ 0x805E80D8
    r12 = *(0x3c + r12); // lwz @ 0x805E80DC
    /* mtctr r12 */ // 0x805E80E0
    /* bctrl  */ // 0x805E80E4
    r0 = *(0x24 + r1); // lwz @ 0x805E80E8
    r31 = *(0x1c + r1); // lwz @ 0x805E80EC
    r30 = *(0x18 + r1); // lwz @ 0x805E80F0
    r29 = *(0x14 + r1); // lwz @ 0x805E80F4
    r28 = *(0x10 + r1); // lwz @ 0x805E80F8
    return;
}