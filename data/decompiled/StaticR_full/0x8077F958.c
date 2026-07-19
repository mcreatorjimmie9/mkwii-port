/* Function at 0x8077F958, size=152 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8077F958(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x8077F960
    *(0x2c + r1) = r31; // stw @ 0x8077F968
    /* lis r31, 0 */ // 0x8077F96C
    r31 = r31 + 0; // 0x8077F970
    *(0x28 + r1) = r30; // stw @ 0x8077F974
    r30 = r3;
    /* lfs f1, 0(r31) */ // 0x8077F97C
    r3 = *(0x20 + r3); // lwz @ 0x8077F980
    r12 = *(0 + r3); // lwz @ 0x8077F984
    r12 = *(0x10 + r12); // lwz @ 0x8077F988
    /* mtctr r12 */ // 0x8077F98C
    /* bctrl  */ // 0x8077F990
    r4 = *(0x20 + r30); // lwz @ 0x8077F994
    /* li r0, 1 */ // 0x8077F998
    /* lfs f0, 0(r31) */ // 0x8077F99C
    *(0x17 + r4) = r0; // stb @ 0x8077F9A4
    r5 = *(0x20 + r30); // lwz @ 0x8077F9A8
    r0 = *(0x2c + r30); // lhz @ 0x8077F9AC
    /* lfs f1, 0x20(r5) */ // 0x8077F9B0
    /* lfs f2, 0x1c(r5) */ // 0x8077F9B4
    r0 = r0 | 1; // 0x8077F9B8
    /* lfs f3, 0x18(r5) */ // 0x8077F9BC
    /* stfs f3, 0x30(r30) */ // 0x8077F9C0
    *(0x2c + r30) = r0; // sth @ 0x8077F9C4
    /* stfs f2, 0x34(r30) */ // 0x8077F9C8
    /* stfs f1, 0x38(r30) */ // 0x8077F9CC
    r4 = *(0x24 + r5); // lwz @ 0x8077F9D0
    r0 = *(0x28 + r5); // lwz @ 0x8077F9D4
    *(0x18 + r1) = r0; // stw @ 0x8077F9D8
    *(0x14 + r1) = r4; // stw @ 0x8077F9DC
    r0 = *(0x2c + r5); // lwz @ 0x8077F9E0
    *(0x1c + r1) = r0; // stw @ 0x8077F9E4
    /* stfs f0, 0x18(r1) */ // 0x8077F9E8
    FUN_805E3430(); // bl 0x805E3430
}