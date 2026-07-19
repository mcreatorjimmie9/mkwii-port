/* Function at 0x80763104, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80763104(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x8076310C
    /* li r4, 0 */ // 0x80763110
    *(0x14 + r1) = r0; // stw @ 0x80763114
    /* lfs f1, 0(r5) */ // 0x80763118
    *(0xc + r1) = r31; // stw @ 0x8076311C
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x80763124
    r12 = *(0 + r3); // lwz @ 0x80763128
    r12 = *(0x10 + r12); // lwz @ 0x8076312C
    /* mtctr r12 */ // 0x80763130
    /* bctrl  */ // 0x80763134
    r4 = *(0x20 + r31); // lwz @ 0x80763138
    r3 = r31;
    r4 = r4 + 0x24; // 0x80763140
    FUN_808A1E3C(r3, r4); // bl 0x808A1E3C
    r3 = *(0x20 + r31); // lwz @ 0x80763148
    r0 = *(0x2c + r31); // lhz @ 0x8076314C
    /* lfs f0, 0x20(r3) */ // 0x80763150
    /* lfs f1, 0x1c(r3) */ // 0x80763154
    r0 = r0 | 1; // 0x80763158
    /* lfs f2, 0x18(r3) */ // 0x8076315C
    /* stfs f2, 0x30(r31) */ // 0x80763160
    *(0x2c + r31) = r0; // sth @ 0x80763164
    /* stfs f1, 0x34(r31) */ // 0x80763168
    /* stfs f0, 0x38(r31) */ // 0x8076316C
    r31 = *(0xc + r1); // lwz @ 0x80763170
    r0 = *(0x14 + r1); // lwz @ 0x80763174
    return;
}