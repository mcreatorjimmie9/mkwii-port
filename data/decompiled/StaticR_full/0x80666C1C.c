/* Function at 0x80666C1C, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80666C1C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80666C24
    *(0xc + r1) = r31; // stw @ 0x80666C2C
    *(8 + r1) = r30; // stw @ 0x80666C30
    r31 = *(0x7c + r3); // lwz @ 0x80666C34
    r3 = *(0 + r4); // lwz @ 0x80666C38
    r3 = *(0 + r3); // lwz @ 0x80666C3C
    r30 = r3 + 0x390; // 0x80666C40
    /* b 0x80666c64 */ // 0x80666C44
    r12 = *(0 + r31); // lwz @ 0x80666C48
    r3 = r31;
    r4 = r30;
    r12 = *(8 + r12); // lwz @ 0x80666C54
    /* mtctr r12 */ // 0x80666C58
    /* bctrl  */ // 0x80666C5C
    r31 = *(4 + r31); // lwz @ 0x80666C60
    if (!=) goto 0x0x80666c48;
    r0 = *(0x14 + r1); // lwz @ 0x80666C6C
    r31 = *(0xc + r1); // lwz @ 0x80666C70
    r30 = *(8 + r1); // lwz @ 0x80666C74
    return;
}