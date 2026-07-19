/* Function at 0x80829394, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80829394(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808293A0
    r31 = r3;
    r0 = *(0x9c + r3); // lwz @ 0x808293A8
    if (==) goto 0x0x808293cc;
    r3 = r0;
    /* li r4, 0 */ // 0x808293B8
    r12 = *(0 + r3); // lwz @ 0x808293BC
    r12 = *(0xc + r12); // lwz @ 0x808293C0
    /* mtctr r12 */ // 0x808293C4
    /* bctrl  */ // 0x808293C8
    r3 = *(0xa0 + r31); // lwz @ 0x808293CC
    if (==) goto 0x0x808293ec;
    r12 = *(0 + r3); // lwz @ 0x808293D8
    /* li r4, 0 */ // 0x808293DC
    r12 = *(0xc + r12); // lwz @ 0x808293E0
    /* mtctr r12 */ // 0x808293E4
    /* bctrl  */ // 0x808293E8
    r3 = *(0xa8 + r31); // lwz @ 0x808293EC
    if (==) goto 0x0x8082940c;
    r12 = *(0 + r3); // lwz @ 0x808293F8
    /* li r4, 0 */ // 0x808293FC
    r12 = *(0xc + r12); // lwz @ 0x80829400
    /* mtctr r12 */ // 0x80829404
    /* bctrl  */ // 0x80829408
    r0 = *(0x14 + r1); // lwz @ 0x8082940C
    r31 = *(0xc + r1); // lwz @ 0x80829410
    return;
}