/* Function at 0x80641134, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80641134(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lfs f0, 4(r4) */ // 0x8064113C
    /* lis r7, 0 */ // 0x80641140
    *(0x24 + r1) = r0; // stw @ 0x80641144
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x80641148
    /* lfs f5, 0(r7) */ // 0x8064114C
    *(0x1c + r1) = r31; // stw @ 0x80641150
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x80641158
    r30 = r3;
    if (>=) goto 0x0x80641174;
    r6 = *(0 + r3); // lwz @ 0x80641164
    /* fsubs f0, f1, f0 */ // 0x80641168
    /* lfs f1, 0x10(r6) */ // 0x8064116C
    /* fmuls f5, f0, f1 */ // 0x80641170
    r7 = *(0 + r3); // lwz @ 0x80641174
    r3 = r5;
    /* lfs f0, 4(r4) */ // 0x8064117C
    r5 = r30 + 0x24; // 0x80641180
    r6 = *(4 + r7); // lwz @ 0x80641184
    r0 = *(8 + r7); // lwz @ 0x80641188
    *(0xc + r1) = r0; // stw @ 0x8064118C
    /* lfs f3, 0(r4) */ // 0x80641190
    /* lfs f1, 0xc(r1) */ // 0x80641194
    *(8 + r1) = r6; // stw @ 0x80641198
    /* fadds f2, f1, f2 */ // 0x8064119C
    /* lfs f1, 8(r4) */ // 0x806411A0
    r0 = *(0xc + r7); // lwz @ 0x806411A4
    *(0x10 + r1) = r0; // stw @ 0x806411AC
    /* fmuls f0, f2, f0 */ // 0x806411B0
    /* lfs f4, 8(r1) */ // 0x806411B4
    /* lfs f2, 0x10(r1) */ // 0x806411B8
    /* fmuls f3, f4, f3 */ // 0x806411BC
    /* fmuls f1, f2, f1 */ // 0x806411C0
    /* fadds f0, f0, f5 */ // 0x806411C4
    /* stfs f3, 8(r1) */ // 0x806411C8
    /* stfs f1, 0x10(r1) */ // 0x806411CC
    /* stfs f0, 0xc(r1) */ // 0x806411D0
    FUN_805E3430(); // bl 0x805E3430
}