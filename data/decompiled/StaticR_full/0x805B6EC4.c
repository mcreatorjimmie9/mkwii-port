/* Function at 0x805B6EC4, size=304 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805B6EC4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x805B6ECC
    /* li r7, 0 */ // 0x805B6ED0
    *(0x94 + r1) = r0; // stw @ 0x805B6ED4
    /* li r0, 3 */ // 0x805B6ED8
    *(0x8c + r1) = r31; // stw @ 0x805B6EDC
    r31 = r3;
    *(0x88 + r1) = r30; // stw @ 0x805B6EE4
    *(0x2d4 + r3) = r4; // stb @ 0x805B6EE8
    /* li r4, -1 */ // 0x805B6EEC
    /* mtctr r0 */ // 0x805B6EF0
    /* clrlwi r0, r7, 0x10 */ // 0x805B6EF4
    r7 = r7 + 8; // 0x805B6EF8
    r5 = r3 + r0; // 0x805B6EFC
    *(0x270 + r5) = r4; // stb @ 0x805B6F00
    /* clrlwi r6, r7, 0x10 */ // 0x805B6F04
    r7 = r7 + 8; // 0x805B6F08
    *(0x271 + r5) = r4; // stb @ 0x805B6F0C
    *(0x272 + r5) = r4; // stb @ 0x805B6F10
    *(0x273 + r5) = r4; // stb @ 0x805B6F14
    *(0x274 + r5) = r4; // stb @ 0x805B6F18
    *(0x275 + r5) = r4; // stb @ 0x805B6F1C
    *(0x276 + r5) = r4; // stb @ 0x805B6F20
    *(0x277 + r5) = r4; // stb @ 0x805B6F24
    r5 = r3 + r6; // 0x805B6F28
    /* clrlwi r6, r7, 0x10 */ // 0x805B6F2C
    r7 = r7 + 8; // 0x805B6F30
    *(0x270 + r5) = r4; // stb @ 0x805B6F34
    *(0x271 + r5) = r4; // stb @ 0x805B6F38
    *(0x272 + r5) = r4; // stb @ 0x805B6F3C
    *(0x273 + r5) = r4; // stb @ 0x805B6F40
    *(0x274 + r5) = r4; // stb @ 0x805B6F44
    *(0x275 + r5) = r4; // stb @ 0x805B6F48
    *(0x276 + r5) = r4; // stb @ 0x805B6F4C
    *(0x277 + r5) = r4; // stb @ 0x805B6F50
    r5 = r3 + r6; // 0x805B6F54
    /* clrlwi r6, r7, 0x10 */ // 0x805B6F58
    r7 = r7 + 8; // 0x805B6F5C
    *(0x270 + r5) = r4; // stb @ 0x805B6F60
    *(0x271 + r5) = r4; // stb @ 0x805B6F64
    *(0x272 + r5) = r4; // stb @ 0x805B6F68
    *(0x273 + r5) = r4; // stb @ 0x805B6F6C
    *(0x274 + r5) = r4; // stb @ 0x805B6F70
    *(0x275 + r5) = r4; // stb @ 0x805B6F74
    *(0x276 + r5) = r4; // stb @ 0x805B6F78
    *(0x277 + r5) = r4; // stb @ 0x805B6F7C
    r5 = r3 + r6; // 0x805B6F80
    /* clrlwi r6, r7, 0x10 */ // 0x805B6F84
    *(0x270 + r5) = r4; // stb @ 0x805B6F88
    *(0x271 + r5) = r4; // stb @ 0x805B6F8C
    *(0x272 + r5) = r4; // stb @ 0x805B6F90
    *(0x273 + r5) = r4; // stb @ 0x805B6F94
    *(0x274 + r5) = r4; // stb @ 0x805B6F98
    *(0x275 + r5) = r4; // stb @ 0x805B6F9C
    *(0x276 + r5) = r4; // stb @ 0x805B6FA0
    *(0x277 + r5) = r4; // stb @ 0x805B6FA4
    if (counter-- != 0) goto 0x0x805b6ef4;
    r4 = r7 + 1; // 0x805B6FAC
    r0 = r7 + 2; // 0x805B6FB0
    /* clrlwi r5, r4, 0x10 */ // 0x805B6FB4
    r6 = r3 + r6; // 0x805B6FB8
    /* clrlwi r4, r0, 0x10 */ // 0x805B6FBC
    r0 = r7 + 3; // 0x805B6FC0
    /* li r7, -1 */ // 0x805B6FC4
    *(0x270 + r6) = r7; // stb @ 0x805B6FC8
    r5 = r3 + r5; // 0x805B6FCC
    /* clrlwi r0, r0, 0x10 */ // 0x805B6FD0
    r4 = r3 + r4; // 0x805B6FD4
    *(0x270 + r5) = r7; // stb @ 0x805B6FD8
    r3 = r3 + r0; // 0x805B6FDC
    /* li r30, 0 */ // 0x805B6FE0
    *(0x270 + r4) = r7; // stb @ 0x805B6FE4
    *(0x270 + r3) = r7; // stb @ 0x805B6FE8
    /* clrlwi r3, r30, 0x10 */ // 0x805B6FEC
    FUN_805E3430(); // bl 0x805E3430
}