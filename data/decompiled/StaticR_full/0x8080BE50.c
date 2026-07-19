/* Function at 0x8080BE50, size=124 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8080BE50(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x8080BE58
    *(0x44 + r1) = r0; // stw @ 0x8080BE5C
    r4 = r5 + 0; // 0x8080BE60
    *(0x3c + r1) = r31; // stw @ 0x8080BE64
    r31 = r3;
    /* lfs f1, 0x34(r3) */ // 0x8080BE6C
    /* lfs f2, 8(r4) */ // 0x8080BE74
    /* lfs f0, 0(r5) */ // 0x8080BE7C
    r5 = r31 + 0x30; // 0x8080BE80
    /* stfs f0, 0x20(r1) */ // 0x8080BE84
    /* stfs f1, 0x24(r1) */ // 0x8080BE88
    /* stfs f2, 0x28(r1) */ // 0x8080BE8C
    FUN_805A4498(r5); // bl 0x805A4498
    /* lis r4, 0 */ // 0x8080BE94
    /* lfs f1, 0(r4) */ // 0x8080BE9C
    r4 = r31 + 0xdc; // 0x8080BEA0
    FUN_8080BC28(r4, r3, r4, r5); // bl 0x8080BC28
    /* lfs f0, 8(r1) */ // 0x8080BEAC
    r3 = r31 + 0xdc; // 0x8080BEB0
    /* stfs f0, 0xdc(r31) */ // 0x8080BEB4
    /* lfs f0, 0xc(r1) */ // 0x8080BEB8
    /* stfs f0, 0xe0(r31) */ // 0x8080BEBC
    /* lfs f0, 0x10(r1) */ // 0x8080BEC0
    /* stfs f0, 0xe4(r31) */ // 0x8080BEC4
    FUN_805E3430(); // bl 0x805E3430
}