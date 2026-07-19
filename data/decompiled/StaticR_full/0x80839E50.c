/* Function at 0x80839E50, size=52 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80839E50(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80839E58
    *(0x14 + r1) = r0; // stw @ 0x80839E5C
    /* mulli r0, r4, 0x248 */ // 0x80839E60
    *(0xc + r1) = r31; // stw @ 0x80839E64
    r31 = r3;
    r5 = *(0 + r5); // lwz @ 0x80839E6C
    r4 = *(0x14 + r5); // lwz @ 0x80839E70
    r0 = r4 + r0; // 0x80839E74
    *(0x280 + r3) = r0; // stw @ 0x80839E78
    r3 = r0;
    FUN_8061DA88(r3); // bl 0x8061DA88
}