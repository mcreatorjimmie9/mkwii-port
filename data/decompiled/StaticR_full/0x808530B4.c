/* Function at 0x808530B4, size=200 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808530B4(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x24 + r1) = r29; // stw @ 0x808530C8
    r29 = r3;
    r4 = *(0 + r3); // lwz @ 0x808530D0
    r4 = *(0 + r4); // lwz @ 0x808530D4
    r0 = *(8 + r4); // lwz @ 0x808530D8
    if (!=) goto 0x0x808530ec;
    FUN_8061DAE0(); // bl 0x8061DAE0
    /* b 0x808530f0 */ // 0x808530E8
    FUN_8061DAF4(); // bl 0x8061DAF4
    /* lis r4, 0 */ // 0x808530F0
    /* lfs f0, 0xbc(r29) */ // 0x808530F4
    /* lfs f1, 0(r4) */ // 0x808530F8
    /* fcmpu cr0, f1, f0 */ // 0x808530FC
    if (!=) goto 0x0x8085312c;
    /* lfs f0, 0xc0(r29) */ // 0x80853104
    /* fcmpu cr0, f1, f0 */ // 0x80853108
    if (!=) goto 0x0x8085312c;
    /* lfs f0, 0xc4(r29) */ // 0x80853110
    /* fcmpu cr0, f1, f0 */ // 0x80853114
    if (!=) goto 0x0x8085312c;
    r4 = r29 + 0x78; // 0x8085311C
    r5 = r29 + 0x114; // 0x80853120
    FUN_805E3430(r4, r5); // bl 0x805E3430
    /* b 0x80853198 */ // 0x80853128
    /* lfs f1, 0x84(r29) */ // 0x8085312C
    r4 = r29 + 0x78; // 0x80853130
    /* lfs f0, 0xbc(r29) */ // 0x80853134
    r5 = r29 + 0x114; // 0x80853138
    /* lfs f3, 0x94(r29) */ // 0x8085313C
    /* fmuls f4, f1, f0 */ // 0x80853140
    /* lfs f2, 0xc0(r29) */ // 0x80853144
    /* lfs f5, 0x84(r29) */ // 0x80853148
    /* lfs f6, 0x94(r29) */ // 0x8085314C
    /* fmuls f2, f3, f2 */ // 0x80853150
    /* lfs f7, 0xa4(r29) */ // 0x80853154
    /* lfs f1, 0xa4(r29) */ // 0x80853158
    /* lfs f0, 0xc4(r29) */ // 0x8085315C
    /* stfs f5, 8(r1) */ // 0x80853160
    /* fmuls f0, f1, f0 */ // 0x80853164
    /* stfs f6, 0xc(r1) */ // 0x80853168
    /* stfs f7, 0x10(r1) */ // 0x8085316C
    /* stfs f4, 0x84(r29) */ // 0x80853170
    /* stfs f2, 0x94(r29) */ // 0x80853174
    /* stfs f0, 0xa4(r29) */ // 0x80853178
}