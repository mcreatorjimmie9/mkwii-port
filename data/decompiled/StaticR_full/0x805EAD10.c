/* Function at 0x805EAD10, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_805EAD10(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x805EAD20
    *(0x18 + r1) = r30; // stw @ 0x805EAD24
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805EAD2C
    r29 = r3;
    r0 = r31 rlwinm 2; // rlwinm
    r4 = r30;
    r3 = r29 + r0; // 0x805EAD3C
    r3 = *(4 + r3); // lwz @ 0x805EAD40
    r12 = *(0 + r3); // lwz @ 0x805EAD44
    r12 = *(0x14 + r12); // lwz @ 0x805EAD48
    /* mtctr r12 */ // 0x805EAD4C
    /* bctrl  */ // 0x805EAD50
    r31 = r31 + 1; // 0x805EAD54
    if (<) goto 0x0x805ead34;
    r0 = *(0x24 + r1); // lwz @ 0x805EAD60
    r31 = *(0x1c + r1); // lwz @ 0x805EAD64
    r30 = *(0x18 + r1); // lwz @ 0x805EAD68
    r29 = *(0x14 + r1); // lwz @ 0x805EAD6C
    return;
}