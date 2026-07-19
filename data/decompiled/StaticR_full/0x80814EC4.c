/* Function at 0x80814EC4, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80814EC4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    /* li r5, 0 */ // 0x80814EDC
    *(0x18 + r1) = r30; // stw @ 0x80814EE0
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80814EE8
    r29 = r3;
    if (<) goto 0x0x80814f04;
    r0 = *(8 + r3); // lwz @ 0x80814EF4
    if (>=) goto 0x0x80814f04;
    /* li r5, 1 */ // 0x80814F00
    if (!=) goto 0x0x80814f1c;
    r12 = *(4 + r3); // lwzu @ 0x80814F0C
    r12 = *(0x18 + r12); // lwz @ 0x80814F10
    /* mtctr r12 */ // 0x80814F14
    /* bctrl  */ // 0x80814F18
    r3 = *(0xc + r29); // lwz @ 0x80814F1C
    r0 = r30 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x80814F24
    *(0x3c + r3) = r31; // stb @ 0x80814F28
    r31 = *(0x1c + r1); // lwz @ 0x80814F2C
    r30 = *(0x18 + r1); // lwz @ 0x80814F30
    r29 = *(0x14 + r1); // lwz @ 0x80814F34
    r0 = *(0x24 + r1); // lwz @ 0x80814F38
    return;
}