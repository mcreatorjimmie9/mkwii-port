/* Function at 0x807E7C28, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807E7C28(int r3, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x807E7C34
    *(0xc + r1) = r31; // stw @ 0x807E7C38
    r31 = r5;
    if (==) goto 0x0x807e7c4c;
    if (!=) goto 0x0x807e7c5c;
    r12 = *(0 + r3); // lwz @ 0x807E7C4C
    r12 = *(0x108 + r12); // lwz @ 0x807E7C50
    /* mtctr r12 */ // 0x807E7C54
    /* bctrl  */ // 0x807E7C58
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x807E7C60
    r0 = *(0x14 + r1); // lwz @ 0x807E7C64
    return;
}