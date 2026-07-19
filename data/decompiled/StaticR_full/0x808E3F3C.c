/* Function at 0x808E3F3C, size=204 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_808E3F3C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x808E3F4C
    *(0x18 + r1) = r30; // stw @ 0x808E3F50
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808E3F58
    r29 = r3;
    /* b 0x808e3fdc */ // 0x808E3F60
    r0 = r31 rlwinm 4; // rlwinm
    r3 = r29 + r0; // 0x808E3F68
    r0 = *(0x11 + r3); // lbz @ 0x808E3F6C
    if (==) goto 0x0x808e3fd8;
    r4 = *(0xc + r3); // lwz @ 0x808E3F78
    if (<) goto 0x0x808e3fd8;
    /* clrlwi r0, r31, 0x18 */ // 0x808E3F84
    if (!=) goto 0x0x808e3fbc;
    r0 = *(0x12 + r3); // lbz @ 0x808E3F90
    if (==) goto 0x0x808e3fbc;
    /* mulli r0, r4, 0x2c */ // 0x808E3F9C
    r3 = *(8 + r3); // lwz @ 0x808E3FA0
    /* li r4, 1 */ // 0x808E3FA4
    /* lwzux r12, r3, r0 */ // 0x808E3FA8
    r12 = *(0x18 + r12); // lwz @ 0x808E3FAC
    /* mtctr r12 */ // 0x808E3FB0
    /* bctrl  */ // 0x808E3FB4
    /* b 0x808e3fd8 */ // 0x808E3FB8
    /* mulli r0, r4, 0x2c */ // 0x808E3FBC
    r3 = *(8 + r3); // lwz @ 0x808E3FC0
    /* li r4, 0 */ // 0x808E3FC4
    /* lwzux r12, r3, r0 */ // 0x808E3FC8
    r12 = *(0x18 + r12); // lwz @ 0x808E3FCC
    /* mtctr r12 */ // 0x808E3FD0
    /* bctrl  */ // 0x808E3FD4
    r31 = r31 + 1; // 0x808E3FD8
    r0 = *(5 + r29); // lbz @ 0x808E3FDC
    /* clrlwi r3, r31, 0x18 */ // 0x808E3FE0
    if (<) goto 0x0x808e3f64;
    r0 = *(0x24 + r1); // lwz @ 0x808E3FEC
    r31 = *(0x1c + r1); // lwz @ 0x808E3FF0
    r30 = *(0x18 + r1); // lwz @ 0x808E3FF4
    r29 = *(0x14 + r1); // lwz @ 0x808E3FF8
    return;
}