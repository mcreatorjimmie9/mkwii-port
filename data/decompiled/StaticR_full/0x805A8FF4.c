/* Function at 0x805A8FF4, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_805A8FF4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805A9000
    r31 = r3;
    r4 = *(0x14 + r3); // lwz @ 0x805A9008
    if (==) goto 0x0x805a9038;
    r3 = *(0x1c + r3); // lwz @ 0x805A9014
    r12 = *(0 + r3); // lwz @ 0x805A9018
    r12 = *(0x18 + r12); // lwz @ 0x805A901C
    /* mtctr r12 */ // 0x805A9020
    /* bctrl  */ // 0x805A9024
    /* li r0, 0 */ // 0x805A9028
    *(0x14 + r31) = r0; // stw @ 0x805A902C
    *(0x18 + r31) = r0; // stw @ 0x805A9030
    *(0x1c + r31) = r0; // stw @ 0x805A9034
    r0 = *(0x14 + r1); // lwz @ 0x805A9038
    r31 = *(0xc + r1); // lwz @ 0x805A903C
    return;
}