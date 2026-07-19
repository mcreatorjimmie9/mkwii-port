/* Function at 0x806D6644, size=356 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806D6644(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806D664C
    *(0x18 + r1) = r30; // stw @ 0x806D6658
    *(0x14 + r1) = r29; // stw @ 0x806D665C
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806D6664
    r3 = *(0 + r3); // lwz @ 0x806D6668
    r30 = *(0x2c4 + r3); // lwz @ 0x806D666C
    if (!=) goto 0x0x806d6680;
    /* li r30, 0 */ // 0x806D6678
    /* b 0x806d66d4 */ // 0x806D667C
    /* lis r31, 0 */ // 0x806D6680
    r31 = r31 + 0; // 0x806D6684
    if (==) goto 0x0x806d66d0;
    r12 = *(0 + r30); // lwz @ 0x806D668C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806D6694
    /* mtctr r12 */ // 0x806D6698
    /* bctrl  */ // 0x806D669C
    /* b 0x806d66b8 */ // 0x806D66A0
    if (!=) goto 0x0x806d66b4;
    /* li r0, 1 */ // 0x806D66AC
    /* b 0x806d66c4 */ // 0x806D66B0
    r3 = *(0 + r3); // lwz @ 0x806D66B4
    if (!=) goto 0x0x806d66a4;
    /* li r0, 0 */ // 0x806D66C0
    if (==) goto 0x0x806d66d0;
    /* b 0x806d66d4 */ // 0x806D66CC
    /* li r30, 0 */ // 0x806D66D0
    r0 = *(0x474 + r29); // lwz @ 0x806D66D4
    if (==) goto 0x0x806d66ec;
    if (==) goto 0x0x806d672c;
    /* b 0x806d6768 */ // 0x806D66E8
    r5 = *(0x58 + r29); // lwz @ 0x806D66EC
    r0 = r5 + -1; // 0x806D66F0
    if (<=) goto 0x0x806d6708;
    if (==) goto 0x0x806d671c;
    /* b 0x806d6768 */ // 0x806D6704
    r4 = *(0x5c + r29); // lwz @ 0x806D6708
    r3 = r30;
    r6 = r29 + 0x60; // 0x806D6710
    FUN_806D47C0(r3, r6); // bl 0x806D47C0
    /* b 0x806d6768 */ // 0x806D6718
    r4 = *(0x5c + r29); // lwz @ 0x806D671C
    r3 = r30;
    FUN_806D48C8(r6, r3); // bl 0x806D48C8
    /* b 0x806d6768 */ // 0x806D6728
    r5 = *(0x58 + r29); // lwz @ 0x806D672C
    r0 = r5 + -1; // 0x806D6730
    if (<=) goto 0x0x806d6748;
    if (==) goto 0x0x806d675c;
    /* b 0x806d6768 */ // 0x806D6744
    r4 = *(0x5c + r29); // lwz @ 0x806D6748
    r3 = r30;
    r6 = r29 + 0x60; // 0x806D6750
    FUN_806D4C10(r3, r6); // bl 0x806D4C10
    /* b 0x806d6768 */ // 0x806D6758
    r4 = *(0x5c + r29); // lwz @ 0x806D675C
    r3 = r30;
    FUN_806D4D5C(r6, r3); // bl 0x806D4D5C
    r12 = *(0 + r29); // lwz @ 0x806D6768
    r3 = r29;
    /* li r4, 0xaf */ // 0x806D6770
    /* li r5, 0 */ // 0x806D6774
    r12 = *(0x24 + r12); // lwz @ 0x806D6778
    /* mtctr r12 */ // 0x806D677C
    /* bctrl  */ // 0x806D6780
    /* li r0, 5 */ // 0x806D6784
    *(0x54 + r29) = r0; // stw @ 0x806D6788
    r31 = *(0x1c + r1); // lwz @ 0x806D678C
    r30 = *(0x18 + r1); // lwz @ 0x806D6790
    r29 = *(0x14 + r1); // lwz @ 0x806D6794
    r0 = *(0x24 + r1); // lwz @ 0x806D6798
    return;
}