/* Function at 0x8064889C, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8064889C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x806488AC
    *(8 + r1) = r30; // stw @ 0x806488B0
    /* li r30, 0 */ // 0x806488B4
    /* b 0x806488d4 */ // 0x806488B8
    r3 = *(0 + r31); // lwz @ 0x806488BC
    /* clrlwi r4, r30, 0x18 */ // 0x806488C0
    FUN_8061D97C(); // bl 0x8061D97C
    /* li r4, 1 */ // 0x806488C8
    FUN_8061EF88(r4); // bl 0x8061EF88
    r30 = r30 + 1; // 0x806488D0
    r3 = *(0 + r31); // lwz @ 0x806488D4
    /* clrlwi r4, r30, 0x18 */ // 0x806488D8
    r0 = *(0x24 + r3); // lbz @ 0x806488DC
    if (<) goto 0x0x806488bc;
    r0 = *(0x14 + r1); // lwz @ 0x806488E8
    r31 = *(0xc + r1); // lwz @ 0x806488EC
    r30 = *(8 + r1); // lwz @ 0x806488F0
    return;
}