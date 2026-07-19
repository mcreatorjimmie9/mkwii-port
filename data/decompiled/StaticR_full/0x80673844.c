/* Function at 0x80673844, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80673844(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80673850
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r4, 0 */ // 0x8067385C
    r3 = r31;
    r4 = r4 + 0; // 0x80673864
    *(0 + r31) = r4; // stw @ 0x80673868
    r31 = *(0xc + r1); // lwz @ 0x8067386C
    r0 = *(0x14 + r1); // lwz @ 0x80673870
    return;
}