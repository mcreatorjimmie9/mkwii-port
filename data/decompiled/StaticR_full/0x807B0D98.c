/* Function at 0x807B0D98, size=308 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */

int FUN_807B0D98(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x807B0DA4
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r31 = r26;
    /* li r30, 0 */ // 0x807B0DBC
    r3 = *(4 + r31); // lwz @ 0x807B0DC0
    /* li r4, 0 */ // 0x807B0DC4
    r12 = *(0 + r3); // lwz @ 0x807B0DC8
    r12 = *(0xc + r12); // lwz @ 0x807B0DCC
    /* mtctr r12 */ // 0x807B0DD0
    /* bctrl  */ // 0x807B0DD4
    r30 = r30 + 1; // 0x807B0DD8
    r31 = r31 + 4; // 0x807B0DDC
    if (<) goto 0x0x807b0dc0;
    if (==) goto 0x0x807b0eb8;
    r3 = *(4 + r26); // lwz @ 0x807B0DF0
    /* li r4, 1 */ // 0x807B0DF4
    r12 = *(0 + r3); // lwz @ 0x807B0DF8
    r12 = *(0xc + r12); // lwz @ 0x807B0DFC
    /* mtctr r12 */ // 0x807B0E00
    /* bctrl  */ // 0x807B0E04
    r3 = *(0x28 + r26); // lwz @ 0x807B0E08
    /* li r4, 1 */ // 0x807B0E0C
    r12 = *(0 + r3); // lwz @ 0x807B0E10
    r12 = *(0xc + r12); // lwz @ 0x807B0E14
    /* mtctr r12 */ // 0x807B0E18
    /* bctrl  */ // 0x807B0E1C
    /* slwi r0, r29, 2 */ // 0x807B0E20
    /* li r4, 1 */ // 0x807B0E24
    r3 = r26 + r0; // 0x807B0E28
    r3 = *(4 + r3); // lwz @ 0x807B0E2C
    r12 = *(0 + r3); // lwz @ 0x807B0E30
    r12 = *(0xc + r12); // lwz @ 0x807B0E34
    /* mtctr r12 */ // 0x807B0E38
    /* bctrl  */ // 0x807B0E3C
    r0 = r28 + -2; // 0x807B0E40
    if (<=) goto 0x0x807b0e80;
    if (==) goto 0x0x807b0e5c;
    if (!=) goto 0x0x807b0eb8;
    /* slwi r0, r28, 2 */ // 0x807B0E5C
    /* li r4, 1 */ // 0x807B0E60
    r3 = r26 + r0; // 0x807B0E64
    r3 = *(4 + r3); // lwz @ 0x807B0E68
    r12 = *(0 + r3); // lwz @ 0x807B0E6C
    r12 = *(0xc + r12); // lwz @ 0x807B0E70
    /* mtctr r12 */ // 0x807B0E74
    /* bctrl  */ // 0x807B0E78
    /* b 0x807b0eb8 */ // 0x807B0E7C
    r3 = *(8 + r26); // lwz @ 0x807B0E80
    /* li r4, 1 */ // 0x807B0E84
    r12 = *(0 + r3); // lwz @ 0x807B0E88
    r12 = *(0xc + r12); // lwz @ 0x807B0E8C
    /* mtctr r12 */ // 0x807B0E90
    /* bctrl  */ // 0x807B0E94
    /* slwi r0, r28, 2 */ // 0x807B0E98
    /* li r4, 1 */ // 0x807B0E9C
    r3 = r26 + r0; // 0x807B0EA0
    r3 = *(4 + r3); // lwz @ 0x807B0EA4
    r12 = *(0 + r3); // lwz @ 0x807B0EA8
    r12 = *(0xc + r12); // lwz @ 0x807B0EAC
    /* mtctr r12 */ // 0x807B0EB0
    /* bctrl  */ // 0x807B0EB4
    r0 = *(0x24 + r1); // lwz @ 0x807B0EBC
    return;
}