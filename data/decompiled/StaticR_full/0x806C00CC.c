/* Function at 0x806C00CC, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806C00CC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x806C00D4
    *(0xc + r1) = r31; // stw @ 0x806C00DC
    *(8 + r1) = r30; // stw @ 0x806C00E0
    r30 = r3;
    r3 = r3 + 0x98; // 0x806C00E8
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806C00F0
    /* li r4, 0 */ // 0x806C00F4
    /* lfs f1, 0(r5) */ // 0x806C00F8
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r31 = r30 + 0x174; // 0x806C0100
    /* li r30, 0 */ // 0x806C0104
    r3 = r31;
    /* li r4, 0 */ // 0x806C010C
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    r30 = r30 + 1; // 0x806C0114
    r31 = r31 + 0x254; // 0x806C0118
    if (<) goto 0x0x806c0108;
    r0 = *(0x14 + r1); // lwz @ 0x806C0124
    r31 = *(0xc + r1); // lwz @ 0x806C0128
    r30 = *(8 + r1); // lwz @ 0x806C012C
    return;
}