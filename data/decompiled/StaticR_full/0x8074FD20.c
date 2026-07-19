/* Function at 0x8074FD20, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_8074FD20(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x8074FD30
    *(0x18 + r1) = r30; // stw @ 0x8074FD34
    /* li r30, 0 */ // 0x8074FD38
    *(0x14 + r1) = r29; // stw @ 0x8074FD3C
    r29 = r3;
    r3 = *(0xb0 + r29); // lwz @ 0x8074FD44
    /* lwzx r3, r3, r31 */ // 0x8074FD48
    if (==) goto 0x0x8074fd68;
    r12 = *(0 + r3); // lwz @ 0x8074FD54
    r4 = r29 + 0x3c; // 0x8074FD58
    r12 = *(0x14 + r12); // lwz @ 0x8074FD5C
    /* mtctr r12 */ // 0x8074FD60
    /* bctrl  */ // 0x8074FD64
    r30 = r30 + 1; // 0x8074FD68
    r31 = r31 + 4; // 0x8074FD6C
    if (<) goto 0x0x8074fd44;
    r0 = *(0x24 + r1); // lwz @ 0x8074FD78
    r31 = *(0x1c + r1); // lwz @ 0x8074FD7C
    r30 = *(0x18 + r1); // lwz @ 0x8074FD80
    r29 = *(0x14 + r1); // lwz @ 0x8074FD84
    return;
}