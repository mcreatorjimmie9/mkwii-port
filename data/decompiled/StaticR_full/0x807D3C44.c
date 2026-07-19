/* Function at 0x807D3C44, size=508 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807D3C44(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x807D3C54
    r31 = r31 + 0; // 0x807D3C58
    *(0x58 + r1) = r30; // stw @ 0x807D3C5C
    r30 = r3;
    FUN_807BAE88(); // bl 0x807BAE88
    /* lis r3, 0 */ // 0x807D3C68
    /* lis r8, 0 */ // 0x807D3C6C
    r3 = r3 + 0; // 0x807D3C70
    /* li r7, 0 */ // 0x807D3C74
    r8 = r8 + 0; // 0x807D3C78
    *(0x34 + r30) = r3; // stw @ 0x807D3C7C
    /* lis r4, 0 */ // 0x807D3C80
    r5 = r31 + 0x54; // 0x807D3C84
    *(0x98 + r30) = r8; // stw @ 0x807D3C88
    r3 = r31 + 0x60; // 0x807D3C8C
    *(0x9c + r30) = r7; // stw @ 0x807D3C90
    r6 = *(0 + r4); // lwzu @ 0x807D3C94
    r0 = *(4 + r4); // lwz @ 0x807D3C98
    *(0xa4 + r30) = r0; // stw @ 0x807D3C9C
    *(0xa0 + r30) = r6; // stw @ 0x807D3CA0
    r0 = *(8 + r4); // lwz @ 0x807D3CA4
    *(0xa8 + r30) = r0; // stw @ 0x807D3CA8
    r6 = *(0 + r4); // lwz @ 0x807D3CAC
    r0 = *(4 + r4); // lwz @ 0x807D3CB0
    *(0xb0 + r30) = r0; // stw @ 0x807D3CB4
    *(0xac + r30) = r6; // stw @ 0x807D3CB8
    r0 = *(8 + r4); // lwz @ 0x807D3CBC
    *(0xb4 + r30) = r0; // stw @ 0x807D3CC0
    r6 = *(0 + r4); // lwz @ 0x807D3CC4
    r0 = *(4 + r4); // lwz @ 0x807D3CC8
    *(0xbc + r30) = r0; // stw @ 0x807D3CCC
    *(0xb8 + r30) = r6; // stw @ 0x807D3CD0
    r0 = *(8 + r4); // lwz @ 0x807D3CD4
    *(0xc0 + r30) = r0; // stw @ 0x807D3CD8
    *(0xc4 + r30) = r8; // stw @ 0x807D3CDC
    *(0xc8 + r30) = r7; // stw @ 0x807D3CE0
    r6 = *(0 + r4); // lwz @ 0x807D3CE4
    r0 = *(4 + r4); // lwz @ 0x807D3CE8
    *(0xd0 + r30) = r0; // stw @ 0x807D3CEC
    *(0xcc + r30) = r6; // stw @ 0x807D3CF0
    r0 = *(8 + r4); // lwz @ 0x807D3CF4
    *(0xd4 + r30) = r0; // stw @ 0x807D3CF8
    r6 = *(0 + r4); // lwz @ 0x807D3CFC
    r0 = *(4 + r4); // lwz @ 0x807D3D00
    *(0xdc + r30) = r0; // stw @ 0x807D3D04
    *(0xd8 + r30) = r6; // stw @ 0x807D3D08
    r0 = *(8 + r4); // lwz @ 0x807D3D0C
    *(0xe0 + r30) = r0; // stw @ 0x807D3D10
    r6 = *(0 + r4); // lwz @ 0x807D3D14
    r0 = *(4 + r4); // lwz @ 0x807D3D18
    *(0xe8 + r30) = r0; // stw @ 0x807D3D1C
    *(0xe4 + r30) = r6; // stw @ 0x807D3D20
    r0 = *(8 + r4); // lwz @ 0x807D3D24
    *(0xec + r30) = r0; // stw @ 0x807D3D28
    *(0xf0 + r30) = r7; // stw @ 0x807D3D2C
    *(0xf4 + r30) = r7; // stw @ 0x807D3D30
    r12 = *(0 + r4); // lwz @ 0x807D3D34
    r11 = *(4 + r4); // lwz @ 0x807D3D38
    r10 = *(8 + r4); // lwz @ 0x807D3D3C
    r9 = *(0x54 + r31); // lwz @ 0x807D3D40
    r8 = *(4 + r5); // lwz @ 0x807D3D44
    r7 = *(8 + r5); // lwz @ 0x807D3D48
    r6 = *(0x60 + r31); // lwz @ 0x807D3D4C
    r5 = *(4 + r3); // lwz @ 0x807D3D50
    r0 = *(8 + r3); // lwz @ 0x807D3D54
    *(0x2c + r1) = r12; // stw @ 0x807D3D58
    *(0x30 + r1) = r11; // stw @ 0x807D3D5C
    *(0x34 + r1) = r10; // stw @ 0x807D3D60
    *(0x38 + r1) = r9; // stw @ 0x807D3D64
    *(0x3c + r1) = r8; // stw @ 0x807D3D68
    *(0x40 + r1) = r7; // stw @ 0x807D3D6C
    *(0x44 + r1) = r6; // stw @ 0x807D3D70
    *(0x48 + r1) = r5; // stw @ 0x807D3D74
    *(0x4c + r1) = r0; // stw @ 0x807D3D78
    *(0x9c + r30) = r30; // stw @ 0x807D3D7C
    *(0xa0 + r30) = r6; // stw @ 0x807D3D80
    *(0xa4 + r30) = r5; // stw @ 0x807D3D84
    *(0xa8 + r30) = r0; // stw @ 0x807D3D88
    *(0xac + r30) = r9; // stw @ 0x807D3D8C
    r6 = r31 + 0x6c; // 0x807D3D90
    r5 = r31 + 0x78; // 0x807D3D94
    r3 = r30;
    *(0xb0 + r30) = r8; // stw @ 0x807D3D9C
    *(0xb4 + r30) = r7; // stw @ 0x807D3DA0
    *(0xb8 + r30) = r12; // stw @ 0x807D3DA4
    *(0xbc + r30) = r11; // stw @ 0x807D3DA8
    *(0xc0 + r30) = r10; // stw @ 0x807D3DAC
    r12 = *(0 + r4); // lwz @ 0x807D3DB0
    r11 = *(4 + r4); // lwz @ 0x807D3DB4
    r10 = *(8 + r4); // lwz @ 0x807D3DB8
    r9 = *(0x6c + r31); // lwz @ 0x807D3DBC
    r8 = *(4 + r6); // lwz @ 0x807D3DC0
    r7 = *(8 + r6); // lwz @ 0x807D3DC4
    r6 = *(0x78 + r31); // lwz @ 0x807D3DC8
    r4 = *(4 + r5); // lwz @ 0x807D3DCC
    r0 = *(8 + r5); // lwz @ 0x807D3DD0
    *(8 + r1) = r12; // stw @ 0x807D3DD4
    *(0xc + r1) = r11; // stw @ 0x807D3DD8
    *(0x10 + r1) = r10; // stw @ 0x807D3DDC
    *(0x14 + r1) = r9; // stw @ 0x807D3DE0
    *(0x18 + r1) = r8; // stw @ 0x807D3DE4
    *(0x1c + r1) = r7; // stw @ 0x807D3DE8
    *(0x20 + r1) = r6; // stw @ 0x807D3DEC
    *(0x24 + r1) = r4; // stw @ 0x807D3DF0
    *(0x28 + r1) = r0; // stw @ 0x807D3DF4
    *(0xc8 + r30) = r30; // stw @ 0x807D3DF8
    *(0xcc + r30) = r6; // stw @ 0x807D3DFC
    *(0xd0 + r30) = r4; // stw @ 0x807D3E00
    *(0xd4 + r30) = r0; // stw @ 0x807D3E04
    *(0xd8 + r30) = r9; // stw @ 0x807D3E08
    *(0xdc + r30) = r8; // stw @ 0x807D3E0C
    *(0xe0 + r30) = r7; // stw @ 0x807D3E10
    *(0xe4 + r30) = r12; // stw @ 0x807D3E14
    *(0xe8 + r30) = r11; // stw @ 0x807D3E18
    *(0xec + r30) = r10; // stw @ 0x807D3E1C
    FUN_807CF188(); // bl 0x807CF188
    r3 = r30;
    r31 = *(0x5c + r1); // lwz @ 0x807D3E28
    r30 = *(0x58 + r1); // lwz @ 0x807D3E2C
    r0 = *(0x64 + r1); // lwz @ 0x807D3E30
    return;
}