/* Function at 0x808A9C84, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_808A9C84(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x808A9C94
    *(0x18 + r1) = r30; // stw @ 0x808A9C98
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x808A9CA0
    /* li r29, 0 */ // 0x808A9CA4
    /* b 0x808a9cc8 */ // 0x808A9CA8
    r3 = *(0xb0 + r30); // lwz @ 0x808A9CAC
    r12 = *(0 + r3); // lwz @ 0x808A9CB0
    r12 = *(0x20 + r12); // lwz @ 0x808A9CB4
    /* mtctr r12 */ // 0x808A9CB8
    /* bctrl  */ // 0x808A9CBC
    r30 = r30 + 4; // 0x808A9CC0
    r29 = r29 + 1; // 0x808A9CC4
    r0 = *(0 + r31); // lwz @ 0x808A9CC8
    if (<) goto 0x0x808a9cac;
    r0 = *(0x24 + r1); // lwz @ 0x808A9CD4
    r31 = *(0x1c + r1); // lwz @ 0x808A9CD8
    r30 = *(0x18 + r1); // lwz @ 0x808A9CDC
    r29 = *(0x14 + r1); // lwz @ 0x808A9CE0
    return;
}