/* Function at 0x805E9760, size=256 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_805E9760(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r30, 0 */ // 0x805E9774
    *(0x14 + r1) = r29; // stw @ 0x805E9778
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x805E9780
    r28 = r5;
    r31 = *(0xc + r3); // lwz @ 0x805E9788
    if (==) goto 0x0x805e97c4;
    /* lis r4, 0 */ // 0x805E9794
    r3 = r31;
    r4 = r4 + 0; // 0x805E979C
    *(0xc + r1) = r4; // stw @ 0x805E97A0
    r12 = *(0 + r31); // lwz @ 0x805E97A8
    r12 = *(8 + r12); // lwz @ 0x805E97AC
    /* mtctr r12 */ // 0x805E97B0
    /* bctrl  */ // 0x805E97B4
    if (==) goto 0x0x805e97c4;
    /* li r30, 1 */ // 0x805E97C0
    if (==) goto 0x0x805e97d0;
    /* b 0x805e97d4 */ // 0x805E97CC
    /* li r31, 0 */ // 0x805E97D0
    r30 = *(0xc + r29); // lwz @ 0x805E97D4
    /* li r29, 0 */ // 0x805E97D8
    if (==) goto 0x0x805e9814;
    /* lis r4, 0 */ // 0x805E97E4
    r3 = r30;
    r4 = r4 + 0; // 0x805E97EC
    *(8 + r1) = r4; // stw @ 0x805E97F0
    r12 = *(0 + r30); // lwz @ 0x805E97F8
    r12 = *(8 + r12); // lwz @ 0x805E97FC
    /* mtctr r12 */ // 0x805E9800
    /* bctrl  */ // 0x805E9804
    if (==) goto 0x0x805e9814;
    /* li r29, 1 */ // 0x805E9810
    r3 = r31;
    r4 = r28;
    if (==) goto 0x0x805e982c;
    r5 = r30;
    /* b 0x805e9830 */ // 0x805E9828
    /* li r5, 0 */ // 0x805E982C
    r12 = *(0 + r3); // lwz @ 0x805E9830
    r12 = *(0x3c + r12); // lwz @ 0x805E9834
    /* mtctr r12 */ // 0x805E9838
    /* bctrl  */ // 0x805E983C
    r0 = *(0x24 + r1); // lwz @ 0x805E9840
    r31 = *(0x1c + r1); // lwz @ 0x805E9844
    r30 = *(0x18 + r1); // lwz @ 0x805E9848
    r29 = *(0x14 + r1); // lwz @ 0x805E984C
    r28 = *(0x10 + r1); // lwz @ 0x805E9850
    return;
}