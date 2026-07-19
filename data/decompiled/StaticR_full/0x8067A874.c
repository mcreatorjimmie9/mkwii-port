/* Function at 0x8067A874, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_8067A874(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x8067A884
    *(0x18 + r1) = r30; // stw @ 0x8067A888
    /* li r30, 0 */ // 0x8067A88C
    *(0x14 + r1) = r29; // stw @ 0x8067A890
    r29 = r3;
    /* b 0x8067a8c4 */ // 0x8067A898
    r3 = *(0xc44 + r29); // lwz @ 0x8067A89C
    /* lwzx r3, r3, r31 */ // 0x8067A8A0
    if (==) goto 0x0x8067a8bc;
    r12 = *(0 + r3); // lwz @ 0x8067A8AC
    r12 = *(0x4c + r12); // lwz @ 0x8067A8B0
    /* mtctr r12 */ // 0x8067A8B4
    /* bctrl  */ // 0x8067A8B8
    r31 = r31 + 4; // 0x8067A8BC
    r30 = r30 + 1; // 0x8067A8C0
    r0 = *(0xc48 + r29); // lwz @ 0x8067A8C4
    if (<) goto 0x0x8067a89c;
    r0 = *(0x24 + r1); // lwz @ 0x8067A8D0
    r31 = *(0x1c + r1); // lwz @ 0x8067A8D4
    r30 = *(0x18 + r1); // lwz @ 0x8067A8D8
    r29 = *(0x14 + r1); // lwz @ 0x8067A8DC
    return;
}