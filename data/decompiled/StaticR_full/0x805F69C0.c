/* Function at 0x805F69C0, size=284 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_805F69C0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    *(0x24 + r1) = r0; // stw @ 0x805F69C8
    /* lis r0, 0x4330 */ // 0x805F69CC
    r4 = *(0x108 + r3); // lwz @ 0x805F69D0
    *(8 + r1) = r0; // stw @ 0x805F69D4
    *(0x10 + r1) = r0; // stw @ 0x805F69DC
    if (==) goto 0x0x805f69f0;
    if (==) goto 0x0x805f6a58;
    /* b 0x805f6a68 */ // 0x805F69EC
    /* lis r4, 0 */ // 0x805F69F0
    /* lis r6, 0 */ // 0x805F69F4
    r7 = *(0 + r4); // lwz @ 0x805F69F8
    /* lis r4, 0 */ // 0x805F69FC
    /* lis r5, 0 */ // 0x805F6A00
    r0 = *(0x34 + r3); // lhz @ 0x805F6A04
    /* mulli r7, r7, 0xc */ // 0x805F6A08
    r6 = r6 + 0; // 0x805F6A0C
    /* lfs f3, 0(r4) */ // 0x805F6A10
    r0 = r0 | 1; // 0x805F6A14
    /* lfd f2, 0(r5) */ // 0x805F6A18
    r4 = r6 + r7; // 0x805F6A1C
    /* lhzx r5, r6, r7 */ // 0x805F6A20
    r4 = *(2 + r4); // lhz @ 0x805F6A24
    *(0xc + r1) = r5; // stw @ 0x805F6A28
    *(0x14 + r1) = r4; // stw @ 0x805F6A2C
    /* lfd f1, 8(r1) */ // 0x805F6A30
    /* lfd f0, 0x10(r1) */ // 0x805F6A34
    /* fsubs f1, f1, f2 */ // 0x805F6A38
    /* stfs f3, 0x40(r3) */ // 0x805F6A3C
    /* fsubs f0, f0, f2 */ // 0x805F6A40
    /* stfs f3, 0x44(r3) */ // 0x805F6A44
    /* stfs f1, 8(r3) */ // 0x805F6A48
    *(0x34 + r3) = r0; // sth @ 0x805F6A4C
    /* stfs f0, 0xc(r3) */ // 0x805F6A50
    /* b 0x805f6acc */ // 0x805F6A54
    /* lis r4, 0 */ // 0x805F6A58
    r4 = *(0 + r4); // lwz @ 0x805F6A5C
    FUN_805F6B58(r4); // bl 0x805F6B58
    /* b 0x805f6acc */ // 0x805F6A64
    /* lis r4, 0 */ // 0x805F6A68
    /* lis r6, 0 */ // 0x805F6A6C
    r7 = *(0 + r4); // lwz @ 0x805F6A70
    /* lis r4, 0 */ // 0x805F6A74
    /* lis r5, 0 */ // 0x805F6A78
    r0 = *(0x34 + r3); // lhz @ 0x805F6A7C
    /* mulli r7, r7, 0xc */ // 0x805F6A80
    r6 = r6 + 0; // 0x805F6A84
    /* lfs f3, 0(r4) */ // 0x805F6A88
    r0 = r0 | 1; // 0x805F6A8C
    /* lfd f2, 0(r5) */ // 0x805F6A90
    r4 = r6 + r7; // 0x805F6A94
    /* lhzx r5, r6, r7 */ // 0x805F6A98
    r4 = *(2 + r4); // lhz @ 0x805F6A9C
    *(0xc + r1) = r5; // stw @ 0x805F6AA0
    *(0x14 + r1) = r4; // stw @ 0x805F6AA4
    /* lfd f1, 8(r1) */ // 0x805F6AA8
    /* lfd f0, 0x10(r1) */ // 0x805F6AAC
    /* fsubs f1, f1, f2 */ // 0x805F6AB0
    /* stfs f3, 0x40(r3) */ // 0x805F6AB4
    /* fsubs f0, f0, f2 */ // 0x805F6AB8
    /* stfs f3, 0x44(r3) */ // 0x805F6ABC
    /* stfs f1, 8(r3) */ // 0x805F6AC0
    *(0x34 + r3) = r0; // sth @ 0x805F6AC4
    /* stfs f0, 0xc(r3) */ // 0x805F6AC8
    r0 = *(0x24 + r1); // lwz @ 0x805F6ACC
    return;
}