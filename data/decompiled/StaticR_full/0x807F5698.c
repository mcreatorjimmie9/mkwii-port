/* Function at 0x807F5698, size=196 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807F5698(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* li r0, 0 */ // 0x807F56A4
    *(0x4c + r1) = r31; // stw @ 0x807F56A8
    r31 = r3;
    *(0xb0 + r3) = r0; // stw @ 0x807F56B0
    FUN_808A1BCC(); // bl 0x808A1BCC
    r6 = *(0x58 + r31); // lwz @ 0x807F56B8
    r0 = *(0x5c + r31); // lwz @ 0x807F56C0
    *(0x1c + r1) = r0; // stw @ 0x807F56C8
    /* li r5, 2 */ // 0x807F56CC
    *(0x18 + r1) = r6; // stw @ 0x807F56D0
    r6 = *(0x60 + r31); // lwz @ 0x807F56D4
    r0 = *(0x64 + r31); // lwz @ 0x807F56D8
    *(0x24 + r1) = r0; // stw @ 0x807F56DC
    *(0x20 + r1) = r6; // stw @ 0x807F56E0
    r6 = *(0x68 + r31); // lwz @ 0x807F56E4
    r0 = *(0x6c + r31); // lwz @ 0x807F56E8
    *(0x2c + r1) = r0; // stw @ 0x807F56EC
    *(0x28 + r1) = r6; // stw @ 0x807F56F0
    r6 = *(0x70 + r31); // lwz @ 0x807F56F4
    r0 = *(0x74 + r31); // lwz @ 0x807F56F8
    *(0x34 + r1) = r0; // stw @ 0x807F56FC
    *(0x30 + r1) = r6; // stw @ 0x807F5700
    r6 = *(0x78 + r31); // lwz @ 0x807F5704
    r0 = *(0x7c + r31); // lwz @ 0x807F5708
    *(0x3c + r1) = r0; // stw @ 0x807F570C
    *(0x38 + r1) = r6; // stw @ 0x807F5710
    r6 = *(0x80 + r31); // lwz @ 0x807F5714
    r0 = *(0x84 + r31); // lwz @ 0x807F5718
    *(0x44 + r1) = r0; // stw @ 0x807F571C
    *(0x40 + r1) = r6; // stw @ 0x807F5720
    FUN_805C70D8(); // bl 0x805C70D8
    /* lfs f0, 8(r1) */ // 0x807F5728
    /* li r0, 1 */ // 0x807F572C
    /* stfs f0, 0xb4(r31) */ // 0x807F5730
    /* lfs f0, 0xc(r1) */ // 0x807F5734
    /* stfs f0, 0xb8(r31) */ // 0x807F5738
    /* lfs f0, 0x10(r1) */ // 0x807F573C
    /* stfs f0, 0xbc(r31) */ // 0x807F5740
    *(0xd4 + r31) = r0; // stb @ 0x807F5744
    r31 = *(0x4c + r1); // lwz @ 0x807F5748
    r0 = *(0x54 + r1); // lwz @ 0x807F574C
    return;
}