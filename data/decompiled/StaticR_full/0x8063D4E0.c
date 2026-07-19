/* Function at 0x8063D4E0, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_8063D4E0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 1 */ // 0x8063D4E8
    /* li r5, 0 */ // 0x8063D4EC
    *(0x14 + r1) = r0; // stw @ 0x8063D4F0
    *(0xc + r1) = r31; // stw @ 0x8063D4F4
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x8063D4FC
    r12 = *(0x14 + r12); // lwz @ 0x8063D500
    /* mtctr r12 */ // 0x8063D504
    /* bctrl  */ // 0x8063D508
    r12 = *(0 + r31); // lwz @ 0x8063D50C
    r3 = r31;
    r12 = *(0x1c + r12); // lwz @ 0x8063D514
    /* mtctr r12 */ // 0x8063D518
    /* bctrl  */ // 0x8063D51C
    r0 = *(0x14 + r1); // lwz @ 0x8063D520
    r31 = *(0xc + r1); // lwz @ 0x8063D524
    return;
}