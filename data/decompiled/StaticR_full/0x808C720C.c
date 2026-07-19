/* Function at 0x808C720C, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_808C720C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808C7218
    r31 = r3;
    r4 = *(0x48 + r3); // lwz @ 0x808C7220
    r3 = *(0 + r4); // lwz @ 0x808C7224
    FUN_80649F54(); // bl 0x80649F54
    r4 = *(0x48 + r31); // lwz @ 0x808C722C
    r3 = r31;
    r4 = *(0 + r4); // lwz @ 0x808C7234
    FUN_808B3CF4(r3); // bl 0x808B3CF4
    /* lis r31, 0 */ // 0x808C723C
    r3 = *(0 + r31); // lwz @ 0x808C7240
    r3 = *(0x90 + r3); // lwz @ 0x808C7244
    FUN_806845FC(); // bl 0x806845FC
    r3 = *(0 + r31); // lwz @ 0x808C724C
    r3 = *(0x90 + r3); // lwz @ 0x808C7250
    FUN_806845FC(); // bl 0x806845FC
    r0 = *(0x14 + r1); // lwz @ 0x808C7258
    r31 = *(0xc + r1); // lwz @ 0x808C725C
    return;
}