/* Function at 0x807553C4, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_807553C4(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x807553D4
    *(0x18 + r1) = r30; // stw @ 0x807553D8
    /* li r30, 0 */ // 0x807553DC
    *(0x14 + r1) = r29; // stw @ 0x807553E0
    r29 = r3;
    /* b 0x8075540c */ // 0x807553E8
    r3 = *(0xe0 + r29); // lwz @ 0x807553EC
    /* lwzx r3, r3, r31 */ // 0x807553F0
    r12 = *(0 + r3); // lwz @ 0x807553F4
    r12 = *(0xec + r12); // lwz @ 0x807553F8
    /* mtctr r12 */ // 0x807553FC
    /* bctrl  */ // 0x80755400
    r31 = r31 + 4; // 0x80755404
    r30 = r30 + 1; // 0x80755408
    r0 = *(0xd0 + r29); // lbz @ 0x8075540C
    if (<) goto 0x0x807553ec;
    r0 = *(0x24 + r1); // lwz @ 0x80755418
    r31 = *(0x1c + r1); // lwz @ 0x8075541C
    r30 = *(0x18 + r1); // lwz @ 0x80755420
    r29 = *(0x14 + r1); // lwz @ 0x80755424
    return;
}