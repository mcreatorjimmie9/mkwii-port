/* Function at 0x80699E74, size=156 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_80699E74(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80699E84
    r3 = *(0x64 + r3); // lwz @ 0x80699E88
    r30 = *(8 + r3); // lwz @ 0x80699E8C
    if (!=) goto 0x0x80699ea0;
    /* li r30, 0 */ // 0x80699E98
    /* b 0x80699ef4 */ // 0x80699E9C
    /* lis r31, 0 */ // 0x80699EA0
    r31 = r31 + 0; // 0x80699EA4
    if (==) goto 0x0x80699ef0;
    r12 = *(0 + r30); // lwz @ 0x80699EAC
    r3 = r30;
    r12 = *(0x28 + r12); // lwz @ 0x80699EB4
    /* mtctr r12 */ // 0x80699EB8
    /* bctrl  */ // 0x80699EBC
    /* b 0x80699ed8 */ // 0x80699EC0
    if (!=) goto 0x0x80699ed4;
    /* li r0, 1 */ // 0x80699ECC
    /* b 0x80699ee4 */ // 0x80699ED0
    r3 = *(0 + r3); // lwz @ 0x80699ED4
    if (!=) goto 0x0x80699ec4;
    /* li r0, 0 */ // 0x80699EE0
    if (==) goto 0x0x80699ef0;
    /* b 0x80699ef4 */ // 0x80699EEC
    /* li r30, 0 */ // 0x80699EF0
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80699EF8
    r30 = *(8 + r1); // lwz @ 0x80699EFC
    r0 = *(0x14 + r1); // lwz @ 0x80699F00
    return;
}