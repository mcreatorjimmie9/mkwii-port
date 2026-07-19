/* Function at 0x807FAA20, size=184 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807FAA20(int r3, int r4, int r5)
{
    /* Stack frame: -128(r1) */
    /* saved r31 */
    *(0x7c + r1) = r31; // stw @ 0x807FAA2C
    r31 = r3;
    r0 = *(0xb0 + r3); // lwz @ 0x807FAA34
    if (!=) goto 0x0x807fab78;
    /* lis r4, 0 */ // 0x807FAA40
    /* lfs f1, 0xb8(r3) */ // 0x807FAA44
    /* lfs f0, 0(r4) */ // 0x807FAA48
    r4 = r31 + 0x30; // 0x807FAA4C
    r5 = r31 + 0xb4; // 0x807FAA50
    /* fsubs f0, f1, f0 */ // 0x807FAA54
    /* stfs f0, 0xb8(r3) */ // 0x807FAA58
    FUN_805A4464(r4, r5, r3); // bl 0x805A4464
    /* lfs f1, 0xd8(r31) */ // 0x807FAA64
    /* lfs f0, 0xcc(r31) */ // 0x807FAA6C
    r4 = r31 + 0xd8; // 0x807FAA70
    /* lfs f3, 0xdc(r31) */ // 0x807FAA74
    /* fadds f4, f1, f0 */ // 0x807FAA78
    /* lfs f2, 0xd0(r31) */ // 0x807FAA7C
    r0 = *(0x2c + r31); // lhz @ 0x807FAA80
    /* fadds f2, f3, f2 */ // 0x807FAA84
    /* lfs f1, 0xe0(r31) */ // 0x807FAA88
    /* lfs f0, 0xd4(r31) */ // 0x807FAA8C
    /* lfs f3, 0x10(r1) */ // 0x807FAA90
    r0 = r0 | 1; // 0x807FAA94
    /* fadds f0, f1, f0 */ // 0x807FAA98
    /* lfs f1, 0xc(r1) */ // 0x807FAA9C
    /* lfs f5, 8(r1) */ // 0x807FAAA0
    /* stfs f5, 0x30(r31) */ // 0x807FAAA4
    *(0x2c + r31) = r0; // sth @ 0x807FAAA8
    /* stfs f1, 0x34(r31) */ // 0x807FAAAC
    /* stfs f3, 0x38(r31) */ // 0x807FAAB0
    /* stfs f4, 0xd8(r31) */ // 0x807FAAB4
    /* stfs f2, 0xdc(r31) */ // 0x807FAAB8
    /* stfs f0, 0xe0(r31) */ // 0x807FAABC
    FUN_805E3430(); // bl 0x805E3430
    r3 = r31 + 0xe4; // 0x807FAAC4
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    /* lfs f0, 0x30(r31) */ // 0x807FAAD4
}