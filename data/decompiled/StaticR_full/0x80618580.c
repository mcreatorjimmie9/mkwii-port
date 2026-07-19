/* Function at 0x80618580, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80618580(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r6 = r4;
    r7 = r5;
    *(0x14 + r1) = r0; // stw @ 0x80618590
    /* li r4, 2 */ // 0x80618594
    /* li r5, 0x17 */ // 0x80618598
    *(0xc + r1) = r31; // stw @ 0x8061859C
    r31 = r3;
    r3 = r3 + 4; // 0x806185A4
    FUN_805BCA84(r4, r5, r3); // bl 0x805BCA84
    /* lis r4, 0 */ // 0x806185AC
    /* lfs f1, 4(r31) */ // 0x806185B0
    /* lfs f0, 0(r4) */ // 0x806185B4
    /* fadds f0, f1, f0 */ // 0x806185B8
    /* stfs f0, 4(r31) */ // 0x806185BC
    r31 = *(0xc + r1); // lwz @ 0x806185C0
    r0 = *(0x14 + r1); // lwz @ 0x806185C4
    return;
}