/* Function at 0x807A0970, size=548 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 11 function(s) */

int FUN_807A0970(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807A0988
    r29 = r3;
    r3 = r30;
    *(0x10 + r1) = r28; // stw @ 0x807A0994
    r28 = r5;
    FUN_806953A0(r3); // bl 0x806953A0
    /* lis r4, 0 */ // 0x807A09A0
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x807A09A8
    r3 = *(0x1c + r3); // lwz @ 0x807A09AC
    if (==) goto 0x0x807a09f8;
    r3 = *(0 + r3); // lwz @ 0x807A09B8
    if (==) goto 0x0x807a09f8;
    if (==) goto 0x0x807a09d0;
    r0 = *(0x90 + r3); // lwz @ 0x807A09C8
    /* b 0x807a09d4 */ // 0x807A09CC
    /* li r0, -1 */ // 0x807A09D0
    if (!=) goto 0x0x807a09f8;
    r0 = r30 + -0x6e; // 0x807A09DC
    if (<=) goto 0x0x807a09f4;
    r0 = r30 + -0x78; // 0x807A09E8
    if (>) goto 0x0x807a09f8;
    /* li r31, 3 */ // 0x807A09F4
    if (==) goto 0x0x807a0a24;
    if (==) goto 0x0x807a0a64;
    if (==) goto 0x0x807a0aac;
    if (==) goto 0x0x807a0b14;
    if (==) goto 0x0x807a0b50;
    /* b 0x807a0b74 */ // 0x807A0A20
    if (!=) goto 0x0x807a0b74;
    /* lis r3, 0 */ // 0x807A0A2C
    /* lis r5, 0 */ // 0x807A0A30
    /* lfs f1, 0(r5) */ // 0x807A0A34
    /* li r4, 3 */ // 0x807A0A38
    r3 = *(0 + r3); // lwz @ 0x807A0A3C
    /* li r5, 0x1e */ // 0x807A0A40
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    /* lis r3, 0 */ // 0x807A0A48
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x807A0A50
    /* li r5, 0x1e */ // 0x807A0A54
    FUN_80789C64(r3, r4, r5); // bl 0x80789C64
    *(4 + r29) = r30; // stw @ 0x807A0A5C
    /* b 0x807a0b74 */ // 0x807A0A60
    if (==) goto 0x0x807a0a74;
    if (!=) goto 0x0x807a0b74;
    /* lis r3, 0 */ // 0x807A0A74
    /* lis r5, 0 */ // 0x807A0A78
    /* lfs f1, 0(r5) */ // 0x807A0A7C
    /* li r4, 3 */ // 0x807A0A80
    r3 = *(0 + r3); // lwz @ 0x807A0A84
    /* li r5, 0x1e */ // 0x807A0A88
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    /* lis r3, 0 */ // 0x807A0A90
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x807A0A98
    /* li r5, 0x1e */ // 0x807A0A9C
    FUN_80789C64(r3, r4, r5); // bl 0x80789C64
    *(4 + r29) = r30; // stw @ 0x807A0AA4
    /* b 0x807a0b74 */ // 0x807A0AA8
    if (==) goto 0x0x807a0ac0;
    if (==) goto 0x0x807a0af4;
    /* b 0x807a0b74 */ // 0x807A0ABC
    /* lis r3, 0 */ // 0x807A0AC0
    /* lis r5, 0 */ // 0x807A0AC4
    /* lfs f1, 0(r5) */ // 0x807A0AC8
    /* li r4, 3 */ // 0x807A0ACC
    r3 = *(0 + r3); // lwz @ 0x807A0AD0
    /* li r5, 0x1e */ // 0x807A0AD4
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    /* lis r3, 0 */ // 0x807A0ADC
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x807A0AE4
    /* li r5, 0x1e */ // 0x807A0AE8
    FUN_80789C64(r3, r4, r5); // bl 0x80789C64
    *(4 + r29) = r30; // stw @ 0x807A0AF0
    /* lis r3, 0 */ // 0x807A0AF4
    /* lis r5, 0 */ // 0x807A0AF8
    /* lfs f1, 0(r5) */ // 0x807A0AFC
    /* li r4, 3 */ // 0x807A0B00
    r3 = *(0 + r3); // lwz @ 0x807A0B04
    /* li r5, 0x1e */ // 0x807A0B08
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    /* b 0x807a0b74 */ // 0x807A0B10
    if (!=) goto 0x0x807a0b74;
    /* lis r3, 0 */ // 0x807A0B1C
    /* lis r5, 0 */ // 0x807A0B20
    /* lfs f1, 0(r5) */ // 0x807A0B24
    /* li r4, 3 */ // 0x807A0B28
    r3 = *(0 + r3); // lwz @ 0x807A0B2C
    /* li r5, 0x1e */ // 0x807A0B30
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    /* lis r3, 0 */ // 0x807A0B38
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x807A0B40
    /* li r5, 0x1e */ // 0x807A0B44
    FUN_80789C64(r3, r4, r5); // bl 0x80789C64
    /* b 0x807a0b74 */ // 0x807A0B4C
    if (!=) goto 0x0x807a0b74;
    /* lis r3, 0 */ // 0x807A0B58
    /* lis r5, 0 */ // 0x807A0B5C
    /* lfs f1, 0(r5) */ // 0x807A0B60
    /* li r4, 3 */ // 0x807A0B64
    r3 = *(0 + r3); // lwz @ 0x807A0B68
    /* li r5, 0x1e */ // 0x807A0B6C
    FUN_80788F5C(r5, r4, r5); // bl 0x80788F5C
    r0 = *(0x24 + r1); // lwz @ 0x807A0B74
    r31 = *(0x1c + r1); // lwz @ 0x807A0B78
    r30 = *(0x18 + r1); // lwz @ 0x807A0B7C
    r29 = *(0x14 + r1); // lwz @ 0x807A0B80
    r28 = *(0x10 + r1); // lwz @ 0x807A0B84
    return;
}