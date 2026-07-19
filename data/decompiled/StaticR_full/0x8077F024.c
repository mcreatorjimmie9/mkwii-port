/* Function at 0x8077F024, size=148 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_8077F024(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* lfs f2, 0(r4) */ // 0x8077F02C
    /* lis r5, 0 */ // 0x8077F030
    *(0x44 + r1) = r0; // stw @ 0x8077F034
    /* lfs f1, 4(r4) */ // 0x8077F038
    *(0x3c + r1) = r31; // stw @ 0x8077F03C
    /* lis r31, 0 */ // 0x8077F040
    /* lfs f0, 8(r4) */ // 0x8077F044
    r4 = r5 + 0; // 0x8077F048
    *(0x38 + r1) = r30; // stw @ 0x8077F04C
    r30 = r3;
    /* stfs f2, 0xe4(r3) */ // 0x8077F054
    /* stfs f1, 0xe8(r3) */ // 0x8077F058
    /* stfs f0, 0xec(r3) */ // 0x8077F05C
    /* lfs f1, 0(r31) */ // 0x8077F064
    FUN_805A443C(r3); // bl 0x805A443C
    r4 = r30 + 0xf0; // 0x8077F070
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    r5 = r30 + 0xe4; // 0x8077F084
    FUN_805A4498(r5, r3, r4, r5); // bl 0x805A4498
    /* lfs f0, 8(r1) */ // 0x8077F08C
    /* lis r4, 0 */ // 0x8077F090
    /* stfs f0, 0xfc(r30) */ // 0x8077F094
    r3 = r30 + 0xfc; // 0x8077F098
    /* lfs f0, 0(r4) */ // 0x8077F09C
    /* lfs f1, 0xc(r1) */ // 0x8077F0A0
    /* stfs f1, 0x100(r30) */ // 0x8077F0A4
    /* lfs f1, 0x10(r1) */ // 0x8077F0A8
    /* stfs f1, 0x104(r30) */ // 0x8077F0AC
    /* stfs f0, 0x100(r30) */ // 0x8077F0B0
    FUN_805E3430(); // bl 0x805E3430
}