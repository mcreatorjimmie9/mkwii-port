/* Function at 0x8083699C, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8083699C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x808369A4
    *(0x14 + r1) = r0; // stw @ 0x808369A8
    /* lfs f1, 0(r4) */ // 0x808369AC
    *(0xc + r1) = r31; // stw @ 0x808369B0
    r31 = r3;
    FUN_8083AB34(r4); // bl 0x8083AB34
    /* lis r4, 0 */ // 0x808369BC
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x808369C4
    /* li r4, 0x103 */ // 0x808369C8
    FUN_8082DFCC(r4, r3, r4); // bl 0x8082DFCC
    r0 = *(0x14 + r1); // lwz @ 0x808369D0
    r31 = *(0xc + r1); // lwz @ 0x808369D4
    return;
}