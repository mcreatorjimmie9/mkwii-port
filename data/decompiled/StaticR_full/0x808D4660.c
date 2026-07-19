/* Function at 0x808D4660, size=260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_808D4660(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x808D4678
    *(0x10 + r1) = r28; // stw @ 0x808D467C
    r0 = *(0xc + r3); // lbz @ 0x808D4680
    if (==) goto 0x0x808d4700;
    r4 = *(8 + r3); // lwz @ 0x808D468C
    r3 = *(0x10 + r3); // lwz @ 0x808D4690
    r0 = *(0x20 + r4); // lwz @ 0x808D4694
    /* subf r3, r3, r0 */ // 0x808D4698
    /* slwi r0, r3, 3 */ // 0x808D469C
    /* subf r30, r3, r0 */ // 0x808D46A0
    if (<=) goto 0x0x808d46b0;
    /* li r30, 0xff */ // 0x808D46AC
    if (>=) goto 0x0x808d46bc;
    /* li r30, 1 */ // 0x808D46B8
    /* li r28, 0 */ // 0x808D46BC
    /* li r29, 0 */ // 0x808D46C0
    /* b 0x808d46dc */ // 0x808D46C4
    r3 = *(4 + r31); // lwz @ 0x808D46C8
    r28 = r28 + 1; // 0x808D46CC
    /* lwzx r3, r3, r29 */ // 0x808D46D0
    r29 = r29 + 4; // 0x808D46D4
    *(0xb8 + r3) = r30; // stb @ 0x808D46D8
    r12 = *(0 + r31); // lwz @ 0x808D46DC
    r3 = r31;
    r12 = *(0x10 + r12); // lwz @ 0x808D46E4
    /* mtctr r12 */ // 0x808D46E8
    /* bctrl  */ // 0x808D46EC
    /* clrlwi r0, r3, 0x18 */ // 0x808D46F0
    if (<) goto 0x0x808d46c8;
    /* b 0x808d4744 */ // 0x808D46FC
    /* li r28, 0 */ // 0x808D4700
    /* li r29, 0 */ // 0x808D4704
    /* li r30, 1 */ // 0x808D4708
    /* b 0x808d4724 */ // 0x808D470C
    r3 = *(4 + r31); // lwz @ 0x808D4710
    r28 = r28 + 1; // 0x808D4714
    /* lwzx r3, r3, r29 */ // 0x808D4718
    r29 = r29 + 4; // 0x808D471C
    *(0xb8 + r3) = r30; // stb @ 0x808D4720
    r12 = *(0 + r31); // lwz @ 0x808D4724
    r3 = r31;
    r12 = *(0x10 + r12); // lwz @ 0x808D472C
    /* mtctr r12 */ // 0x808D4730
    /* bctrl  */ // 0x808D4734
    /* clrlwi r0, r3, 0x18 */ // 0x808D4738
    if (<) goto 0x0x808d4710;
    r0 = *(0x24 + r1); // lwz @ 0x808D4744
    r31 = *(0x1c + r1); // lwz @ 0x808D4748
    r30 = *(0x18 + r1); // lwz @ 0x808D474C
    r29 = *(0x14 + r1); // lwz @ 0x808D4750
    r28 = *(0x10 + r1); // lwz @ 0x808D4754
    return;
}