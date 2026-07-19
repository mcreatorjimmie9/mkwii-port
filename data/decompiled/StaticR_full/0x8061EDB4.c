/* Function at 0x8061EDB4, size=208 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_8061EDB4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    r12 = r29;
    *(0x10 + r1) = r28; // stw @ 0x8061EDD4
    r28 = r3;
    r4 = *(0 + r3); // lwz @ 0x8061EDDC
    r3 = *(8 + r4); // lwz @ 0x8061EDE0
    /* mtctr r12 */ // 0x8061EDE4
    /* bctrl  */ // 0x8061EDE8
    /* li r30, 0 */ // 0x8061EDEC
    /* li r31, 0 */ // 0x8061EDF0
    /* b 0x8061ee14 */ // 0x8061EDF4
    r3 = *(0xc + r4); // lwz @ 0x8061EDF8
    r12 = r29;
    /* lwzx r3, r3, r31 */ // 0x8061EE00
    /* mtctr r12 */ // 0x8061EE04
    /* bctrl  */ // 0x8061EE08
    r31 = r31 + 4; // 0x8061EE0C
    r30 = r30 + 1; // 0x8061EE10
    r4 = *(0 + r28); // lwz @ 0x8061EE14
    r3 = *(0 + r4); // lwz @ 0x8061EE18
    r0 = *(0xc + r3); // lhz @ 0x8061EE1C
    if (<) goto 0x0x8061edf8;
    /* li r30, 0 */ // 0x8061EE28
    /* li r31, 0 */ // 0x8061EE2C
    /* b 0x8061ee50 */ // 0x8061EE30
    r3 = *(0x10 + r4); // lwz @ 0x8061EE34
    r12 = r29;
    /* lwzx r3, r3, r31 */ // 0x8061EE3C
    /* mtctr r12 */ // 0x8061EE40
    /* bctrl  */ // 0x8061EE44
    r31 = r31 + 4; // 0x8061EE48
    r30 = r30 + 1; // 0x8061EE4C
    r4 = *(0 + r28); // lwz @ 0x8061EE50
    r3 = *(0 + r4); // lwz @ 0x8061EE54
    r0 = *(0xe + r3); // lhz @ 0x8061EE58
    if (<) goto 0x0x8061ee34;
    r0 = *(0x24 + r1); // lwz @ 0x8061EE64
    r31 = *(0x1c + r1); // lwz @ 0x8061EE68
    r30 = *(0x18 + r1); // lwz @ 0x8061EE6C
    r29 = *(0x14 + r1); // lwz @ 0x8061EE70
    r28 = *(0x10 + r1); // lwz @ 0x8061EE74
    return;
}