/* Function at 0x8080C920, size=184 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8080C920(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x8080C928
    /* lfs f2, 0(r4) */ // 0x8080C930
    *(0x1c + r1) = r31; // stw @ 0x8080C934
    *(0x18 + r1) = r30; // stw @ 0x8080C938
    r30 = r3;
    /* lfs f0, 0x110(r3) */ // 0x8080C940
    r5 = *(0x108 + r3); // lwz @ 0x8080C944
    /* fdivs f1, f2, f0 */ // 0x8080C948
    /* lfs f0, 0xc0(r3) */ // 0x8080C94C
    r0 = *(0x2c + r3); // lhz @ 0x8080C950
    /* lfs f3, 8(r5) */ // 0x8080C954
    /* lfs f4, 4(r5) */ // 0x8080C958
    r0 = r0 | 1; // 0x8080C95C
    /* fadds f0, f0, f1 */ // 0x8080C960
    /* lfs f5, 0(r5) */ // 0x8080C964
    /* stfs f5, 0x30(r3) */ // 0x8080C968
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x8080C96C
    *(0x2c + r3) = r0; // sth @ 0x8080C970
    /* stfs f4, 0x34(r3) */ // 0x8080C974
    /* stfs f3, 0x38(r3) */ // 0x8080C978
    /* stfs f0, 0xc0(r3) */ // 0x8080C97C
    if (<=) goto 0x0x8080c990;
    /* li r0, 1 */ // 0x8080C984
    /* stfs f2, 0xc0(r3) */ // 0x8080C988
    *(0x10c + r3) = r0; // stb @ 0x8080C98C
    r3 = *(8 + r3); // lwz @ 0x8080C990
    /* lfs f1, 0xc0(r30) */ // 0x8080C994
    r12 = *(0 + r3); // lwz @ 0x8080C998
    r12 = *(0x18 + r12); // lwz @ 0x8080C99C
    /* mtctr r12 */ // 0x8080C9A0
    /* bctrl  */ // 0x8080C9A4
    r5 = *(0x104 + r30); // lwz @ 0x8080C9A8
    /* lis r31, 0 */ // 0x8080C9AC
    /* lfs f0, 0(r31) */ // 0x8080C9B0
    r4 = *(0 + r5); // lwz @ 0x8080C9B8
    r0 = *(4 + r5); // lwz @ 0x8080C9BC
    *(0xc + r1) = r0; // stw @ 0x8080C9C0
    *(8 + r1) = r4; // stw @ 0x8080C9C4
    r0 = *(8 + r5); // lwz @ 0x8080C9C8
    *(0x10 + r1) = r0; // stw @ 0x8080C9CC
    /* stfs f0, 0xc(r1) */ // 0x8080C9D0
    FUN_805E3430(); // bl 0x805E3430
}