/* Function at 0x808CAF2C, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808CAF2C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808CAF38
    r31 = r3;
    FUN_806A0418(); // bl 0x806A0418
    /* lis r3, 0 */ // 0x808CAF44
    /* li r4, 0 */ // 0x808CAF48
    r3 = r3 + 0; // 0x808CAF4C
    /* li r0, -1 */ // 0x808CAF50
    *(0 + r31) = r3; // stw @ 0x808CAF54
    r3 = r31;
    *(0x174 + r31) = r4; // stb @ 0x808CAF5C
    *(0x178 + r31) = r0; // stw @ 0x808CAF60
    *(0x188 + r31) = r4; // stw @ 0x808CAF64
    r31 = *(0xc + r1); // lwz @ 0x808CAF68
    r0 = *(0x14 + r1); // lwz @ 0x808CAF6C
    return;
}