/* Function at 0x806833B4, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806833B4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806833BC
    /* li r5, 0 */ // 0x806833C0
    *(0x14 + r1) = r0; // stw @ 0x806833C4
    *(0xc + r1) = r31; // stw @ 0x806833C8
    r31 = r3;
    r12 = *(0x58 + r3); // lwz @ 0x806833D0
    r12 = *(0x10 + r12); // lwz @ 0x806833D4
    /* mtctr r12 */ // 0x806833D8
    r3 = r3 + 0x58; // 0x806833DC
    /* bctrl  */ // 0x806833E0
    r3 = r31;
    r4 = r31 + 0x58; // 0x806833E8
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 0 */ // 0x806833F4
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r0 = *(0x14 + r1); // lwz @ 0x806833FC
    r31 = *(0xc + r1); // lwz @ 0x80683400
    return;
}