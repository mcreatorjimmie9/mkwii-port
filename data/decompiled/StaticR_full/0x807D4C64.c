/* Function at 0x807D4C64, size=288 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807D4C64(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x807D4C70
    r31 = r3;
    FUN_807BAE88(); // bl 0x807BAE88
    /* lis r4, 0 */ // 0x807D4C7C
    /* lis r3, 0 */ // 0x807D4C80
    r4 = r4 + 0; // 0x807D4C84
    /* li r8, 0 */ // 0x807D4C88
    r3 = r3 + 0; // 0x807D4C8C
    *(0x34 + r31) = r4; // stw @ 0x807D4C90
    /* lis r7, 0 */ // 0x807D4C94
    /* lis r4, 0 */ // 0x807D4C98
    *(0x98 + r31) = r3; // stw @ 0x807D4C9C
    /* lis r6, 0 */ // 0x807D4CA0
    r3 = r31;
    *(0x9c + r31) = r8; // stw @ 0x807D4CA8
    r5 = *(0 + r7); // lwzu @ 0x807D4CAC
    r0 = *(4 + r7); // lwz @ 0x807D4CB0
    *(0xa4 + r31) = r0; // stw @ 0x807D4CB4
    *(0xa0 + r31) = r5; // stw @ 0x807D4CB8
    r0 = *(8 + r7); // lwz @ 0x807D4CBC
    *(0xa8 + r31) = r0; // stw @ 0x807D4CC0
    r5 = *(0 + r7); // lwz @ 0x807D4CC4
    r0 = *(4 + r7); // lwz @ 0x807D4CC8
    *(0xb0 + r31) = r0; // stw @ 0x807D4CCC
    *(0xac + r31) = r5; // stw @ 0x807D4CD0
    r0 = *(8 + r7); // lwz @ 0x807D4CD4
    *(0xb4 + r31) = r0; // stw @ 0x807D4CD8
    r5 = *(0 + r7); // lwz @ 0x807D4CDC
    r0 = *(4 + r7); // lwz @ 0x807D4CE0
    *(0xbc + r31) = r0; // stw @ 0x807D4CE4
    *(0xb8 + r31) = r5; // stw @ 0x807D4CE8
    r0 = *(8 + r7); // lwz @ 0x807D4CEC
    *(0xc0 + r31) = r0; // stw @ 0x807D4CF0
    *(0xc4 + r31) = r8; // stw @ 0x807D4CF4
    r9 = *(0 + r4); // lwzu @ 0x807D4CF8
    r5 = *(0 + r6); // lwzu @ 0x807D4CFC
    r12 = *(0 + r7); // lwz @ 0x807D4D00
    r11 = *(4 + r7); // lwz @ 0x807D4D04
    r10 = *(8 + r7); // lwz @ 0x807D4D08
    r8 = *(4 + r4); // lwz @ 0x807D4D0C
    r7 = *(8 + r4); // lwz @ 0x807D4D10
    r4 = *(4 + r6); // lwz @ 0x807D4D14
    r0 = *(8 + r6); // lwz @ 0x807D4D18
    *(8 + r1) = r12; // stw @ 0x807D4D1C
    *(0xc + r1) = r11; // stw @ 0x807D4D20
    *(0x10 + r1) = r10; // stw @ 0x807D4D24
    *(0x14 + r1) = r9; // stw @ 0x807D4D28
    *(0x18 + r1) = r8; // stw @ 0x807D4D2C
    *(0x1c + r1) = r7; // stw @ 0x807D4D30
    *(0x20 + r1) = r5; // stw @ 0x807D4D34
    *(0x24 + r1) = r4; // stw @ 0x807D4D38
    *(0x28 + r1) = r0; // stw @ 0x807D4D3C
    *(0x9c + r31) = r31; // stw @ 0x807D4D40
    *(0xa0 + r31) = r5; // stw @ 0x807D4D44
    *(0xa4 + r31) = r4; // stw @ 0x807D4D48
    *(0xa8 + r31) = r0; // stw @ 0x807D4D4C
    *(0xac + r31) = r9; // stw @ 0x807D4D50
    *(0xb0 + r31) = r8; // stw @ 0x807D4D54
    *(0xb4 + r31) = r7; // stw @ 0x807D4D58
    *(0xb8 + r31) = r12; // stw @ 0x807D4D5C
    *(0xbc + r31) = r11; // stw @ 0x807D4D60
    *(0xc0 + r31) = r10; // stw @ 0x807D4D64
    FUN_807CF188(); // bl 0x807CF188
    r3 = r31;
    r31 = *(0x3c + r1); // lwz @ 0x807D4D70
    r0 = *(0x44 + r1); // lwz @ 0x807D4D74
    return;
}