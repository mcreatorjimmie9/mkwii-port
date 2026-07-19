/* Function at 0x807EE868, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807EE868(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807EE874
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x807EE87C
    r12 = *(0 + r3); // lwz @ 0x807EE880
    r12 = *(0x14 + r12); // lwz @ 0x807EE884
    /* mtctr r12 */ // 0x807EE888
    /* bctrl  */ // 0x807EE88C
    if (!=) goto 0x0x807ee8a0;
    /* li r0, 0 */ // 0x807EE898
    *(0xc8 + r31) = r0; // stw @ 0x807EE89C
    r0 = *(0x14 + r1); // lwz @ 0x807EE8A0
    r31 = *(0xc + r1); // lwz @ 0x807EE8A4
    return;
}