/* Function at 0x8080CE04, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_8080CE04(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 3 */ // 0x8080CE10
    *(0xc + r1) = r31; // stw @ 0x8080CE14
    r31 = r3;
    *(0xb0 + r3) = r0; // stw @ 0x8080CE1C
    r12 = *(0 + r3); // lwz @ 0x8080CE20
    r12 = *(0x90 + r12); // lwz @ 0x8080CE24
    /* mtctr r12 */ // 0x8080CE28
    /* bctrl  */ // 0x8080CE2C
    r12 = *(0 + r31); // lwz @ 0x8080CE30
    r3 = r31;
    /* li r4, 0 */ // 0x8080CE38
    r12 = *(0x68 + r12); // lwz @ 0x8080CE3C
    /* mtctr r12 */ // 0x8080CE40
    /* bctrl  */ // 0x8080CE44
    r0 = *(0x14 + r1); // lwz @ 0x8080CE48
    r31 = *(0xc + r1); // lwz @ 0x8080CE4C
    return;
}