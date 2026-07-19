/* Function at 0x80828E04, size=196 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80828E04(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80828E10
    r31 = r3;
    r0 = *(0x9c + r3); // lwz @ 0x80828E18
    if (==) goto 0x0x80828e3c;
    r3 = r0;
    /* li r4, 0 */ // 0x80828E28
    r12 = *(0 + r3); // lwz @ 0x80828E2C
    r12 = *(0xc + r12); // lwz @ 0x80828E30
    /* mtctr r12 */ // 0x80828E34
    /* bctrl  */ // 0x80828E38
    r3 = *(0xa0 + r31); // lwz @ 0x80828E3C
    if (==) goto 0x0x80828e5c;
    r12 = *(0 + r3); // lwz @ 0x80828E48
    /* li r4, 0 */ // 0x80828E4C
    r12 = *(0xc + r12); // lwz @ 0x80828E50
    /* mtctr r12 */ // 0x80828E54
    /* bctrl  */ // 0x80828E58
    r3 = *(0xa8 + r31); // lwz @ 0x80828E5C
    if (==) goto 0x0x80828e88;
    r0 = *(0x78 + r31); // lwz @ 0x80828E68
    r12 = *(0 + r3); // lwz @ 0x80828E6C
    r0 = r0 rlwinm 0; // rlwinm
    /* cntlzw r0, r0 */ // 0x80828E74
    r12 = *(0xc + r12); // lwz @ 0x80828E78
    /* srwi r4, r0, 5 */ // 0x80828E7C
    /* mtctr r12 */ // 0x80828E80
    /* bctrl  */ // 0x80828E84
    r3 = *(0xa4 + r31); // lwz @ 0x80828E88
    r0 = *(0x20 + r3); // lwz @ 0x80828E8C
    r0 = r0 | 0x2121; // 0x80828E90
    r0 = r0 | 0x2121; // 0x80828E94
    *(0x20 + r3) = r0; // stw @ 0x80828E98
    r3 = *(0xac + r31); // lwz @ 0x80828E9C
    if (==) goto 0x0x80828eb4;
    FUN_805F5360(); // bl 0x805F5360
    /* li r0, 0 */ // 0x80828EAC
    *(0xac + r31) = r0; // stw @ 0x80828EB0
    r0 = *(0x14 + r1); // lwz @ 0x80828EB4
    r31 = *(0xc + r1); // lwz @ 0x80828EB8
    return;
}