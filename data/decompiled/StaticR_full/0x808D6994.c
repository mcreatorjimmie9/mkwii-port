/* Function at 0x808D6994, size=340 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_808D6994(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 1 */ // 0x808D699C
    *(0x2c + r1) = r31; // stw @ 0x808D69A4
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x808D69AC
    /* lis r30, 0 */ // 0x808D69B0
    r30 = r30 + 0; // 0x808D69B4
    r4 = r30 + 0xe; // 0x808D69B8
    FUN_80876714(r4); // bl 0x80876714
    r3 = r31;
    r4 = r30 + 0x17; // 0x808D69C4
    /* li r5, 1 */ // 0x808D69C8
    FUN_80876714(r4, r3, r4, r5); // bl 0x80876714
    /* lis r3, 0 */ // 0x808D69D0
    r3 = *(0 + r3); // lwz @ 0x808D69D4
    r0 = *(0xbcc + r3); // lwz @ 0x808D69D8
    *(0x1a0 + r31) = r0; // stw @ 0x808D69DC
    if (!=) goto 0x0x808d69f0;
    /* li r0, 0x63 */ // 0x808D69E8
    *(0x1a0 + r31) = r0; // stw @ 0x808D69EC
    r0 = *(0x1a0 + r31); // lwz @ 0x808D69F0
    if (<=) goto 0x0x808d6a04;
    /* li r0, 0x25b7 */ // 0x808D69FC
    /* b 0x808d6a14 */ // 0x808D6A00
    /* li r0, 0x25b5 */ // 0x808D6A08
    if (<=) goto 0x0x808d6a14;
    /* li r0, 0x25b6 */ // 0x808D6A10
    *(0x198 + r31) = r0; // stw @ 0x808D6A14
    /* lis r3, 0 */ // 0x808D6A18
    /* lis r4, 0 */ // 0x808D6A1C
    r3 = *(0 + r3); // lwz @ 0x808D6A20
    r4 = *(0 + r4); // lwz @ 0x808D6A24
    r0 = *(0xb70 + r3); // lwz @ 0x808D6A28
    if (!=) goto 0x0x808d6a40;
    r3 = *(0x10 + r4); // lwz @ 0x808D6A34
    r4 = *(8 + r3); // lwz @ 0x808D6A38
    /* b 0x808d6a44 */ // 0x808D6A3C
    /* li r4, 0 */ // 0x808D6A40
    *(0x19c + r31) = r4; // stw @ 0x808D6A44
    r3 = r31;
    FUN_808D6C0C(r4, r3); // bl 0x808D6C0C
    r3 = r31;
    FUN_80876EDC(r4, r3, r3); // bl 0x80876EDC
    /* lis r5, 0 */ // 0x808D6A58
    r4 = *(0 + r5); // lwzu @ 0x808D6A5C
    r3 = *(0x198 + r31); // lwz @ 0x808D6A60
    /* lis r30, 0 */ // 0x808D6A64
    r7 = *(4 + r5); // lwz @ 0x808D6A68
    r6 = *(8 + r5); // lwz @ 0x808D6A6C
    r0 = r3 + -0x25b5; // 0x808D6A70
    *(0x1c + r1) = r4; // stw @ 0x808D6A74
    /* slwi r0, r0, 2 */ // 0x808D6A78
    /* lis r3, 0 */ // 0x808D6A7C
    /* lfs f0, 0(r30) */ // 0x808D6A80
    r3 = r3 + 0; // 0x808D6A84
    *(0x20 + r1) = r7; // stw @ 0x808D6A88
    r4 = r3 + 0x22; // 0x808D6A8C
    *(0x24 + r1) = r6; // stw @ 0x808D6A94
    r3 = r31 + 0xa8; // 0x808D6A98
    /* lfsx f1, r5, r0 */ // 0x808D6A9C
    /* stfs f1, 8(r1) */ // 0x808D6AA0
    /* stfs f0, 0xc(r1) */ // 0x808D6AA4
    FUN_80665D1C(r3); // bl 0x80665D1C
    /* lfs f2, 8(r1) */ // 0x808D6AAC
    /* stfs f2, 0x2c(r3) */ // 0x808D6AB0
    /* lfs f1, 0xc(r1) */ // 0x808D6AB4
    /* stfs f1, 0x30(r3) */ // 0x808D6AB8
    /* lfs f0, 0(r30) */ // 0x808D6ABC
    /* stfs f0, 0x34(r3) */ // 0x808D6AC0
    r31 = *(0x2c + r1); // lwz @ 0x808D6AC4
    r30 = *(0x28 + r1); // lwz @ 0x808D6AC8
    r0 = *(0x34 + r1); // lwz @ 0x808D6ACC
    /* stfs f2, 0x10(r1) */ // 0x808D6AD0
    /* stfs f1, 0x14(r1) */ // 0x808D6AD4
    /* stfs f0, 0x18(r1) */ // 0x808D6AD8
    return;
}