/* Function at 0x806184D8, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806184D8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r6 = r4;
    r7 = r5;
    *(0x14 + r1) = r0; // stw @ 0x806184E8
    /* li r4, 4 */ // 0x806184EC
    /* li r5, 0xf */ // 0x806184F0
    *(0xc + r1) = r31; // stw @ 0x806184F4
    r31 = r3;
    r3 = r3 + 4; // 0x806184FC
    FUN_805BCA84(r4, r5, r3); // bl 0x805BCA84
    /* lis r4, 0 */ // 0x80618504
    /* lfs f1, 4(r31) */ // 0x80618508
    /* lfs f0, 0(r4) */ // 0x8061850C
    /* fadds f0, f1, f0 */ // 0x80618510
    /* stfs f0, 4(r31) */ // 0x80618514
    r31 = *(0xc + r1); // lwz @ 0x80618518
    r0 = *(0x14 + r1); // lwz @ 0x8061851C
    return;
}