/* Function at 0x806AE988, size=316 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29, r30 */
/* Calls: 7 function(s) */

int FUN_806AE988(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r30 */
    r31 = r3;
    *(0x44 + r1) = r29; // stw @ 0x806AE9A0
    /* lis r29, 0 */ // 0x806AE9A4
    r30 = *(0 + r29); // lwzu @ 0x806AE9A8
    *(8 + r1) = r30; // stw @ 0x806AE9AC
    r12 = *(4 + r29); // lwz @ 0x806AE9B0
    r11 = *(8 + r29); // lwz @ 0x806AE9B4
    r10 = *(0xc + r29); // lwz @ 0x806AE9B8
    r9 = *(0x10 + r29); // lwz @ 0x806AE9BC
    r8 = *(0x14 + r29); // lwz @ 0x806AE9C0
    r7 = *(0x18 + r29); // lwz @ 0x806AE9C4
    r6 = *(0x1c + r29); // lwz @ 0x806AE9C8
    r5 = *(0x20 + r29); // lwz @ 0x806AE9CC
    r4 = *(0x24 + r29); // lwz @ 0x806AE9D0
    r0 = *(0x28 + r29); // lwz @ 0x806AE9D4
    *(0xc + r1) = r12; // stw @ 0x806AE9D8
    *(0x10 + r1) = r11; // stw @ 0x806AE9DC
    *(0x14 + r1) = r10; // stw @ 0x806AE9E0
    *(0x18 + r1) = r9; // stw @ 0x806AE9E4
    *(0x1c + r1) = r8; // stw @ 0x806AE9E8
    *(0x20 + r1) = r7; // stw @ 0x806AE9EC
    *(0x24 + r1) = r6; // stw @ 0x806AE9F0
    *(0x28 + r1) = r5; // stw @ 0x806AE9F4
    *(0x2c + r1) = r4; // stw @ 0x806AE9F8
    *(0x30 + r1) = r0; // stw @ 0x806AE9FC
    r4 = *(0x64 + r3); // lwz @ 0x806AEA00
    r4 = *(0xc + r4); // lwz @ 0x806AEA04
    r0 = *(4 + r4); // lwz @ 0x806AEA08
    if (!=) goto 0x0x806aea50;
    /* lis r7, 0 */ // 0x806AEA14
    r7 = r7 + 0; // 0x806AEA1C
    /* li r8, 1 */ // 0x806AEA20
    r5 = r7 + 0x1c; // 0x806AEA24
    /* li r9, 0 */ // 0x806AEA28
    r6 = r7 + 0x23; // 0x806AEA2C
    r7 = r7 + 0x3d; // 0x806AEA30
    FUN_80649B1C(r8, r5, r9, r6, r7); // bl 0x80649B1C
    /* li r0, 1 */ // 0x806AEA38
    *(0x80 + r31) = r0; // stb @ 0x806AEA3C
    r3 = r31;
    /* li r4, 0 */ // 0x806AEA44
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    /* b 0x806aea74 */ // 0x806AEA4C
    /* lis r7, 0 */ // 0x806AEA50
    r7 = r7 + 0; // 0x806AEA58
    /* li r8, 1 */ // 0x806AEA5C
    r5 = r7 + 0x55; // 0x806AEA60
    /* li r9, 0 */ // 0x806AEA64
    r6 = r7 + 0x5c; // 0x806AEA68
    r7 = r7 + 0x76; // 0x806AEA6C
    FUN_80649B1C(r8, r5, r9, r6, r7); // bl 0x80649B1C
    r3 = r31 + 0x98; // 0x806AEA74
    /* li r4, 4 */ // 0x806AEA78
    FUN_8069F4A0(r6, r7, r3, r4); // bl 0x8069F4A0
    /* lis r30, 0 */ // 0x806AEA80
    /* li r4, 0 */ // 0x806AEA84
    /* lfs f1, 0(r30) */ // 0x806AEA88
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r3 = r31 + 0x98; // 0x806AEA90
    /* li r4, 5 */ // 0x806AEA94
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r30) */ // 0x806AEA9C
    /* li r4, 0 */ // 0x806AEAA0
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r0 = *(0x54 + r1); // lwz @ 0x806AEAA8
    r31 = *(0x4c + r1); // lwz @ 0x806AEAAC
    r30 = *(0x48 + r1); // lwz @ 0x806AEAB0
    r29 = *(0x44 + r1); // lwz @ 0x806AEAB4
    return;
}