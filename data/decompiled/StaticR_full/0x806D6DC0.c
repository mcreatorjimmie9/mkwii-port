/* Function at 0x806D6DC0, size=500 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_806D6DC0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r5, 0 */ // 0x806D6DC8
    *(0x24 + r1) = r0; // stw @ 0x806D6DCC
    /* li r0, 1 */ // 0x806D6DD0
    /* stmw r26, 8(r1) */ // 0x806D6DD4
    r30 = r3;
    r31 = r4;
    *(0xd84 + r3) = r0; // stw @ 0x806D6DE0
    r3 = *(0 + r5); // lwz @ 0x806D6DE4
    r3 = *(0 + r3); // lwz @ 0x806D6DE8
    r27 = *(0x2a4 + r3); // lwz @ 0x806D6DEC
    if (!=) goto 0x0x806d6e00;
    /* li r27, 0 */ // 0x806D6DF8
    /* b 0x806d6e54 */ // 0x806D6DFC
    /* lis r26, 0 */ // 0x806D6E00
    r26 = r26 + 0; // 0x806D6E04
    if (==) goto 0x0x806d6e50;
    r12 = *(0 + r27); // lwz @ 0x806D6E0C
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x806D6E14
    /* mtctr r12 */ // 0x806D6E18
    /* bctrl  */ // 0x806D6E1C
    /* b 0x806d6e38 */ // 0x806D6E20
    if (!=) goto 0x0x806d6e34;
    /* li r0, 1 */ // 0x806D6E2C
    /* b 0x806d6e44 */ // 0x806D6E30
    r3 = *(0 + r3); // lwz @ 0x806D6E34
    if (!=) goto 0x0x806d6e24;
    /* li r0, 0 */ // 0x806D6E40
    if (==) goto 0x0x806d6e50;
    /* b 0x806d6e54 */ // 0x806D6E4C
    /* li r27, 0 */ // 0x806D6E50
    r3 = r27;
    FUN_8065FA90(r3); // bl 0x8065FA90
    /* li r3, 1 */ // 0x806D6E5C
    /* lis r4, 0 */ // 0x806D6E60
    /* mulli r26, r3, 0xf0 */ // 0x806D6E64
    r6 = *(0 + r4); // lwz @ 0x806D6E68
    /* li r28, 2 */ // 0x806D6E6C
    /* li r12, 3 */ // 0x806D6E70
    r6 = r6 + r26; // 0x806D6E74
    /* li r27, 5 */ // 0x806D6E78
    *(0xc28 + r6) = r27; // stw @ 0x806D6E7C
    /* mulli r29, r28, 0xf0 */ // 0x806D6E80
    /* li r10, 4 */ // 0x806D6E84
    r8 = *(0 + r4); // lwz @ 0x806D6E88
    /* li r3, 6 */ // 0x806D6E8C
    /* mulli r11, r12, 0xf0 */ // 0x806D6E90
    /* li r5, 0xb */ // 0x806D6E94
    r8 = r8 + r29; // 0x806D6E98
    *(0xc28 + r8) = r27; // stw @ 0x806D6E9C
    /* li r28, 7 */ // 0x806D6EA0
    /* mulli r9, r10, 0xf0 */ // 0x806D6EA4
    r29 = *(0 + r4); // lwz @ 0x806D6EA8
    /* li r8, 0xa */ // 0x806D6EAC
    /* li r12, 8 */ // 0x806D6EB0
    r11 = r29 + r11; // 0x806D6EB4
    /* li r10, 9 */ // 0x806D6EB8
    *(0xc28 + r11) = r27; // stw @ 0x806D6EBC
    /* mulli r26, r3, 0xf0 */ // 0x806D6EC0
    /* li r7, 2 */ // 0x806D6EC4
    r11 = *(0 + r4); // lwz @ 0x806D6EC8
    /* li r0, 0 */ // 0x806D6ECC
    /* mulli r6, r27, 0xf0 */ // 0x806D6ED0
    r3 = r31;
    r9 = r11 + r9; // 0x806D6ED8
    *(0xc28 + r9) = r27; // stw @ 0x806D6EDC
    /* mulli r29, r28, 0xf0 */ // 0x806D6EE0
    r9 = *(0 + r4); // lwz @ 0x806D6EE4
    r6 = r9 + r6; // 0x806D6EE8
    *(0xc28 + r6) = r27; // stw @ 0x806D6EEC
    /* mulli r11, r12, 0xf0 */ // 0x806D6EF0
    r6 = *(0 + r4); // lwz @ 0x806D6EF4
    /* mulli r9, r10, 0xf0 */ // 0x806D6EF8
    r6 = r6 + r26; // 0x806D6EFC
    *(0xc28 + r6) = r27; // stw @ 0x806D6F00
    /* mulli r6, r8, 0xf0 */ // 0x806D6F04
    r8 = *(0 + r4); // lwz @ 0x806D6F08
    r8 = r8 + r29; // 0x806D6F0C
    *(0xc28 + r8) = r27; // stw @ 0x806D6F10
    /* mulli r5, r5, 0xf0 */ // 0x806D6F14
    r29 = *(0 + r4); // lwz @ 0x806D6F18
    r11 = r29 + r11; // 0x806D6F1C
    *(0xc28 + r11) = r27; // stw @ 0x806D6F20
    r11 = *(0 + r4); // lwz @ 0x806D6F24
    r9 = r11 + r9; // 0x806D6F28
    *(0xc28 + r9) = r27; // stw @ 0x806D6F2C
    r9 = *(0 + r4); // lwz @ 0x806D6F30
    r6 = r9 + r6; // 0x806D6F34
    *(0xc28 + r6) = r27; // stw @ 0x806D6F38
    r6 = *(0 + r4); // lwz @ 0x806D6F3C
    r5 = r6 + r5; // 0x806D6F40
    *(0xc28 + r5) = r27; // stw @ 0x806D6F44
    r5 = *(0 + r4); // lwz @ 0x806D6F48
    *(0x175c + r5) = r7; // stw @ 0x806D6F4C
    r6 = *(0 + r4); // lwz @ 0x806D6F50
    r5 = *(0x1780 + r6); // lwz @ 0x806D6F54
    r5 = r5 rlwinm 0; // rlwinm
    *(0x1780 + r6) = r5; // stw @ 0x806D6F5C
    r5 = *(0 + r4); // lwz @ 0x806D6F60
    *(0x1764 + r5) = r0; // stw @ 0x806D6F64
    r5 = *(0 + r4); // lwz @ 0x806D6F68
    *(0x1760 + r5) = r7; // stw @ 0x806D6F6C
    r4 = *(0 + r4); // lwz @ 0x806D6F70
    r0 = *(0x1780 + r4); // lwz @ 0x806D6F74
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r4) = r0; // stw @ 0x806D6F7C
    FUN_8064A384(); // bl 0x8064A384
    r12 = *(0 + r30); // lwz @ 0x806D6F84
    r3 = r30;
    /* li r4, 0x32 */ // 0x806D6F8C
    /* li r5, 0 */ // 0x806D6F90
    r12 = *(0x1c + r12); // lwz @ 0x806D6F94
    /* mtctr r12 */ // 0x806D6F98
    /* bctrl  */ // 0x806D6F9C
    r0 = *(0x24 + r1); // lwz @ 0x806D6FA4
    return;
}