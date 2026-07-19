/* Function at 0x80880EE0, size=148 bytes */
/* Stack frame: 336 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_80880EE0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -336(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r0, 0 */ // 0x80880EEC
    r31 = r3;
    *(0x148 + r1) = r30; // stw @ 0x80880EF8
    *(0x144 + r1) = r29; // stw @ 0x80880EFC
    r29 = r5;
    *(0x140 + r1) = r28; // stw @ 0x80880F04
    r28 = r4;
    r4 = r31;
    *(0x198 + r3) = r0; // stb @ 0x80880F10
    *(0x190 + r3) = r0; // stb @ 0x80880F14
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r12, 0 */ // 0x80880F20
    r11 = *(0 + r12); // lwzu @ 0x80880F24
    /* lis r30, 0 */ // 0x80880F28
    *(8 + r1) = r11; // stw @ 0x80880F2C
    r10 = *(4 + r12); // lwz @ 0x80880F30
    r30 = r30 + 0; // 0x80880F34
    r9 = *(8 + r12); // lwz @ 0x80880F38
    r6 = r29;
    r8 = *(0xc + r12); // lwz @ 0x80880F40
    r7 = *(0x10 + r12); // lwz @ 0x80880F48
    r5 = r30 + 0x148; // 0x80880F4C
    r0 = *(0x14 + r12); // lwz @ 0x80880F50
    /* li r4, 0x28 */ // 0x80880F54
    *(0xc + r1) = r10; // stw @ 0x80880F58
    *(0x10 + r1) = r9; // stw @ 0x80880F5C
    *(0x14 + r1) = r8; // stw @ 0x80880F60
    *(0x18 + r1) = r7; // stw @ 0x80880F64
    *(0x1c + r1) = r0; // stw @ 0x80880F68
    /* crclr cr1eq */ // 0x80880F6C
    FUN_805E3430(); // bl 0x805E3430
}