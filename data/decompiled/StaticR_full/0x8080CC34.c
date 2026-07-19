/* Function at 0x8080CC34, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8080CC34(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x8080CC3C
    *(0x24 + r1) = r0; // stw @ 0x8080CC40
    *(0x1c + r1) = r31; // stw @ 0x8080CC44
    r31 = r3;
    r4 = r31 + 0x30; // 0x8080CC4C
    /* lfs f0, 0(r5) */ // 0x8080CC50
    r5 = r31 + 0xb4; // 0x8080CC54
    /* lfs f1, 0xb8(r3) */ // 0x8080CC58
    /* fsubs f0, f1, f0 */ // 0x8080CC5C
    /* stfs f0, 0xb8(r3) */ // 0x8080CC60
    FUN_805A4464(r5, r3); // bl 0x805A4464
    r0 = *(0x2c + r31); // lhz @ 0x8080CC6C
    r3 = r31;
    /* lfs f0, 0x10(r1) */ // 0x8080CC74
    /* lfs f1, 0xc(r1) */ // 0x8080CC78
    r0 = r0 | 1; // 0x8080CC7C
    /* lfs f2, 8(r1) */ // 0x8080CC80
    /* stfs f2, 0x30(r31) */ // 0x8080CC84
    *(0x2c + r31) = r0; // sth @ 0x8080CC88
    /* stfs f1, 0x34(r31) */ // 0x8080CC8C
    /* stfs f0, 0x38(r31) */ // 0x8080CC90
    FUN_8080CCAC(); // bl 0x8080CCAC
    r0 = *(0x24 + r1); // lwz @ 0x8080CC98
    r31 = *(0x1c + r1); // lwz @ 0x8080CC9C
    return;
}