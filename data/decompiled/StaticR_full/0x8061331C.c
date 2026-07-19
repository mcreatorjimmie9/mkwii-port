/* Function at 0x8061331C, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8061331C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80613328
    r31 = r3;
    FUN_8061DA08(); // bl 0x8061DA08
    /* lis r3, 0 */ // 0x80613334
    /* lis r4, 0 */ // 0x80613338
    /* lfs f0, 0(r3) */ // 0x8061333C
    r4 = r4 + 0; // 0x80613340
    *(0xc + r31) = r4; // stw @ 0x80613344
    r3 = r31;
    /* stfs f0, 0x10(r31) */ // 0x8061334C
    r31 = *(0xc + r1); // lwz @ 0x80613350
    r0 = *(0x14 + r1); // lwz @ 0x80613354
    return;
}