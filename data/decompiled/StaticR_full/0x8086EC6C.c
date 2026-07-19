/* Function at 0x8086EC6C, size=132 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8086EC6C(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* addic. r0, r3, 0x18 */ // 0x8086EC78
    *(0x58 + r1) = r30; // stw @ 0x8086EC80
    r30 = r4;
    *(0x54 + r1) = r29; // stw @ 0x8086EC88
    r29 = r3;
    if (==) goto 0x0x8086eca0;
    r3 = *(0 + r4); // lwz @ 0x8086EC94
    r4 = r0;
    FUN_805E3430(r4); // bl 0x805E3430
    r5 = *(0x10 + r29); // lwz @ 0x8086ECA0
    /* lis r31, 0 */ // 0x8086ECA4
    /* lfs f2, 0x24(r29) */ // 0x8086ECA8
    /* lfs f3, 0x34(r29) */ // 0x8086ECB0
    /* lfs f4, 0x44(r29) */ // 0x8086ECB8
    /* lfs f0, 0x114(r5) */ // 0x8086ECBC
    /* stfs f0, 8(r1) */ // 0x8086ECC0
    /* lfs f0, 0(r31) */ // 0x8086ECC4
    /* lfs f1, 0x124(r5) */ // 0x8086ECC8
    /* stfs f1, 0xc(r1) */ // 0x8086ECCC
    /* lfs f1, 0x134(r5) */ // 0x8086ECD0
    /* stfs f1, 0x10(r1) */ // 0x8086ECD4
    /* lfs f1, 0x4c0(r5) */ // 0x8086ECD8
    /* stfs f2, 0x14(r1) */ // 0x8086ECDC
    /* fmuls f1, f0, f1 */ // 0x8086ECE0
    /* stfs f3, 0x18(r1) */ // 0x8086ECE4
    /* stfs f4, 0x1c(r1) */ // 0x8086ECE8
    FUN_805E3430(); // bl 0x805E3430
}