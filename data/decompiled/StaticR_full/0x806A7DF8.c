/* Function at 0x806A7DF8, size=464 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806A7DF8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r3, 0 */ // 0x806A7E00
    *(0x18 + r1) = r30; // stw @ 0x806A7E0C
    *(0x14 + r1) = r29; // stw @ 0x806A7E10
    r3 = *(0 + r3); // lwz @ 0x806A7E14
    r3 = *(0 + r3); // lwz @ 0x806A7E18
    r30 = *(0x2a4 + r3); // lwz @ 0x806A7E1C
    if (!=) goto 0x0x806a7e30;
    /* li r30, 0 */ // 0x806A7E28
    /* b 0x806a7e84 */ // 0x806A7E2C
    /* lis r29, 0 */ // 0x806A7E30
    r29 = r29 + 0; // 0x806A7E34
    if (==) goto 0x0x806a7e80;
    r12 = *(0 + r30); // lwz @ 0x806A7E3C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806A7E44
    /* mtctr r12 */ // 0x806A7E48
    /* bctrl  */ // 0x806A7E4C
    /* b 0x806a7e68 */ // 0x806A7E50
    if (!=) goto 0x0x806a7e64;
    /* li r0, 1 */ // 0x806A7E5C
    /* b 0x806a7e74 */ // 0x806A7E60
    r3 = *(0 + r3); // lwz @ 0x806A7E64
    if (!=) goto 0x0x806a7e54;
    /* li r0, 0 */ // 0x806A7E70
    if (==) goto 0x0x806a7e80;
    /* b 0x806a7e84 */ // 0x806A7E7C
    /* li r30, 0 */ // 0x806A7E80
    r3 = r30;
    FUN_8065FA90(r3); // bl 0x8065FA90
    /* li r29, 1 */ // 0x806A7E8C
    /* lis r3, 0 */ // 0x806A7E90
    /* mulli r29, r29, 0xf0 */ // 0x806A7E94
    r5 = *(0 + r3); // lwz @ 0x806A7E98
    /* li r31, 2 */ // 0x806A7E9C
    /* li r11, 3 */ // 0x806A7EA0
    r5 = r5 + r29; // 0x806A7EA4
    /* li r30, 5 */ // 0x806A7EA8
    *(0xc28 + r5) = r30; // stw @ 0x806A7EAC
    /* mulli r12, r31, 0xf0 */ // 0x806A7EB0
    /* li r9, 4 */ // 0x806A7EB4
    r7 = *(0 + r3); // lwz @ 0x806A7EB8
    /* li r29, 6 */ // 0x806A7EBC
    /* mulli r10, r11, 0xf0 */ // 0x806A7EC0
    /* li r4, 0xb */ // 0x806A7EC4
    r7 = r7 + r12; // 0x806A7EC8
    *(0xc28 + r7) = r30; // stw @ 0x806A7ECC
    /* li r31, 7 */ // 0x806A7ED0
    /* mulli r8, r9, 0xf0 */ // 0x806A7ED4
    r12 = *(0 + r3); // lwz @ 0x806A7ED8
    /* li r7, 0xa */ // 0x806A7EDC
    /* li r11, 8 */ // 0x806A7EE0
    r10 = r12 + r10; // 0x806A7EE4
    /* li r9, 9 */ // 0x806A7EE8
    *(0xc28 + r10) = r30; // stw @ 0x806A7EEC
    /* mulli r5, r30, 0xf0 */ // 0x806A7EF0
    /* li r6, 2 */ // 0x806A7EF4
    r10 = *(0 + r3); // lwz @ 0x806A7EF8
    /* li r0, 0 */ // 0x806A7EFC
    /* mulli r29, r29, 0xf0 */ // 0x806A7F00
    r8 = r10 + r8; // 0x806A7F04
    *(0xc28 + r8) = r30; // stw @ 0x806A7F08
    /* mulli r12, r31, 0xf0 */ // 0x806A7F0C
    r8 = *(0 + r3); // lwz @ 0x806A7F10
    r5 = r8 + r5; // 0x806A7F14
    *(0xc28 + r5) = r30; // stw @ 0x806A7F18
    /* mulli r10, r11, 0xf0 */ // 0x806A7F1C
    r5 = *(0 + r3); // lwz @ 0x806A7F20
    /* mulli r8, r9, 0xf0 */ // 0x806A7F24
    r5 = r5 + r29; // 0x806A7F28
    *(0xc28 + r5) = r30; // stw @ 0x806A7F2C
    /* mulli r5, r7, 0xf0 */ // 0x806A7F30
    r7 = *(0 + r3); // lwz @ 0x806A7F34
    r7 = r7 + r12; // 0x806A7F38
    *(0xc28 + r7) = r30; // stw @ 0x806A7F3C
    /* mulli r4, r4, 0xf0 */ // 0x806A7F40
    r12 = *(0 + r3); // lwz @ 0x806A7F44
    r10 = r12 + r10; // 0x806A7F48
    *(0xc28 + r10) = r30; // stw @ 0x806A7F4C
    r10 = *(0 + r3); // lwz @ 0x806A7F50
    r8 = r10 + r8; // 0x806A7F54
    *(0xc28 + r8) = r30; // stw @ 0x806A7F58
    r8 = *(0 + r3); // lwz @ 0x806A7F5C
    r5 = r8 + r5; // 0x806A7F60
    *(0xc28 + r5) = r30; // stw @ 0x806A7F64
    r5 = *(0 + r3); // lwz @ 0x806A7F68
    r4 = r5 + r4; // 0x806A7F6C
    *(0xc28 + r4) = r30; // stw @ 0x806A7F70
    r4 = *(0 + r3); // lwz @ 0x806A7F74
    *(0x175c + r4) = r6; // stw @ 0x806A7F78
    r5 = *(0 + r3); // lwz @ 0x806A7F7C
    r4 = *(0x1780 + r5); // lwz @ 0x806A7F80
    r4 = r4 rlwinm 0; // rlwinm
    *(0x1780 + r5) = r4; // stw @ 0x806A7F88
    r4 = *(0 + r3); // lwz @ 0x806A7F8C
    *(0x1764 + r4) = r0; // stw @ 0x806A7F90
    r4 = *(0 + r3); // lwz @ 0x806A7F94
    *(0x1760 + r4) = r6; // stw @ 0x806A7F98
    r3 = *(0 + r3); // lwz @ 0x806A7F9C
    r0 = *(0x1780 + r3); // lwz @ 0x806A7FA0
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r3) = r0; // stw @ 0x806A7FA8
    r31 = *(0x1c + r1); // lwz @ 0x806A7FAC
    r30 = *(0x18 + r1); // lwz @ 0x806A7FB0
    r29 = *(0x14 + r1); // lwz @ 0x806A7FB4
    r0 = *(0x24 + r1); // lwz @ 0x806A7FB8
    return;
}