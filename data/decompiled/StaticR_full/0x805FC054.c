/* Function at 0x805FC054, size=148 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_805FC054(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805FC06C
    r29 = r3;
    r12 = *(0xc + r3); // lwz @ 0x805FC074
    r12 = *(0x14 + r12); // lwz @ 0x805FC078
    /* mtctr r12 */ // 0x805FC07C
    /* bctrl  */ // 0x805FC080
    r0 = *(0x228 + r29); // lbz @ 0x805FC084
    if (!=) goto 0x0x805fc0cc;
    /* li r31, 0 */ // 0x805FC090
    /* b 0x805fc0bc */ // 0x805FC094
    r3 = *(0x238 + r29); // lwz @ 0x805FC098
    r0 = r31 rlwinm 2; // rlwinm
    r4 = r30;
    /* lwzx r3, r3, r0 */ // 0x805FC0A4
    r12 = *(0xc + r3); // lwz @ 0x805FC0A8
    r12 = *(0x14 + r12); // lwz @ 0x805FC0AC
    /* mtctr r12 */ // 0x805FC0B0
    /* bctrl  */ // 0x805FC0B4
    r31 = r31 + 1; // 0x805FC0B8
    r0 = *(0x23c + r29); // lhz @ 0x805FC0BC
    /* clrlwi r3, r31, 0x18 */ // 0x805FC0C0
    if (<) goto 0x0x805fc098;
    r0 = *(0x24 + r1); // lwz @ 0x805FC0CC
    r31 = *(0x1c + r1); // lwz @ 0x805FC0D0
    r30 = *(0x18 + r1); // lwz @ 0x805FC0D4
    r29 = *(0x14 + r1); // lwz @ 0x805FC0D8
    return;
}