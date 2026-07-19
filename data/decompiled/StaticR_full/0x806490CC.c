/* Function at 0x806490CC, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806490CC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806490D4
    /* li r5, 0 */ // 0x806490D8
    *(0x14 + r1) = r0; // stw @ 0x806490DC
    /* li r0, 0 */ // 0x806490E0
    *(0xc + r1) = r31; // stw @ 0x806490E4
    r31 = r3;
    *(0x54 + r3) = r0; // stb @ 0x806490EC
    r12 = *(0x44 + r3); // lwzu @ 0x806490F0
    r12 = *(0x10 + r12); // lwz @ 0x806490F4
    /* mtctr r12 */ // 0x806490F8
    /* bctrl  */ // 0x806490FC
    r3 = r31;
    r4 = r31 + 0x44; // 0x80649104
    FUN_80671C34(r3, r4); // bl 0x80671C34
    r0 = *(0x14 + r1); // lwz @ 0x8064910C
    r31 = *(0xc + r1); // lwz @ 0x80649110
    return;
}