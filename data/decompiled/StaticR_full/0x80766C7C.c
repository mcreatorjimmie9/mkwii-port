/* Function at 0x80766C7C, size=148 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_80766C7C(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 0 */ // 0x80766C8C
    /* li r30, 0 */ // 0x80766C94
    *(0x14 + r1) = r29; // stw @ 0x80766C98
    /* li r29, 0 */ // 0x80766C9C
    *(0x10 + r1) = r28; // stw @ 0x80766CA0
    r28 = r3;
    /* b 0x80766cd8 */ // 0x80766CA8
    r3 = *(0xb0 + r28); // lwz @ 0x80766CAC
    /* lwzx r3, r3, r30 */ // 0x80766CB0
    r12 = *(0 + r3); // lwz @ 0x80766CB4
    r12 = *(0xc + r12); // lwz @ 0x80766CB8
    /* mtctr r12 */ // 0x80766CBC
    /* bctrl  */ // 0x80766CC0
    r3 = *(0xb0 + r28); // lwz @ 0x80766CC4
    r29 = r29 + 1; // 0x80766CC8
    /* lwzx r3, r3, r30 */ // 0x80766CCC
    r30 = r30 + 4; // 0x80766CD0
    *(0xb8 + r3) = r31; // stw @ 0x80766CD4
    r0 = *(0xbc + r28); // lwz @ 0x80766CD8
    if (<) goto 0x0x80766cac;
    /* li r0, 0 */ // 0x80766CE4
    *(0xc0 + r28) = r0; // stw @ 0x80766CE8
    *(0xc4 + r28) = r0; // stw @ 0x80766CEC
    r31 = *(0x1c + r1); // lwz @ 0x80766CF0
    r30 = *(0x18 + r1); // lwz @ 0x80766CF4
    r29 = *(0x14 + r1); // lwz @ 0x80766CF8
    r28 = *(0x10 + r1); // lwz @ 0x80766CFC
    r0 = *(0x24 + r1); // lwz @ 0x80766D00
    return;
}