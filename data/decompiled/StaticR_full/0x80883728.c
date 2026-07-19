/* Function at 0x80883728, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80883728(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x80883730
    *(0x14 + r1) = r0; // stw @ 0x80883734
    *(0xc + r1) = r31; // stw @ 0x80883738
    r31 = r3;
    FUN_8089B9C4(r5); // bl 0x8089B9C4
    /* lis r3, 0 */ // 0x80883744
    /* lis r4, 0 */ // 0x80883748
    /* lfs f0, 0(r3) */ // 0x8088374C
    r4 = r4 + 0; // 0x80883750
    *(0 + r31) = r4; // stw @ 0x80883754
    r3 = r31;
    /* stfs f0, 0xac(r31) */ // 0x8088375C
    r31 = *(0xc + r1); // lwz @ 0x80883760
    r0 = *(0x14 + r1); // lwz @ 0x80883764
    return;
}