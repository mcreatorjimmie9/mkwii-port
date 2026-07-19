/* Function at 0x80736E64, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80736E64(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80736E74
    r30 = r3;
    r31 = *(0x278 + r3); // lwz @ 0x80736E7C
    if (==) goto 0x0x80736ec0;
    r12 = *(0 + r31); // lwz @ 0x80736E88
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x80736E90
    /* mtctr r12 */ // 0x80736E94
    /* bctrl  */ // 0x80736E98
    r0 = *(0xb0 + r30); // lbz @ 0x80736E9C
    if (==) goto 0x0x80736ec0;
    r12 = *(0 + r31); // lwz @ 0x80736EA8
    r3 = r31;
    r4 = r30 + 0x72c; // 0x80736EB0
    r12 = *(0x70 + r12); // lwz @ 0x80736EB4
    /* mtctr r12 */ // 0x80736EB8
    /* bctrl  */ // 0x80736EBC
    r0 = *(0x14 + r1); // lwz @ 0x80736EC0
    r31 = *(0xc + r1); // lwz @ 0x80736EC4
    r30 = *(8 + r1); // lwz @ 0x80736EC8
    return;
}