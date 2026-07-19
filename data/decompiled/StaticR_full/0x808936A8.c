/* Function at 0x808936A8, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808936A8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x808936B4
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x808936BC
    r12 = *(0x38 + r12); // lwz @ 0x808936C0
    /* mtctr r12 */ // 0x808936C4
    /* bctrl  */ // 0x808936C8
    /* lis r4, 0 */ // 0x808936CC
    *(0xc + r1) = r3; // stw @ 0x808936D0
    r0 = *(0 + r4); // lwz @ 0x808936D4
    r3 = r31;
    *(8 + r1) = r0; // stw @ 0x808936DC
    /* li r6, 1 */ // 0x808936E8
    /* li r7, 0 */ // 0x808936EC
    FUN_808A1444(r4, r5, r6, r7); // bl 0x808A1444
    r3 = *(8 + r31); // lwz @ 0x808936F4
    FUN_805EEF04(r5, r6, r7); // bl 0x805EEF04
    r0 = *(0x24 + r1); // lwz @ 0x808936FC
    r31 = *(0x1c + r1); // lwz @ 0x80893700
    return;
}