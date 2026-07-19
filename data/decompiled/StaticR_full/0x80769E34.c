/* Function at 0x80769E34, size=216 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80769E34(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x80769E3C
    /* lis r4, 0 */ // 0x80769E40
    *(0x24 + r1) = r0; // stw @ 0x80769E44
    r6 = r6 + 0; // 0x80769E48
    /* lfs f0, 0(r4) */ // 0x80769E4C
    *(0x1c + r1) = r31; // stw @ 0x80769E50
    r31 = r3;
    /* lfs f3, 0x64(r6) */ // 0x80769E58
    /* lfs f2, 0x7c(r6) */ // 0x80769E5C
    /* lfs f1, 0x110(r3) */ // 0x80769E60
    /* fdivs f2, f3, f2 */ // 0x80769E64
    /* fadds f1, f1, f2 */ // 0x80769E68
    /* stfs f1, 0x110(r3) */ // 0x80769E6C
    /* fabs f1, f1 */ // 0x80769E70
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80769E74
    if (>=) goto 0x0x80769e84;
    /* li r0, 1 */ // 0x80769E7C
    *(0xb8 + r3) = r0; // stw @ 0x80769E80
    r0 = *(0x48c + r3); // lbz @ 0x80769E84
    if (==) goto 0x0x80769ee4;
    /* lis r5, 0 */ // 0x80769E90
    /* lis r4, 0 */ // 0x80769E94
    /* lfs f0, 0(r5) */ // 0x80769E98
    r4 = r4 + 0; // 0x80769E9C
    /* stfs f0, 0xf8(r3) */ // 0x80769EA0
    /* lfs f1, 0xc(r6) */ // 0x80769EA8
    FUN_805A443C(r4, r3); // bl 0x805A443C
    /* lfs f1, 0x100(r31) */ // 0x80769EB0
    /* lfs f0, 8(r1) */ // 0x80769EB4
    /* lfs f2, 0x104(r31) */ // 0x80769EB8
    /* fadds f0, f1, f0 */ // 0x80769EBC
    /* lfs f1, 0x108(r31) */ // 0x80769EC0
    /* stfs f0, 0x100(r31) */ // 0x80769EC4
    /* lfs f0, 0xc(r1) */ // 0x80769EC8
    /* fadds f0, f2, f0 */ // 0x80769ECC
    /* stfs f0, 0x104(r31) */ // 0x80769ED0
    /* lfs f0, 0x10(r1) */ // 0x80769ED4
    /* fadds f0, f1, f0 */ // 0x80769ED8
    /* stfs f0, 0x108(r31) */ // 0x80769EDC
    /* b 0x80769ef0 */ // 0x80769EE0
    /* lis r4, 0 */ // 0x80769EE4
    /* lfs f0, 0(r4) */ // 0x80769EE8
    /* stfs f0, 0x104(r3) */ // 0x80769EEC
    r3 = r31;
    FUN_8076AA40(r4, r3); // bl 0x8076AA40
    r0 = *(0x24 + r1); // lwz @ 0x80769EF8
    r31 = *(0x1c + r1); // lwz @ 0x80769EFC
    return;
}