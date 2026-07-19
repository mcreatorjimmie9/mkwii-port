/* Function at 0x808FC90C, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_808FC90C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r4, 0 */ // 0x808FC914
    *(0x14 + r1) = r29; // stw @ 0x808FC924
    *(0x10 + r1) = r28; // stw @ 0x808FC928
    r28 = r3;
    r12 = *(0 + r3); // lwz @ 0x808FC930
    r12 = *(0x68 + r12); // lwz @ 0x808FC934
    /* mtctr r12 */ // 0x808FC938
    /* bctrl  */ // 0x808FC93C
    /* lis r3, 0 */ // 0x808FC940
    /* li r30, 0 */ // 0x808FC944
    r0 = *(0 + r3); // lwz @ 0x808FC948
    /* li r29, 0 */ // 0x808FC94C
    *(0x14c + r28) = r0; // stw @ 0x808FC950
    /* li r31, 0 */ // 0x808FC954
    /* b 0x808fc990 */ // 0x808FC958
    r0 = *(0x314 + r28); // lwz @ 0x808FC95C
    r3 = r0 + r29; // 0x808FC960
    *(8 + r3) = r31; // stw @ 0x808FC964
    r3 = *(0x314 + r28); // lwz @ 0x808FC968
    /* lwzx r3, r3, r29 */ // 0x808FC96C
    if (==) goto 0x0x808fc988;
    r12 = *(0 + r3); // lwz @ 0x808FC978
    r12 = *(0x10 + r12); // lwz @ 0x808FC97C
    /* mtctr r12 */ // 0x808FC980
    /* bctrl  */ // 0x808FC984
    r29 = r29 + 0x64; // 0x808FC988
    r30 = r30 + 1; // 0x808FC98C
    r0 = *(0x310 + r28); // lwz @ 0x808FC990
    if (<) goto 0x0x808fc95c;
    /* li r0, 1 */ // 0x808FC99C
    *(0x16d + r28) = r0; // stb @ 0x808FC9A0
    r31 = *(0x1c + r1); // lwz @ 0x808FC9A4
    r30 = *(0x18 + r1); // lwz @ 0x808FC9A8
    r29 = *(0x14 + r1); // lwz @ 0x808FC9AC
    r28 = *(0x10 + r1); // lwz @ 0x808FC9B0
    r0 = *(0x24 + r1); // lwz @ 0x808FC9B4
    return;
}