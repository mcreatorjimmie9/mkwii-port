/* Function at 0x807E4A98, size=784 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_807E4A98(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x807E4AA4
    r30 = r3;
    r31 = r4;
    r3 = *(0x10 + r3); // lwz @ 0x807E4AB0
    FUN_807E13F8(); // bl 0x807E13F8
    if (!=) goto 0x0x807e4d94;
    r27 = r30 + 0x18; // 0x807E4AC0
    /* li r25, 0 */ // 0x807E4AC4
    /* li r26, 0 */ // 0x807E4AC8
    r3 = *(0x10 + r30); // lwz @ 0x807E4ACC
    r0 = *(0 + r27); // lwz @ 0x807E4AD0
    r4 = *(0xb0 + r3); // lwz @ 0x807E4AD4
    /* mulli r0, r0, 0x30 */ // 0x807E4AD8
    r28 = r31 + r0; // 0x807E4AE0
    if (==) goto 0x0x807e4af8;
    if (==) goto 0x0x807e4af8;
    if (!=) goto 0x0x807e4b40;
    r29 = r3 + r26; // 0x807E4AF8
    r3 = *(0x14c + r29); // lwz @ 0x807E4AFC
    r12 = *(0 + r3); // lwz @ 0x807E4B00
    r12 = *(0xc + r12); // lwz @ 0x807E4B04
    /* mtctr r12 */ // 0x807E4B08
    /* bctrl  */ // 0x807E4B0C
    r3 = *(0x14c + r29); // lwz @ 0x807E4B10
    r4 = r28;
    r12 = *(0 + r3); // lwz @ 0x807E4B18
    r12 = *(0x78 + r12); // lwz @ 0x807E4B1C
    /* mtctr r12 */ // 0x807E4B20
    /* bctrl  */ // 0x807E4B24
    r3 = *(0x14c + r29); // lwz @ 0x807E4B28
    r12 = *(0 + r3); // lwz @ 0x807E4B2C
    r12 = *(0x80 + r12); // lwz @ 0x807E4B30
    /* mtctr r12 */ // 0x807E4B34
    /* bctrl  */ // 0x807E4B38
    /* b 0x807e4b58 */ // 0x807E4B3C
    r3 = r3 + r26; // 0x807E4B40
    r3 = *(0x14c + r3); // lwz @ 0x807E4B44
    r12 = *(0 + r3); // lwz @ 0x807E4B48
    r12 = *(0x10 + r12); // lwz @ 0x807E4B4C
    /* mtctr r12 */ // 0x807E4B50
    /* bctrl  */ // 0x807E4B54
    r25 = r25 + 1; // 0x807E4B58
    r26 = r26 + 4; // 0x807E4B5C
    r27 = r27 + 4; // 0x807E4B64
    if (<) goto 0x0x807e4acc;
    r26 = *(0x10 + r30); // lwz @ 0x807E4B6C
    r0 = *(0x24 + r30); // lwz @ 0x807E4B70
    r3 = *(0xb0 + r26); // lwz @ 0x807E4B74
    /* mulli r0, r0, 0x30 */ // 0x807E4B78
    r28 = r31 + r0; // 0x807E4B80
    if (==) goto 0x0x807e4b94;
    r0 = r3 + -7; // 0x807E4B88
    if (>) goto 0x0x807e4be4;
    r0 = *(0x178 + r26); // lbz @ 0x807E4B94
    if (==) goto 0x0x807e4be4;
    r3 = *(0x15c + r26); // lwz @ 0x807E4BA0
    r12 = *(0 + r3); // lwz @ 0x807E4BA4
    r12 = *(0xc + r12); // lwz @ 0x807E4BA8
    /* mtctr r12 */ // 0x807E4BAC
    /* bctrl  */ // 0x807E4BB0
    r3 = *(0x15c + r26); // lwz @ 0x807E4BB4
    r4 = r28;
    r12 = *(0 + r3); // lwz @ 0x807E4BBC
    r12 = *(0x78 + r12); // lwz @ 0x807E4BC0
    /* mtctr r12 */ // 0x807E4BC4
    /* bctrl  */ // 0x807E4BC8
    r3 = *(0x15c + r26); // lwz @ 0x807E4BCC
    r12 = *(0 + r3); // lwz @ 0x807E4BD0
    r12 = *(0x80 + r12); // lwz @ 0x807E4BD4
    /* mtctr r12 */ // 0x807E4BD8
    /* bctrl  */ // 0x807E4BDC
    /* b 0x807e4bf8 */ // 0x807E4BE0
    r3 = *(0x15c + r26); // lwz @ 0x807E4BE4
    r12 = *(0 + r3); // lwz @ 0x807E4BE8
    r12 = *(0x10 + r12); // lwz @ 0x807E4BEC
    /* mtctr r12 */ // 0x807E4BF0
    /* bctrl  */ // 0x807E4BF4
    r26 = *(0x10 + r30); // lwz @ 0x807E4BF8
    r0 = *(0x24 + r30); // lwz @ 0x807E4BFC
    r3 = *(0xb0 + r26); // lwz @ 0x807E4C00
    /* mulli r0, r0, 0x30 */ // 0x807E4C04
    r28 = r31 + r0; // 0x807E4C0C
    if (==) goto 0x0x807e4c2c;
    if (==) goto 0x0x807e4c2c;
    if (==) goto 0x0x807e4c2c;
    if (!=) goto 0x0x807e4c7c;
    r0 = *(0x178 + r26); // lbz @ 0x807E4C2C
    if (==) goto 0x0x807e4c7c;
    r3 = *(0x164 + r26); // lwz @ 0x807E4C38
    r12 = *(0 + r3); // lwz @ 0x807E4C3C
    r12 = *(0xc + r12); // lwz @ 0x807E4C40
    /* mtctr r12 */ // 0x807E4C44
    /* bctrl  */ // 0x807E4C48
    r3 = *(0x164 + r26); // lwz @ 0x807E4C4C
    r4 = r28;
    r12 = *(0 + r3); // lwz @ 0x807E4C54
    r12 = *(0x78 + r12); // lwz @ 0x807E4C58
    /* mtctr r12 */ // 0x807E4C5C
    /* bctrl  */ // 0x807E4C60
    r3 = *(0x164 + r26); // lwz @ 0x807E4C64
    r12 = *(0 + r3); // lwz @ 0x807E4C68
    r12 = *(0x80 + r12); // lwz @ 0x807E4C6C
    /* mtctr r12 */ // 0x807E4C70
    /* bctrl  */ // 0x807E4C74
    /* b 0x807e4c90 */ // 0x807E4C78
    r3 = *(0x164 + r26); // lwz @ 0x807E4C7C
    r12 = *(0 + r3); // lwz @ 0x807E4C80
    r12 = *(0x10 + r12); // lwz @ 0x807E4C84
    /* mtctr r12 */ // 0x807E4C88
    /* bctrl  */ // 0x807E4C8C
    r26 = *(0x10 + r30); // lwz @ 0x807E4C90
    r3 = *(0x24 + r30); // lwz @ 0x807E4C94
    r0 = *(0xb0 + r26); // lwz @ 0x807E4C98
    /* mulli r3, r3, 0x30 */ // 0x807E4C9C
    r28 = r31 + r3; // 0x807E4CA4
    if (!=) goto 0x0x807e4cfc;
    r0 = *(0x178 + r26); // lbz @ 0x807E4CAC
    if (==) goto 0x0x807e4cfc;
    r3 = *(0x158 + r26); // lwz @ 0x807E4CB8
    r12 = *(0 + r3); // lwz @ 0x807E4CBC
    r12 = *(0xc + r12); // lwz @ 0x807E4CC0
    /* mtctr r12 */ // 0x807E4CC4
    /* bctrl  */ // 0x807E4CC8
    r3 = *(0x158 + r26); // lwz @ 0x807E4CCC
    r4 = r28;
    r12 = *(0 + r3); // lwz @ 0x807E4CD4
    r12 = *(0x78 + r12); // lwz @ 0x807E4CD8
    /* mtctr r12 */ // 0x807E4CDC
    /* bctrl  */ // 0x807E4CE0
    r3 = *(0x158 + r26); // lwz @ 0x807E4CE4
    r12 = *(0 + r3); // lwz @ 0x807E4CE8
    r12 = *(0x80 + r12); // lwz @ 0x807E4CEC
    /* mtctr r12 */ // 0x807E4CF0
    /* bctrl  */ // 0x807E4CF4
    /* b 0x807e4d10 */ // 0x807E4CF8
    r3 = *(0x158 + r26); // lwz @ 0x807E4CFC
    r12 = *(0 + r3); // lwz @ 0x807E4D00
    r12 = *(0x10 + r12); // lwz @ 0x807E4D04
    /* mtctr r12 */ // 0x807E4D08
    /* bctrl  */ // 0x807E4D0C
    r26 = *(0x10 + r30); // lwz @ 0x807E4D10
    r0 = *(0x24 + r30); // lwz @ 0x807E4D14
    r3 = *(0xb0 + r26); // lwz @ 0x807E4D18
    /* mulli r0, r0, 0x30 */ // 0x807E4D1C
    r28 = r31 + r0; // 0x807E4D24
    if (==) goto 0x0x807e4d3c;
    if (==) goto 0x0x807e4d3c;
    if (!=) goto 0x0x807e4d80;
    r3 = *(0x160 + r26); // lwz @ 0x807E4D3C
    r12 = *(0 + r3); // lwz @ 0x807E4D40
    r12 = *(0xc + r12); // lwz @ 0x807E4D44
    /* mtctr r12 */ // 0x807E4D48
    /* bctrl  */ // 0x807E4D4C
    r3 = *(0x160 + r26); // lwz @ 0x807E4D50
    r4 = r28;
    r12 = *(0 + r3); // lwz @ 0x807E4D58
    r12 = *(0x78 + r12); // lwz @ 0x807E4D5C
    /* mtctr r12 */ // 0x807E4D60
    /* bctrl  */ // 0x807E4D64
    r3 = *(0x160 + r26); // lwz @ 0x807E4D68
    r12 = *(0 + r3); // lwz @ 0x807E4D6C
    r12 = *(0x80 + r12); // lwz @ 0x807E4D70
    /* mtctr r12 */ // 0x807E4D74
    /* bctrl  */ // 0x807E4D78
    /* b 0x807e4d94 */ // 0x807E4D7C
    r3 = *(0x160 + r26); // lwz @ 0x807E4D80
    r12 = *(0 + r3); // lwz @ 0x807E4D84
    r12 = *(0x10 + r12); // lwz @ 0x807E4D88
    /* mtctr r12 */ // 0x807E4D8C
    /* bctrl  */ // 0x807E4D90
    r0 = *(0x34 + r1); // lwz @ 0x807E4D98
    return;
}