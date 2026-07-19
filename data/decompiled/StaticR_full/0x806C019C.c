/* Function at 0x806C019C, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_806C019C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806C01AC
    *(8 + r1) = r30; // stw @ 0x806C01B0
    r30 = r3;
    if (==) goto 0x0x806c01dc;
    /* li r4, 0 */ // 0x806C01BC
    r3 = r3 + 0x98; // 0x806C01C0
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806C01C8
    /* li r4, 4 */ // 0x806C01CC
    /* lfs f1, 0(r5) */ // 0x806C01D0
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    /* b 0x806c01f8 */ // 0x806C01D8
    /* li r4, 0 */ // 0x806C01DC
    r3 = r3 + 0x98; // 0x806C01E0
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806C01E8
    /* li r4, 5 */ // 0x806C01EC
    /* lfs f1, 0(r5) */ // 0x806C01F0
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r31 = r30 + 0x174; // 0x806C01F8
    /* li r30, 0 */ // 0x806C01FC
    r3 = r31;
    /* li r4, 0 */ // 0x806C0204
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    r30 = r30 + 1; // 0x806C020C
    r31 = r31 + 0x254; // 0x806C0210
    if (<) goto 0x0x806c0200;
    r0 = *(0x14 + r1); // lwz @ 0x806C021C
    r31 = *(0xc + r1); // lwz @ 0x806C0220
    r30 = *(8 + r1); // lwz @ 0x806C0224
    return;
}