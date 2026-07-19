/* Function at 0x80661E6C, size=400 bytes */
/* Stack frame: 0 bytes */

int FUN_80661E6C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* li r7, 0 */ // 0x80661E6C
    *(4 + r3) = r7; // stw @ 0x80661E70
    /* li r8, -1 */ // 0x80661E74
    /* li r6, 0xf */ // 0x80661E78
    *(0 + r3) = r8; // stw @ 0x80661E7C
    /* li r0, 6 */ // 0x80661E80
    r9 = r3;
    /* li r10, 0 */ // 0x80661E88
    *(8 + r3) = r8; // stb @ 0x80661E8C
    /* li r5, 2 */ // 0x80661E90
    /* li r4, 0xff */ // 0x80661E94
    *(0x8c + r3) = r7; // stw @ 0x80661E98
    *(0xbc + r3) = r6; // stw @ 0x80661E9C
    *(9 + r3) = r8; // stb @ 0x80661EA0
    *(0x90 + r3) = r7; // stw @ 0x80661EA4
    *(0xc0 + r3) = r6; // stw @ 0x80661EA8
    *(0xa + r3) = r8; // stb @ 0x80661EAC
    *(0x94 + r3) = r7; // stw @ 0x80661EB0
    *(0xc4 + r3) = r6; // stw @ 0x80661EB4
    *(0xb + r3) = r8; // stb @ 0x80661EB8
    *(0x98 + r3) = r7; // stw @ 0x80661EBC
    *(0xc8 + r3) = r6; // stw @ 0x80661EC0
    *(0xc + r3) = r8; // stb @ 0x80661EC4
    *(0x9c + r3) = r7; // stw @ 0x80661EC8
    *(0xcc + r3) = r6; // stw @ 0x80661ECC
    *(0xd + r3) = r8; // stb @ 0x80661ED0
    *(0xa0 + r3) = r7; // stw @ 0x80661ED4
    *(0xd0 + r3) = r6; // stw @ 0x80661ED8
    *(0xe + r3) = r8; // stb @ 0x80661EDC
    *(0xa4 + r3) = r7; // stw @ 0x80661EE0
    *(0xd4 + r3) = r6; // stw @ 0x80661EE4
    *(0xf + r3) = r8; // stb @ 0x80661EE8
    *(0xa8 + r3) = r7; // stw @ 0x80661EEC
    *(0xd8 + r3) = r6; // stw @ 0x80661EF0
    *(0x10 + r3) = r8; // stb @ 0x80661EF4
    *(0xac + r3) = r7; // stw @ 0x80661EF8
    *(0xdc + r3) = r6; // stw @ 0x80661EFC
    *(0x11 + r3) = r8; // stb @ 0x80661F00
    *(0xb0 + r3) = r7; // stw @ 0x80661F04
    *(0xe0 + r3) = r6; // stw @ 0x80661F08
    *(0x12 + r3) = r8; // stb @ 0x80661F0C
    *(0xb4 + r3) = r7; // stw @ 0x80661F10
    *(0xe4 + r3) = r6; // stw @ 0x80661F14
    *(0x13 + r3) = r8; // stb @ 0x80661F18
    *(0xb8 + r3) = r7; // stw @ 0x80661F1C
    *(0xe8 + r3) = r6; // stw @ 0x80661F20
    /* mtctr r0 */ // 0x80661F24
    *(0x14 + r3) = r5; // stw @ 0x80661F28
    *(0x74 + r9) = r4; // stb @ 0x80661F30
    *(0x18 + r3) = r5; // stw @ 0x80661F34
    *(0x75 + r9) = r4; // stb @ 0x80661F38
    *(0x1c + r3) = r5; // stw @ 0x80661F3C
    *(0x76 + r9) = r4; // stb @ 0x80661F40
    *(0x20 + r3) = r5; // stw @ 0x80661F44
    *(0x77 + r9) = r4; // stb @ 0x80661F48
    *(0x24 + r3) = r5; // stw @ 0x80661F4C
    *(0x78 + r9) = r4; // stb @ 0x80661F50
    *(0x28 + r3) = r5; // stw @ 0x80661F54
    *(0x79 + r9) = r4; // stb @ 0x80661F58
    *(0x2c + r3) = r5; // stw @ 0x80661F5C
    *(0x7a + r9) = r4; // stb @ 0x80661F60
    *(0x30 + r3) = r5; // stw @ 0x80661F64
    *(0x7b + r9) = r4; // stb @ 0x80661F68
    *(0x34 + r3) = r5; // stw @ 0x80661F6C
    *(0x7c + r9) = r4; // stb @ 0x80661F70
    *(0x38 + r3) = r5; // stw @ 0x80661F74
    *(0x7d + r9) = r4; // stb @ 0x80661F78
    *(0x3c + r3) = r5; // stw @ 0x80661F7C
    *(0x7e + r9) = r4; // stb @ 0x80661F80
    *(0x40 + r3) = r5; // stw @ 0x80661F84
    *(0x7f + r9) = r4; // stb @ 0x80661F88
    *(0x1c + r3) = r5; // stw @ 0x80661F8C
    *(0x76 + r9) = r4; // stb @ 0x80661F90
    *(0x20 + r3) = r5; // stw @ 0x80661F94
    *(0x77 + r9) = r4; // stb @ 0x80661F98
    *(0x24 + r3) = r5; // stw @ 0x80661F9C
    *(0x78 + r9) = r4; // stb @ 0x80661FA0
    *(0x28 + r3) = r5; // stw @ 0x80661FA4
    *(0x79 + r9) = r4; // stb @ 0x80661FA8
    *(0x2c + r3) = r5; // stw @ 0x80661FAC
    *(0x7a + r9) = r4; // stb @ 0x80661FB0
    *(0x30 + r3) = r5; // stw @ 0x80661FB4
    *(0x7b + r9) = r4; // stb @ 0x80661FB8
    *(0x34 + r3) = r5; // stw @ 0x80661FBC
    *(0x7c + r9) = r4; // stb @ 0x80661FC0
    *(0x38 + r3) = r5; // stw @ 0x80661FC4
    *(0x7d + r9) = r4; // stb @ 0x80661FC8
    *(0x3c + r3) = r5; // stw @ 0x80661FCC
    *(0x7e + r9) = r4; // stb @ 0x80661FD0
    *(0x40 + r3) = r5; // stw @ 0x80661FD4
    *(0x7f + r9) = r4; // stb @ 0x80661FD8
    *(0x44 + r3) = r5; // stw @ 0x80661FDC
    *(0x80 + r9) = r4; // stb @ 0x80661FE0
    *(0x48 + r3) = r5; // stw @ 0x80661FE4
    r3 = r3 + 0x10; // 0x80661FE8
    *(0x81 + r9) = r4; // stb @ 0x80661FEC
    r9 = r9 + 4; // 0x80661FF0
    if (counter-- != 0) goto 0x0x80661f28;
    return;
}