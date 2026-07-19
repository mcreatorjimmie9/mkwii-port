/* Function at 0x808289B4, size=220 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_808289B4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x808289C8
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808289D0
    r29 = r3;
    r0 = *(0x9c + r3); // lwz @ 0x808289D8
    if (==) goto 0x0x808289f8;
    r3 = r0;
    r12 = *(0 + r3); // lwz @ 0x808289E8
    r12 = *(0xc + r12); // lwz @ 0x808289EC
    /* mtctr r12 */ // 0x808289F0
    /* bctrl  */ // 0x808289F4
    r3 = *(0xa0 + r29); // lwz @ 0x808289F8
    if (==) goto 0x0x80828a18;
    r12 = *(0 + r3); // lwz @ 0x80828A04
    r4 = r30;
    r12 = *(0xc + r12); // lwz @ 0x80828A0C
    /* mtctr r12 */ // 0x80828A10
    /* bctrl  */ // 0x80828A14
    r3 = *(0xa8 + r29); // lwz @ 0x80828A18
    if (==) goto 0x0x80828a44;
    r0 = *(0x78 + r29); // lwz @ 0x80828A24
    r12 = *(0 + r3); // lwz @ 0x80828A28
    r0 = r0 rlwinm 0; // rlwinm
    /* cntlzw r0, r0 */ // 0x80828A30
    r12 = *(0xc + r12); // lwz @ 0x80828A34
    /* srwi r4, r0, 5 */ // 0x80828A38
    /* mtctr r12 */ // 0x80828A3C
    /* bctrl  */ // 0x80828A40
    if (==) goto 0x0x80828a58;
    r3 = *(0xa4 + r29); // lwz @ 0x80828A4C
    FUN_808179C0(); // bl 0x808179C0
    /* b 0x80828a74 */ // 0x80828A54
    if (==) goto 0x0x80828a74;
    r3 = *(0xa4 + r29); // lwz @ 0x80828A60
    r0 = *(0x20 + r3); // lwz @ 0x80828A64
    r0 = r0 | 0x2121; // 0x80828A68
    r0 = r0 | 0x2121; // 0x80828A6C
    *(0x20 + r3) = r0; // stw @ 0x80828A70
    r0 = *(0x24 + r1); // lwz @ 0x80828A74
    r31 = *(0x1c + r1); // lwz @ 0x80828A78
    r30 = *(0x18 + r1); // lwz @ 0x80828A7C
    r29 = *(0x14 + r1); // lwz @ 0x80828A80
    return;
}