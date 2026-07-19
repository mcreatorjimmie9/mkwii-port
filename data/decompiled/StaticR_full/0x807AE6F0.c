/* Function at 0x807AE6F0, size=236 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807AE6F0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x807AE704
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807AE70C
    r29 = r3;
    if (==) goto 0x0x807ae7bc;
    r31 = *(0x164 + r3); // lwz @ 0x807AE718
    if (==) goto 0x0x807ae7a4;
    r3 = *(0 + r31); // lwz @ 0x807AE724
    if (==) goto 0x0x807ae744;
    r12 = *(0 + r3); // lwz @ 0x807AE730
    /* li r4, 1 */ // 0x807AE734
    r12 = *(8 + r12); // lwz @ 0x807AE738
    /* mtctr r12 */ // 0x807AE73C
    /* bctrl  */ // 0x807AE740
    /* li r0, 0 */ // 0x807AE744
    *(0 + r31) = r0; // stw @ 0x807AE748
    r3 = *(4 + r31); // lwz @ 0x807AE74C
    if (==) goto 0x0x807ae76c;
    r12 = *(0 + r3); // lwz @ 0x807AE758
    /* li r4, 1 */ // 0x807AE75C
    r12 = *(8 + r12); // lwz @ 0x807AE760
    /* mtctr r12 */ // 0x807AE764
    /* bctrl  */ // 0x807AE768
    /* li r0, 0 */ // 0x807AE76C
    *(4 + r31) = r0; // stw @ 0x807AE770
    r3 = *(8 + r31); // lwz @ 0x807AE774
    if (==) goto 0x0x807ae794;
    r12 = *(0 + r3); // lwz @ 0x807AE780
    /* li r4, 1 */ // 0x807AE784
    r12 = *(8 + r12); // lwz @ 0x807AE788
    /* mtctr r12 */ // 0x807AE78C
    /* bctrl  */ // 0x807AE790
    /* li r0, 0 */ // 0x807AE794
    *(8 + r31) = r0; // stw @ 0x807AE798
    r3 = r31;
    FUN_805E3430(r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x807AE7A8
    *(0x164 + r29) = r0; // stw @ 0x807AE7AC
    if (<=) goto 0x0x807ae7bc;
    r3 = r29;
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x807AE7BC
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x807AE7C4
    r29 = *(0x14 + r1); // lwz @ 0x807AE7C8
    r0 = *(0x24 + r1); // lwz @ 0x807AE7CC
    return;
}