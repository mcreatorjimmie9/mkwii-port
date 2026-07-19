/* Function at 0x8080CBB4, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8080CBB4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x8080CBBC
    *(0x24 + r1) = r0; // stw @ 0x8080CBC0
    *(0x1c + r1) = r31; // stw @ 0x8080CBC4
    r31 = r3;
    r4 = r31 + 0x30; // 0x8080CBCC
    /* lfs f0, 0(r5) */ // 0x8080CBD0
    r5 = r31 + 0xb4; // 0x8080CBD4
    /* lfs f1, 0xb8(r3) */ // 0x8080CBD8
    /* fsubs f0, f1, f0 */ // 0x8080CBDC
    /* stfs f0, 0xb8(r3) */ // 0x8080CBE0
    FUN_805A4464(r5, r3); // bl 0x805A4464
    r0 = *(0x2c + r31); // lhz @ 0x8080CBEC
    r3 = r31;
    /* lfs f2, 0x10(r1) */ // 0x8080CBF4
    /* lfs f1, 0xc(r1) */ // 0x8080CBF8
    r0 = r0 | 1; // 0x8080CBFC
    /* lfs f0, 8(r1) */ // 0x8080CC00
    /* stfs f0, 0x30(r31) */ // 0x8080CC04
    *(0x2c + r31) = r0; // sth @ 0x8080CC08
    /* stfs f1, 0x34(r31) */ // 0x8080CC0C
    /* stfs f2, 0x38(r31) */ // 0x8080CC10
    FUN_8080CCAC(); // bl 0x8080CCAC
    /* li r0, 4 */ // 0x8080CC18
    *(0xb0 + r31) = r0; // stw @ 0x8080CC1C
    r31 = *(0x1c + r1); // lwz @ 0x8080CC20
    r0 = *(0x24 + r1); // lwz @ 0x8080CC24
    return;
}