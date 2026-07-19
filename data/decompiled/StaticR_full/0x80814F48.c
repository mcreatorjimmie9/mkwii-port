/* Function at 0x80814F48, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80814F48(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x80814F54
    *(0x14 + r1) = r0; // stw @ 0x80814F58
    *(0xc + r1) = r31; // stw @ 0x80814F5C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80814F64
    r30 = r3;
    if (<) goto 0x0x80814f80;
    r0 = *(8 + r3); // lwz @ 0x80814F70
    if (>=) goto 0x0x80814f80;
    /* li r5, 1 */ // 0x80814F7C
    if (!=) goto 0x0x80814f98;
    r12 = *(4 + r3); // lwzu @ 0x80814F88
    r12 = *(0x18 + r12); // lwz @ 0x80814F8C
    /* mtctr r12 */ // 0x80814F90
    /* bctrl  */ // 0x80814F94
    r3 = *(0xc + r30); // lwz @ 0x80814F98
    r0 = r31 rlwinm 2; // rlwinm
    r31 = *(0xc + r1); // lwz @ 0x80814FA0
    /* lwzx r3, r3, r0 */ // 0x80814FA4
    r30 = *(8 + r1); // lwz @ 0x80814FA8
    r0 = *(0x14 + r1); // lwz @ 0x80814FAC
    return;
}