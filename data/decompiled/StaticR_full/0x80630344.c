/* Function at 0x80630344, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80630344(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x8063034C
    *(0xc + r1) = r31; // stw @ 0x80630354
    /* lis r31, 0 */ // 0x80630358
    r31 = r31 + 0; // 0x8063035C
    *(8 + r1) = r30; // stw @ 0x80630360
    r30 = r3;
    /* lfs f1, 0(r31) */ // 0x80630368
    r3 = *(0x70 + r3); // lwz @ 0x8063036C
    r12 = *(0 + r3); // lwz @ 0x80630370
    r12 = *(0x10 + r12); // lwz @ 0x80630374
    /* mtctr r12 */ // 0x80630378
    /* bctrl  */ // 0x8063037C
    r3 = *(0x70 + r30); // lwz @ 0x80630380
    /* li r4, 1 */ // 0x80630384
    /* lfs f1, 0x1fc(r31) */ // 0x80630388
    /* li r0, 0 */ // 0x8063038C
    *(0x16 + r3) = r4; // stb @ 0x80630390
    /* lfs f0, 0x114(r31) */ // 0x80630394
    *(0x78 + r30) = r0; // stw @ 0x80630398
    r3 = *(4 + r30); // lwz @ 0x8063039C
    /* stfs f1, 0xb4(r30) */ // 0x806303A0
    /* stfs f0, 0x344(r3) */ // 0x806303A4
    r31 = *(0xc + r1); // lwz @ 0x806303A8
    r30 = *(8 + r1); // lwz @ 0x806303AC
    r0 = *(0x14 + r1); // lwz @ 0x806303B0
    return;
}