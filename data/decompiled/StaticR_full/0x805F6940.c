/* Function at 0x805F6940, size=128 bytes */
/* Stack frame: 32 bytes */

void FUN_805F6940(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* lis r0, 0x4330 */ // 0x805F6944
    /* lis r6, 0 */ // 0x805F6948
    /* lis r4, 0 */ // 0x805F694C
    r5 = *(0x34 + r3); // lhz @ 0x805F6950
    /* lis r8, 0 */ // 0x805F6954
    r6 = r6 + 0; // 0x805F6958
    *(8 + r1) = r0; // stw @ 0x805F695C
    r5 = r5 rlwinm 0; // rlwinm
    /* lfd f1, 0(r4) */ // 0x805F6964
    *(0x34 + r3) = r5; // sth @ 0x805F6968
    r5 = r5 | 1; // 0x805F696C
    r7 = *(0 + r8); // lwz @ 0x805F6970
    *(0x10 + r1) = r0; // stw @ 0x805F6974
    /* mulli r7, r7, 0xc */ // 0x805F6978
    /* lhzx r0, r6, r7 */ // 0x805F697C
    *(0xc + r1) = r0; // stw @ 0x805F6980
    /* lfd f0, 8(r1) */ // 0x805F6984
    *(0x34 + r3) = r5; // sth @ 0x805F6988
    /* fsubs f0, f0, f1 */ // 0x805F698C
    /* stfs f0, 8(r3) */ // 0x805F6990
    r0 = *(0 + r8); // lwz @ 0x805F6994
    /* mulli r0, r0, 0xc */ // 0x805F6998
    r4 = r6 + r0; // 0x805F699C
    r0 = *(2 + r4); // lhz @ 0x805F69A0
    *(0x14 + r1) = r0; // stw @ 0x805F69A4
    /* lfd f0, 0x10(r1) */ // 0x805F69A8
    *(0x34 + r3) = r5; // sth @ 0x805F69AC
    /* fsubs f0, f0, f1 */ // 0x805F69B0
    /* stfs f0, 0xc(r3) */ // 0x805F69B4
    return;
}