/* Function at 0x808E89D8, size=228 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_808E89D8(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x808E89E8
    r31 = r31 + 0; // 0x808E89EC
    *(0x28 + r1) = r30; // stw @ 0x808E89F0
    *(0x24 + r1) = r29; // stw @ 0x808E89F4
    r29 = r3;
    FUN_808B3318(); // bl 0x808B3318
    r0 = *(0x24 + r31); // lwz @ 0x808E8A00
    r3 = r29;
    *(8 + r1) = r0; // stw @ 0x808E8A08
    /* li r5, 1 */ // 0x808E8A10
    FUN_808B4A2C(r3, r4, r5); // bl 0x808B4A2C
    r3 = *(0x930 + r29); // lwz @ 0x808E8A18
    /* lis r5, 0x4330 */ // 0x808E8A1C
    /* lis r4, 0 */ // 0x808E8A20
    *(0x10 + r1) = r5; // stw @ 0x808E8A24
    r30 = r3 + -1; // 0x808E8A28
    /* lfd f5, 0x38(r31) */ // 0x808E8A2C
    /* xoris r3, r30, 0x8000 */ // 0x808E8A30
    *(0x14 + r1) = r3; // stw @ 0x808E8A34
    r0 = r30 + 1; // 0x808E8A38
    r4 = r4 + 0; // 0x808E8A3C
    /* xoris r0, r0, 0x8000 */ // 0x808E8A40
    /* lfd f0, 0x10(r1) */ // 0x808E8A44
    *(0x1c + r1) = r0; // stw @ 0x808E8A48
    r3 = r29 + 0x6dc; // 0x808E8A4C
    /* fsubs f1, f0, f5 */ // 0x808E8A50
    /* lfs f2, 0x28(r31) */ // 0x808E8A54
    *(0x18 + r1) = r5; // stw @ 0x808E8A58
    r4 = r4 + 0x53; // 0x808E8A5C
    /* lfs f3, 0x2c(r31) */ // 0x808E8A60
    /* lfd f0, 0x18(r1) */ // 0x808E8A64
    /* fmuls f1, f2, f1 */ // 0x808E8A68
    /* lfs f4, 0x30(r31) */ // 0x808E8A6C
    /* fsubs f0, f0, f5 */ // 0x808E8A70
    /* fmuls f2, f2, f0 */ // 0x808E8A74
    FUN_806A1244(); // bl 0x806A1244
    r3 = r29 + 0x6dc; // 0x808E8A7C
    /* subfic r4, r30, 0xceb */ // 0x808E8A80
    /* li r5, 0 */ // 0x808E8A84
    FUN_806A0A34(r3, r5); // bl 0x806A0A34
    *(0x91c + r29) = r30; // stw @ 0x808E8A8C
    r3 = r29 + 0x934; // 0x808E8A90
    /* subfic r4, r30, 0xe79 */ // 0x808E8A94
    /* li r5, 0 */ // 0x808E8A98
    FUN_806A0A34(r3, r5); // bl 0x806A0A34
    r0 = *(0x34 + r1); // lwz @ 0x808E8AA0
    r31 = *(0x2c + r1); // lwz @ 0x808E8AA4
    r30 = *(0x28 + r1); // lwz @ 0x808E8AA8
    r29 = *(0x24 + r1); // lwz @ 0x808E8AAC
    return;
}