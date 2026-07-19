/* Function at 0x80726F0C, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80726F0C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x80726F24
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x80726F2C
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80726F34
    r28 = r3;
    if (==) goto 0x0x80726fac;
    r12 = *(0 + r29); // lwz @ 0x80726F40
    r3 = r29;
    r12 = *(0xc + r12); // lwz @ 0x80726F48
    /* mtctr r12 */ // 0x80726F4C
    /* bctrl  */ // 0x80726F50
    r12 = *(0 + r29); // lwz @ 0x80726F54
    r3 = r29;
    r4 = r30;
    r12 = *(0x74 + r12); // lwz @ 0x80726F60
    /* mtctr r12 */ // 0x80726F64
    /* bctrl  */ // 0x80726F68
    r0 = *(0xb0 + r28); // lbz @ 0x80726F6C
    if (==) goto 0x0x80726f98;
    if (==) goto 0x0x80726f98;
    r12 = *(0 + r29); // lwz @ 0x80726F80
    r3 = r29;
    r4 = r28 + 0x72c; // 0x80726F88
    r12 = *(0x70 + r12); // lwz @ 0x80726F8C
    /* mtctr r12 */ // 0x80726F90
    /* bctrl  */ // 0x80726F94
    r12 = *(0 + r29); // lwz @ 0x80726F98
    r3 = r29;
    r12 = *(0x80 + r12); // lwz @ 0x80726FA0
    /* mtctr r12 */ // 0x80726FA4
    /* bctrl  */ // 0x80726FA8
    r0 = *(0x24 + r1); // lwz @ 0x80726FAC
    r31 = *(0x1c + r1); // lwz @ 0x80726FB0
    r30 = *(0x18 + r1); // lwz @ 0x80726FB4
    r29 = *(0x14 + r1); // lwz @ 0x80726FB8
    r28 = *(0x10 + r1); // lwz @ 0x80726FBC
    return;
}