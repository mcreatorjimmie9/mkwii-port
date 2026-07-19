/* Function at 0x805F9F84, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805F9F84(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805F9F90
    r31 = r3;
    FUN_8061DA08(); // bl 0x8061DA08
    /* lis r3, 0 */ // 0x805F9F9C
    /* li r4, 0 */ // 0x805F9FA0
    r3 = r3 + 0; // 0x805F9FA4
    /* li r0, 1 */ // 0x805F9FA8
    *(0xc + r31) = r3; // stw @ 0x805F9FAC
    r3 = r31;
    *(0x10 + r31) = r4; // sth @ 0x805F9FB4
    *(0x12 + r31) = r0; // stb @ 0x805F9FB8
    r31 = *(0xc + r1); // lwz @ 0x805F9FBC
    r0 = *(0x14 + r1); // lwz @ 0x805F9FC0
    return;
}