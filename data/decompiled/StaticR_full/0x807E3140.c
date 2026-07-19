/* Function at 0x807E3140, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807E3140(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807E3148
    /* lis r5, 0 */ // 0x807E314C
    *(0x14 + r1) = r0; // stw @ 0x807E3150
    /* lfs f2, 0(r4) */ // 0x807E3154
    /* lis r4, 0 */ // 0x807E3158
    *(0xc + r1) = r31; // stw @ 0x807E315C
    r31 = r3;
    /* lfs f0, 0(r5) */ // 0x807E3164
    /* lfs f1, 0x1c8(r3) */ // 0x807E3168
    /* fdivs f2, f2, f0 */ // 0x807E316C
    /* lfs f0, 0(r4) */ // 0x807E3170
    /* fsubs f1, f1, f2 */ // 0x807E3174
    /* stfs f1, 0x1c8(r3) */ // 0x807E3178
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807E317C
    if (<=) goto 0x0x807e319c;
    r3 = *(8 + r3); // lwz @ 0x807E3184
    r12 = *(0 + r3); // lwz @ 0x807E3188
    r12 = *(0x18 + r12); // lwz @ 0x807E318C
    /* mtctr r12 */ // 0x807E3190
    /* bctrl  */ // 0x807E3194
    /* b 0x807e31cc */ // 0x807E3198
    r12 = *(0 + r3); // lwz @ 0x807E319C
    /* li r4, 0 */ // 0x807E31A0
    r12 = *(0x68 + r12); // lwz @ 0x807E31A4
    /* mtctr r12 */ // 0x807E31A8
    /* bctrl  */ // 0x807E31AC
    /* li r0, 0xb */ // 0x807E31B0
    *(0xb0 + r31) = r0; // stw @ 0x807E31B4
    r3 = r31;
    r12 = *(0 + r31); // lwz @ 0x807E31BC
    r12 = *(0x90 + r12); // lwz @ 0x807E31C0
    /* mtctr r12 */ // 0x807E31C4
    /* bctrl  */ // 0x807E31C8
    /* lis r3, 0 */ // 0x807E31CC
    /* lfs f0, 0(r3) */ // 0x807E31D0
    /* stfs f0, 0xcc(r31) */ // 0x807E31D4
    /* stfs f0, 0xd4(r31) */ // 0x807E31D8
    r31 = *(0xc + r1); // lwz @ 0x807E31DC
    r0 = *(0x14 + r1); // lwz @ 0x807E31E0
    return;
}