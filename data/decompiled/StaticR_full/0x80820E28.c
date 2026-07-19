/* Function at 0x80820E28, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80820E28(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x80820E38
    *(0x18 + r1) = r30; // stw @ 0x80820E3C
    /* li r30, 0 */ // 0x80820E40
    *(0x14 + r1) = r29; // stw @ 0x80820E44
    r29 = r3;
    /* b 0x80820e70 */ // 0x80820E4C
    r3 = *(4 + r29); // lwz @ 0x80820E50
    /* lwzx r3, r3, r31 */ // 0x80820E54
    r12 = *(0 + r3); // lwz @ 0x80820E58
    r12 = *(8 + r12); // lwz @ 0x80820E5C
    /* mtctr r12 */ // 0x80820E60
    /* bctrl  */ // 0x80820E64
    r31 = r31 + 4; // 0x80820E68
    r30 = r30 + 1; // 0x80820E6C
    r0 = *(8 + r29); // lwz @ 0x80820E70
    if (<) goto 0x0x80820e50;
    r0 = *(0x24 + r1); // lwz @ 0x80820E7C
    r31 = *(0x1c + r1); // lwz @ 0x80820E80
    r30 = *(0x18 + r1); // lwz @ 0x80820E84
    r29 = *(0x14 + r1); // lwz @ 0x80820E88
    return;
}