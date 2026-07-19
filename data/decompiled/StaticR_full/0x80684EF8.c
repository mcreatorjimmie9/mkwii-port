/* Function at 0x80684EF8, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80684EF8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, -1 */ // 0x80684F04
    *(0xc + r1) = r31; // stw @ 0x80684F08
    /* li r31, 0 */ // 0x80684F0C
    *(8 + r1) = r30; // stw @ 0x80684F10
    r30 = r3;
    *(0 + r3) = r0; // stw @ 0x80684F18
    *(0x37c + r3) = r31; // stw @ 0x80684F1C
    *(0x388 + r3) = r31; // stb @ 0x80684F20
    *(0x389 + r3) = r31; // stb @ 0x80684F24
    *(0x38a + r3) = r31; // stb @ 0x80684F28
    *(0x38b + r3) = r31; // stb @ 0x80684F2C
    *(0x38c + r3) = r31; // stb @ 0x80684F30
    *(0x38d + r3) = r31; // stb @ 0x80684F34
    *(0x38e + r3) = r31; // stb @ 0x80684F38
    *(0x38f + r3) = r31; // stb @ 0x80684F3C
    r3 = r3 + 0x390; // 0x80684F40
    FUN_805E3430(r3); // bl 0x805E3430
}