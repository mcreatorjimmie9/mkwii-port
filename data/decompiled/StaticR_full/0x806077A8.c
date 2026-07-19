/* Function at 0x806077A8, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806077A8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x806077B0
    *(0x14 + r1) = r0; // stw @ 0x806077B4
    /* li r0, 0 */ // 0x806077B8
    /* lfs f0, 0(r5) */ // 0x806077BC
    *(0xc + r1) = r31; // stw @ 0x806077C0
    r31 = r4;
    r6 = *(0 + r3); // lwz @ 0x806077C8
    r5 = *(4 + r6); // lwz @ 0x806077CC
    r4 = *(0xc + r5); // lwz @ 0x806077D0
    r4 = r4 | 4; // 0x806077D4
    *(0xc + r5) = r4; // stw @ 0x806077D8
    *(0x23c + r3) = r0; // sth @ 0x806077DC
    /* stfs f0, 0x240(r3) */ // 0x806077E0
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x806077E8
    /* clrlwi r0, r3, 0x18 */ // 0x806077EC
    r3 = *(0 + r4); // lwz @ 0x806077F0
    /* mulli r0, r0, 0x248 */ // 0x806077F4
    r5 = r31;
    r3 = *(0x14 + r3); // lwz @ 0x806077FC
    /* li r4, 1 */ // 0x80607800
    r3 = r3 + r0; // 0x80607804
    FUN_80823BBC(r5, r4); // bl 0x80823BBC
    r0 = *(0x14 + r1); // lwz @ 0x8060780C
    r31 = *(0xc + r1); // lwz @ 0x80607810
    return;
}