/* Function at 0x806C529C, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806C529C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806C52A4
    /* li r5, 0 */ // 0x806C52A8
    *(0x14 + r1) = r0; // stw @ 0x806C52AC
    *(0xc + r1) = r31; // stw @ 0x806C52B0
    r31 = r3;
    r12 = *(0x44 + r3); // lwz @ 0x806C52B8
    r12 = *(0x10 + r12); // lwz @ 0x806C52BC
    /* mtctr r12 */ // 0x806C52C0
    r3 = r3 + 0x44; // 0x806C52C4
    /* bctrl  */ // 0x806C52C8
    r3 = r31;
    r4 = r31 + 0x44; // 0x806C52D0
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 0 */ // 0x806C52DC
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    /* li r4, 0 */ // 0x806C52E8
    /* li r5, 0 */ // 0x806C52EC
    FUN_806724E0(r4, r3, r4, r5); // bl 0x806724E0
    r0 = *(0x14 + r1); // lwz @ 0x806C52F4
    r31 = *(0xc + r1); // lwz @ 0x806C52F8
    return;
}