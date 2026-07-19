/* Function at 0x807E726C, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_807E726C(int r3, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807E727C
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x807E7284
    r30 = r3;
    if (==) goto 0x0x807e7298;
    if (!=) goto 0x0x807e72ac;
    r12 = *(0 + r30); // lwz @ 0x807E7298
    r3 = r30;
    r12 = *(0x108 + r12); // lwz @ 0x807E72A0
    /* mtctr r12 */ // 0x807E72A4
    /* bctrl  */ // 0x807E72A8
    r0 = *(0xb4 + r30); // lwz @ 0x807E72AC
    if (!=) goto 0x0x807e72c0;
    /* li r3, 1 */ // 0x807E72B8
    /* b 0x807e72c4 */ // 0x807E72BC
    r3 = r31;
    r0 = *(0x14 + r1); // lwz @ 0x807E72C4
    r31 = *(0xc + r1); // lwz @ 0x807E72C8
    r30 = *(8 + r1); // lwz @ 0x807E72CC
    return;
}