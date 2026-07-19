/* Function at 0x806DA864, size=280 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_806DA864(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806DA86C
    *(0xd8 + r1) = r30; // stw @ 0x806DA878
    *(0xd4 + r1) = r29; // stw @ 0x806DA87C
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806DA884
    r3 = *(0 + r3); // lwz @ 0x806DA888
    r30 = *(0x14c + r3); // lwz @ 0x806DA88C
    if (!=) goto 0x0x806da8a0;
    /* li r30, 0 */ // 0x806DA898
    /* b 0x806da8f4 */ // 0x806DA89C
    /* lis r31, 0 */ // 0x806DA8A0
    r31 = r31 + 0; // 0x806DA8A4
    if (==) goto 0x0x806da8f0;
    r12 = *(0 + r30); // lwz @ 0x806DA8AC
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806DA8B4
    /* mtctr r12 */ // 0x806DA8B8
    /* bctrl  */ // 0x806DA8BC
    /* b 0x806da8d8 */ // 0x806DA8C0
    if (!=) goto 0x0x806da8d4;
    /* li r0, 1 */ // 0x806DA8CC
    /* b 0x806da8e4 */ // 0x806DA8D0
    r3 = *(0 + r3); // lwz @ 0x806DA8D4
    if (!=) goto 0x0x806da8c4;
    /* li r0, 0 */ // 0x806DA8E0
    if (==) goto 0x0x806da8f0;
    /* b 0x806da8f4 */ // 0x806DA8EC
    /* li r30, 0 */ // 0x806DA8F0
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x806DA8FC
    r3 = *(0 + r3); // lwz @ 0x806DA900
    FUN_806F590C(r3, r3); // bl 0x806F590C
    *(8 + r1) = r3; // stw @ 0x806DA908
    r3 = r30;
    r12 = *(0 + r30); // lwz @ 0x806DA910
    r12 = *(0x64 + r12); // lwz @ 0x806DA914
    /* mtctr r12 */ // 0x806DA918
    /* bctrl  */ // 0x806DA91C
    r12 = *(0 + r30); // lwz @ 0x806DA920
    r3 = r30;
    /* li r4, 0x17e0 */ // 0x806DA92C
    r12 = *(0x68 + r12); // lwz @ 0x806DA930
    /* mtctr r12 */ // 0x806DA934
    /* bctrl  */ // 0x806DA938
    r12 = *(0 + r29); // lwz @ 0x806DA93C
    r3 = r29;
    /* li r4, 0x51 */ // 0x806DA944
    /* li r5, 0 */ // 0x806DA948
    r12 = *(0x24 + r12); // lwz @ 0x806DA94C
    /* mtctr r12 */ // 0x806DA950
    /* bctrl  */ // 0x806DA954
    /* li r0, 0x10 */ // 0x806DA958
    *(0x2874 + r29) = r0; // stw @ 0x806DA95C
    r31 = *(0xdc + r1); // lwz @ 0x806DA960
    r30 = *(0xd8 + r1); // lwz @ 0x806DA964
    r29 = *(0xd4 + r1); // lwz @ 0x806DA968
    r0 = *(0xe4 + r1); // lwz @ 0x806DA96C
    return;
}