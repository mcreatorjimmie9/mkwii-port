/* Function at 0x80651CA4, size=856 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 9 function(s) */

int FUN_80651CA4(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x80651CB0
    r30 = r3;
    r31 = r4;
    r3 = *(0x1914 + r3); // lwz @ 0x80651CBC
    r4 = *(0x1918 + r30); // lwz @ 0x80651CC0
    FUN_806607C4(); // bl 0x806607C4
    r3 = *(0xb8 + r3); // lwz @ 0x80651CC8
    FUN_806622BC(); // bl 0x806622BC
    r27 = r3;
    /* li r26, 0 */ // 0x80651CD4
    /* li r4, 0 */ // 0x80651CD8
    /* li r5, 0 */ // 0x80651CDC
    /* li r6, 0 */ // 0x80651CE0
    FUN_805E4A80(r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x80651d44;
    r3 = r27;
    /* li r4, 1 */ // 0x80651CF4
    /* li r5, 0 */ // 0x80651CF8
    /* li r6, 0 */ // 0x80651CFC
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x80651d44;
    r3 = r27;
    /* li r4, 2 */ // 0x80651D10
    /* li r5, 0 */ // 0x80651D14
    /* li r6, 0 */ // 0x80651D18
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (!=) goto 0x0x80651d44;
    r3 = r27;
    /* li r4, 2 */ // 0x80651D2C
    /* li r5, 1 */ // 0x80651D30
    /* li r6, 0 */ // 0x80651D34
    FUN_805E4A80(r3, r4, r5, r6); // bl 0x805E4A80
    if (==) goto 0x0x80651d48;
    /* li r26, 1 */ // 0x80651D44
    if (!=) goto 0x0x80651e14;
    /* lis r3, 0 */ // 0x80651D50
    r3 = *(0 + r3); // lwz @ 0x80651D54
    r3 = *(0 + r3); // lwz @ 0x80651D58
    r27 = *(0x13c + r3); // lwz @ 0x80651D5C
    if (!=) goto 0x0x80651d70;
    /* li r27, 0 */ // 0x80651D68
    /* b 0x80651dc4 */ // 0x80651D6C
    /* lis r26, 0 */ // 0x80651D70
    r26 = r26 + 0; // 0x80651D74
    if (==) goto 0x0x80651dc0;
    r12 = *(0 + r27); // lwz @ 0x80651D7C
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x80651D84
    /* mtctr r12 */ // 0x80651D88
    /* bctrl  */ // 0x80651D8C
    /* b 0x80651da8 */ // 0x80651D90
    if (!=) goto 0x0x80651da4;
    /* li r0, 1 */ // 0x80651D9C
    /* b 0x80651db4 */ // 0x80651DA0
    r3 = *(0 + r3); // lwz @ 0x80651DA4
    if (!=) goto 0x0x80651d94;
    /* li r0, 0 */ // 0x80651DB0
    if (==) goto 0x0x80651dc0;
    /* b 0x80651dc4 */ // 0x80651DBC
    /* li r27, 0 */ // 0x80651DC0
    r12 = *(0 + r27); // lwz @ 0x80651DC4
    r3 = r27;
    r12 = *(0x64 + r12); // lwz @ 0x80651DCC
    /* mtctr r12 */ // 0x80651DD0
    /* bctrl  */ // 0x80651DD4
    r12 = *(0 + r27); // lwz @ 0x80651DD8
    r3 = r27;
    /* li r4, 0x157f */ // 0x80651DE0
    /* li r5, 0 */ // 0x80651DE4
    r12 = *(0x68 + r12); // lwz @ 0x80651DE8
    /* mtctr r12 */ // 0x80651DEC
    /* bctrl  */ // 0x80651DF0
    r12 = *(0 + r30); // lwz @ 0x80651DF4
    r3 = r30;
    /* li r4, 0x4d */ // 0x80651DFC
    /* li r5, 0 */ // 0x80651E00
    r12 = *(0x24 + r12); // lwz @ 0x80651E04
    /* mtctr r12 */ // 0x80651E08
    /* bctrl  */ // 0x80651E0C
    /* b 0x80651fe8 */ // 0x80651E10
    r3 = *(0x1914 + r30); // lwz @ 0x80651E14
    r4 = *(0x1918 + r30); // lwz @ 0x80651E18
    FUN_8066084C(); // bl 0x8066084C
    /* li r0, -1 */ // 0x80651E20
    *(0x191c + r30) = r0; // stw @ 0x80651E24
    /* lis r3, 0 */ // 0x80651E28
    r3 = *(0 + r3); // lwz @ 0x80651E2C
    r3 = *(0 + r3); // lwz @ 0x80651E30
    r27 = *(0x2a4 + r3); // lwz @ 0x80651E34
    if (!=) goto 0x0x80651e48;
    /* li r27, 0 */ // 0x80651E40
    /* b 0x80651e9c */ // 0x80651E44
    /* lis r26, 0 */ // 0x80651E48
    r26 = r26 + 0; // 0x80651E4C
    if (==) goto 0x0x80651e98;
    r12 = *(0 + r27); // lwz @ 0x80651E54
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x80651E5C
    /* mtctr r12 */ // 0x80651E60
    /* bctrl  */ // 0x80651E64
    /* b 0x80651e80 */ // 0x80651E68
    if (!=) goto 0x0x80651e7c;
    /* li r0, 1 */ // 0x80651E74
    /* b 0x80651e8c */ // 0x80651E78
    r3 = *(0 + r3); // lwz @ 0x80651E7C
    if (!=) goto 0x0x80651e6c;
    /* li r0, 0 */ // 0x80651E88
    if (==) goto 0x0x80651e98;
    /* b 0x80651e9c */ // 0x80651E94
    /* li r27, 0 */ // 0x80651E98
    r3 = r27;
    FUN_8065FA90(r3); // bl 0x8065FA90
    /* li r3, 1 */ // 0x80651EA4
    /* lis r4, 0 */ // 0x80651EA8
    /* mulli r26, r3, 0xf0 */ // 0x80651EAC
    r6 = *(0 + r4); // lwz @ 0x80651EB0
    /* li r28, 2 */ // 0x80651EB4
    /* li r12, 3 */ // 0x80651EB8
    r6 = r6 + r26; // 0x80651EBC
    /* li r27, 5 */ // 0x80651EC0
    *(0xc28 + r6) = r27; // stw @ 0x80651EC4
    /* mulli r29, r28, 0xf0 */ // 0x80651EC8
    /* li r10, 4 */ // 0x80651ECC
    r8 = *(0 + r4); // lwz @ 0x80651ED0
    /* li r3, 6 */ // 0x80651ED4
    /* mulli r11, r12, 0xf0 */ // 0x80651ED8
    /* li r5, 0xb */ // 0x80651EDC
    r8 = r8 + r29; // 0x80651EE0
    *(0xc28 + r8) = r27; // stw @ 0x80651EE4
    /* li r28, 7 */ // 0x80651EE8
    /* mulli r9, r10, 0xf0 */ // 0x80651EEC
    r29 = *(0 + r4); // lwz @ 0x80651EF0
    /* li r8, 0xa */ // 0x80651EF4
    /* li r12, 8 */ // 0x80651EF8
    r11 = r29 + r11; // 0x80651EFC
    /* li r10, 9 */ // 0x80651F00
    *(0xc28 + r11) = r27; // stw @ 0x80651F04
    /* mulli r26, r3, 0xf0 */ // 0x80651F08
    /* li r7, 2 */ // 0x80651F0C
    r11 = *(0 + r4); // lwz @ 0x80651F10
    /* li r0, 0 */ // 0x80651F14
    /* mulli r6, r27, 0xf0 */ // 0x80651F18
    r3 = r31;
    r9 = r11 + r9; // 0x80651F20
    *(0xc28 + r9) = r27; // stw @ 0x80651F24
    /* mulli r29, r28, 0xf0 */ // 0x80651F28
    r9 = *(0 + r4); // lwz @ 0x80651F2C
    r6 = r9 + r6; // 0x80651F30
    *(0xc28 + r6) = r27; // stw @ 0x80651F34
    /* mulli r11, r12, 0xf0 */ // 0x80651F38
    r6 = *(0 + r4); // lwz @ 0x80651F3C
    /* mulli r9, r10, 0xf0 */ // 0x80651F40
    r6 = r6 + r26; // 0x80651F44
    *(0xc28 + r6) = r27; // stw @ 0x80651F48
    /* mulli r6, r8, 0xf0 */ // 0x80651F4C
    r8 = *(0 + r4); // lwz @ 0x80651F50
    r8 = r8 + r29; // 0x80651F54
    *(0xc28 + r8) = r27; // stw @ 0x80651F58
    /* mulli r5, r5, 0xf0 */ // 0x80651F5C
    r29 = *(0 + r4); // lwz @ 0x80651F60
    r11 = r29 + r11; // 0x80651F64
    *(0xc28 + r11) = r27; // stw @ 0x80651F68
    r11 = *(0 + r4); // lwz @ 0x80651F6C
    r9 = r11 + r9; // 0x80651F70
    *(0xc28 + r9) = r27; // stw @ 0x80651F74
    r9 = *(0 + r4); // lwz @ 0x80651F78
    r6 = r9 + r6; // 0x80651F7C
    *(0xc28 + r6) = r27; // stw @ 0x80651F80
    r6 = *(0 + r4); // lwz @ 0x80651F84
    r5 = r6 + r5; // 0x80651F88
    *(0xc28 + r5) = r27; // stw @ 0x80651F8C
    r5 = *(0 + r4); // lwz @ 0x80651F90
    *(0x175c + r5) = r7; // stw @ 0x80651F94
    r6 = *(0 + r4); // lwz @ 0x80651F98
    r5 = *(0x1780 + r6); // lwz @ 0x80651F9C
    r5 = r5 rlwinm 0; // rlwinm
    *(0x1780 + r6) = r5; // stw @ 0x80651FA4
    r5 = *(0 + r4); // lwz @ 0x80651FA8
    *(0x1764 + r5) = r0; // stw @ 0x80651FAC
    r5 = *(0 + r4); // lwz @ 0x80651FB0
    *(0x1760 + r5) = r7; // stw @ 0x80651FB4
    r4 = *(0 + r4); // lwz @ 0x80651FB8
    r0 = *(0x1780 + r4); // lwz @ 0x80651FBC
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r4) = r0; // stw @ 0x80651FC4
    FUN_8064A384(); // bl 0x8064A384
    r12 = *(0 + r30); // lwz @ 0x80651FCC
    r3 = r30;
    /* li r4, 0x33 */ // 0x80651FD4
    /* li r5, 0 */ // 0x80651FD8
    r12 = *(0x1c + r12); // lwz @ 0x80651FDC
    /* mtctr r12 */ // 0x80651FE0
    /* bctrl  */ // 0x80651FE4
    r0 = *(0x24 + r1); // lwz @ 0x80651FEC
    return;
}