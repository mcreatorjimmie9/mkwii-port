/* Function at 0x809179FC, size=212 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_809179FC(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x80917A04
    /* lis r5, 0 */ // 0x80917A08
    *(0x34 + r1) = r0; // stw @ 0x80917A0C
    /* lis r7, 0 */ // 0x80917A10
    /* lfs f0, 0(r6) */ // 0x80917A14
    /* lis r6, 0 */ // 0x80917A18
    *(0x2c + r1) = r31; // stw @ 0x80917A1C
    r5 = r5 + 0; // 0x80917A20
    r6 = r6 + 0; // 0x80917A24
    *(0x28 + r1) = r30; // stw @ 0x80917A28
    r30 = r4;
    r4 = r7 + 0; // 0x80917A30
    *(0x24 + r1) = r29; // stw @ 0x80917A38
    r29 = r3;
    r8 = r4 + 5; // 0x80917A40
    /* stfs f0, 8(r1) */ // 0x80917A44
    /* stfs f0, 0xc(r1) */ // 0x80917A48
    /* stfs f0, 0x10(r1) */ // 0x80917A4C
    FUN_8089F5F0(r8); // bl 0x8089F5F0
    /* lis r3, 0 */ // 0x80917A54
    *(0xb1 + r29) = r30; // stb @ 0x80917A58
    r3 = r3 + 0; // 0x80917A5C
    /* lis r31, 0 */ // 0x80917A60
    *(0 + r29) = r3; // stw @ 0x80917A64
    /* lis r3, 0 */ // 0x80917A68
    r4 = r30;
    r5 = *(0 + r31); // lwz @ 0x80917A70
    r0 = *(0x25 + r5); // lbz @ 0x80917A74
    *(0xb0 + r29) = r0; // stb @ 0x80917A78
    r3 = *(0 + r3); // lwz @ 0x80917A7C
    FUN_8061D97C(r4); // bl 0x8061D97C
    r4 = *(0xb1 + r29); // lbz @ 0x80917A84
    /* li r0, 0 */ // 0x80917A88
    *(0xc0 + r29) = r3; // stw @ 0x80917A8C
    r3 = r29;
    /* mulli r4, r4, 0xf0 */ // 0x80917A94
    r5 = *(0 + r31); // lwz @ 0x80917A98
    r4 = r5 + r4; // 0x80917A9C
    r4 = *(0x38 + r4); // lwz @ 0x80917AA0
    /* cntlzw r4, r4 */ // 0x80917AA4
    *(0xd0 + r29) = r0; // stb @ 0x80917AA8
    /* srwi r0, r4, 5 */ // 0x80917AAC
    *(0xb2 + r29) = r0; // stb @ 0x80917AB0
    r31 = *(0x2c + r1); // lwz @ 0x80917AB4
    r30 = *(0x28 + r1); // lwz @ 0x80917AB8
    r29 = *(0x24 + r1); // lwz @ 0x80917ABC
    r0 = *(0x34 + r1); // lwz @ 0x80917AC0
    return;
}