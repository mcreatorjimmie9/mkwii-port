/* Function at 0x80869270, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_80869270(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x80869278
    *(0x14 + r1) = r0; // stw @ 0x8086927C
    *(0xc + r1) = r31; // stw @ 0x80869280
    r31 = r3;
    r3 = *(4 + r3); // lwz @ 0x80869288
    r12 = *(0 + r3); // lwz @ 0x8086928C
    r12 = *(0xc + r12); // lwz @ 0x80869290
    /* mtctr r12 */ // 0x80869294
    /* bctrl  */ // 0x80869298
    /* li r3, 0xc */ // 0x8086929C
    /* li r0, 3 */ // 0x808692A0
    *(0xe + r31) = r3; // sth @ 0x808692A4
    *(0 + r31) = r0; // stw @ 0x808692A8
    r31 = *(0xc + r1); // lwz @ 0x808692AC
    r0 = *(0x14 + r1); // lwz @ 0x808692B0
    return;
}