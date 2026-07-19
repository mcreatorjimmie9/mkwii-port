/* Function at 0x806F589C, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806F589C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806F58A4
    *(0x14 + r1) = r0; // stw @ 0x806F58A8
    *(0xc + r1) = r31; // stw @ 0x806F58AC
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x806F58B4
    FUN_80703B58(r4); // bl 0x80703B58
    /* li r0, 0 */ // 0x806F58BC
    *(0x28 + r31) = r0; // stb @ 0x806F58C0
    *(0x7578 + r31) = r0; // stw @ 0x806F58C4
    *(0x10 + r31) = r0; // stw @ 0x806F58C8
    r31 = *(0xc + r1); // lwz @ 0x806F58CC
    r0 = *(0x14 + r1); // lwz @ 0x806F58D0
    return;
}