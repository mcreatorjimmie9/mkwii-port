/* Function at 0x8080F624, size=296 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_8080F624(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x8080F640
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8080F648
    r28 = r3;
    if (==) goto 0x0x8080f660;
    if (==) goto 0x0x8080f6e8;
    /* b 0x8080f6f8 */ // 0x8080F65C
    r12 = *(0 + r3); // lwz @ 0x8080F660
    r12 = *(0x104 + r12); // lwz @ 0x8080F664
    /* mtctr r12 */ // 0x8080F668
    /* bctrl  */ // 0x8080F66C
    r12 = *(0 + r28); // lwz @ 0x8080F670
    r3 = r28;
    r12 = *(0x24 + r12); // lwz @ 0x8080F678
    /* mtctr r12 */ // 0x8080F67C
    /* bctrl  */ // 0x8080F680
    /* lis r4, 0 */ // 0x8080F684
    /* lis r5, 0 */ // 0x8080F688
    r6 = *(0 + r4); // lwz @ 0x8080F68C
    /* clrlwi r4, r3, 0x10 */ // 0x8080F690
    r3 = *(0 + r5); // lwz @ 0x8080F694
    r0 = *(0xb70 + r6); // lwz @ 0x8080F698
    if (!=) goto 0x0x8080f6f8;
    r0 = *(0xb9e + r6); // lhz @ 0x8080F6A4
    if (!=) goto 0x0x8080f6f8;
    r31 = *(0x10 + r3); // lwz @ 0x8080F6B4
    if (<) goto 0x0x8080f6d8;
    r12 = *(0 + r31); // lwz @ 0x8080F6BC
    r3 = r31;
    r12 = *(0x38 + r12); // lwz @ 0x8080F6C4
    /* mtctr r12 */ // 0x8080F6C8
    /* bctrl  */ // 0x8080F6CC
    if (==) goto 0x0x8080f6f8;
    r3 = *(8 + r31); // lwz @ 0x8080F6D8
    r0 = r3 + 1; // 0x8080F6DC
    *(8 + r31) = r0; // stw @ 0x8080F6E0
    /* b 0x8080f6f8 */ // 0x8080F6E4
    r12 = *(0 + r3); // lwz @ 0x8080F6E8
    r12 = *(0x108 + r12); // lwz @ 0x8080F6EC
    /* mtctr r12 */ // 0x8080F6F0
    /* bctrl  */ // 0x8080F6F4
    if (==) goto 0x0x8080f708;
    if (!=) goto 0x0x8080f728;
    r0 = *(0xbc + r28); // lbz @ 0x8080F708
    if (==) goto 0x0x8080f728;
    r3 = r29;
    /* li r4, 0 */ // 0x8080F718
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    /* li r0, 0 */ // 0x8080F720
    *(0xbc + r28) = r0; // stb @ 0x8080F724
    r3 = r30;
    r31 = *(0x1c + r1); // lwz @ 0x8080F72C
    r30 = *(0x18 + r1); // lwz @ 0x8080F730
    r29 = *(0x14 + r1); // lwz @ 0x8080F734
    r28 = *(0x10 + r1); // lwz @ 0x8080F738
    r0 = *(0x24 + r1); // lwz @ 0x8080F73C
    return;
}