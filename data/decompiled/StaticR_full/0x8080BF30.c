/* Function at 0x8080BF30, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8080BF30(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x8080BF40
    r4 = r31 + 0; // 0x8080BF44
    *(0x18 + r1) = r30; // stw @ 0x8080BF48
    /* lis r30, 0 */ // 0x8080BF4C
    r30 = r30 + 0; // 0x8080BF50
    *(0x14 + r1) = r29; // stw @ 0x8080BF54
    /* lis r29, 0 */ // 0x8080BF58
    r29 = r29 + 0; // 0x8080BF5C
    /* lfs f2, 0x40(r30) */ // 0x8080BF60
    r3 = r29 + 0xc; // 0x8080BF64
    /* lfs f1, 0x44(r30) */ // 0x8080BF68
    /* lfs f0, 0x48(r30) */ // 0x8080BF6C
    r5 = r29 + 0; // 0x8080BF70
    /* stfs f2, 0xc(r29) */ // 0x8080BF74
    /* stfs f1, 4(r3) */ // 0x8080BF78
    /* stfs f0, 8(r3) */ // 0x8080BF7C
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    /* lfs f2, 0x4c(r30) */ // 0x8080BF84
    r3 = r29 + 0x24; // 0x8080BF88
    /* lfs f1, 0(r30) */ // 0x8080BF8C
    r4 = r31 + 0; // 0x8080BF90
    /* lfs f0, 0x50(r30) */ // 0x8080BF94
    r5 = r29 + 0x18; // 0x8080BF98
    /* stfs f2, 0x24(r29) */ // 0x8080BF9C
    /* stfs f1, 4(r3) */ // 0x8080BFA0
    /* stfs f0, 8(r3) */ // 0x8080BFA4
    FUN_8091EFA4(r5); // bl 0x8091EFA4
    r0 = *(0x24 + r1); // lwz @ 0x8080BFAC
    r31 = *(0x1c + r1); // lwz @ 0x8080BFB0
    r30 = *(0x18 + r1); // lwz @ 0x8080BFB4
    r29 = *(0x14 + r1); // lwz @ 0x8080BFB8
    return;
}