/* Function at 0x80814E2C, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80814E2C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    /* li r5, 0 */ // 0x80814E44
    *(0x18 + r1) = r30; // stw @ 0x80814E48
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80814E50
    r29 = r3;
    if (<) goto 0x0x80814e6c;
    r0 = *(8 + r3); // lwz @ 0x80814E5C
    if (>=) goto 0x0x80814e6c;
    /* li r5, 1 */ // 0x80814E68
    if (!=) goto 0x0x80814e84;
    r12 = *(4 + r3); // lwzu @ 0x80814E74
    r12 = *(0x18 + r12); // lwz @ 0x80814E78
    /* mtctr r12 */ // 0x80814E7C
    /* bctrl  */ // 0x80814E80
    r3 = *(0xc + r29); // lwz @ 0x80814E84
    r0 = r30 rlwinm 2; // rlwinm
    /* lfs f0, 0(r31) */ // 0x80814E8C
    /* lwzx r3, r3, r0 */ // 0x80814E90
    /* lfs f1, 4(r31) */ // 0x80814E94
    /* stfs f0, 0x30(r3) */ // 0x80814E98
    /* lfs f0, 8(r31) */ // 0x80814E9C
    /* stfs f1, 0x34(r3) */ // 0x80814EA0
    /* stfs f0, 0x38(r3) */ // 0x80814EA4
    r31 = *(0x1c + r1); // lwz @ 0x80814EA8
    r30 = *(0x18 + r1); // lwz @ 0x80814EAC
    r29 = *(0x14 + r1); // lwz @ 0x80814EB0
    r0 = *(0x24 + r1); // lwz @ 0x80814EB4
    return;
}