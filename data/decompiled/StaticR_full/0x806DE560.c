/* Function at 0x806DE560, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_806DE560(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x806DE570
    *(0x18 + r1) = r30; // stw @ 0x806DE574
    /* li r30, 0 */ // 0x806DE578
    *(0x14 + r1) = r29; // stw @ 0x806DE57C
    r29 = r3;
    /* b 0x806de5a8 */ // 0x806DE584
    r3 = *(0x34 + r29); // lwz @ 0x806DE588
    /* lwzx r3, r3, r31 */ // 0x806DE58C
    r12 = *(0 + r3); // lwz @ 0x806DE590
    r12 = *(0x40 + r12); // lwz @ 0x806DE594
    /* mtctr r12 */ // 0x806DE598
    /* bctrl  */ // 0x806DE59C
    r31 = r31 + 4; // 0x806DE5A0
    r30 = r30 + 1; // 0x806DE5A4
    r0 = *(0x3c + r29); // lwz @ 0x806DE5A8
    if (<) goto 0x0x806de588;
    r0 = *(0x24 + r1); // lwz @ 0x806DE5B4
    r31 = *(0x1c + r1); // lwz @ 0x806DE5B8
    r30 = *(0x18 + r1); // lwz @ 0x806DE5BC
    r29 = *(0x14 + r1); // lwz @ 0x806DE5C0
    return;
}