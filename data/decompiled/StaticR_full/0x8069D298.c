/* Function at 0x8069D298, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8069D298(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8069D2A4
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r4, 0 */ // 0x8069D2B0
    r3 = r31;
    r4 = r4 + 0; // 0x8069D2B8
    *(0 + r31) = r4; // stw @ 0x8069D2BC
    r31 = *(0xc + r1); // lwz @ 0x8069D2C0
    r0 = *(0x14 + r1); // lwz @ 0x8069D2C4
    return;
}