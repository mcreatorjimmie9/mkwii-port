/* Function at 0x808E1A78, size=844 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 3 function(s) */

int FUN_808E1A78(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r6, 0 */ // 0x808E1A80
    *(0x24 + r1) = r0; // stw @ 0x808E1A84
    /* stmw r26, 8(r1) */ // 0x808E1A88
    r26 = r3;
    r6 = *(0 + r6); // lwz @ 0x808E1A90
    r6 = *(0 + r6); // lwz @ 0x808E1A94
    r0 = *(0 + r6); // lwz @ 0x808E1A98
    if (<) goto 0x0x808e1aac;
    if (<=) goto 0x0x808e1abc;
    if (==) goto 0x0x808e1abc;
    if (!=) goto 0x0x808e1b34;
    if (!=) goto 0x0x808e1b34;
    /* mulli r7, r4, 0xc */ // 0x808E1AC4
    /* slwi r4, r4, 1 */ // 0x808E1AC8
    r8 = r4 + 0x18; // 0x808E1AD0
    r6 = r3 + r7; // 0x808E1AD4
    *(0x10 + r6) = r5; // stw @ 0x808E1AD8
    if (>=) goto 0x0x808e1af4;
    /* mulli r0, r8, 0x28 */ // 0x808E1AE0
    r4 = *(4 + r3); // lwz @ 0x808E1AE4
    r0 = r4 + r0; // 0x808E1AE8
    *(0x18 + r6) = r0; // stw @ 0x808E1AEC
    /* b 0x808e1b1c */ // 0x808E1AF0
    r0 = r5 + -0x1a; // 0x808E1AF4
    if (<=) goto 0x0x808e1b18;
    r0 = r5 + -0x20; // 0x808E1B00
    if (<=) goto 0x0x808e1b18;
    r0 = r5 + -0x26; // 0x808E1B0C
    if (>) goto 0x0x808e1b1c;
    r8 = r8 + 1; // 0x808E1B18
    /* mulli r0, r8, 0x28 */ // 0x808E1B1C
    r4 = *(4 + r3); // lwz @ 0x808E1B20
    r3 = r3 + r7; // 0x808E1B24
    r0 = r4 + r0; // 0x808E1B28
    *(0x18 + r3) = r0; // stw @ 0x808E1B2C
    /* b 0x808e1db0 */ // 0x808E1B30
    if (>=) goto 0x0x808e1b64;
    /* mulli r0, r4, 0xc */ // 0x808E1B3C
    r4 = r3 + r0; // 0x808E1B40
    *(0x10 + r4) = r5; // stw @ 0x808E1B44
    /* mulli r0, r5, 0x28 */ // 0x808E1B48
    r31 = r4 + 0x10; // 0x808E1B4C
    r3 = *(4 + r3); // lwz @ 0x808E1B50
    r30 = r4 + 0x18; // 0x808E1B54
    r0 = r3 + r0; // 0x808E1B58
    *(0x18 + r4) = r0; // stw @ 0x808E1B5C
    /* b 0x808e1da4 */ // 0x808E1B60
    if (<) goto 0x0x808e1b74;
    if (<=) goto 0x0x808e1b84;
    if (==) goto 0x0x808e1b84;
    if (!=) goto 0x0x808e1b8c;
    /* li r0, 0 */ // 0x808E1B84
    /* b 0x808e1b90 */ // 0x808E1B88
    /* li r0, 1 */ // 0x808E1B8C
    /* lis r6, 0 */ // 0x808E1B90
    /* slwi r27, r4, 2 */ // 0x808E1B94
    r6 = *(0 + r6); // lwz @ 0x808E1B98
    *(0x265 + r6) = r0; // stb @ 0x808E1B9C
    r6 = *(0x44 + r3); // lwz @ 0x808E1BA0
    /* lwzx r6, r6, r27 */ // 0x808E1BA4
    r0 = *(0xa8 + r6); // lwz @ 0x808E1BA8
    if (==) goto 0x0x808e1bc8;
    if (==) goto 0x0x808e1bf0;
    if (==) goto 0x0x808e1c18;
    /* b 0x808e1c40 */ // 0x808E1BC4
    r0 = *(0x9c + r6); // lwz @ 0x808E1BC8
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x808E1BCC
    if (==) goto 0x0x808e1be0;
    if (==) goto 0x0x808e1be8;
    /* b 0x808e1c40 */ // 0x808E1BDC
    /* li r7, 0x18 */ // 0x808E1BE0
    /* b 0x808e1c44 */ // 0x808E1BE4
    /* li r7, 0x19 */ // 0x808E1BE8
    /* b 0x808e1c44 */ // 0x808E1BEC
    r0 = *(0x9c + r6); // lwz @ 0x808E1BF0
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x808E1BF4
    if (==) goto 0x0x808e1c08;
    if (==) goto 0x0x808e1c10;
    /* b 0x808e1c40 */ // 0x808E1C04
    /* li r7, 0x1e */ // 0x808E1C08
    /* b 0x808e1c44 */ // 0x808E1C0C
    /* li r7, 0x1f */ // 0x808E1C10
    /* b 0x808e1c44 */ // 0x808E1C14
    r0 = *(0x9c + r6); // lwz @ 0x808E1C18
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x808E1C1C
    if (==) goto 0x0x808e1c30;
    if (==) goto 0x0x808e1c38;
    /* b 0x808e1c40 */ // 0x808E1C2C
    /* li r7, 0x24 */ // 0x808E1C30
    /* b 0x808e1c44 */ // 0x808E1C34
    /* li r7, 0x25 */ // 0x808E1C38
    /* b 0x808e1c44 */ // 0x808E1C3C
    /* li r7, -1 */ // 0x808E1C40
    /* mulli r29, r4, 0xc */ // 0x808E1C44
    r0 = r5 + -0x1a; // 0x808E1C48
    /* slwi r4, r4, 1 */ // 0x808E1C4C
    r31 = r3 + r29; // 0x808E1C54
    *(0x10 + r31) = r7; // stwu @ 0x808E1C58
    r8 = r4 + 0x18; // 0x808E1C5C
    if (<=) goto 0x0x808e1c7c;
    r0 = r5 + -0x20; // 0x808E1C64
    if (<=) goto 0x0x808e1c7c;
    r0 = r5 + -0x26; // 0x808E1C70
    if (>) goto 0x0x808e1c90;
    r5 = r3 + r29; // 0x808E1C7C
    r8 = r8 + 1; // 0x808E1C80
    r4 = *(0x10 + r5); // lwz @ 0x808E1C84
    r0 = r4 + 2; // 0x808E1C88
    *(0x10 + r5) = r0; // stw @ 0x808E1C8C
    /* mulli r28, r8, 0x28 */ // 0x808E1C90
    r0 = *(4 + r3); // lwz @ 0x808E1C94
    r30 = r3 + r29; // 0x808E1C98
    r0 = r0 + r28; // 0x808E1C9C
    *(0x18 + r30) = r0; // stwu @ 0x808E1CA0
    r4 = *(0x48 + r3); // lwz @ 0x808E1CA4
    /* lwzx r0, r4, r27 */ // 0x808E1CA8
    if (==) goto 0x0x808e1d94;
    r0 = *(4 + r3); // lwz @ 0x808E1CB4
    /* li r4, 0 */ // 0x808E1CB8
    r3 = r0 + r28; // 0x808E1CBC
    r3 = *(4 + r3); // lwz @ 0x808E1CC0
    r12 = *(0 + r3); // lwz @ 0x808E1CC4
    r12 = *(0xc + r12); // lwz @ 0x808E1CC8
    /* mtctr r12 */ // 0x808E1CCC
    /* bctrl  */ // 0x808E1CD0
    r3 = *(0x48 + r26); // lwz @ 0x808E1CD4
    /* li r4, 0 */ // 0x808E1CD8
    /* lwzx r3, r3, r27 */ // 0x808E1CDC
    r12 = *(0 + r3); // lwz @ 0x808E1CE0
    r12 = *(0xc + r12); // lwz @ 0x808E1CE4
    /* mtctr r12 */ // 0x808E1CE8
    /* bctrl  */ // 0x808E1CEC
    r3 = *(0x48 + r26); // lwz @ 0x808E1CF0
    r29 = r26 + r29; // 0x808E1CF4
    r0 = *(4 + r26); // lwz @ 0x808E1CF8
    /* li r4, 5 */ // 0x808E1CFC
    /* lwzx r3, r3, r27 */ // 0x808E1D00
    r5 = r0 + r28; // 0x808E1D04
    r6 = *(0x10 + r29); // lwz @ 0x808E1D08
    r5 = *(4 + r5); // lwz @ 0x808E1D0C
    r7 = *(0x4c + r3); // lwz @ 0x808E1D10
    r6 = r6 + -0x18; // 0x808E1D14
    FUN_8085FDE0(r6); // bl 0x8085FDE0
    r0 = *(4 + r26); // lwz @ 0x808E1D1C
    /* li r4, 5 */ // 0x808E1D20
    r3 = *(0x48 + r26); // lwz @ 0x808E1D24
    r7 = *(0x44 + r26); // lwz @ 0x808E1D28
    r5 = r0 + r28; // 0x808E1D2C
    r6 = *(0x10 + r29); // lwz @ 0x808E1D30
    /* lwzx r3, r3, r27 */ // 0x808E1D34
    r5 = *(4 + r5); // lwz @ 0x808E1D38
    r6 = r6 + -0x18; // 0x808E1D3C
    /* lwzx r7, r7, r27 */ // 0x808E1D40
    FUN_8085FDC8(r6); // bl 0x8085FDC8
    r3 = *(0x48 + r26); // lwz @ 0x808E1D48
    /* li r4, 0 */ // 0x808E1D4C
    /* lwzx r3, r3, r27 */ // 0x808E1D50
    FUN_8085FEF0(r4); // bl 0x8085FEF0
    r0 = *(4 + r26); // lwz @ 0x808E1D58
    /* li r4, 1 */ // 0x808E1D5C
    r3 = r0 + r28; // 0x808E1D60
    r3 = *(4 + r3); // lwz @ 0x808E1D64
    r12 = *(0 + r3); // lwz @ 0x808E1D68
    r12 = *(0xc + r12); // lwz @ 0x808E1D6C
    /* mtctr r12 */ // 0x808E1D70
    /* bctrl  */ // 0x808E1D74
    r3 = *(0x48 + r26); // lwz @ 0x808E1D78
    /* li r4, 1 */ // 0x808E1D7C
    /* lwzx r3, r3, r27 */ // 0x808E1D80
    r12 = *(0 + r3); // lwz @ 0x808E1D84
    r12 = *(0xc + r12); // lwz @ 0x808E1D88
    /* mtctr r12 */ // 0x808E1D8C
    /* bctrl  */ // 0x808E1D90
    /* lis r3, 0 */ // 0x808E1D94
    /* li r0, 0 */ // 0x808E1D98
    r3 = *(0 + r3); // lwz @ 0x808E1D9C
    *(0x265 + r3) = r0; // stb @ 0x808E1DA0
    r3 = *(0 + r30); // lwz @ 0x808E1DA4
    r0 = *(0 + r31); // lwz @ 0x808E1DA8
    *(0x18 + r3) = r0; // stw @ 0x808E1DAC
    r0 = *(0x24 + r1); // lwz @ 0x808E1DB4
    return;
}