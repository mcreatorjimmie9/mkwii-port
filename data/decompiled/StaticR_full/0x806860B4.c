/* Function at 0x806860B4, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_806860B4(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r30, 0 */ // 0x806860C8
    *(0x14 + r1) = r29; // stw @ 0x806860CC
    /* li r29, 0 */ // 0x806860D0
    *(0x10 + r1) = r28; // stw @ 0x806860D4
    r28 = r3;
    r31 = r28;
    /* b 0x80686104 */ // 0x806860E0
    r3 = *(0x354 + r31); // lwz @ 0x806860E4
    r12 = *(0 + r3); // lwz @ 0x806860E8
    r12 = *(0x14 + r12); // lwz @ 0x806860EC
    /* mtctr r12 */ // 0x806860F0
    /* bctrl  */ // 0x806860F4
    r30 = r30 | r3; // 0x806860F8
    r31 = r31 + 4; // 0x806860FC
    r29 = r29 + 1; // 0x80686100
    r0 = *(0x37c + r28); // lwz @ 0x80686104
    if (<) goto 0x0x806860e4;
    /* li r29, 0 */ // 0x80686110
    r3 = *(0x380 + r28); // lwz @ 0x80686114
    if (==) goto 0x0x80686140;
    r0 = *(8 + r3); // lwz @ 0x80686120
    if (==) goto 0x0x80686140;
    r12 = *(0 + r3); // lwz @ 0x8068612C
    r12 = *(0x14 + r12); // lwz @ 0x80686130
    /* mtctr r12 */ // 0x80686134
    /* bctrl  */ // 0x80686138
    r30 = r30 | r3; // 0x8068613C
    r29 = r29 + 1; // 0x80686140
    r28 = r28 + 4; // 0x80686144
    if (<) goto 0x0x80686114;
    r3 = r30;
    r31 = *(0x1c + r1); // lwz @ 0x80686154
    r30 = *(0x18 + r1); // lwz @ 0x80686158
    r29 = *(0x14 + r1); // lwz @ 0x8068615C
    r28 = *(0x10 + r1); // lwz @ 0x80686160
    r0 = *(0x24 + r1); // lwz @ 0x80686164
    return;
}