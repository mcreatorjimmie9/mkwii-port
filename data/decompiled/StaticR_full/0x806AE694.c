/* Function at 0x806AE694, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_806AE694(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806AE69C
    *(0x14 + r1) = r0; // stw @ 0x806AE6A0
    /* lfs f1, 0(r4) */ // 0x806AE6A4
    *(0xc + r1) = r31; // stw @ 0x806AE6A8
    r31 = r3;
    r3 = r3 + 0x1d0; // 0x806AE6B0
    FUN_8064ED64(r3); // bl 0x8064ED64
    r12 = *(0x44 + r31); // lwz @ 0x806AE6B8
    r3 = r31 + 0x44; // 0x806AE6BC
    /* li r4, 0 */ // 0x806AE6C0
    /* li r5, 0 */ // 0x806AE6C4
    r12 = *(0x10 + r12); // lwz @ 0x806AE6C8
    /* mtctr r12 */ // 0x806AE6CC
    /* bctrl  */ // 0x806AE6D0
    r3 = r31;
    r4 = r31 + 0x44; // 0x806AE6D8
    FUN_80671C34(r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 1 */ // 0x806AE6E4
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    r5 = r31 + 0x54; // 0x806AE6F0
    /* li r4, 0 */ // 0x806AE6F4
    /* li r6, 0 */ // 0x806AE6F8
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r31 + 0x54; // 0x806AE700
    r4 = r31 + 0x1d0; // 0x806AE704
    FUN_8064EEA8(r4, r6, r3, r4); // bl 0x8064EEA8
    r0 = *(0x14 + r1); // lwz @ 0x806AE70C
    r31 = *(0xc + r1); // lwz @ 0x806AE710
    return;
}