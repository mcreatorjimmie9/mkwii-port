/* Function at 0x8080E440, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8080E440(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 0 */ // 0x8080E44C
    *(0xc + r1) = r31; // stw @ 0x8080E450
    r31 = r3;
    *(0xc0 + r3) = r0; // stw @ 0x8080E458
    *(0xc4 + r3) = r0; // stw @ 0x8080E45C
    r12 = *(0 + r3); // lwz @ 0x8080E460
    r12 = *(0x54 + r12); // lwz @ 0x8080E464
    /* mtctr r12 */ // 0x8080E468
    /* bctrl  */ // 0x8080E46C
    r3 = r31;
    /* li r4, 0 */ // 0x8080E474
    FUN_808A0A44(r3, r4); // bl 0x808A0A44
    r0 = *(0x14 + r1); // lwz @ 0x8080E47C
    r31 = *(0xc + r1); // lwz @ 0x8080E480
    return;
}