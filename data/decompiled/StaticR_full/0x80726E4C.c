/* Function at 0x80726E4C, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80726E4C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x80726E64
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x80726E6C
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80726E74
    r28 = r3;
    if (==) goto 0x0x80726eec;
    r12 = *(0 + r29); // lwz @ 0x80726E80
    r3 = r29;
    r12 = *(0xc + r12); // lwz @ 0x80726E88
    /* mtctr r12 */ // 0x80726E8C
    /* bctrl  */ // 0x80726E90
    r12 = *(0 + r29); // lwz @ 0x80726E94
    r3 = r29;
    r4 = r30;
    r12 = *(0x78 + r12); // lwz @ 0x80726EA0
    /* mtctr r12 */ // 0x80726EA4
    /* bctrl  */ // 0x80726EA8
    r0 = *(0xb0 + r28); // lbz @ 0x80726EAC
    if (==) goto 0x0x80726ed8;
    if (==) goto 0x0x80726ed8;
    r12 = *(0 + r29); // lwz @ 0x80726EC0
    r3 = r29;
    r4 = r28 + 0x72c; // 0x80726EC8
    r12 = *(0x70 + r12); // lwz @ 0x80726ECC
    /* mtctr r12 */ // 0x80726ED0
    /* bctrl  */ // 0x80726ED4
    r12 = *(0 + r29); // lwz @ 0x80726ED8
    r3 = r29;
    r12 = *(0x80 + r12); // lwz @ 0x80726EE0
    /* mtctr r12 */ // 0x80726EE4
    /* bctrl  */ // 0x80726EE8
    r0 = *(0x24 + r1); // lwz @ 0x80726EEC
    r31 = *(0x1c + r1); // lwz @ 0x80726EF0
    r30 = *(0x18 + r1); // lwz @ 0x80726EF4
    r29 = *(0x14 + r1); // lwz @ 0x80726EF8
    r28 = *(0x10 + r1); // lwz @ 0x80726EFC
    return;
}