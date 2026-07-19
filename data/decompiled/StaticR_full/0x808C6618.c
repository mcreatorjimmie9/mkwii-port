/* Function at 0x808C6618, size=248 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_808C6618(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x808C6620
    *(0x18 + r1) = r30; // stw @ 0x808C662C
    *(0x14 + r1) = r29; // stw @ 0x808C6630
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x808C6638
    r3 = *(0 + r3); // lwz @ 0x808C663C
    r30 = *(0x13c + r3); // lwz @ 0x808C6640
    if (!=) goto 0x0x808c6654;
    /* li r30, 0 */ // 0x808C664C
    /* b 0x808c66a8 */ // 0x808C6650
    /* lis r31, 0 */ // 0x808C6654
    r31 = r31 + 0; // 0x808C6658
    if (==) goto 0x0x808c66a4;
    r12 = *(0 + r30); // lwz @ 0x808C6660
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808C6668
    /* mtctr r12 */ // 0x808C666C
    /* bctrl  */ // 0x808C6670
    /* b 0x808c668c */ // 0x808C6674
    if (!=) goto 0x0x808c6688;
    /* li r0, 1 */ // 0x808C6680
    /* b 0x808c6698 */ // 0x808C6684
    r3 = *(0 + r3); // lwz @ 0x808C6688
    if (!=) goto 0x0x808c6678;
    /* li r0, 0 */ // 0x808C6694
    if (==) goto 0x0x808c66a4;
    /* b 0x808c66a8 */ // 0x808C66A0
    /* li r30, 0 */ // 0x808C66A4
    r12 = *(0 + r30); // lwz @ 0x808C66A8
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x808C66B0
    /* mtctr r12 */ // 0x808C66B4
    /* bctrl  */ // 0x808C66B8
    r12 = *(0 + r30); // lwz @ 0x808C66BC
    r3 = r30;
    /* li r4, 0x816 */ // 0x808C66C4
    /* li r5, 0 */ // 0x808C66C8
    r12 = *(0x68 + r12); // lwz @ 0x808C66CC
    /* mtctr r12 */ // 0x808C66D0
    /* bctrl  */ // 0x808C66D4
    r12 = *(0 + r29); // lwz @ 0x808C66D8
    r3 = r29;
    /* li r4, 0x4d */ // 0x808C66E0
    /* li r5, 0 */ // 0x808C66E4
    r12 = *(0x24 + r12); // lwz @ 0x808C66E8
    /* mtctr r12 */ // 0x808C66EC
    /* bctrl  */ // 0x808C66F0
    r0 = *(0x24 + r1); // lwz @ 0x808C66F4
    r31 = *(0x1c + r1); // lwz @ 0x808C66F8
    r30 = *(0x18 + r1); // lwz @ 0x808C66FC
    r29 = *(0x14 + r1); // lwz @ 0x808C6700
    return;
}