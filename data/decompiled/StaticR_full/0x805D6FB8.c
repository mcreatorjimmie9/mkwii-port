/* Function at 0x805D6FB8, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805D6FB8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x805D6FCC
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805D6FD4
    r29 = r3;
    FUN_805D6E64(); // bl 0x805D6E64
    r12 = *(0 + r30); // lbz @ 0x805D6FE0
    r4 = r31;
    r11 = *(1 + r30); // lbz @ 0x805D6FE8
    r3 = r29 + 0x14; // 0x805D6FEC
    r10 = *(2 + r30); // lbz @ 0x805D6FF0
    /* li r5, 0x14 */ // 0x805D6FF4
    r9 = *(3 + r30); // lbz @ 0x805D6FF8
    r8 = *(4 + r30); // lbz @ 0x805D6FFC
    r7 = *(5 + r30); // lbz @ 0x805D7000
    r6 = *(6 + r30); // lbz @ 0x805D7004
    r0 = *(7 + r30); // lbz @ 0x805D7008
    *(0x28 + r29) = r12; // stb @ 0x805D700C
    *(0x29 + r29) = r11; // stb @ 0x805D7010
    *(0x2a + r29) = r10; // stb @ 0x805D7014
    *(0x2b + r29) = r9; // stb @ 0x805D7018
    *(0x2c + r29) = r8; // stb @ 0x805D701C
    *(0x2d + r29) = r7; // stb @ 0x805D7020
    *(0x2e + r29) = r6; // stb @ 0x805D7024
    *(0x2f + r29) = r0; // stb @ 0x805D7028
    FUN_805E3430(); // bl 0x805E3430
}