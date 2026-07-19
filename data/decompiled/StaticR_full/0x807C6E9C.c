/* Function at 0x807C6E9C, size=440 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807C6E9C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x807C6EAC
    r31 = r31 + 0; // 0x807C6EB0
    *(8 + r1) = r30; // stw @ 0x807C6EB4
    r30 = r3;
    r4 = *(0x16c + r3); // lwz @ 0x807C6EBC
    r5 = *(0x170 + r3); // lwz @ 0x807C6EC0
    FUN_807C6A6C(); // bl 0x807C6A6C
    r3 = *(0x168 + r30); // lwz @ 0x807C6EC8
    r7 = r30;
    /* li r5, 0 */ // 0x807C6ED0
    r6 = *(8 + r3); // lwz @ 0x807C6ED4
    /* b 0x807c6efc */ // 0x807C6ED8
    r4 = *(0xec + r7); // lwz @ 0x807C6EDC
    r0 = *(8 + r4); // lwz @ 0x807C6EE0
    if (!=) goto 0x0x807c6ef4;
    *(0x18 + r4) = r6; // stw @ 0x807C6EEC
    r6 = r6 + 1; // 0x807C6EF0
    r7 = r7 + 8; // 0x807C6EF4
    r5 = r5 + 1; // 0x807C6EF8
    r0 = *(0x178 + r30); // lwz @ 0x807C6EFC
    if (<) goto 0x0x807c6edc;
    r3 = *(0x16c + r30); // lwz @ 0x807C6F08
    r7 = r30;
    /* li r5, 0 */ // 0x807C6F10
    r6 = *(8 + r3); // lwz @ 0x807C6F14
    /* b 0x807c6f3c */ // 0x807C6F18
    r4 = *(0xec + r7); // lwz @ 0x807C6F1C
    r0 = *(8 + r4); // lwz @ 0x807C6F20
    if (!=) goto 0x0x807c6f34;
    *(0x18 + r4) = r6; // stw @ 0x807C6F2C
    r6 = r6 + 1; // 0x807C6F30
    r7 = r7 + 8; // 0x807C6F34
    r5 = r5 + 1; // 0x807C6F38
    r0 = *(0x178 + r30); // lwz @ 0x807C6F3C
    if (<) goto 0x0x807c6f1c;
    r3 = *(0x170 + r30); // lwz @ 0x807C6F48
    r7 = r30;
    /* li r5, 0 */ // 0x807C6F50
    r6 = *(8 + r3); // lwz @ 0x807C6F54
    /* b 0x807c6f7c */ // 0x807C6F58
    r4 = *(0xec + r7); // lwz @ 0x807C6F5C
    r0 = *(8 + r4); // lwz @ 0x807C6F60
    if (!=) goto 0x0x807c6f74;
    *(0x18 + r4) = r6; // stw @ 0x807C6F6C
    r6 = r6 + 1; // 0x807C6F70
    r7 = r7 + 8; // 0x807C6F74
    r5 = r5 + 1; // 0x807C6F78
    r0 = *(0x178 + r30); // lwz @ 0x807C6F7C
    if (<) goto 0x0x807c6f5c;
    r3 = *(0x168 + r30); // lwz @ 0x807C6F88
    r12 = *(0 + r3); // lwz @ 0x807C6F8C
    r12 = *(0x1c + r12); // lwz @ 0x807C6F90
    /* mtctr r12 */ // 0x807C6F94
    /* bctrl  */ // 0x807C6F98
    r3 = *(0x16c + r30); // lwz @ 0x807C6F9C
    r12 = *(0 + r3); // lwz @ 0x807C6FA0
    r12 = *(0x1c + r12); // lwz @ 0x807C6FA4
    /* mtctr r12 */ // 0x807C6FA8
    /* bctrl  */ // 0x807C6FAC
    /* lis r3, 0 */ // 0x807C6FB0
    r3 = *(0 + r3); // lwz @ 0x807C6FB4
    FUN_807BFFC0(r3); // bl 0x807BFFC0
    /* li r4, 0 */ // 0x807C6FC0
    if (==) goto 0x0x807c6fdc;
    if (==) goto 0x0x807c6ff0;
    if (==) goto 0x0x807c7004;
    /* b 0x807c7014 */ // 0x807C6FD8
    r3 = *(0x22 + r31); // lha @ 0x807C6FDC
    r0 = *(0x24 + r31); // lha @ 0x807C6FE0
    /* subf r0, r3, r0 */ // 0x807C6FE4
    /* extsh r4, r0 */ // 0x807C6FE8
    /* b 0x807c7014 */ // 0x807C6FEC
    r3 = *(0x22 + r31); // lha @ 0x807C6FF0
    r0 = *(0x26 + r31); // lha @ 0x807C6FF4
    /* subf r0, r3, r0 */ // 0x807C6FF8
    /* extsh r4, r0 */ // 0x807C6FFC
    /* b 0x807c7014 */ // 0x807C7000
    r3 = *(0x22 + r31); // lha @ 0x807C7004
    r0 = *(0x28 + r31); // lha @ 0x807C7008
    /* subf r0, r3, r0 */ // 0x807C700C
    /* extsh r4, r0 */ // 0x807C7010
    if (>=) goto 0x0x807c7020;
    /* li r4, 0 */ // 0x807C701C
    /* lis r3, 0 */ // 0x807C7020
    r3 = *(0 + r3); // lwz @ 0x807C7024
    FUN_807C03BC(r4, r3); // bl 0x807C03BC
    r0 = *(0x22 + r31); // lha @ 0x807C702C
    r0 = r0 + r3; // 0x807C7030
    /* mulli r0, r0, 0x3c */ // 0x807C7034
    *(0x184 + r30) = r0; // stw @ 0x807C7038
    r31 = *(0xc + r1); // lwz @ 0x807C703C
    r30 = *(8 + r1); // lwz @ 0x807C7040
    r0 = *(0x14 + r1); // lwz @ 0x807C7044
    return;
}