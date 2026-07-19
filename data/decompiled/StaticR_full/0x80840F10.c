/* Function at 0x80840F10, size=236 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80840F10(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80840F20
    *(8 + r1) = r30; // stw @ 0x80840F24
    r30 = r6;
    if (==) goto 0x0x80840f84;
    r0 = r5 + -1; // 0x80840F30
    r3 = *(0x2c + r3); // lwz @ 0x80840F34
    /* mulli r0, r0, 0x50 */ // 0x80840F38
    r31 = r3 + r0; // 0x80840F3C
    FUN_80842D58(); // bl 0x80842D58
    r4 = *(0 + r31); // lwz @ 0x80840F44
    FUN_805E364C(); // bl 0x805E364C
    /* slwi r0, r3, 2 */ // 0x80840F4C
    r4 = r31 + r0; // 0x80840F50
    r0 = *(4 + r4); // lwz @ 0x80840F54
    if (!=) goto 0x0x80840f74;
    r0 = *(0 + r31); // lwz @ 0x80840F60
    r3 = r3 + 1; // 0x80840F64
    if (<) goto 0x0x80840f74;
    /* li r3, 0 */ // 0x80840F70
    /* slwi r0, r3, 2 */ // 0x80840F74
    r3 = r31 + r0; // 0x80840F78
    r3 = *(4 + r3); // lwz @ 0x80840F7C
    /* b 0x80840fe4 */ // 0x80840F80
    if (==) goto 0x0x80840fa0;
    r0 = r4 + -1; // 0x80840F8C
    r3 = *(0x30 + r3); // lwz @ 0x80840F90
    /* mulli r0, r0, 0x50 */ // 0x80840F94
    r31 = r3 + r0; // 0x80840F98
    /* b 0x80840fa4 */ // 0x80840F9C
    r31 = *(0x28 + r3); // lwz @ 0x80840FA0
    FUN_80842D58(); // bl 0x80842D58
    r4 = *(0 + r31); // lwz @ 0x80840FA8
    FUN_805E364C(); // bl 0x805E364C
    /* slwi r0, r3, 2 */ // 0x80840FB0
    r4 = r31 + r0; // 0x80840FB4
    r0 = *(4 + r4); // lwz @ 0x80840FB8
    if (!=) goto 0x0x80840fd8;
    r0 = *(0 + r31); // lwz @ 0x80840FC4
    r3 = r3 + 1; // 0x80840FC8
    if (<) goto 0x0x80840fd8;
    /* li r3, 0 */ // 0x80840FD4
    /* slwi r0, r3, 2 */ // 0x80840FD8
    r3 = r31 + r0; // 0x80840FDC
    r3 = *(4 + r3); // lwz @ 0x80840FE0
    r0 = *(0x14 + r1); // lwz @ 0x80840FE4
    r31 = *(0xc + r1); // lwz @ 0x80840FE8
    r30 = *(8 + r1); // lwz @ 0x80840FEC
    return;
}