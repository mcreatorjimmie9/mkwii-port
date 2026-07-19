/* Function at 0x80750EC0, size=116 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r26 */

int FUN_80750EC0(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r26 */
    /* stmw r26, 0x48(r1) */ // 0x80750ECC
    r26 = r4;
    r27 = r5;
    r3 = *(0x10 + r5); // lwz @ 0x80750ED8
    r0 = *(4 + r3); // lwz @ 0x80750EDC
    if (!=) goto 0x0x80750ef0;
    r0 = *(0 + r3); // lwz @ 0x80750EE8
    /* b 0x80750ef4 */ // 0x80750EEC
    /* li r0, 0 */ // 0x80750EF0
    if (!=) goto 0x0x80750fac;
    r30 = r27;
    /* li r29, 0 */ // 0x80750F04
    /* li r28, 0 */ // 0x80750F08
    /* b 0x80750f84 */ // 0x80750F0C
    r4 = *(0x14 + r30); // lwz @ 0x80750F10
    r0 = *(4 + r4); // lwz @ 0x80750F18
    if (!=) goto 0x0x80750f2c;
    r4 = *(0 + r4); // lwz @ 0x80750F24
    /* b 0x80750f30 */ // 0x80750F28
    /* li r4, 0 */ // 0x80750F2C
    r5 = r28;
}