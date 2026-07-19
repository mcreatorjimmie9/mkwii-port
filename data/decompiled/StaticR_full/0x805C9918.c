/* Function at 0x805C9918, size=864 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */

int FUN_805C9918(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* li r5, 0 */ // 0x805C9920
    *(0x24 + r1) = r0; // stw @ 0x805C9924
    /* stmw r27, 0xc(r1) */ // 0x805C9928
    r30 = r3;
    r31 = r4;
    /* li r29, 0 */ // 0x805C9934
    r6 = *(0x40 + r30); // lwz @ 0x805C9938
    r3 = r30 + 0x118; // 0x805C993C
    r4 = r31;
    /* lbzx r0, r6, r29 */ // 0x805C9944
    *(0x11c + r30) = r0; // stb @ 0x805C9948
    r12 = *(0x118 + r30); // lwz @ 0x805C994C
    r12 = *(0xc + r12); // lwz @ 0x805C9950
    /* mtctr r12 */ // 0x805C9954
    /* bctrl  */ // 0x805C9958
    r29 = r29 + 1; // 0x805C995C
    r5 = r3;
    if (<) goto 0x0x805c9938;
    /* li r29, 0 */ // 0x805C996C
    r0 = *(0x40 + r30); // lwz @ 0x805C9970
    r3 = r0 + r29; // 0x805C9974
    /* lbzx r0, r29, r0 */ // 0x805C9978
    if (==) goto 0x0x805c99a8;
    r0 = *(2 + r3); // lbz @ 0x805C9984
    r3 = r30 + 0x120; // 0x805C9988
    *(0x124 + r30) = r0; // stb @ 0x805C998C
    r4 = r31;
    r12 = *(0x120 + r30); // lwz @ 0x805C9994
    r12 = *(0xc + r12); // lwz @ 0x805C9998
    /* mtctr r12 */ // 0x805C999C
    /* bctrl  */ // 0x805C99A0
    r5 = r3;
    r29 = r29 + 1; // 0x805C99A8
    if (<) goto 0x0x805c9970;
    /* li r28, 0 */ // 0x805C99B4
    /* lis r29, 0 */ // 0x805C99B8
    /* b 0x805c9a14 */ // 0x805C99BC
    r0 = *(0x40 + r30); // lwz @ 0x805C99C0
    r3 = r30 + 0x160; // 0x805C99C4
    r4 = r31;
    r6 = r0 + r28; // 0x805C99CC
    r0 = *(0x1c + r6); // lbz @ 0x805C99D0
    *(0x164 + r30) = r0; // stb @ 0x805C99D4
    r0 = *(0x10 + r6); // lbz @ 0x805C99D8
    *(0x16c + r30) = r0; // stb @ 0x805C99DC
    r12 = *(0x160 + r30); // lwz @ 0x805C99E0
    r12 = *(0xc + r12); // lwz @ 0x805C99E4
    /* mtctr r12 */ // 0x805C99E8
    /* bctrl  */ // 0x805C99EC
    r12 = *(0x168 + r30); // lwz @ 0x805C99F0
    r5 = r3;
    r3 = r30 + 0x168; // 0x805C99F8
    r4 = r31;
    r12 = *(0xc + r12); // lwz @ 0x805C9A00
    /* mtctr r12 */ // 0x805C9A04
    /* bctrl  */ // 0x805C9A08
    r5 = r3;
    r28 = r28 + 1; // 0x805C9A10
    r3 = *(0 + r29); // lwz @ 0x805C9A14
    r0 = *(0x24 + r3); // lbz @ 0x805C9A18
    if (<) goto 0x0x805c99c0;
    r6 = *(0x40 + r30); // lwz @ 0x805C9A24
    r3 = r30 + 0x158; // 0x805C9A28
    r4 = r31;
    r0 = *(0xe + r6); // lhz @ 0x805C9A30
    *(0x15c + r30) = r0; // stb @ 0x805C9A34
    r12 = *(0x158 + r30); // lwz @ 0x805C9A38
    r12 = *(0xc + r12); // lwz @ 0x805C9A3C
    /* mtctr r12 */ // 0x805C9A40
    /* bctrl  */ // 0x805C9A44
    r5 = r3;
    /* li r28, 0 */ // 0x805C9A4C
    r3 = *(0x40 + r30); // lwz @ 0x805C9A50
    /* lbzx r0, r3, r28 */ // 0x805C9A54
    if (==) goto 0x0x805c9aa8;
    /* li r27, 0 */ // 0x805C9A60
    /* li r29, 0 */ // 0x805C9A64
    r6 = *(0x40 + r30); // lwz @ 0x805C9A68
    r0 = r29 + r28; // 0x805C9A6C
    r3 = r30 + 0x128; // 0x805C9A70
    r4 = r31;
    r6 = r6 + r0; // 0x805C9A78
    r0 = *(4 + r6); // lbz @ 0x805C9A7C
    *(0x12c + r30) = r0; // stb @ 0x805C9A80
    r12 = *(0x128 + r30); // lwz @ 0x805C9A84
    r12 = *(0xc + r12); // lwz @ 0x805C9A88
    /* mtctr r12 */ // 0x805C9A8C
    /* bctrl  */ // 0x805C9A90
    r27 = r27 + 1; // 0x805C9A94
    r5 = r3;
    r29 = r29 + 2; // 0x805C9AA0
    if (<) goto 0x0x805c9a68;
    r28 = r28 + 1; // 0x805C9AA8
    if (<) goto 0x0x805c9a50;
    r4 = *(0x40 + r30); // lwz @ 0x805C9AB4
    /* li r6, 0 */ // 0x805C9AB8
    /* li r7, 0 */ // 0x805C9ABC
    /* li r3, 1 */ // 0x805C9AC0
    r0 = *(0x28 + r4); // lwz @ 0x805C9AC4
    if (==) goto 0x0x805c9ad8;
    r0 = r3 << r7; // slw
    /* clrlwi r6, r0, 0x10 */ // 0x805C9AD4
    r0 = *(0x30 + r4); // lwz @ 0x805C9AD8
    /* li r7, 1 */ // 0x805C9ADC
    if (==) goto 0x0x805c9af4;
    r0 = r3 << r7; // slw
    r0 = r6 | r0; // 0x805C9AEC
    /* clrlwi r6, r0, 0x10 */ // 0x805C9AF0
    r0 = *(0x38 + r4); // lwz @ 0x805C9AF4
    /* li r7, 2 */ // 0x805C9AF8
    if (==) goto 0x0x805c9b10;
    r0 = r3 << r7; // slw
    r0 = r6 | r0; // 0x805C9B08
    /* clrlwi r6, r0, 0x10 */ // 0x805C9B0C
    r0 = *(0x40 + r4); // lwz @ 0x805C9B10
    /* li r7, 3 */ // 0x805C9B14
    if (==) goto 0x0x805c9b2c;
    r0 = r3 << r7; // slw
    r0 = r6 | r0; // 0x805C9B24
    /* clrlwi r6, r0, 0x10 */ // 0x805C9B28
    r0 = *(0x48 + r4); // lwz @ 0x805C9B2C
    /* li r7, 4 */ // 0x805C9B30
    if (==) goto 0x0x805c9b48;
    r0 = r3 << r7; // slw
    r0 = r6 | r0; // 0x805C9B40
    /* clrlwi r6, r0, 0x10 */ // 0x805C9B44
    r0 = *(0x50 + r4); // lwz @ 0x805C9B48
    /* li r7, 5 */ // 0x805C9B4C
    if (==) goto 0x0x805c9b64;
    r0 = r3 << r7; // slw
    r0 = r6 | r0; // 0x805C9B5C
    /* clrlwi r6, r0, 0x10 */ // 0x805C9B60
    r0 = *(0x58 + r4); // lwz @ 0x805C9B64
    /* li r7, 6 */ // 0x805C9B68
    if (==) goto 0x0x805c9b80;
    r0 = r3 << r7; // slw
    r0 = r6 | r0; // 0x805C9B78
    /* clrlwi r6, r0, 0x10 */ // 0x805C9B7C
    *(0x134 + r30) = r6; // sth @ 0x805C9B80
    r3 = r30 + 0x130; // 0x805C9B84
    r4 = r31;
    r12 = *(0x130 + r30); // lwz @ 0x805C9B8C
    r12 = *(0xc + r12); // lwz @ 0x805C9B90
    /* mtctr r12 */ // 0x805C9B94
    /* bctrl  */ // 0x805C9B98
    r5 = r3;
    /* li r27, 0 */ // 0x805C9BA0
    /* li r29, 0 */ // 0x805C9BA4
    r0 = *(0x40 + r30); // lwz @ 0x805C9BA8
    r6 = r0 + r29; // 0x805C9BAC
    r0 = *(0x28 + r6); // lwz @ 0x805C9BB0
    if (==) goto 0x0x805c9c48;
    *(0x13c + r30) = r0; // stw @ 0x805C9BBC
    r3 = r30 + 0x138; // 0x805C9BC0
    r4 = r31;
    r0 = *(0x2c + r6); // lhz @ 0x805C9BC8
    *(0x144 + r30) = r0; // sth @ 0x805C9BCC
    r0 = *(0x2e + r6); // lbz @ 0x805C9BD0
    *(0x14c + r30) = r0; // stb @ 0x805C9BD4
    r0 = *(0x2f + r6); // lbz @ 0x805C9BD8
    *(0x154 + r30) = r0; // stb @ 0x805C9BDC
    r12 = *(0x138 + r30); // lwz @ 0x805C9BE0
    r12 = *(0xc + r12); // lwz @ 0x805C9BE4
    /* mtctr r12 */ // 0x805C9BE8
    /* bctrl  */ // 0x805C9BEC
    r12 = *(0x140 + r30); // lwz @ 0x805C9BF0
    r5 = r3;
    r3 = r30 + 0x140; // 0x805C9BF8
    r4 = r31;
    r12 = *(0xc + r12); // lwz @ 0x805C9C00
    /* mtctr r12 */ // 0x805C9C04
    /* bctrl  */ // 0x805C9C08
    r12 = *(0x148 + r30); // lwz @ 0x805C9C0C
    r5 = r3;
    r3 = r30 + 0x148; // 0x805C9C14
    r4 = r31;
    r12 = *(0xc + r12); // lwz @ 0x805C9C1C
    /* mtctr r12 */ // 0x805C9C20
    /* bctrl  */ // 0x805C9C24
    r12 = *(0x150 + r30); // lwz @ 0x805C9C28
    r5 = r3;
    r3 = r30 + 0x150; // 0x805C9C30
    r4 = r31;
    r12 = *(0xc + r12); // lwz @ 0x805C9C38
    /* mtctr r12 */ // 0x805C9C3C
    /* bctrl  */ // 0x805C9C40
    r5 = r3;
    r27 = r27 + 1; // 0x805C9C48
    r29 = r29 + 8; // 0x805C9C4C
    if (<) goto 0x0x805c9ba8;
    r0 = r5 + 0x1f; // 0x805C9C58
    r0 = r0 rlwinm 0x1d; // rlwinm
    *(0x3c + r30) = r0; // sth @ 0x805C9C60
    r0 = *(0x24 + r1); // lwz @ 0x805C9C68
    return;
}