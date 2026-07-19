/* Function at 0x8080D8A4, size=216 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_8080D8A4(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* stfd f31, 0x18(r1) */ // 0x8080D8B0
    /* fmr f31, f1 */ // 0x8080D8B4
    *(0x14 + r1) = r31; // stw @ 0x8080D8B8
    /* li r31, 1 */ // 0x8080D8BC
    *(0x10 + r1) = r30; // stw @ 0x8080D8C0
    /* li r30, 0 */ // 0x8080D8C4
    *(0xc + r1) = r29; // stw @ 0x8080D8C8
    /* li r29, 0 */ // 0x8080D8CC
    *(8 + r1) = r28; // stw @ 0x8080D8D0
    r28 = r3;
    /* b 0x8080d934 */ // 0x8080D8D8
    /* li r3, 0 */ // 0x8080D8E0
    if (<) goto 0x0x8080d8f8;
    r0 = *(0xe0 + r28); // lwz @ 0x8080D8E8
    if (>=) goto 0x0x8080d8f8;
    /* li r3, 1 */ // 0x8080D8F4
    if (!=) goto 0x0x8080d914;
    r12 = *(0xdc + r28); // lwz @ 0x8080D900
    r3 = r28 + 0xdc; // 0x8080D904
    r12 = *(0x18 + r12); // lwz @ 0x8080D908
    /* mtctr r12 */ // 0x8080D90C
    /* bctrl  */ // 0x8080D910
    r3 = *(0xe4 + r28); // lwz @ 0x8080D914
    /* lwzx r3, r3, r30 */ // 0x8080D918
    r0 = *(0x121 + r3); // lbz @ 0x8080D91C
    if (!=) goto 0x0x8080d92c;
    *(0xb0 + r3) = r31; // stw @ 0x8080D928
    r30 = r30 + 4; // 0x8080D92C
    r29 = r29 + 1; // 0x8080D930
    r0 = *(0xb4 + r28); // lwz @ 0x8080D934
    if (<) goto 0x0x8080d8dc;
    /* li r0, 0 */ // 0x8080D940
    /* li r3, 1 */ // 0x8080D944
    *(0xb8 + r28) = r3; // stw @ 0x8080D948
    *(0xd0 + r28) = r0; // stw @ 0x8080D94C
    /* stfs f31, 0xd8(r28) */ // 0x8080D950
    *(0xd4 + r28) = r0; // stb @ 0x8080D954
    /* lfd f31, 0x18(r1) */ // 0x8080D958
    r31 = *(0x14 + r1); // lwz @ 0x8080D95C
    r30 = *(0x10 + r1); // lwz @ 0x8080D960
    r29 = *(0xc + r1); // lwz @ 0x8080D964
    r28 = *(8 + r1); // lwz @ 0x8080D968
    r0 = *(0x24 + r1); // lwz @ 0x8080D96C
    return;
}