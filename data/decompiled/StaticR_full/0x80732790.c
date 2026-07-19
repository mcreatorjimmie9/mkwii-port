/* Function at 0x80732790, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80732790(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r8 = r3 + r7; // 0x80732798
    *(0x18 + r1) = r30; // stw @ 0x807327A4
    *(0x14 + r1) = r29; // stw @ 0x807327A8
    r29 = r6;
    r0 = *(0x7b9 + r8); // lbz @ 0x807327B0
    if (!=) goto 0x0x807327d4;
    r6 = r7 rlwinm 2; // rlwinm
    r0 = *(0xae0 + r3); // lbz @ 0x807327C0
    r3 = r3 + r6; // 0x807327C4
    r3 = *(0x80 + r3); // lwz @ 0x807327C8
    if (>=) goto 0x0x80732810;
    /* slwi r0, r5, 2 */ // 0x807327D4
    r31 = r5;
    r30 = r4 + r0; // 0x807327DC
    /* b 0x80732808 */ // 0x807327E0
    r3 = *(0 + r30); // lwz @ 0x807327E4
    if (==) goto 0x0x80732800;
    r12 = *(0 + r3); // lwz @ 0x807327F0
    r12 = *(0xc + r12); // lwz @ 0x807327F4
    /* mtctr r12 */ // 0x807327F8
    /* bctrl  */ // 0x807327FC
    r30 = r30 + 4; // 0x80732800
    r31 = r31 + 1; // 0x80732804
    if (<) goto 0x0x807327e4;
    r0 = *(0x24 + r1); // lwz @ 0x80732810
    r31 = *(0x1c + r1); // lwz @ 0x80732814
    r30 = *(0x18 + r1); // lwz @ 0x80732818
    r29 = *(0x14 + r1); // lwz @ 0x8073281C
    return;
}