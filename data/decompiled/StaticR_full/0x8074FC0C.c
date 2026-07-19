/* Function at 0x8074FC0C, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_8074FC0C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 0 */ // 0x8074FC18
    /* li r31, 0 */ // 0x8074FC20
    *(0x18 + r1) = r30; // stw @ 0x8074FC24
    /* li r30, 0 */ // 0x8074FC28
    *(0x14 + r1) = r29; // stw @ 0x8074FC2C
    r29 = r3;
    r4 = *(0xb0 + r3); // lwz @ 0x8074FC34
    *(0xb4 + r3) = r0; // stw @ 0x8074FC38
    r0 = *(8 + r3); // lwz @ 0x8074FC3C
    *(0 + r4) = r0; // stw @ 0x8074FC40
    r3 = *(0xb0 + r29); // lwz @ 0x8074FC44
    /* li r4, 0 */ // 0x8074FC48
    /* lwzx r3, r3, r31 */ // 0x8074FC4C
    r12 = *(0 + r3); // lwz @ 0x8074FC50
    r12 = *(0xc + r12); // lwz @ 0x8074FC54
    /* mtctr r12 */ // 0x8074FC58
    /* bctrl  */ // 0x8074FC5C
    r30 = r30 + 1; // 0x8074FC60
    r31 = r31 + 4; // 0x8074FC64
    if (<) goto 0x0x8074fc44;
    r0 = *(0x24 + r1); // lwz @ 0x8074FC70
    r31 = *(0x1c + r1); // lwz @ 0x8074FC74
    r30 = *(0x18 + r1); // lwz @ 0x8074FC78
    r29 = *(0x14 + r1); // lwz @ 0x8074FC7C
    return;
}