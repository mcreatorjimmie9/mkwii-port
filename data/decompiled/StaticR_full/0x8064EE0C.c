/* Function at 0x8064EE0C, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8064EE0C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8064EE18
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r3, 0 */ // 0x8064EE24
    /* li r0, 0 */ // 0x8064EE28
    r3 = r3 + 0; // 0x8064EE2C
    *(0 + r31) = r3; // stw @ 0x8064EE30
    r3 = r31;
    *(0x174 + r31) = r0; // stw @ 0x8064EE38
    r31 = *(0xc + r1); // lwz @ 0x8064EE3C
    r0 = *(0x14 + r1); // lwz @ 0x8064EE40
    return;
}