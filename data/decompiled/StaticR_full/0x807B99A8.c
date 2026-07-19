/* Function at 0x807B99A8, size=372 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807B99A8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x807B99BC
    r4 = *(4 + r3); // lwz @ 0x807B99C0
    r0 = *(8 + r3); // lwz @ 0x807B99C4
    r4 = *(0 + r4); // lwz @ 0x807B99C8
    r4 = *(0x10 + r4); // lwz @ 0x807B99D0
    r30 = *(0x14c + r4); // lwz @ 0x807B99D4
    if (==) goto 0x0x807b99f0;
    if (==) goto 0x0x807b9a7c;
    if (==) goto 0x0x807b9ac4;
    /* b 0x807b9b04 */ // 0x807B99EC
    r3 = r30;
    FUN_807BDB48(r3); // bl 0x807BDB48
    r30 = r3;
    if (==) goto 0x0x807b9b04;
    r12 = *(0 + r31); // lwz @ 0x807B9A04
    r3 = r31;
    r4 = r30;
    r12 = *(0x14 + r12); // lwz @ 0x807B9A10
    /* mtctr r12 */ // 0x807B9A14
    /* bctrl  */ // 0x807B9A18
    r4 = *(0xc + r31); // lwz @ 0x807B9A1C
    if (<=) goto 0x0x807b9a70;
    r12 = *(0 + r31); // lwz @ 0x807B9A28
    r3 = r31;
    r4 = r30;
    r12 = *(0x18 + r12); // lwz @ 0x807B9A34
    /* mtctr r12 */ // 0x807B9A38
    /* bctrl  */ // 0x807B9A3C
    /* lis r4, 0 */ // 0x807B9A40
    *(0xc + r31) = r3; // stw @ 0x807B9A44
    r4 = r4 + 0; // 0x807B9A48
    /* lbzx r0, r4, r30 */ // 0x807B9A4C
    if (==) goto 0x0x807b9a64;
    /* li r0, 1 */ // 0x807B9A58
    *(8 + r31) = r0; // stw @ 0x807B9A5C
    /* b 0x807b9b04 */ // 0x807B9A60
    /* li r0, 2 */ // 0x807B9A64
    *(8 + r31) = r0; // stw @ 0x807B9A68
    /* b 0x807b9b04 */ // 0x807B9A6C
    r0 = r4 + 1; // 0x807B9A70
    *(0xc + r31) = r0; // stw @ 0x807B9A74
    /* b 0x807b9b04 */ // 0x807B9A78
    r4 = *(0xc + r3); // lwz @ 0x807B9A7C
    r0 = r4 + -1; // 0x807B9A80
    *(0xc + r3) = r0; // stw @ 0x807B9A84
    r3 = r30;
    FUN_807BDBCC(r3); // bl 0x807BDBCC
    if (==) goto 0x0x807b9b04;
    r0 = *(0xc + r31); // lwz @ 0x807B9A98
    if (>=) goto 0x0x807b9b04;
    /* li r0, 1 */ // 0x807B9AA4
    *(0x1a0 + r30) = r0; // stb @ 0x807B9AA8
    /* li r3, 2 */ // 0x807B9AAC
    *(0x1a4 + r30) = r3; // stw @ 0x807B9AB0
    /* li r0, 0 */ // 0x807B9AB4
    *(0xc + r31) = r0; // stw @ 0x807B9AB8
    *(8 + r31) = r0; // stw @ 0x807B9ABC
    /* b 0x807b9b04 */ // 0x807B9AC0
    r4 = *(0xc + r3); // lwz @ 0x807B9AC4
    r0 = r4 + -1; // 0x807B9AC8
    *(0xc + r3) = r0; // stw @ 0x807B9ACC
    r3 = r30;
    FUN_807BDBCC(r3); // bl 0x807BDBCC
    if (==) goto 0x0x807b9b04;
    r0 = *(0xc + r31); // lwz @ 0x807B9AE0
    if (>=) goto 0x0x807b9b04;
    /* li r3, 1 */ // 0x807B9AEC
    *(0x1a0 + r30) = r3; // stb @ 0x807B9AF0
    /* li r0, 0 */ // 0x807B9AF4
    *(0x1a4 + r30) = r3; // stw @ 0x807B9AF8
    *(0xc + r31) = r0; // stw @ 0x807B9AFC
    *(8 + r31) = r0; // stw @ 0x807B9B00
    r0 = *(0x14 + r1); // lwz @ 0x807B9B04
    r31 = *(0xc + r1); // lwz @ 0x807B9B08
    r30 = *(8 + r1); // lwz @ 0x807B9B0C
    return;
}