/* Function at 0x807B778C, size=668 bytes */
/* Stack frame: 336 bytes */
/* Saved registers: r16 */
/* Calls: 2 function(s) */

int FUN_807B778C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -336(r1) */
    /* saved r16 */
    /* stmw r16, 0x110(r1) */ // 0x807B7798
    /* lis r31, 0 */ // 0x807B779C
    r30 = r3;
    r18 = r4;
    r31 = r31 + 0; // 0x807B77A8
    FUN_807B6C38(); // bl 0x807B6C38
    /* lis r3, 0 */ // 0x807B77B0
    /* lis r5, 0 */ // 0x807B77B4
    r3 = r3 + 0; // 0x807B77B8
    /* li r17, 0 */ // 0x807B77BC
    r5 = r5 + 0; // 0x807B77C0
    *(0x34 + r30) = r3; // stw @ 0x807B77C4
    /* lis r4, 0 */ // 0x807B77C8
    *(0x60 + r30) = r5; // stw @ 0x807B77CC
    *(0x64 + r30) = r17; // stw @ 0x807B77D0
    r3 = *(0 + r4); // lwzu @ 0x807B77D4
    r0 = *(4 + r4); // lwz @ 0x807B77D8
    *(0x6c + r30) = r0; // stw @ 0x807B77DC
    *(0x68 + r30) = r3; // stw @ 0x807B77E0
    r0 = *(8 + r4); // lwz @ 0x807B77E4
    *(0x70 + r30) = r0; // stw @ 0x807B77E8
    r3 = *(0 + r4); // lwz @ 0x807B77EC
    r0 = *(4 + r4); // lwz @ 0x807B77F0
    *(0x78 + r30) = r0; // stw @ 0x807B77F4
    *(0x74 + r30) = r3; // stw @ 0x807B77F8
    r0 = *(8 + r4); // lwz @ 0x807B77FC
    *(0x7c + r30) = r0; // stw @ 0x807B7800
    r3 = *(0 + r4); // lwz @ 0x807B7804
    r0 = *(4 + r4); // lwz @ 0x807B7808
    *(0x84 + r30) = r0; // stw @ 0x807B780C
    *(0x80 + r30) = r3; // stw @ 0x807B7810
    r0 = *(8 + r4); // lwz @ 0x807B7814
    *(0x88 + r30) = r0; // stw @ 0x807B7818
    *(0x8c + r30) = r5; // stw @ 0x807B781C
    *(0x90 + r30) = r17; // stw @ 0x807B7820
    r3 = *(0 + r4); // lwz @ 0x807B7824
    r0 = *(4 + r4); // lwz @ 0x807B7828
    *(0x98 + r30) = r0; // stw @ 0x807B782C
    *(0x94 + r30) = r3; // stw @ 0x807B7830
    r0 = *(8 + r4); // lwz @ 0x807B7834
    *(0x9c + r30) = r0; // stw @ 0x807B7838
    r3 = *(0 + r4); // lwz @ 0x807B783C
    r0 = *(4 + r4); // lwz @ 0x807B7840
    *(0xa4 + r30) = r0; // stw @ 0x807B7844
    *(0xa0 + r30) = r3; // stw @ 0x807B7848
    r0 = *(8 + r4); // lwz @ 0x807B784C
    *(0xa8 + r30) = r0; // stw @ 0x807B7850
    r3 = *(0 + r4); // lwz @ 0x807B7854
    r0 = *(4 + r4); // lwz @ 0x807B7858
    *(0xb0 + r30) = r0; // stw @ 0x807B785C
    *(0xac + r30) = r3; // stw @ 0x807B7860
    r0 = *(8 + r4); // lwz @ 0x807B7864
    *(0xb4 + r30) = r0; // stw @ 0x807B7868
    *(0xb8 + r30) = r5; // stw @ 0x807B786C
    *(0xbc + r30) = r17; // stw @ 0x807B7870
    r3 = *(0 + r4); // lwz @ 0x807B7874
    r0 = *(4 + r4); // lwz @ 0x807B7878
    *(0xc4 + r30) = r0; // stw @ 0x807B787C
    *(0xc0 + r30) = r3; // stw @ 0x807B7880
    r0 = *(8 + r4); // lwz @ 0x807B7884
    *(0xc8 + r30) = r0; // stw @ 0x807B7888
    r3 = *(0 + r4); // lwz @ 0x807B788C
    r0 = *(4 + r4); // lwz @ 0x807B7890
    *(0xd0 + r30) = r0; // stw @ 0x807B7894
    *(0xcc + r30) = r3; // stw @ 0x807B7898
    r0 = *(8 + r4); // lwz @ 0x807B789C
    *(0xd4 + r30) = r0; // stw @ 0x807B78A0
    r3 = *(0 + r4); // lwz @ 0x807B78A4
    r0 = *(4 + r4); // lwz @ 0x807B78A8
    *(0xdc + r30) = r0; // stw @ 0x807B78AC
    *(0xd8 + r30) = r3; // stw @ 0x807B78B0
    r0 = *(8 + r4); // lwz @ 0x807B78B4
    *(0xe0 + r30) = r0; // stw @ 0x807B78B8
    *(0xe4 + r30) = r5; // stw @ 0x807B78BC
    /* li r0, 1 */ // 0x807B78C0
    /* li r3, 0x40 */ // 0x807B78C4
    *(0xe8 + r30) = r17; // stw @ 0x807B78C8
    r7 = *(0 + r4); // lwz @ 0x807B78CC
    r6 = *(4 + r4); // lwz @ 0x807B78D0
    *(0xf0 + r30) = r6; // stw @ 0x807B78D4
    *(0xec + r30) = r7; // stw @ 0x807B78D8
    r6 = *(8 + r4); // lwz @ 0x807B78DC
    *(0xf4 + r30) = r6; // stw @ 0x807B78E0
    r7 = *(0 + r4); // lwz @ 0x807B78E4
    r6 = *(4 + r4); // lwz @ 0x807B78E8
    *(0xfc + r30) = r6; // stw @ 0x807B78EC
    *(0xf8 + r30) = r7; // stw @ 0x807B78F0
    r6 = *(8 + r4); // lwz @ 0x807B78F4
    *(0x100 + r30) = r6; // stw @ 0x807B78F8
    r7 = *(0 + r4); // lwz @ 0x807B78FC
    r6 = *(4 + r4); // lwz @ 0x807B7900
    *(0x108 + r30) = r6; // stw @ 0x807B7904
    *(0x104 + r30) = r7; // stw @ 0x807B7908
    r6 = *(8 + r4); // lwz @ 0x807B790C
    *(0x10c + r30) = r6; // stw @ 0x807B7910
    *(0x110 + r30) = r5; // stw @ 0x807B7914
    *(0x114 + r30) = r17; // stw @ 0x807B7918
    r7 = *(0 + r4); // lwz @ 0x807B791C
    r6 = *(4 + r4); // lwz @ 0x807B7920
    *(0x11c + r30) = r6; // stw @ 0x807B7924
    *(0x118 + r30) = r7; // stw @ 0x807B7928
    r6 = *(8 + r4); // lwz @ 0x807B792C
    *(0x120 + r30) = r6; // stw @ 0x807B7930
    r7 = *(0 + r4); // lwz @ 0x807B7934
    r6 = *(4 + r4); // lwz @ 0x807B7938
    *(0x128 + r30) = r6; // stw @ 0x807B793C
    *(0x124 + r30) = r7; // stw @ 0x807B7940
    r6 = *(8 + r4); // lwz @ 0x807B7944
    *(0x12c + r30) = r6; // stw @ 0x807B7948
    r7 = *(0 + r4); // lwz @ 0x807B794C
    r6 = *(4 + r4); // lwz @ 0x807B7950
    *(0x134 + r30) = r6; // stw @ 0x807B7954
    *(0x130 + r30) = r7; // stw @ 0x807B7958
    r6 = *(8 + r4); // lwz @ 0x807B795C
    *(0x138 + r30) = r6; // stw @ 0x807B7960
    *(0x13c + r30) = r5; // stw @ 0x807B7964
    *(0x140 + r30) = r17; // stw @ 0x807B7968
    r7 = *(0 + r4); // lwz @ 0x807B796C
    r6 = *(4 + r4); // lwz @ 0x807B7970
    *(0x148 + r30) = r6; // stw @ 0x807B7974
    *(0x144 + r30) = r7; // stw @ 0x807B7978
    r6 = *(8 + r4); // lwz @ 0x807B797C
    *(0x14c + r30) = r6; // stw @ 0x807B7980
    r7 = *(0 + r4); // lwz @ 0x807B7984
    r6 = *(4 + r4); // lwz @ 0x807B7988
    *(0x154 + r30) = r6; // stw @ 0x807B798C
    *(0x150 + r30) = r7; // stw @ 0x807B7990
    r6 = *(8 + r4); // lwz @ 0x807B7994
    *(0x158 + r30) = r6; // stw @ 0x807B7998
    r7 = *(0 + r4); // lwz @ 0x807B799C
    r6 = *(4 + r4); // lwz @ 0x807B79A0
    *(0x160 + r30) = r6; // stw @ 0x807B79A4
    *(0x15c + r30) = r7; // stw @ 0x807B79A8
    r6 = *(8 + r4); // lwz @ 0x807B79AC
    *(0x164 + r30) = r6; // stw @ 0x807B79B0
    *(0x168 + r30) = r5; // stw @ 0x807B79B4
    *(0x16c + r30) = r17; // stw @ 0x807B79B8
    r6 = *(0 + r4); // lwz @ 0x807B79BC
    r5 = *(4 + r4); // lwz @ 0x807B79C0
    *(0x174 + r30) = r5; // stw @ 0x807B79C4
    *(0x170 + r30) = r6; // stw @ 0x807B79C8
    r5 = *(8 + r4); // lwz @ 0x807B79CC
    *(0x178 + r30) = r5; // stw @ 0x807B79D0
    r6 = *(0 + r4); // lwz @ 0x807B79D4
    r5 = *(4 + r4); // lwz @ 0x807B79D8
    *(0x180 + r30) = r5; // stw @ 0x807B79DC
    *(0x17c + r30) = r6; // stw @ 0x807B79E0
    r5 = *(8 + r4); // lwz @ 0x807B79E4
    *(0x184 + r30) = r5; // stw @ 0x807B79E8
    r6 = *(0 + r4); // lwz @ 0x807B79EC
    r5 = *(4 + r4); // lwz @ 0x807B79F0
    *(0x18c + r30) = r5; // stw @ 0x807B79F4
    *(0x188 + r30) = r6; // stw @ 0x807B79F8
    r4 = *(8 + r4); // lwz @ 0x807B79FC
    *(0x190 + r30) = r4; // stw @ 0x807B7A00
    *(0x194 + r30) = r17; // stw @ 0x807B7A04
    *(0x198 + r30) = r17; // stw @ 0x807B7A08
    *(0x19c + r30) = r17; // stw @ 0x807B7A0C
    *(0x1a0 + r30) = r17; // stw @ 0x807B7A10
    *(0x1a4 + r30) = r17; // stw @ 0x807B7A14
    *(0x1b0 + r30) = r17; // stw @ 0x807B7A18
    *(0x1b4 + r30) = r17; // stb @ 0x807B7A1C
    *(0x1b5 + r30) = r0; // stb @ 0x807B7A20
    FUN_805E3430(); // bl 0x805E3430
}