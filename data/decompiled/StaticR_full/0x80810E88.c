/* Function at 0x80810E88, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80810E88(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80810E94
    r31 = r3;
    r0 = *(0xb0 + r3); // lbz @ 0x80810E9C
    if (==) goto 0x0x80810ef8;
    /* lis r4, 0 */ // 0x80810EA8
    /* lfs f1, 0xb8(r3) */ // 0x80810EAC
    /* lfs f0, 0(r4) */ // 0x80810EB0
    r4 = r31 + 0x30; // 0x80810EB4
    r5 = r31 + 0xb4; // 0x80810EB8
    /* fsubs f0, f1, f0 */ // 0x80810EBC
    /* stfs f0, 0xb8(r3) */ // 0x80810EC0
    FUN_805A4464(r4, r5, r3); // bl 0x805A4464
    r0 = *(0x2c + r31); // lhz @ 0x80810ECC
    r3 = r31;
    /* lfs f2, 0x10(r1) */ // 0x80810ED4
    /* lfs f1, 0xc(r1) */ // 0x80810ED8
    r0 = r0 | 1; // 0x80810EDC
    /* lfs f0, 8(r1) */ // 0x80810EE0
    /* stfs f0, 0x30(r31) */ // 0x80810EE4
    *(0x2c + r31) = r0; // sth @ 0x80810EE8
    /* stfs f1, 0x34(r31) */ // 0x80810EEC
    /* stfs f2, 0x38(r31) */ // 0x80810EF0
    FUN_80810F7C(); // bl 0x80810F7C
    r0 = *(0x24 + r1); // lwz @ 0x80810EF8
    r31 = *(0x1c + r1); // lwz @ 0x80810EFC
    return;
}