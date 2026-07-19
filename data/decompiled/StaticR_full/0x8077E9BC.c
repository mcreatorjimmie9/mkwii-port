/* Function at 0x8077E9BC, size=156 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8077E9BC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x8077E9C4
    *(0xc + r1) = r31; // stw @ 0x8077E9CC
    *(8 + r1) = r30; // stw @ 0x8077E9D0
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x8077E9D8
    r12 = *(0x68 + r12); // lwz @ 0x8077E9DC
    /* mtctr r12 */ // 0x8077E9E0
    /* bctrl  */ // 0x8077E9E4
    r12 = *(0 + r30); // lwz @ 0x8077E9E8
    r3 = r30;
    r12 = *(0x98 + r12); // lwz @ 0x8077E9F0
    /* mtctr r12 */ // 0x8077E9F4
    /* bctrl  */ // 0x8077E9F8
    if (!=) goto 0x0x8077ea40;
    r12 = *(0 + r30); // lwz @ 0x8077EA04
    /* lis r31, 0 */ // 0x8077EA08
    r3 = r30;
    /* lfs f1, 0(r31) */ // 0x8077EA10
    r12 = *(0xe0 + r12); // lwz @ 0x8077EA14
    /* mtctr r12 */ // 0x8077EA18
    /* bctrl  */ // 0x8077EA1C
    r12 = *(0 + r30); // lwz @ 0x8077EA20
    /* lis r4, 0 */ // 0x8077EA24
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x8077EA2C
    r12 = *(0x88 + r12); // lwz @ 0x8077EA30
    /* lfs f2, 0(r31) */ // 0x8077EA34
    /* mtctr r12 */ // 0x8077EA38
    /* bctrl  */ // 0x8077EA3C
    r0 = *(0x14 + r1); // lwz @ 0x8077EA40
    r31 = *(0xc + r1); // lwz @ 0x8077EA44
    r30 = *(8 + r1); // lwz @ 0x8077EA48
    return;
}