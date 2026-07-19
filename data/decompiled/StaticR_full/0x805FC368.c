/* Function at 0x805FC368, size=148 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_805FC368(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805FC380
    r29 = r3;
    r12 = *(0xc + r3); // lwz @ 0x805FC388
    r12 = *(0x40 + r12); // lwz @ 0x805FC38C
    /* mtctr r12 */ // 0x805FC390
    /* bctrl  */ // 0x805FC394
    r0 = *(0x228 + r29); // lbz @ 0x805FC398
    if (!=) goto 0x0x805fc3e0;
    /* li r31, 0 */ // 0x805FC3A4
    /* b 0x805fc3d0 */ // 0x805FC3A8
    r3 = *(0x238 + r29); // lwz @ 0x805FC3AC
    r0 = r31 rlwinm 2; // rlwinm
    r4 = r30;
    /* lwzx r3, r3, r0 */ // 0x805FC3B8
    r12 = *(0xc + r3); // lwz @ 0x805FC3BC
    r12 = *(0xc + r12); // lwz @ 0x805FC3C0
    /* mtctr r12 */ // 0x805FC3C4
    /* bctrl  */ // 0x805FC3C8
    r31 = r31 + 1; // 0x805FC3CC
    r0 = *(0x23c + r29); // lhz @ 0x805FC3D0
    /* clrlwi r3, r31, 0x18 */ // 0x805FC3D4
    if (<) goto 0x0x805fc3ac;
    r0 = *(0x24 + r1); // lwz @ 0x805FC3E0
    r31 = *(0x1c + r1); // lwz @ 0x805FC3E4
    r30 = *(0x18 + r1); // lwz @ 0x805FC3E8
    r29 = *(0x14 + r1); // lwz @ 0x805FC3EC
    return;
}