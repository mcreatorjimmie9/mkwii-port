/* Function at 0x807EC6AC, size=92 bytes */
/* Stack frame: 16 bytes */

void FUN_807EC6AC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* li r0, 0 */ // 0x807EC6B0
    /* lis r4, 0 */ // 0x807EC6B4
    *(0xb0 + r3) = r0; // stw @ 0x807EC6B8
    /* lis r0, 0x4330 */ // 0x807EC6BC
    r6 = *(0xa0 + r3); // lwz @ 0x807EC6C0
    *(8 + r1) = r0; // stw @ 0x807EC6C4
    r5 = *(0 + r6); // lwz @ 0x807EC6C8
    /* lfd f1, 0(r4) */ // 0x807EC6CC
    r0 = *(0x2a + r5); // lha @ 0x807EC6D0
    /* xoris r0, r0, 0x8000 */ // 0x807EC6D4
    *(0xc + r1) = r0; // stw @ 0x807EC6D8
    /* lfd f0, 8(r1) */ // 0x807EC6DC
    /* fsubs f0, f0, f1 */ // 0x807EC6E0
    /* stfs f0, 0xb4(r3) */ // 0x807EC6E4
    r4 = *(0 + r6); // lwz @ 0x807EC6E8
    r0 = *(0x2c + r4); // lha @ 0x807EC6EC
    if (!=) goto 0x0x807ec700;
    /* fneg f0, f0 */ // 0x807EC6F8
    /* stfs f0, 0xb4(r3) */ // 0x807EC6FC
    return;
}