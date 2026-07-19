/* Function at 0x808CEBD8, size=392 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_808CEBD8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r3, 0 */ // 0x808CEBDC
    r0 = *(0 + r3); // lbz @ 0x808CEBEC
    if (==) goto 0x0x808cec04;
    /* lis r3, 0 */ // 0x808CEBF8
    r3 = *(0 + r3); // lwz @ 0x808CEBFC
    /* b 0x808ced4c */ // 0x808CEC00
    /* lis r4, 0 */ // 0x808CEC04
    /* lis r3, 0 */ // 0x808CEC08
    r6 = *(0 + r4); // lwz @ 0x808CEC0C
    /* li r7, 0 */ // 0x808CEC10
    r3 = *(0 + r3); // lwz @ 0x808CEC14
    /* li r8, 0 */ // 0x808CEC18
    r0 = *(0x24 + r6); // lbz @ 0x808CEC1C
    r4 = r6 + 0x28; // 0x808CEC20
    r5 = r6 + 0xc18; // 0x808CEC24
    /* li r9, 0 */ // 0x808CEC28
    /* li r10, 0 */ // 0x808CEC2C
    /* li r31, 1 */ // 0x808CEC30
    /* b 0x808ced28 */ // 0x808CEC34
    /* clrlwi r11, r10, 0x18 */ // 0x808CEC38
    /* mulli r29, r11, 0xf0 */ // 0x808CEC3C
    r30 = r4 + r29; // 0x808CEC40
    r11 = *(0xcc + r30); // lwz @ 0x808CEC44
    if (!=) goto 0x0x808cecb8;
    r11 = *(0xb70 + r6); // lwz @ 0x808CEC50
    /* li r12, 0 */ // 0x808CEC54
    if (>) goto 0x0x808cec74;
    r11 = r31 << r11; // slw
    /* andi. r11, r11, 0xc1 */ // 0x808CEC68
    if (==) goto 0x0x808cec74;
    /* li r12, 1 */ // 0x808CEC70
    if (==) goto 0x0x808cec94;
    r12 = *(0xc + r3); // lwz @ 0x808CEC7C
    r11 = r10 rlwinm 2; // rlwinm
    /* lwzx r11, r12, r11 */ // 0x808CEC84
    r11 = *(0x22 + r11); // lhz @ 0x808CEC88
    r7 = r7 + r11; // 0x808CEC8C
    /* b 0x808ced24 */ // 0x808CEC90
    r12 = r5 + r29; // 0x808CEC94
    r11 = *(0xd8 + r30); // lhz @ 0x808CEC98
    r12 = *(0xda + r12); // lhz @ 0x808CEC9C
    /* subf r11, r11, r12 */ // 0x808CECA0
    r7 = r7 + r12; // 0x808CECA4
    if (>=) goto 0x0x808ced24;
    r9 = r11;
    /* b 0x808ced24 */ // 0x808CECB4
    if (!=) goto 0x0x808ced24;
    r11 = *(0xb70 + r6); // lwz @ 0x808CECC0
    /* li r12, 0 */ // 0x808CECC4
    if (>) goto 0x0x808cece4;
    r11 = r31 << r11; // slw
    /* andi. r11, r11, 0xc1 */ // 0x808CECD8
    if (==) goto 0x0x808cece4;
    /* li r12, 1 */ // 0x808CECE0
    if (==) goto 0x0x808ced04;
    r12 = *(0xc + r3); // lwz @ 0x808CECEC
    r11 = r10 rlwinm 2; // rlwinm
    /* lwzx r11, r12, r11 */ // 0x808CECF4
    r11 = *(0x22 + r11); // lhz @ 0x808CECF8
    r8 = r8 + r11; // 0x808CECFC
    /* b 0x808ced24 */ // 0x808CED00
    r12 = r5 + r29; // 0x808CED04
    r11 = *(0xd8 + r30); // lhz @ 0x808CED08
    r12 = *(0xda + r12); // lhz @ 0x808CED0C
    /* subf r11, r11, r12 */ // 0x808CED10
    r8 = r8 + r12; // 0x808CED14
    if (>=) goto 0x0x808ced24;
    r9 = r11;
    /* clrlwi r11, r10, 0x18 */ // 0x808CED28
    if (<) goto 0x0x808cec38;
    /* lis r5, 0 */ // 0x808CED34
    /* lis r4, 0 */ // 0x808CED38
    /* subf r3, r7, r8 */ // 0x808CED3C
    /* li r0, 1 */ // 0x808CED40
    *(0 + r5) = r0; // stb @ 0x808CED44
    *(0 + r4) = r3; // stw @ 0x808CED48
    r31 = *(0x1c + r1); // lwz @ 0x808CED4C
    r30 = *(0x18 + r1); // lwz @ 0x808CED50
    r29 = *(0x14 + r1); // lwz @ 0x808CED54
    return;
}