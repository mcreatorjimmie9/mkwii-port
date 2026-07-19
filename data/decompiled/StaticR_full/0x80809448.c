/* Function at 0x80809448, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */

int FUN_80809448(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80809454
    r31 = r3;
    r3 = r4;
    r12 = *(0 + r4); // lwz @ 0x80809460
    r12 = *(0x24 + r12); // lwz @ 0x80809464
    /* mtctr r12 */ // 0x80809468
    /* bctrl  */ // 0x8080946C
    /* lis r4, 0 */ // 0x80809470
    /* lis r0, 0x4330 */ // 0x80809474
    r6 = *(0 + r4); // lwz @ 0x80809478
    /* lis r5, 0 */ // 0x8080947C
    /* lis r4, 0 */ // 0x80809480
    r3 = r3 rlwinm 1; // rlwinm
    r7 = *(4 + r6); // lwz @ 0x80809488
    *(8 + r1) = r0; // stw @ 0x8080948C
    r6 = *(0xc + r7); // lwz @ 0x80809490
    r7 = *(8 + r7); // lwz @ 0x80809494
    /* lhax r0, r6, r3 */ // 0x80809498
    /* lfd f2, 0(r5) */ // 0x8080949C
    /* mulli r0, r0, 0x74 */ // 0x808094A0
    /* lfs f0, 0(r4) */ // 0x808094A4
    r3 = r7 + r0; // 0x808094A8
    r0 = *(0x6e + r3); // lha @ 0x808094AC
    /* xoris r0, r0, 0x8000 */ // 0x808094B0
    *(0xc + r1) = r0; // stw @ 0x808094B4
    /* lfd f1, 8(r1) */ // 0x808094B8
    /* stfs f0, 0(r31) */ // 0x808094BC
    /* fsubs f1, f1, f2 */ // 0x808094C0
    /* stfs f0, 8(r31) */ // 0x808094C4
    /* stfs f1, 4(r31) */ // 0x808094C8
    r31 = *(0x1c + r1); // lwz @ 0x808094CC
    r0 = *(0x24 + r1); // lwz @ 0x808094D0
    return;
}