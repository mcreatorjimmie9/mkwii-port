/* Function at 0x80628FCC, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80628FCC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 1 */ // 0x80628FD4
    /* li r5, 0 */ // 0x80628FD8
    *(0x14 + r1) = r0; // stw @ 0x80628FDC
    *(0xc + r1) = r31; // stw @ 0x80628FE0
    r31 = r3;
    r3 = *(0x10 + r3); // lwz @ 0x80628FE8
    FUN_805F6050(r5); // bl 0x805F6050
    r3 = *(0x20 + r31); // lwz @ 0x80628FF0
    r12 = *(0 + r3); // lwz @ 0x80628FF4
    r12 = *(0x18 + r12); // lwz @ 0x80628FF8
    /* mtctr r12 */ // 0x80628FFC
    /* bctrl  */ // 0x80629000
    /* lis r3, 0 */ // 0x80629004
    r3 = *(0 + r3); // lwz @ 0x80629008
    FUN_8070CB8C(r3); // bl 0x8070CB8C
    r0 = *(0x14 + r1); // lwz @ 0x80629010
    r31 = *(0xc + r1); // lwz @ 0x80629014
    return;
}