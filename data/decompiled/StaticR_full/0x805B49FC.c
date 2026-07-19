/* Function at 0x805B49FC, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_805B49FC(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x805B4A14
    /* li r29, 0 */ // 0x805B4A18
    *(0x10 + r1) = r28; // stw @ 0x805B4A1C
    /* li r28, 0 */ // 0x805B4A20
    r3 = *(4 + r30); // lwz @ 0x805B4A24
    r31 = *(8 + r3); // lwz @ 0x805B4A28
    if (>=) goto 0x0x805b4a3c;
    /* li r3, 0 */ // 0x805B4A34
    /* b 0x805b4a80 */ // 0x805B4A38
    r12 = *(0 + r3); // lwz @ 0x805B4A3C
    r12 = *(0x10 + r12); // lwz @ 0x805B4A40
    /* mtctr r12 */ // 0x805B4A44
    /* bctrl  */ // 0x805B4A48
    r0 = r31 + 1; // 0x805B4A4C
    r28 = r28 + 1; // 0x805B4A50
    r0 = r0 * r3; // 0x805B4A54
    r30 = r30 + 4; // 0x805B4A58
    r29 = r29 + r0; // 0x805B4A60
    if (<) goto 0x0x805b4a24;
    r0 = r29 + 6; // 0x805B4A68
    /* li r3, 0x276c */ // 0x805B4A6C
    /* xori r0, r0, 0x276c */ // 0x805B4A70
    /* cntlzw r0, r0 */ // 0x805B4A74
    r0 = r3 << r0; // slw
    /* srwi r3, r0, 0x1f */ // 0x805B4A7C
    r0 = *(0x24 + r1); // lwz @ 0x805B4A80
    r31 = *(0x1c + r1); // lwz @ 0x805B4A84
    r30 = *(0x18 + r1); // lwz @ 0x805B4A88
    r29 = *(0x14 + r1); // lwz @ 0x805B4A8C
    r28 = *(0x10 + r1); // lwz @ 0x805B4A90
    return;
}