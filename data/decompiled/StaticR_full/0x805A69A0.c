/* Function at 0x805A69A0, size=836 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r23 */
/* Calls: 1 function(s) */

int FUN_805A69A0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r23 */
    /* lis r5, 0 */ // 0x805A69A8
    *(0x34 + r1) = r0; // stw @ 0x805A69AC
    /* li r0, 0 */ // 0x805A69B0
    /* stmw r23, 0xc(r1) */ // 0x805A69B4
    r30 = r3;
    r31 = r4;
    /* li r29, 1 */ // 0x805A69C0
    *(0x14 + r3) = r4; // stb @ 0x805A69C4
    *(0x11 + r3) = r0; // stb @ 0x805A69C8
    *(0x10 + r3) = r0; // stb @ 0x805A69CC
    r5 = *(0 + r5); // lwz @ 0x805A69D0
    r0 = *(0xb70 + r5); // lwz @ 0x805A69D4
    if (==) goto 0x0x805a69ec;
    if (==) goto 0x0x805a69ec;
    /* li r29, 0 */ // 0x805A69E8
    /* li r6, 0 */ // 0x805A69EC
    /* lis r8, 0 */ // 0x805A69F0
    /* li r0, 2 */ // 0x805A69F4
    /* b 0x805a6c54 */ // 0x805A69F8
    /* clrlwi r9, r6, 0x10 */ // 0x805A6A00
    /* li r7, 0 */ // 0x805A6A04
    if (==) goto 0x0x805a6a20;
    r5 = *(0xc + r10); // lwz @ 0x805A6A0C
    r5 = *(4 + r5); // lhz @ 0x805A6A10
    if (==) goto 0x0x805a6a20;
    /* li r7, 1 */ // 0x805A6A1C
    if (==) goto 0x0x805a6a34;
    r5 = *(0xc + r10); // lwz @ 0x805A6A28
    r5 = *(4 + r5); // lhz @ 0x805A6A2C
    /* b 0x805a6a38 */ // 0x805A6A30
    /* li r5, 0 */ // 0x805A6A34
    if (>=) goto 0x0x805a6a6c;
    r9 = *(0xc + r10); // lwz @ 0x805A6A40
    /* clrlwi r7, r6, 0x10 */ // 0x805A6A44
    r5 = *(4 + r9); // lhz @ 0x805A6A48
    if (>=) goto 0x0x805a6a64;
    r7 = *(0 + r9); // lwz @ 0x805A6A54
    r5 = r6 rlwinm 2; // rlwinm
    /* lwzx r5, r7, r5 */ // 0x805A6A5C
    /* b 0x805a6a70 */ // 0x805A6A60
    /* li r5, 0 */ // 0x805A6A64
    /* b 0x805a6a70 */ // 0x805A6A68
    /* li r5, 0 */ // 0x805A6A6C
    r7 = *(0 + r5); // lwz @ 0x805A6A70
    r9 = *(0 + r7); // lbz @ 0x805A6A74
    if (<) goto 0x0x805a6aa0;
    r7 = *(1 + r7); // lbz @ 0x805A6A80
    r7 = r9 + r7; // 0x805A6A84
    r7 = r7 + -1; // 0x805A6A88
    /* clrlwi r7, r7, 0x18 */ // 0x805A6A8C
    if (>) goto 0x0x805a6aa0;
    /* li r7, 1 */ // 0x805A6A98
    /* b 0x805a6aa4 */ // 0x805A6A9C
    /* li r7, 0 */ // 0x805A6AA0
    if (==) goto 0x0x805a6c50;
    if (!=) goto 0x0x805a6b60;
    /* li r11, 0 */ // 0x805A6AB4
    /* mtctr r0 */ // 0x805A6AB8
    r10 = *(0 + r5); // lwz @ 0x805A6ABC
    /* clrlwi r7, r11, 0x10 */ // 0x805A6AC0
    r9 = *(1 + r10); // lbz @ 0x805A6AC4
    r7 = r10 + r7; // 0x805A6AC8
    r7 = *(2 + r7); // lbz @ 0x805A6ACC
    if (<=) goto 0x0x805a6aec;
    if (==) goto 0x0x805a6aec;
    r7 = *(0x10 + r3); // lbz @ 0x805A6AE0
    r7 = r7 + 1; // 0x805A6AE4
    *(0x10 + r3) = r7; // stb @ 0x805A6AE8
    r10 = *(0 + r5); // lwz @ 0x805A6AEC
    /* clrlwi r7, r11, 0x10 */ // 0x805A6AF4
    r9 = *(1 + r10); // lbz @ 0x805A6AF8
    r7 = r10 + r7; // 0x805A6AFC
    r7 = *(2 + r7); // lbz @ 0x805A6B00
    if (<=) goto 0x0x805a6b20;
    if (==) goto 0x0x805a6b20;
    r7 = *(0x10 + r3); // lbz @ 0x805A6B14
    r7 = r7 + 1; // 0x805A6B18
    *(0x10 + r3) = r7; // stb @ 0x805A6B1C
    r10 = *(0 + r5); // lwz @ 0x805A6B20
    /* clrlwi r7, r11, 0x10 */ // 0x805A6B28
    r9 = *(1 + r10); // lbz @ 0x805A6B2C
    r7 = r10 + r7; // 0x805A6B30
    r7 = *(2 + r7); // lbz @ 0x805A6B34
    if (<=) goto 0x0x805a6b54;
    if (==) goto 0x0x805a6b54;
    r7 = *(0x10 + r3); // lbz @ 0x805A6B48
    r7 = r7 + 1; // 0x805A6B4C
    *(0x10 + r3) = r7; // stb @ 0x805A6B50
    if (counter-- != 0) goto 0x0x805a6abc;
    /* b 0x805a6b74 */ // 0x805A6B5C
    r7 = *(0x10 + r3); // lbz @ 0x805A6B60
    if (!=) goto 0x0x805a6b74;
    r7 = r7 + 1; // 0x805A6B6C
    *(0x10 + r3) = r7; // stb @ 0x805A6B70
    r10 = *(0 + r5); // lwz @ 0x805A6B74
    r9 = *(1 + r10); // lbz @ 0x805A6B78
    r7 = *(0 + r10); // lbz @ 0x805A6B7C
    r7 = r7 + r9; // 0x805A6B80
    r7 = r7 + -1; // 0x805A6B84
    /* clrlwi r7, r7, 0x18 */ // 0x805A6B88
    if (!=) goto 0x0x805a6c3c;
    r7 = *(8 + r10); // lbz @ 0x805A6B94
    if (==) goto 0x0x805a6bac;
    r7 = *(0x11 + r3); // lbz @ 0x805A6BA0
    r7 = r7 + 1; // 0x805A6BA4
    *(0x11 + r3) = r7; // stb @ 0x805A6BA8
    r7 = *(0 + r5); // lwz @ 0x805A6BAC
    r7 = *(9 + r7); // lbz @ 0x805A6BB0
    if (==) goto 0x0x805a6bc8;
    r7 = *(0x11 + r3); // lbz @ 0x805A6BBC
    r7 = r7 + 1; // 0x805A6BC0
    *(0x11 + r3) = r7; // stb @ 0x805A6BC4
    r7 = *(0 + r5); // lwz @ 0x805A6BC8
    r7 = *(0xa + r7); // lbz @ 0x805A6BCC
    if (==) goto 0x0x805a6be4;
    r7 = *(0x11 + r3); // lbz @ 0x805A6BD8
    r7 = r7 + 1; // 0x805A6BDC
    *(0x11 + r3) = r7; // stb @ 0x805A6BE0
    r7 = *(0 + r5); // lwz @ 0x805A6BE4
    r7 = *(0xb + r7); // lbz @ 0x805A6BE8
    if (==) goto 0x0x805a6c00;
    r7 = *(0x11 + r3); // lbz @ 0x805A6BF4
    r7 = r7 + 1; // 0x805A6BF8
    *(0x11 + r3) = r7; // stb @ 0x805A6BFC
    r7 = *(0 + r5); // lwz @ 0x805A6C00
    r7 = *(0xc + r7); // lbz @ 0x805A6C04
    if (==) goto 0x0x805a6c1c;
    r7 = *(0x11 + r3); // lbz @ 0x805A6C10
    r7 = r7 + 1; // 0x805A6C14
    *(0x11 + r3) = r7; // stb @ 0x805A6C18
    r7 = *(0 + r5); // lwz @ 0x805A6C1C
    r7 = *(0xd + r7); // lbz @ 0x805A6C20
    if (==) goto 0x0x805a6c50;
    r7 = *(0x11 + r3); // lbz @ 0x805A6C2C
    r7 = r7 + 1; // 0x805A6C30
    *(0x11 + r3) = r7; // stb @ 0x805A6C34
    /* b 0x805a6c50 */ // 0x805A6C38
    r5 = *(0x11 + r3); // lbz @ 0x805A6C3C
    if (!=) goto 0x0x805a6c50;
    r5 = r5 + 1; // 0x805A6C48
    *(0x11 + r3) = r5; // stb @ 0x805A6C4C
    r6 = r6 + 1; // 0x805A6C50
    r10 = *(0 + r8); // lwz @ 0x805A6C54
    /* li r7, 0 */ // 0x805A6C58
    r9 = *(0xc + r10); // lwz @ 0x805A6C5C
    if (==) goto 0x0x805a6c78;
    r5 = *(4 + r9); // lhz @ 0x805A6C68
    if (==) goto 0x0x805a6c78;
    /* li r7, 1 */ // 0x805A6C74
    /* clrlwi r7, r6, 0x10 */ // 0x805A6C7C
    if (==) goto 0x0x805a6c90;
    r5 = *(0xc + r10); // lwz @ 0x805A6C84
    r5 = *(4 + r5); // lhz @ 0x805A6C88
    /* b 0x805a6c94 */ // 0x805A6C8C
    /* li r5, 0 */ // 0x805A6C90
    if (<) goto 0x0x805a69fc;
    r28 = *(0x10 + r3); // lbz @ 0x805A6CA0
    r27 = *(0x11 + r3); // lbz @ 0x805A6CA4
    if (==) goto 0x0x805a6cbc;
    r4 = r27 + r28; // 0x805A6CAC
    /* li r0, 0 */ // 0x805A6CB0
    *(0x11 + r3) = r4; // stb @ 0x805A6CB4
    *(0x10 + r3) = r0; // stb @ 0x805A6CB8
    r4 = *(0x10 + r3); // lbz @ 0x805A6CBC
    r0 = *(0x11 + r3); // lbz @ 0x805A6CC0
    *(0x12 + r3) = r4; // stb @ 0x805A6CC8
    *(0x13 + r3) = r0; // stb @ 0x805A6CCC
    if (==) goto 0x0x805a6ce0;
    r3 = r4;
    FUN_805E3430(r3); // bl 0x805E3430
    *(8 + r30) = r3; // stw @ 0x805A6CDC
    r3 = *(0x13 + r30); // lbz @ 0x805A6CE0
}