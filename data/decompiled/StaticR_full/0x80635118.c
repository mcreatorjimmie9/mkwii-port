/* Function at 0x80635118, size=204 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80635118(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x8063512C
    r12 = *(0 + r3); // lwz @ 0x80635130
    r12 = *(0x14 + r12); // lwz @ 0x80635134
    /* mtctr r12 */ // 0x80635138
    /* bctrl  */ // 0x8063513C
    r5 = *(0 + r3); // lwz @ 0x80635140
    /* li r6, 0 */ // 0x80635144
    r4 = *(4 + r31); // lwz @ 0x80635148
    /* lfs f0, 0x14(r5) */ // 0x8063514C
    r4 = *(0x90 + r4); // lwz @ 0x80635150
    /* lfs f1, 0x10(r5) */ // 0x80635154
    /* lfs f2, 0xc(r5) */ // 0x80635158
    /* stfs f2, 0x64(r4) */ // 0x8063515C
    /* stfs f1, 0x68(r4) */ // 0x80635160
    /* stfs f0, 0x6c(r4) */ // 0x80635164
    r4 = *(0 + r3); // lwz @ 0x80635168
    r5 = *(4 + r4); // lhz @ 0x8063516C
    if (==) goto 0x0x8063519c;
    r4 = *(0x10 + r31); // lwz @ 0x80635178
    r0 = r4 + 1; // 0x8063517C
    *(0x10 + r31) = r0; // stw @ 0x80635180
    if (<) goto 0x0x8063519c;
    r3 = *(0 + r3); // lwz @ 0x8063518C
    /* li r6, 1 */ // 0x80635190
    r0 = *(4 + r3); // lhz @ 0x80635194
    *(0x10 + r31) = r0; // stw @ 0x80635198
    if (!=) goto 0x0x80635218;
    r3 = *(0x2c + r31); // lwz @ 0x806351A4
    FUN_8061DA88(); // bl 0x8061DA88
    r4 = *(4 + r31); // lwz @ 0x806351AC
    /* lfs f0, 0(r3) */ // 0x806351B0
    r4 = *(0x90 + r4); // lwz @ 0x806351B4
    /* stfs f0, 0x70(r4) */ // 0x806351B8
    /* lfs f0, 4(r3) */ // 0x806351BC
    /* stfs f0, 0x74(r4) */ // 0x806351C0
    /* lfs f0, 8(r3) */ // 0x806351C4
    /* stfs f0, 0x78(r4) */ // 0x806351C8
    r4 = *(4 + r31); // lwz @ 0x806351CC
    r3 = *(0x2c + r31); // lwz @ 0x806351D0
    r30 = *(0x90 + r4); // lwz @ 0x806351D4
    FUN_8061E244(); // bl 0x8061E244
    /* lis r3, 0 */ // 0x806351DC
    /* lfs f0, 0x74(r30) */ // 0x806351E0
}