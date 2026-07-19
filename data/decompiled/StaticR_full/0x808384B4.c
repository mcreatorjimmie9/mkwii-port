/* Function at 0x808384B4, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808384B4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x808384BC
    *(0x14 + r1) = r0; // stw @ 0x808384C0
    *(0xc + r1) = r31; // stw @ 0x808384C4
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x808384CC
    r4 = *(0xa + r31); // lha @ 0x808384D0
    r3 = *(0x74 + r3); // lwz @ 0x808384D4
    FUN_8071D008(); // bl 0x8071D008
    r3 = r31;
    FUN_80828E04(r3); // bl 0x80828E04
    r0 = *(0x14 + r1); // lwz @ 0x808384E4
    r31 = *(0xc + r1); // lwz @ 0x808384E8
    return;
}