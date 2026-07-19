/* Function at 0x808691F4, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */

int FUN_808691F4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* li r0, 0 */ // 0x80869200
    /* stmw r26, 8(r1) */ // 0x80869204
    r26 = r3;
    r28 = r26;
    /* li r27, 0 */ // 0x80869210
    /* li r30, 0xc */ // 0x80869214
    /* li r31, 3 */ // 0x80869218
    *(8 + r3) = r0; // stw @ 0x8086921C
    /* b 0x80869250 */ // 0x80869220
    r29 = *(0x44 + r28); // lwz @ 0x80869224
    /* li r4, 0 */ // 0x80869228
    r3 = *(4 + r29); // lwz @ 0x8086922C
    r12 = *(0 + r3); // lwz @ 0x80869230
    r12 = *(0xc + r12); // lwz @ 0x80869234
    /* mtctr r12 */ // 0x80869238
    /* bctrl  */ // 0x8086923C
    *(0xe + r29) = r30; // sth @ 0x80869240
    r28 = r28 + 4; // 0x80869244
    r27 = r27 + 1; // 0x80869248
    *(0 + r29) = r31; // stw @ 0x8086924C
    r0 = *(0 + r26); // lwz @ 0x80869250
    if (<) goto 0x0x80869224;
    r0 = *(0x24 + r1); // lwz @ 0x80869260
    return;
}