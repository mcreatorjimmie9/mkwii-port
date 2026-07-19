/* Function at 0x80669F74, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80669F74(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80669F7C
    r4 = r4 + 0; // 0x80669F84
    *(0xc + r1) = r31; // stw @ 0x80669F88
    /* li r31, 0 */ // 0x80669F8C
    *(8 + r1) = r30; // stw @ 0x80669F90
    r30 = r3;
    *(4 + r3) = r31; // stw @ 0x80669F98
    *(0xc + r3) = r31; // stb @ 0x80669F9C
    *(0xd + r3) = r31; // stb @ 0x80669FA0
    *(0xe + r3) = r31; // stb @ 0x80669FA4
    *(0 + r3) = r4; // stw @ 0x80669FA8
    r3 = r3 + 0x10; // 0x80669FAC
    FUN_805E3430(r3); // bl 0x805E3430
}