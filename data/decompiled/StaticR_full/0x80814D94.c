/* Function at 0x80814D94, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80814D94(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    /* li r5, 0 */ // 0x80814DAC
    *(0x18 + r1) = r30; // stw @ 0x80814DB0
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80814DB8
    r29 = r3;
    if (<) goto 0x0x80814dd4;
    r0 = *(8 + r3); // lwz @ 0x80814DC4
    if (>=) goto 0x0x80814dd4;
    /* li r5, 1 */ // 0x80814DD0
    if (!=) goto 0x0x80814dec;
    r12 = *(4 + r3); // lwzu @ 0x80814DDC
    r12 = *(0x18 + r12); // lwz @ 0x80814DE0
    /* mtctr r12 */ // 0x80814DE4
    /* bctrl  */ // 0x80814DE8
    r3 = *(0xc + r29); // lwz @ 0x80814DEC
    r0 = r30 rlwinm 2; // rlwinm
    /* lfs f0, 0(r31) */ // 0x80814DF4
    /* lwzx r3, r3, r0 */ // 0x80814DF8
    /* lfs f1, 4(r31) */ // 0x80814DFC
    /* stfs f0, 0(r3) */ // 0x80814E00
    /* lfs f0, 8(r31) */ // 0x80814E04
    /* stfs f1, 4(r3) */ // 0x80814E08
    /* stfs f0, 8(r3) */ // 0x80814E0C
    r31 = *(0x1c + r1); // lwz @ 0x80814E10
    r30 = *(0x18 + r1); // lwz @ 0x80814E14
    r29 = *(0x14 + r1); // lwz @ 0x80814E18
    r0 = *(0x24 + r1); // lwz @ 0x80814E1C
    return;
}