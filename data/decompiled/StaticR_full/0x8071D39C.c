/* Function at 0x8071D39C, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_8071D39C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x8071D3B4
    r29 = r3;
    r0 = *(0x33 + r3); // lbz @ 0x8071D3BC
    if (!=) goto 0x0x8071d418;
    r3 = *(0xc + r3); // lwz @ 0x8071D3C8
    /* slwi r31, r4, 2 */ // 0x8071D3CC
    /* lwzx r3, r3, r31 */ // 0x8071D3D0
    r12 = *(0 + r3); // lwz @ 0x8071D3D4
    r12 = *(0xc + r12); // lwz @ 0x8071D3D8
    /* mtctr r12 */ // 0x8071D3DC
    /* bctrl  */ // 0x8071D3E0
    r3 = *(0xc + r29); // lwz @ 0x8071D3E4
    r4 = r30;
    /* lwzx r3, r3, r31 */ // 0x8071D3EC
    r12 = *(0 + r3); // lwz @ 0x8071D3F0
    r12 = *(0x78 + r12); // lwz @ 0x8071D3F4
    /* mtctr r12 */ // 0x8071D3F8
    /* bctrl  */ // 0x8071D3FC
    r3 = *(0xc + r29); // lwz @ 0x8071D400
    /* lwzx r3, r3, r31 */ // 0x8071D404
    r12 = *(0 + r3); // lwz @ 0x8071D408
    r12 = *(0x80 + r12); // lwz @ 0x8071D40C
    /* mtctr r12 */ // 0x8071D410
    /* bctrl  */ // 0x8071D414
    r0 = *(0x24 + r1); // lwz @ 0x8071D418
    r31 = *(0x1c + r1); // lwz @ 0x8071D41C
    r30 = *(0x18 + r1); // lwz @ 0x8071D420
    r29 = *(0x14 + r1); // lwz @ 0x8071D424
    return;
}