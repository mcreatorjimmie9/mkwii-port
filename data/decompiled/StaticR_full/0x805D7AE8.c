/* Function at 0x805D7AE8, size=368 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805D7AE8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x805D7B00
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805D7B08
    r29 = r3;
    if (==) goto 0x0x805d7c3c;
    r3 = r6;
    FUN_805E0ED8(r3); // bl 0x805E0ED8
    /* extsh. r0, r3 */ // 0x805D7B1C
    if (<) goto 0x0x805d7c3c;
    /* mulli r9, r0, 0x64 */ // 0x805D7B24
    /* li r10, 4 */ // 0x805D7B28
    /* li r5, 0x26 */ // 0x805D7B2C
    r8 = r29 + r9; // 0x805D7B30
    r8 = r8 + 0x3200; // 0x805D7B34
    /* b 0x805d7b9c */ // 0x805D7B38
    r7 = r8 + 0xe1f; // 0x805D7B3C
    r6 = r8 + 0x19f; // 0x805D7B40
    /* mtctr r5 */ // 0x805D7B44
    r4 = *(1 + r6); // lbz @ 0x805D7B48
    /* lbzu r0, 2(r6) */ // 0x805D7B4C
    *(1 + r7) = r4; // stb @ 0x805D7B50
    /* stbu r0, 2(r7) */ // 0x805D7B54
    if (counter-- != 0) goto 0x0x805d7b48;
    r0 = *(0x1f0 + r8); // lhz @ 0x805D7B5C
    *(0xe70 + r8) = r0; // sth @ 0x805D7B64
    r0 = *(0x1f2 + r8); // lbz @ 0x805D7B68
    *(0xe72 + r8) = r0; // stb @ 0x805D7B6C
    r0 = *(0x1f4 + r8); // lhz @ 0x805D7B70
    *(0xe74 + r8) = r0; // sth @ 0x805D7B74
    r0 = *(0x1f6 + r8); // lbz @ 0x805D7B78
    *(0xe76 + r8) = r0; // stb @ 0x805D7B7C
    r0 = *(0x1f8 + r8); // lwz @ 0x805D7B80
    *(0xe78 + r8) = r0; // stw @ 0x805D7B84
    r0 = *(0x1fc + r8); // lwz @ 0x805D7B88
    *(0xe7c + r8) = r0; // stw @ 0x805D7B8C
    r0 = *(0x200 + r8); // lwz @ 0x805D7B90
    *(0xe80 + r8) = r0; // stw @ 0x805D7B94
    r8 = r8 + -0xc80; // 0x805D7B98
    if (>) goto 0x0x805d7b3c;
    /* mulli r7, r31, 0xc80 */ // 0x805D7BA4
    /* li r0, 0x26 */ // 0x805D7BA8
    r5 = r30 + -1; // 0x805D7BAC
    r4 = r29 + r7; // 0x805D7BB0
    r4 = r4 + r9; // 0x805D7BB4
    r6 = r4 + 0xe1f; // 0x805D7BB8
    /* mtctr r0 */ // 0x805D7BBC
    r4 = *(1 + r5); // lbz @ 0x805D7BC0
    /* lbzu r0, 2(r5) */ // 0x805D7BC4
    *(1 + r6) = r4; // stb @ 0x805D7BC8
    /* stbu r0, 2(r6) */ // 0x805D7BCC
    if (counter-- != 0) goto 0x0x805d7bc0;
    r0 = r29 + r7; // 0x805D7BD4
    r5 = *(0x50 + r30); // lhz @ 0x805D7BD8
    r4 = r0 + r9; // 0x805D7BDC
    *(0xe70 + r4) = r5; // sth @ 0x805D7BE4
    r0 = *(0x52 + r30); // lbz @ 0x805D7BE8
    *(0xe72 + r4) = r0; // stb @ 0x805D7BEC
    r0 = *(0x54 + r30); // lhz @ 0x805D7BF0
    *(0xe74 + r4) = r0; // sth @ 0x805D7BF4
    r0 = *(0x56 + r30); // lbz @ 0x805D7BF8
    *(0xe76 + r4) = r0; // stb @ 0x805D7BFC
    r0 = *(0x58 + r30); // lwz @ 0x805D7C00
    *(0xe78 + r4) = r0; // stw @ 0x805D7C04
    r0 = *(0x5c + r30); // lwz @ 0x805D7C08
    *(0xe7c + r4) = r0; // stw @ 0x805D7C0C
    r0 = *(0x60 + r30); // lwz @ 0x805D7C10
    *(0xe80 + r4) = r0; // stw @ 0x805D7C14
    if (!=) goto 0x0x805d7c3c;
    /* addis r5, r29, 1 */ // 0x805D7C1C
    /* li r4, 1 */ // 0x805D7C20
    /* clrlwi r0, r3, 0x18 */ // 0x805D7C24
    r3 = *(-0x6ff0 + r5); // lwz @ 0x805D7C28
    r0 = r4 << r0; // slw
    *(-0x6c67 + r5) = r4; // stb @ 0x805D7C30
    r0 = r3 | r0; // 0x805D7C34
    *(-0x6ff0 + r5) = r0; // stw @ 0x805D7C38
    r0 = *(0x24 + r1); // lwz @ 0x805D7C3C
    r31 = *(0x1c + r1); // lwz @ 0x805D7C40
    r30 = *(0x18 + r1); // lwz @ 0x805D7C44
    r29 = *(0x14 + r1); // lwz @ 0x805D7C48
    return;
}