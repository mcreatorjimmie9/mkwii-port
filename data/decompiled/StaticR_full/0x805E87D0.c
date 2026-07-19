/* Function at 0x805E87D0, size=256 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_805E87D0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r30, 0 */ // 0x805E87E4
    *(0x14 + r1) = r29; // stw @ 0x805E87E8
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x805E87F0
    r28 = r5;
    r31 = *(0xc + r3); // lwz @ 0x805E87F8
    if (==) goto 0x0x805e8834;
    /* lis r4, 0 */ // 0x805E8804
    r3 = r31;
    r4 = r4 + 0; // 0x805E880C
    *(0xc + r1) = r4; // stw @ 0x805E8810
    r12 = *(0 + r31); // lwz @ 0x805E8818
    r12 = *(8 + r12); // lwz @ 0x805E881C
    /* mtctr r12 */ // 0x805E8820
    /* bctrl  */ // 0x805E8824
    if (==) goto 0x0x805e8834;
    /* li r30, 1 */ // 0x805E8830
    if (==) goto 0x0x805e8840;
    /* b 0x805e8844 */ // 0x805E883C
    /* li r31, 0 */ // 0x805E8840
    r30 = *(0xc + r29); // lwz @ 0x805E8844
    /* li r29, 0 */ // 0x805E8848
    if (==) goto 0x0x805e8884;
    /* lis r4, 0 */ // 0x805E8854
    r3 = r30;
    r4 = r4 + 0; // 0x805E885C
    *(8 + r1) = r4; // stw @ 0x805E8860
    r12 = *(0 + r30); // lwz @ 0x805E8868
    r12 = *(8 + r12); // lwz @ 0x805E886C
    /* mtctr r12 */ // 0x805E8870
    /* bctrl  */ // 0x805E8874
    if (==) goto 0x0x805e8884;
    /* li r29, 1 */ // 0x805E8880
    r3 = r31;
    r4 = r28;
    if (==) goto 0x0x805e889c;
    r5 = r30;
    /* b 0x805e88a0 */ // 0x805E8898
    /* li r5, 0 */ // 0x805E889C
    r12 = *(0 + r3); // lwz @ 0x805E88A0
    r12 = *(0x3c + r12); // lwz @ 0x805E88A4
    /* mtctr r12 */ // 0x805E88A8
    /* bctrl  */ // 0x805E88AC
    r0 = *(0x24 + r1); // lwz @ 0x805E88B0
    r31 = *(0x1c + r1); // lwz @ 0x805E88B4
    r30 = *(0x18 + r1); // lwz @ 0x805E88B8
    r29 = *(0x14 + r1); // lwz @ 0x805E88BC
    r28 = *(0x10 + r1); // lwz @ 0x805E88C0
    return;
}