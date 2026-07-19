/* Function at 0x80833A80, size=500 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80833A80(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r5, 0 */ // 0x80833A88
    /* li r0, -1 */ // 0x80833A90
    *(0x1c + r1) = r31; // stw @ 0x80833A94
    /* lis r31, 0 */ // 0x80833A98
    r31 = r31 + 0; // 0x80833A9C
    *(0x18 + r1) = r30; // stw @ 0x80833AA0
    *(0x14 + r1) = r29; // stw @ 0x80833AA4
    r29 = r3;
    *(0x2b4 + r3) = r5; // sth @ 0x80833AAC
    *(0x2b8 + r3) = r0; // stw @ 0x80833AB0
    *(0x2bc + r3) = r5; // stw @ 0x80833AB4
    r6 = *(0xc + r4); // lwz @ 0x80833AB8
    r0 = *(0xc + r6); // lhz @ 0x80833ABC
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x80833AC0
    if (==) goto 0x0x80833b08;
    /* lfs f1, 0xb4(r31) */ // 0x80833AC8
    /* li r30, 0 */ // 0x80833ACC
    /* li r5, 0 */ // 0x80833AD0
    /* li r6, 0 */ // 0x80833AD4
    /* li r7, 0 */ // 0x80833AD8
    FUN_8083A7B8(r5, r6, r7); // bl 0x8083A7B8
    /* lfs f0, 0(r31) */ // 0x80833AE0
    /* li r3, 1 */ // 0x80833AE4
    /* li r0, 0xff */ // 0x80833AE8
    *(0x2b8 + r29) = r3; // stw @ 0x80833AEC
    *(0x268 + r29) = r0; // stb @ 0x80833AF0
    *(0x269 + r29) = r3; // stb @ 0x80833AF4
    /* stfs f0, 0x26c(r29) */ // 0x80833AF8
    /* stfs f0, 0x270(r29) */ // 0x80833AFC
    /* stfs f0, 0x274(r29) */ // 0x80833B00
    /* b 0x80833c20 */ // 0x80833B04
    /* lis r5, 0 */ // 0x80833B08
    /* li r30, 1 */ // 0x80833B0C
    r0 = *(0 + r5); // lbz @ 0x80833B10
    if (!=) goto 0x0x80833bd4;
    r0 = *(0x44 + r6); // lbz @ 0x80833B1C
    if (==) goto 0x0x80833bd4;
    r0 = *(0x78 + r3); // lwz @ 0x80833B28
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */ // 0x80833B2C
    if (!=) goto 0x0x80833b3c;
    r0 = *(0x6c + r3); // lbz @ 0x80833B34
    /* b 0x80833b40 */ // 0x80833B38
    /* li r0, 0xc */ // 0x80833B3C
    if (<) goto 0x0x80833b50;
    /* li r0, 0xc */ // 0x80833B48
    /* b 0x80833ba4 */ // 0x80833B4C
    /* lis r3, 0 */ // 0x80833B50
    r0 = r0 rlwinm 2; // rlwinm
    r6 = *(0 + r3); // lwz @ 0x80833B58
    r3 = *(0xc + r6); // lwz @ 0x80833B5C
    /* lwzx r3, r3, r0 */ // 0x80833B60
    r3 = *(0x20 + r3); // lbz @ 0x80833B64
    r0 = r3 + -1; // 0x80833B68
    /* clrlwi r5, r0, 0x18 */ // 0x80833B6C
    if (>=) goto 0x0x80833b80;
    /* lis r3, 0 */ // 0x80833B78
    r5 = *(0 + r3); // lbz @ 0x80833B7C
    /* lis r3, 0 */ // 0x80833B80
    r0 = *(0 + r3); // lbz @ 0x80833B84
    if (<=) goto 0x0x80833ba0;
    r0 = *(0x18 + r6); // lwz @ 0x80833B90
    r3 = r5 + r0; // 0x80833B94
    r0 = *(-1 + r3); // lbz @ 0x80833B98
    /* b 0x80833ba4 */ // 0x80833B9C
    /* li r0, 0xc */ // 0x80833BA0
    /* lfs f1, 0xb8(r31) */ // 0x80833BA4
    r3 = r29;
    /* clrlwi r9, r0, 0x18 */ // 0x80833BAC
    /* li r5, 0x2d */ // 0x80833BB0
    /* li r6, 1 */ // 0x80833BB4
    /* li r7, 0 */ // 0x80833BB8
    /* li r8, 1 */ // 0x80833BBC
    /* li r10, 0 */ // 0x80833BC0
    FUN_80839EB8(r5, r6, r7, r8, r10); // bl 0x80839EB8
    /* li r0, 3 */ // 0x80833BC8
    *(0x2b8 + r29) = r0; // stw @ 0x80833BCC
    /* b 0x80833c14 */ // 0x80833BD0
    /* lfs f1, 0xb8(r31) */ // 0x80833BD4
    r3 = r29;
    /* li r5, 0 */ // 0x80833BDC
    /* li r6, 1 */ // 0x80833BE0
    /* li r7, 0 */ // 0x80833BE4
    FUN_8083A7B8(r3, r5, r6, r7); // bl 0x8083A7B8
    /* lfs f0, 0(r31) */ // 0x80833BEC
    /* li r4, 2 */ // 0x80833BF0
    /* li r3, 0xff */ // 0x80833BF4
    /* li r0, 1 */ // 0x80833BF8
    *(0x2b8 + r29) = r4; // stw @ 0x80833BFC
    *(0x268 + r29) = r3; // stb @ 0x80833C00
    *(0x269 + r29) = r0; // stb @ 0x80833C04
    /* stfs f0, 0x26c(r29) */ // 0x80833C08
    /* stfs f0, 0x270(r29) */ // 0x80833C0C
    /* stfs f0, 0x274(r29) */ // 0x80833C10
    r0 = *(0x78 + r29); // lwz @ 0x80833C14
    r0 = r0 | 0x100; // 0x80833C18
    *(0x78 + r29) = r0; // stw @ 0x80833C1C
    r3 = r29;
    FUN_80838538(r3); // bl 0x80838538
    r0 = *(0x7c + r29); // lwz @ 0x80833C28
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x80833C2C
    if (==) goto 0x0x80833c3c;
    /* li r0, 0 */ // 0x80833C34
    *(0x2b8 + r29) = r0; // stw @ 0x80833C38
    /* lfs f2, 0x50(r29) */ // 0x80833C3C
    r3 = r30;
    /* lfs f1, 0x54(r29) */ // 0x80833C44
    /* lfs f0, 0x58(r29) */ // 0x80833C48
    /* stfs f2, 0x2d4(r29) */ // 0x80833C4C
    /* stfs f1, 0x2d8(r29) */ // 0x80833C50
    /* stfs f0, 0x2dc(r29) */ // 0x80833C54
    r31 = *(0x1c + r1); // lwz @ 0x80833C58
    r30 = *(0x18 + r1); // lwz @ 0x80833C5C
    r29 = *(0x14 + r1); // lwz @ 0x80833C60
    r0 = *(0x24 + r1); // lwz @ 0x80833C64
    return;
}