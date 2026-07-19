/* Function at 0x807859CC, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807859CC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x807859D8
    r31 = r3;
    r0 = *(0x400 + r3); // lbz @ 0x807859E0
    if (==) goto 0x0x80785a34;
    /* lis r3, 0 */ // 0x807859EC
    /* lis r4, 0 */ // 0x807859F0
    /* lfs f1, 0(r3) */ // 0x807859F4
    r4 = r4 + 0; // 0x807859FC
    FUN_805A443C(r3, r4, r3, r4); // bl 0x805A443C
    /* lfs f1, 0x3c4(r31) */ // 0x80785A04
    /* lfs f0, 8(r1) */ // 0x80785A08
    /* lfs f2, 0x3c8(r31) */ // 0x80785A0C
    /* fadds f0, f1, f0 */ // 0x80785A10
    /* lfs f1, 0x3cc(r31) */ // 0x80785A14
    /* stfs f0, 0x3c4(r31) */ // 0x80785A18
    /* lfs f0, 0xc(r1) */ // 0x80785A1C
    /* fadds f0, f2, f0 */ // 0x80785A20
    /* stfs f0, 0x3c8(r31) */ // 0x80785A24
    /* lfs f0, 0x10(r1) */ // 0x80785A28
    /* fadds f0, f1, f0 */ // 0x80785A2C
    /* stfs f0, 0x3cc(r31) */ // 0x80785A30
    r0 = *(0x24 + r1); // lwz @ 0x80785A34
    r31 = *(0x1c + r1); // lwz @ 0x80785A38
    return;
}